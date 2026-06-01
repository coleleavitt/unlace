/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8060740
// Address: 0x08060740

//----- (08060740) --------------------------------------------------------
int __cdecl sub_8060740(_DWORD *a1, int *a2, _BYTE *a3)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int (__cdecl **v6)(_DWORD, int); // edx
  _DWORD *v7; // ebp
  int v8; // ebx
  int v9; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int *v13; // [esp+4h] [ebp-24h]

  if ( a3 )
    *a3 = 0;
  v13 = a2 + 1;
  while ( 1 )
  {
    v3 = sub_8068DC0((int)a1, v13, -1, 0);
    *a2 = v3;
    if ( v3 <= 0 )
    {
      if ( a1[191] && (unsigned __int8)sub_80578A0(a1, a2, v13) )
      {
        sub_8060640((int)a1, a3, a2);
        return 1;
      }
      if ( !a2[2] )
        return 0;
      v4 = sub_8068DC0((int)a1, v13, -1, a2[2]);
      *a2 = v4;
      if ( v4 <= 0 )
        return 0;
    }
    sub_8060640((int)a1, a3, a2);
    v5 = (_DWORD *)a1[166];
    v6 = (int (__cdecl **)(_DWORD, int))*a2;
    v7 = a1 + 165;
    if ( v5 )
    {
      do
      {
        while ( 1 )
        {
          v8 = v5[2];
          v9 = v5[3];
          if ( (int)v6 > v5[4] )
            break;
          v7 = v5;
          v5 = (_DWORD *)v5[2];
          if ( !v8 )
            goto LABEL_14;
        }
        v5 = (_DWORD *)v5[3];
      }
      while ( v9 );
LABEL_14:
      if ( a1 + 165 != v7 && (int)v6 >= v7[4] )
        return 1;
    }
    v11 = (_DWORD *)a1[170];
    v12 = &v11[a1[171]];
    if ( v11 == v12 )
      goto LABEL_24;
    while ( v6 != (int (__cdecl **)(_DWORD, int))*v11 )
    {
      if ( v12 == ++v11 )
        goto LABEL_24;
    }
    if ( v12 == v11 )
LABEL_24:
      sub_805A080(a1, v6, (int (__cdecl **)(_DWORD, int))a2[1]);
    else
      ptrace(PTRACE_CONT, v6, 0, 0);
    a2[2] = 0;
  }
}
