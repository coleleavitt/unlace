__int64 __fastcall sub_3E69A0(const double *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  int v9; // r8d
  int v10; // r9d
  __int64 *v11; // rbp
  unsigned int *v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // r15
  unsigned int v15; // edx
  __int64 v16; // rax
  double v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rbp
  int v20; // [rsp+0h] [rbp-58h]
  unsigned int **v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+10h] [rbp-48h]
  unsigned int *v23; // [rsp+18h] [rbp-40h] BYREF
  int v24; // [rsp+20h] [rbp-38h]
  char v25; // [rsp+28h] [rbp-30h]
  int v26; // [rsp+30h] [rbp-28h]
  int v27; // [rsp+38h] [rbp-20h]
  int v28; // [rsp+40h] [rbp-18h]
  void *v29; // [rsp+48h] [rbp-10h]

  result = *((_QWORD *)a1 + 10);
  if ( result )
  {
    v5 = *a2;
    if ( result == v5 )
      return result;
    if ( !v5 || (v6 = a2[1], v7 = *(_DWORD *)(v5 + 8) == 1, --*(_DWORD *)(v5 + 8), !v7) )
    {
      *a2 = result;
LABEL_6:
      ++*(_DWORD *)(result + 8);
      return result;
    }
LABEL_23:
    sub_15D7BC0(v6, v5);
    result = *((_QWORD *)a1 + 10);
    *a2 = result;
    if ( result )
      goto LABEL_6;
    return result;
  }
  v21 = *((unsigned int ***)a1 + 1);
  v8 = sub_186B270(0x18u);
  v11 = *((__int64 **)a1 + 7);
  *(_QWORD *)v8 = 0x200000002LL;
  v12 = (unsigned int *)(v8 + 8);
  *(__m128 *)(v8 + 8) = _mm_loadh_ps(a1 + 3);
  if ( !v11 || (v13 = &v11[*((unsigned int *)v11 - 1)], v11 == v13) )
  {
    v17 = *a1;
    v15 = 2;
  }
  else
  {
    v14 = *v11;
    v15 = 2;
    v21 = &v23;
    while ( 1 )
    {
      if ( v15 == *(v12 - 2) )
      {
        v23 = v12;
        sub_23A6F0(&v23);
        v12 = v23;
        v15 = *(v23 - 1);
      }
      v16 = v15;
      ++v11;
      ++v15;
      *(_QWORD *)&v12[2 * v16] = v14;
      *(v12 - 1) = v15;
      if ( v13 == v11 )
        break;
      v14 = *v11;
    }
    v17 = *a1;
  }
  v18 = sub_15DC610(
          SLODWORD(v17),
          *((_QWORD *)a1 + 8),
          v15,
          (int)v12,
          v9,
          v10,
          v20,
          (int)v21,
          v22,
          (int)v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  sub_3E5D00(*((_QWORD *)a1 + 10), *((_QWORD *)a1 + 11));
  *((_QWORD *)a1 + 10) = v19;
  sub_186B220(v12 - 2);
  result = *((_QWORD *)a1 + 10);
  v5 = *a2;
  if ( result == *a2 )
    return result;
  if ( v5 )
  {
    v6 = a2[1];
    v7 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v7 )
      goto LABEL_23;
  }
  *a2 = result;
  if ( result )
    goto LABEL_6;
  return result;
}

