/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87E40
// Address: 0x0000000000087E40

//----- (0000000000087E40) ----------------------------------------------------
__int64 __fastcall sub_87E40(__int64 a1, int a2)
{
  unsigned __int16 *v3; // x20
  unsigned __int16 *v4; // x24
  int v5; // w8
  unsigned int (__fastcall *v6)(_QWORD); // x8
  __int64 v7; // x9
  _QWORD *v8; // x0
  __int64 v9; // x8
  __int64 (__fastcall *v10)(_QWORD); // x8
  __int64 v11; // x9
  __int64 v12; // t2
  _QWORD *v13; // x0
  int v14; // w0
  __int64 v15; // x8
  int v16; // w8
  unsigned int v17; // w20
  const char *v18; // x1

  v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 8LL * a2);
  v4 = v3;
  v5 = *v3;
  if ( *v3 )
    goto LABEL_2;
LABEL_13:
  while ( (__int16)v4[1] == -1 || (sub_87E40(a1) & 1) != 0 )
  {
    v9 = *((unsigned __int8 *)v4 + 5);
    if ( v9 != 255 )
    {
      v12 = *(_QWORD *)(a1 + 24) + 16 * v9;
      v10 = *(__int64 (__fastcall **)(_QWORD))v12;
      v11 = *(_QWORD *)(v12 + 8);
      v13 = (_QWORD *)(a1 + (v11 >> 1));
      if ( (v11 & 1) != 0 )
        v10 = *(__int64 (__fastcall **)(_QWORD))((char *)v10 + *v13);
      v14 = v10(v13);
      if ( v14 )
      {
        if ( v14 == 1507 )
        {
          *(_BYTE *)(a1 + 32) = 1;
          goto LABEL_12;
        }
        return 0;
      }
    }
    v15 = *((unsigned __int8 *)v4 + 4);
    if ( v15 == 255 )
      return 1;
    v4 = &v3[3 * v15];
    v5 = *v4;
    if ( *v4 )
    {
LABEL_2:
      while ( v5 != 0xFFFF )
      {
        if ( !*(_BYTE *)(a1 + 32) )
        {
          v6 = *(unsigned int (__fastcall **)(_QWORD))a1;
          v7 = *(_QWORD *)(a1 + 8);
          v8 = (_QWORD *)(a1 + (v7 >> 1));
          if ( (v7 & 1) != 0 )
            v6 = *(unsigned int (__fastcall **)(_QWORD))((char *)v6 + *v8);
          if ( v6(v8) )
            return 0;
          *(_BYTE *)(a1 + 32) = 1;
          LOWORD(v5) = *v4;
        }
        if ( (__int16)v5 == *(unsigned __int16 *)(a1 + 64) )
        {
          *(_BYTE *)(a1 + 32) = 0;
          goto LABEL_13;
        }
LABEL_12:
        v4 += 3;
        v5 = *v4;
        if ( !*v4 )
          goto LABEL_13;
      }
      v16 = v4[1];
      if ( !v4[1] )
        return 1;
      v17 = (__int16)v16;
      if ( v16 == 67 )
      {
        if ( *(_QWORD *)(a1 + 48) )
          v18 = *(const char **)(a1 + 40);
        else
          v18 = &byte_F154B;
        set_error_string(nullptr, v18);
      }
      set_qerrno(v17);
      return 0;
    }
  }
  return 0;
}
// F154B: using guessed type char byte_F154B;
