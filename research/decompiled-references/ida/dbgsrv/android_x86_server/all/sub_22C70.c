/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22C70
// Address: 0x00022C70

//----- (00022C70) --------------------------------------------------------
char __cdecl sub_22C70(int a1, int *a2, _BYTE *a3)
{
  _DWORD *v3; // edi
  __time_t *v4; // esi
  int v5; // eax
  int *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // edx
  _DWORD *v11; // esi
  int v12; // edx
  int v13; // edi
  int (__cdecl **v14)(_DWORD, int); // eax
  _DWORD *v15; // ecx
  __time_t *v17; // [esp+4h] [ebp-18h]

  v3 = (_DWORD *)a1;
  if ( a3 )
    *a3 = 0;
  v4 = a2 + 1;
  v17 = a2 + 1;
  while ( 1 )
  {
    v5 = sub_2F940((int)v3, v4, -1, 0);
    v6 = a2;
    *a2 = v5;
    if ( v5 > 0 )
      goto LABEL_9;
    if ( (unsigned __int8)sub_20FB0(v3, a2, v4) )
      break;
    if ( !a2[2] )
      return 0;
    v7 = sub_2F940((int)v3, v17, -1, a2[2]);
    v6 = a2;
    *a2 = v7;
    if ( v7 <= 0 )
      return 0;
LABEL_9:
    sub_1F4E0((int)v3, a3, v6);
    v8 = v3[143];
    if ( v8 )
    {
      v9 = *a2;
      v10 = a1 + 572;
      do
      {
        if ( *(_DWORD *)(v8 + 16) >= v9 )
          v10 = v8;
        v8 = *(_DWORD *)(v8 + 4 * (*(_DWORD *)(v8 + 16) < v9));
      }
      while ( v8 );
      if ( v10 != a1 + 572 && v9 >= *(_DWORD *)(v10 + 16) )
        return 1;
    }
    v11 = (_DWORD *)v3[145];
    v12 = v3[146];
    v13 = 4 * v12;
    v14 = (int (__cdecl **)(_DWORD, int))*a2;
    v15 = v11;
    if ( 4 * v12 )
    {
      v15 = v11;
      while ( v14 != (int (__cdecl **)(_DWORD, int))*v15 )
      {
        ++v15;
        v13 -= 4;
        if ( !v13 )
          goto LABEL_4;
      }
    }
    if ( v15 == &v11[v12] )
    {
LABEL_4:
      v4 = a2 + 1;
      v3 = (_DWORD *)a1;
      sub_201C0(a1, v14, (int (__cdecl **)(_DWORD, int))*v17);
      a2[2] = 0;
    }
    else
    {
      ptrace(PTRACE_CONT, v14, 0, 0);
      a2[2] = 0;
      v3 = (_DWORD *)a1;
      v4 = a2 + 1;
    }
  }
  sub_1F4E0((int)v3, a3, a2);
  return 1;
}
