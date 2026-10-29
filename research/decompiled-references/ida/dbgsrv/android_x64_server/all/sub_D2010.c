/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2010
// Address: 0x00000000000D2010

//----- (00000000000D2010) ----------------------------------------------------
char __fastcall sub_D2010(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5, unsigned __int8 a6)
{
  __int64 v10; // rax
  char v11; // si
  char v12; // dl
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  char *v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r14
  _QWORD *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  char *v23; // rcx
  __int64 v24; // r8
  char v26; // [rsp+Ah] [rbp-3Eh]

  v10 = *(_QWORD *)(a2 + 16);
  if ( a6 )
  {
    LODWORD(v10) = strcmp(*(const char **)(a1 + 8), *(const char **)(v10 + 8));
    if ( (_DWORD)v10 )
    {
LABEL_3:
      v11 = *(_BYTE *)(a2 + 76);
      v12 = *(_BYTE *)(a2 + 77);
      v13 = *(unsigned int *)(a1 + 20);
      *(_BYTE *)(a2 + 76) = 0;
      *(_BYTE *)(a2 + 77) = 0;
      v14 = *(_QWORD *)(a1 + 32);
      v15 = v14 >> 8;
      v26 = v12;
      if ( (v14 & 1) != 0 )
        v15 = *(_QWORD *)(*a4 + v15);
      v16 = *(_QWORD *)(a1 + 24);
      v17 = (char *)a4 + v15;
      v18 = a5;
      if ( (v14 & 2) == 0 )
        v18 = 2;
      (*(void (__fastcall **)(__int64, __int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v16 + 40LL))(
        v16,
        a2,
        a3,
        v17,
        v18,
        a6);
      if ( (unsigned int)v13 >= 2 )
      {
        v19 = a1 + 16 * v13 + 24;
        v20 = (_QWORD *)(a1 + 40);
        do
        {
          if ( *(_BYTE *)(a2 + 78) )
            break;
          if ( *(_BYTE *)(a2 + 76) )
          {
            if ( *(_DWORD *)(a2 + 48) == 1 || (*(_BYTE *)(a1 + 16) & 2) == 0 )
              break;
          }
          else if ( *(_BYTE *)(a2 + 77) && (*(_BYTE *)(a1 + 16) & 1) == 0 )
          {
            break;
          }
          *(_WORD *)(a2 + 76) = 0;
          v21 = v20[1];
          v22 = v21 >> 8;
          if ( (v21 & 1) != 0 )
            v22 = *(_QWORD *)(*a4 + v22);
          v23 = (char *)a4 + v22;
          v24 = a5;
          if ( (v21 & 2) == 0 )
            v24 = 2;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)*v20 + 40LL))(
            *v20,
            a2,
            a3,
            v23,
            v24,
            a6);
          v20 += 2;
        }
        while ( (unsigned __int64)v20 < v19 );
      }
      *(_BYTE *)(a2 + 76) = v11;
      *(_BYTE *)(a2 + 77) = v26;
      LOBYTE(v10) = v26;
      return v10;
    }
  }
  else if ( a1 != v10 )
  {
    goto LABEL_3;
  }
  *(_BYTE *)(a2 + 77) = 1;
  if ( *(_QWORD **)(a2 + 8) != a4 )
    return v10;
  *(_BYTE *)(a2 + 76) = 1;
  v10 = *(_QWORD *)(a2 + 32);
  if ( !v10 )
  {
    *(_QWORD *)(a2 + 32) = a3;
    LOBYTE(v10) = a5;
    *(_DWORD *)(a2 + 48) = a5;
    *(_DWORD *)(a2 + 60) = 1;
    if ( a5 != 1 || *(_DWORD *)(a2 + 72) != 1 )
      return v10;
LABEL_35:
    *(_BYTE *)(a2 + 78) = 1;
    return v10;
  }
  if ( v10 != a3 )
  {
    ++*(_DWORD *)(a2 + 60);
    *(_BYTE *)(a2 + 78) = 1;
    return v10;
  }
  LODWORD(v10) = *(_DWORD *)(a2 + 48);
  if ( (_DWORD)v10 == 2 )
  {
    LODWORD(v10) = a5;
    *(_DWORD *)(a2 + 48) = a5;
  }
  if ( (_DWORD)v10 == 1 && *(_DWORD *)(a2 + 72) == 1 )
    goto LABEL_35;
  return v10;
}
