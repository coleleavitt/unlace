__int64 *__fastcall sub_A1A110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 ***v5; // r8
  unsigned int *v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // esi

  v5 = *(__int64 ****)(a2 + 96);
  if ( !v5 )
  {
    v7 = *(unsigned int **)(a2 + 88);
    v8 = 0;
    if ( v7 )
      goto LABEL_3;
LABEL_6:
    v9 = 0;
    return sub_A19BC0(a1, v9, v7, v8, v5, a3, a5, a4);
  }
  v7 = *(unsigned int **)(a2 + 88);
  v8 = *((_DWORD *)v5 - 1);
  if ( !v7 )
    goto LABEL_6;
LABEL_3:
  v9 = *(v7 - 1);
  return sub_A19BC0(a1, v9, v7, v8, v5, a3, a5, a4);
}

