__int64 __fastcall sub_79C1D0(unsigned int *a1, __int64 a2, __int64 a3, const char *a4, int a5)
{
  unsigned int v9; // esi
  __int64 v10; // rdi

  v9 = *a1;
  v10 = *(_QWORD *)(a2 + 1544);
  if ( v9 == -1 || !a4 )
    return -1;
  sub_78D080(v10, v9, a5, a4);
  return sub_78D550(v10, a5, v9, a3, 0, 0, 1);
}

