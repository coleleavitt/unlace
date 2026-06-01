/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046B4C
// Address: 0x0000000100046B4C

//----- (0000000100046B4C) ----------------------------------------------------
__int64 __fastcall sub_100046B4C(__int64 a1, int a2)
{
  unsigned __int16 *v3; // x20
  unsigned __int16 *v4; // x24
  int v5; // w8
  unsigned int (__fastcall *v6)(_QWORD *); // x8
  __int64 v7; // x9
  _QWORD *v8; // x0
  __int64 result; // x0
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 (__fastcall *v12)(_QWORD *); // x8
  __int64 v13; // x9
  _QWORD *v14; // x0
  int v15; // w0

  v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 8LL * a2);
  v4 = v3;
  while ( 1 )
  {
    v5 = *v4;
    if ( !*v4 )
      goto LABEL_12;
    if ( v5 == 0xFFFF )
      break;
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
    {
      v6 = *(unsigned int (__fastcall **)(_QWORD *))a1;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = (_QWORD *)(a1 + (v7 >> 1));
      if ( (v7 & 1) != 0 )
        v6 = *(unsigned int (__fastcall **)(_QWORD *))(*v8 + (unsigned int)v6);
      if ( v6(v8) )
        return 0;
      *(_BYTE *)(a1 + 32) = 1;
      LOWORD(v5) = *v4;
    }
    if ( *(unsigned __int16 *)(a1 + 64) == (__int16)v5 )
    {
      *(_BYTE *)(a1 + 32) = 0;
LABEL_12:
      if ( (__int16)v4[1] != -1 )
      {
        result = sub_100046B4C(a1);
        if ( !(_DWORD)result )
          return result;
      }
      v10 = *((unsigned __int8 *)v4 + 5);
      if ( v10 == 255 )
        goto LABEL_20;
      v11 = *(_QWORD *)(a1 + 24) + 16 * v10;
      v12 = *(__int64 (__fastcall **)(_QWORD *))v11;
      v13 = *(_QWORD *)(v11 + 8);
      v14 = (_QWORD *)(a1 + (v13 >> 1));
      if ( (v13 & 1) != 0 )
        v12 = *(__int64 (__fastcall **)(_QWORD *))(*v14 + (unsigned int)v12);
      v15 = v12(v14);
      if ( !v15 )
      {
LABEL_20:
        if ( *((unsigned __int8 *)v4 + 4) == 255 )
          return 1;
        v4 = &v3[3 * *((unsigned __int8 *)v4 + 4)];
      }
      else
      {
        if ( v15 != 1507 )
          return 0;
        *(_BYTE *)(a1 + 32) = 1;
        v4 += 3;
      }
    }
    else
    {
      v4 += 3;
    }
  }
  if ( !v4[1] )
    return 1;
  if ( v4[1] == 67 )
    set_error_string(0);
  set_qerrno();
  return 0;
}
