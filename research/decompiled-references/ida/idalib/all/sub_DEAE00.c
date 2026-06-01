void *__fastcall sub_DEAE00(_QWORD *a1, unsigned int **a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int *v4; // r14
  void *v5; // r13
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  v2 = sub_21F8CF0(**a2);
  v3 = sub_D421E0(a1, v2);
  v4 = *a2;
  v5 = (void *)v3;
  v6 = **a2;
  v7 = sub_21F8CF0(v6);
  v8 = ((unsigned __int64)(unsigned int)sub_21F9120(v7) + 63) >> 6;
  if ( v8 == 1 )
    v5 = *(void **)(v4 + 1);
  else
    memcpy(v5, v4 + 1, 8 * v8);
  v9 = sub_21F8CF0(v6);
  *a2 += 2 * (((unsigned __int64)(unsigned int)sub_21F9120(v9) + 63) >> 6) + 2;
  return v5;
}
