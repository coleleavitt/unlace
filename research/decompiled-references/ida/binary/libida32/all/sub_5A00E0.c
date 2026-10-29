__int64 __fastcall sub_5A00E0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int *v5; // rax
  unsigned int *v6; // rcx
  unsigned int *v7; // rdi
  unsigned int v8; // r14d
  unsigned int v9; // eax
  unsigned __int64 v11; // rbx
  char *v12; // rcx
  char *v13; // rax

  v5 = sub_59ED40(a1, a2, a3);
  if ( !v5 )
    return 0;
  v6 = v5;
  if ( *v5 != a3 )
    return 0;
  v7 = *(unsigned int **)(a2 + 48);
  v8 = v5[1];
  if ( v7 != v5 )
    v8 -= *(v5 - 1);
  v9 = *(_DWORD *)(a2 + 40) - 1;
  *(_DWORD *)(a2 + 40) = v9;
  if ( v9 )
  {
    v11 = ((char *)v6 - (char *)v7) >> 3;
    v12 = (char *)memmove(v6, v6 + 2, 8 * (v9 - v11));
    if ( v11 < *(unsigned int *)(a2 + 40) )
    {
      v13 = &v12[-8 * v11];
      do
        *(_DWORD *)&v13[8 * v11++ + 4] -= v8;
      while ( v11 < *(unsigned int *)(a2 + 40) );
    }
    if ( *(_DWORD *)a2 >= a3 )
      sub_5A0050(a1, a2);
  }
  else
  {
    qfree(v7);
    *(_QWORD *)(a2 + 48) = 0;
  }
  clr_abits(a3, 2);
  if ( (get_merge_state(a3, 2) & 2) != 0 )
  {
    sub_5B5740(a1, a2, 1);
    return 1;
  }
  else
  {
    sub_5B18C0(a1, a2, a3, 0xFFFFFFFFLL, 0);
    return sub_59FD50((__int64)a1, a2, 1);
  }
}

