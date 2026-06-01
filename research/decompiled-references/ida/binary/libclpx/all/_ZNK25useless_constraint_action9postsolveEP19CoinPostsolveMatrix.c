__int64 __fastcall useless_constraint_action::postsolve(useless_constraint_action *this, CoinPostsolveMatrix *a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r11
  __int64 v6; // r14
  __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 v9; // rdi
  int v10; // eax
  int *v11; // rdx
  __int64 v12; // rcx
  int v13; // ebp
  double v14; // xmm1_8
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  _DWORD *v18; // r10
  int v19; // r9d
  _DWORD *v20; // r8
  double v21; // xmm0_8
  __int64 v22; // rcx
  __int64 v23; // [rsp+0h] [rbp-78h]
  __int64 v24; // [rsp+10h] [rbp-68h]
  unsigned __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  __int64 v29; // [rsp+40h] [rbp-38h]

  v2 = *((_QWORD *)a2 + 8);
  v3 = *((_QWORD *)a2 + 7);
  v29 = *((_QWORD *)a2 + 5);
  v25 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)a2 + 33);
  v5 = *((_QWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 20);
  v26 = *((_QWORD *)a2 + 22);
  v27 = *((_QWORD *)a2 + 13);
  v28 = *((_QWORD *)a2 + 14);
  result = 5LL * *((int *)this + 4);
  for ( i = v25 + 40LL * *((int *)this + 4) - 40; v25 <= i; *(double *)(v26 + 8 * v22) = v14 )
  {
    v9 = *(int *)(i + 32);
    v10 = *(_DWORD *)(i + 36);
    v11 = *(int **)(i + 16);
    v12 = *(_QWORD *)(i + 24);
    *(_QWORD *)(v28 + 8 * v9) = *(_QWORD *)(i + 8);
    v13 = v9;
    v24 = v9;
    *(_QWORD *)(v27 + 8 * v9) = *(_QWORD *)i;
    if ( v10 <= 0 )
    {
      v14 = 0.0;
      v22 = v9;
    }
    else
    {
      v14 = 0.0;
      v23 = (__int64)&v11[v10 - 1 + 1];
      do
      {
        v15 = *((int *)a2 + 64);
        v16 = *v11;
        v12 += 8;
        v17 = *(_QWORD *)(v12 - 8);
        ++v11;
        v18 = (_DWORD *)(v4 + 4 * v15);
        v19 = *((_DWORD *)a2 + 64);
        *((_DWORD *)a2 + 64) = *v18;
        *(_DWORD *)(v3 + 4 * v15) = v13;
        *(_QWORD *)(v2 + 8 * v15) = v17;
        v20 = (_DWORD *)(v29 + 4 * v16);
        v21 = *(double *)(v6 + 8 * v16) * *(double *)(v12 - 8);
        *v18 = *v20;
        *v20 = v19;
        ++*(_DWORD *)(v5 + 4 * v16);
        v14 = v14 + v21;
      }
      while ( (int *)v23 != v11 );
      v22 = v24;
    }
    i -= 40LL;
    result = v26;
  }
  return result;
}

