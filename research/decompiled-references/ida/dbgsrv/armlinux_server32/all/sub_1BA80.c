/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BA80
// Address: 0x0001BA80

//----- (0001BA80) --------------------------------------------------------
int __fastcall sub_1BA80(_DWORD *a1, int *a2, _BYTE *a3)
{
  _DWORD *v6; // r7
  int v7; // r0
  int v8; // r3
  int v9; // r0
  _DWORD *v10; // r3
  int (__fastcall **v11)(_DWORD, int); // r1
  _DWORD *v12; // r0
  int v13; // r2
  int v14; // r10
  _DWORD *v16; // r3
  _DWORD *v17; // r0
  _DWORD *v18; // r3
  bool v19; // zf
  _DWORD *v20; // r2

  if ( a3 )
    *a3 = 0;
  v6 = a1 + 251;
  while ( 1 )
  {
    v7 = sub_20424((int)a1, a2 + 1, -1, 0);
    *a2 = v7;
    if ( v7 <= 0 )
    {
      if ( a1[277] )
      {
        v14 = sub_16240(a1, a2, a2 + 1);
        if ( v14 )
        {
          sub_1B9E0((int)a1, a3, a2);
          return v14;
        }
      }
      v8 = a2[2];
      if ( !v8 )
        return 0;
      v9 = sub_20424((int)a1, a2 + 1, -1, v8);
      *a2 = v9;
      if ( v9 <= 0 )
        return 0;
    }
    sub_1B9E0((int)a1, a3, a2);
    v10 = (_DWORD *)a1[252];
    if ( v10 )
    {
      v11 = (int (__fastcall **)(_DWORD, int))*a2;
      v12 = a1 + 251;
      do
      {
        v13 = v10[4];
        if ( v13 < (int)v11 )
          v10 = (_DWORD *)v10[3];
        else
          v12 = v10;
        if ( v13 >= (int)v11 )
          v10 = (_DWORD *)v10[2];
      }
      while ( v10 );
      if ( v12 != v6 && (int)v11 >= v12[4] )
        return 1;
    }
    else
    {
      v11 = (int (__fastcall **)(_DWORD, int))*a2;
    }
    v16 = (_DWORD *)a1[256];
    v17 = &v16[a1[257]];
    if ( v16 == v17 )
      goto LABEL_27;
    if ( v11 != (int (__fastcall **)(_DWORD, int))*v16 )
    {
      v18 = v16 + 1;
      while ( 1 )
      {
        v19 = v17 == v18;
        v20 = v18++;
        if ( v19 )
          break;
        if ( v11 == (int (__fastcall **)(_DWORD, int))*v20 )
          goto LABEL_29;
      }
LABEL_27:
      sub_178C0(a1, v11, (int (__fastcall **)(_DWORD, int))a2[1]);
      goto LABEL_28;
    }
LABEL_29:
    ptrace(PTRACE_CONT);
LABEL_28:
    a2[2] = 0;
  }
}
