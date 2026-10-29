__int64 __fastcall sub_73ABC0(int *a1)
{
  unsigned __int32 v1; // eax
  unsigned __int32 v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // rbp
  char *v8; // rax
  int v9; // edx

  v1 = sub_73B7C0();
  if ( v1 )
  {
    v2 = v1;
    v3 = sub_73F190(*((_QWORD *)a1 + 2), v1);
    v7 = v3;
    if ( v3 )
    {
      *(_DWORD *)(v3 + 32) = 1;
      v8 = sub_738E20(*((__m128i **)a1 + 1), v2, 1, v4, v5, v6);
      *(_QWORD *)v7 = v8;
      if ( v8 )
      {
        v9 = *a1;
        *(_DWORD *)(v8 + 6) = 0;
        *((_WORD *)v8 + 2) = 0;
        *((_WORD *)v8 + 5) = v9;
        *((_DWORD *)v8 - 2) = *a1;
        *(_WORD *)(v7 + 8) = v9 - 18;
        return v7;
      }
    }
    else
    {
      dword_2CCC638 = 17;
    }
  }
  return 0;
}
