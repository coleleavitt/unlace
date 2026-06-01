unsigned __int64 __fastcall sub_4F5880(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  unsigned int **v4; // rbx
  unsigned __int64 result; // rax
  unsigned int **i; // r14
  unsigned int *v9; // r15

  v4 = *(unsigned int ***)(a2 + 224);
  result = *(_QWORD *)(a2 + 232);
  for ( i = &v4[result]; i != v4; result = sub_419FE0(a2, *v9, a3, a4) )
  {
    v9 = *v4++;
    sub_419CF0(a2, (int *)v9, a3, a4);
  }
  return result;
}

