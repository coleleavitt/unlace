__int64 __fastcall sub_9F8F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  const void *v5; // rax
  __int64 v6; // rdx
  unsigned __int8 v7; // [rsp+3h] [rbp-E5h]
  int v8; // [rsp+4h] [rbp-E4h]
  int v9; // [rsp+8h] [rbp-E0h]
  __int128 v10; // [rsp+10h] [rbp-D8h]
  __int128 v11; // [rsp+20h] [rbp-C8h]
  _BYTE v12[136]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+B8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( qfread() != 4 )
    goto LABEL_13;
  if ( v8 != 1413563465 )
  {
    if ( a3 )
      sub_9C320(a3, "not a trace file");
    return 0;
  }
  qfread();
  if ( v7 > 0xBu )
  {
    if ( a3 )
      sub_9C320(a3, "trace file format is newer than expected");
    return 0;
  }
  *(_BYTE *)a1 = v7;
  if ( v7 > 1u )
  {
    if ( v7 > 7u )
    {
      if ( qfread() != 8 )
        goto LABEL_13;
      *(_DWORD *)(a1 + 16) = v9;
    }
    else
    {
      if ( qfread() != 4 )
        goto LABEL_13;
      *(_DWORD *)(a1 + 16) = v9;
    }
  }
  if ( qfread() != 128 || (sub_9C320(*(_QWORD *)(a1 + 8) + 296LL, v12), qfread() != 16) )
  {
LABEL_13:
    if ( a3 )
    {
      v5 = (const void *)qerrstr();
      sub_9C320(a3, v5);
    }
    return 0;
  }
  v6 = getinf_buf();
  result = 1;
  if ( v6 == 16 && v10 != v11 )
  {
    if ( a3 )
      sub_9C320(a3, "md5 checksum mismatch");
    return 0;
  }
  return result;
}

