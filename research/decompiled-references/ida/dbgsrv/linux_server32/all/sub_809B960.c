/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809B960
// Address: 0x0809B960

//----- (0809B960) --------------------------------------------------------
int __cdecl sub_809B960(int a1, int a2)
{
  __int16 *v2; // edi
  __int16 v3; // ax
  __int16 *v4; // ebx
  int v5; // eax
  int v6; // edx
  int (__cdecl *v7)(_DWORD); // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // eax
  int (__cdecl *v11)(int); // eax
  int v12; // edi
  char *v14; // eax

  v2 = *(__int16 **)(*(_DWORD *)(a1 + 8) + 4 * a2);
  v3 = *v2;
  v4 = v2;
  if ( *v2 != -1 )
  {
    while ( 1 )
    {
      if ( !v3 )
        goto LABEL_4;
      if ( !*(_BYTE *)(a1 + 16) )
      {
        v11 = *(int (__cdecl **)(int))a1;
        if ( (*(_DWORD *)a1 & 1) != 0 )
          v11 = *(int (__cdecl **)(int))((char *)v11 + *(_DWORD *)(a1 + *(_DWORD *)(a1 + 4)) - 1);
        if ( v11(a1 + *(_DWORD *)(a1 + 4)) )
          return 0;
        *(_BYTE *)(a1 + 16) = 1;
      }
      if ( *v4 == *(unsigned __int16 *)(a1 + 32) )
      {
        *(_BYTE *)(a1 + 16) = 0;
LABEL_4:
        if ( v4[1] != -1 && !(unsigned __int8)sub_809B960(a1, v4[1]) )
          return 0;
        v5 = *((unsigned __int8 *)v4 + 5);
        if ( (_BYTE)v5 != 0xFF )
        {
          v6 = *(_DWORD *)(a1 + 12) + 8 * v5;
          v7 = *(int (__cdecl **)(_DWORD))v6;
          v8 = (_DWORD *)(a1 + *(_DWORD *)(v6 + 4));
          if ( (*(_DWORD *)v6 & 1) != 0 )
            v7 = *(int (__cdecl **)(_DWORD))((char *)v7 + *v8 - 1);
          v9 = v7(v8);
          if ( v9 == 1507 )
          {
            *(_BYTE *)(a1 + 16) = 1;
            v4 += 3;
            goto LABEL_21;
          }
          if ( v9 )
            return 0;
        }
        v10 = *((unsigned __int8 *)v4 + 4);
        if ( (_BYTE)v10 == 0xFF )
          return 1;
        v4 = &v2[3 * v10];
        v3 = *v4;
        if ( *v4 == -1 )
          break;
      }
      else
      {
        v4 += 3;
LABEL_21:
        v3 = *v4;
        if ( *v4 == -1 )
          break;
      }
    }
  }
  v12 = v4[1];
  if ( !v4[1] )
    return 1;
  if ( v12 == 67 )
  {
    v14 = (char *)&qword_811CFF4 - 258076;
    if ( *(_DWORD *)(a1 + 24) )
      v14 = *(char **)(a1 + 20);
    sub_80C7910(0, v14);
  }
  sub_80C7880(v12);
  return 0;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
