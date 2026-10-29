__int64 __fastcall sub_5A02E0(_QWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int *v7; // rax
  unsigned int v8; // edx
  int v9; // r13d
  unsigned int *v10; // rax
  unsigned int v11; // edx

  if ( !a2 )
    return 0;
  if ( (get_aflags(a3) & 2) != 0 )
    return 0;
  v7 = sub_59ED40(a1, a2, a3);
  v8 = 0;
  if ( v7 )
    v8 = v7[1];
  if ( a4 == v8 )
    return 0;
  v9 = a4 - v8;
  v10 = sub_59ED40(a1, a2, a3);
  if ( v10 && a3 == *v10 )
  {
    v11 = v10[1];
    if ( v10 == *(unsigned int **)(a2 + 48) )
      v9 += v11;
    else
      v9 = v9 + v11 - *(v10 - 1);
  }
  return sub_59FDE0(a1, a2, a3, v9);
}

