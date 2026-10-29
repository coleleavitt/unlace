__int64 __fastcall sub_20E570(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // al
  const void *v6; // rax
  __int64 v7; // rdx
  unsigned __int8 v8; // [rsp+3h] [rbp-E5h] BYREF
  int v9; // [rsp+4h] [rbp-E4h] BYREF
  __int64 v10; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v12; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v13[136]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v14; // [rsp+B8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( qfread(a2, &v9, 4) != 4 )
    goto LABEL_13;
  if ( v9 != 1413563465 )
  {
    if ( a3 )
      sub_20B400(a3, "not a trace file");
    return 0;
  }
  qfread(a2, &v8, 1);
  v5 = v8;
  if ( v8 > 0xBu )
  {
    if ( a3 )
      sub_20B400(a3, "trace file format is newer than expected");
    return 0;
  }
  *(_BYTE *)a1 = v8;
  if ( v5 > 1u )
  {
    if ( v5 > 7u )
    {
      if ( qfread(a2, &v10, 8) != 8 )
        goto LABEL_13;
      *(_QWORD *)(a1 + 16) = v10;
    }
    else
    {
      if ( qfread(a2, &v10, 4) != 4 )
        goto LABEL_13;
      *(_QWORD *)(a1 + 16) = (unsigned int)v10;
    }
  }
  if ( qfread(a2, v13, 128) != 128
    || (sub_20B400((__int64 *)(*(_QWORD *)(a1 + 8) + 304LL), v13), qfread(a2, &v11, 16) != 16) )
  {
LABEL_13:
    if ( a3 )
    {
      v6 = (const void *)qerrstr(0xFFFFFFFFLL);
      sub_20B400(a3, v6);
    }
    return 0;
  }
  v7 = getinf_buf(76, &v12, 16);
  result = 1;
  if ( v7 == 16 && v11 != v12 )
  {
    if ( a3 )
      sub_20B400(a3, "md5 checksum mismatch");
    return 0;
  }
  return result;
}
