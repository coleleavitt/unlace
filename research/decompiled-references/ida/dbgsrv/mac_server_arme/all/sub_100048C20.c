/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100048C20
// Address: 0x0000000100048C20

//----- (0000000100048C20) ----------------------------------------------------
__int64 __fastcall sub_100048C20(__int64 a1, int a2)
{
  unsigned __int16 *v3; // x20
  unsigned __int16 *i; // x24
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
  for ( i = v3; ; i += 3 )
  {
    while ( 1 )
    {
      v5 = *i;
      if ( *i )
        break;
LABEL_13:
      if ( (__int16)i[1] != -1 )
      {
        result = sub_100048C20(a1);
        if ( !(_DWORD)result )
          return result;
      }
      v10 = *((unsigned __int8 *)i + 5);
      if ( v10 == 255 )
        goto LABEL_21;
      v11 = *(_QWORD *)(a1 + 24) + 16 * v10;
      v12 = *(__int64 (__fastcall **)(_QWORD *))v11;
      v13 = *(_QWORD *)(v11 + 8);
      v14 = (_QWORD *)(a1 + (v13 >> 1));
      if ( (v13 & 1) != 0 )
      {
        v15 = (*(__int64 (**)(void))(*v14 + (unsigned int)v12))();
        if ( !v15 )
          goto LABEL_21;
LABEL_18:
        if ( v15 != 1507 )
          return 0;
        *(_BYTE *)(a1 + 32) = 1;
        i += 3;
      }
      else
      {
        v15 = v12(v14);
        if ( v15 )
          goto LABEL_18;
LABEL_21:
        if ( *((unsigned __int8 *)i + 4) == 255 )
          return 1;
        i = &v3[3 * *((unsigned __int8 *)i + 4)];
      }
    }
    if ( v5 == 0xFFFF )
      break;
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
    {
      v6 = *(unsigned int (__fastcall **)(_QWORD *))a1;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = (_QWORD *)(a1 + (v7 >> 1));
      if ( (v7 & 1) != 0 )
      {
        if ( (*(unsigned int (**)(void))(*v8 + (unsigned int)v6))() )
          return 0;
      }
      else if ( v6(v8) )
      {
        return 0;
      }
      *(_BYTE *)(a1 + 32) = 1;
      LOWORD(v5) = *i;
    }
    if ( *(unsigned __int16 *)(a1 + 64) == (__int16)v5 )
    {
      *(_BYTE *)(a1 + 32) = 0;
      goto LABEL_13;
    }
  }
  if ( !i[1] )
    return 1;
  if ( i[1] == 67 )
    set_error_string(0);
  set_qerrno();
  return 0;
}
