int *__fastcall make_fixed_action::postsolve(make_fixed_action *this, CoinPostsolveMatrix *a2)
{
  int v3; // ebx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r14
  int *result; // rax
  int v9; // ebx
  __int64 v10; // rsi
  double v11; // xmm0_8
  __int64 v12; // rdx
  double v13; // xmm1_8
  __int64 v14; // rcx
  double v15; // xmm0_8
  __int64 v16; // rdx
  double v17; // xmm1_8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // xmm0_8
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // xmm0_8
  char v24; // [rsp+7h] [rbp-41h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v3 = *((_DWORD *)this + 4);
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 12);
  v7 = *((_QWORD *)a2 + 20);
  v24 = *((_BYTE *)this + 32);
  v25 = *((_QWORD *)a2 + 24);
  result = (int *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 8LL))(*((_QWORD *)this + 5));
  v9 = v3 - 1;
  if ( v9 >= 0 )
  {
    if ( v24 )
    {
      v14 = 16LL * v9;
      result = (int *)(v4 + v14 + 8);
      if ( v25 )
      {
        do
        {
          v15 = *((double *)result - 1);
          v16 = *result;
          v17 = *(double *)(v7 + 8 * v16);
          *(double *)(v6 + 8 * v16) = v15;
          if ( v15 >= 1.797693134862316e308 || v17 != v15 )
            *(_BYTE *)(*((_QWORD *)a2 + 24) + v16) = *(_BYTE *)(*((_QWORD *)a2 + 24) + v16) & 0xF8 | 3;
          result -= 4;
        }
        while ( result != (int *)(v4 + v14 - 8 - 16LL * (unsigned int)v9) );
      }
      else
      {
        v18 = v4 + v14 - 8 - 16LL * (unsigned int)v9;
        do
        {
          v19 = *result;
          v20 = *((_QWORD *)result - 1);
          result -= 4;
          *(_QWORD *)(v6 + 8 * v19) = v20;
        }
        while ( result != (int *)v18 );
      }
    }
    else
    {
      v10 = 16LL * v9;
      result = (int *)(v4 + v10 + 8);
      if ( v25 )
      {
        do
        {
          v11 = *((double *)result - 1);
          v12 = *result;
          v13 = *(double *)(v7 + 8 * v12);
          *(double *)(v5 + 8 * v12) = v11;
          if ( v11 <= -1.797693134862316e308 || v11 != v13 )
            *(_BYTE *)(*((_QWORD *)a2 + 24) + v12) = *(_BYTE *)(*((_QWORD *)a2 + 24) + v12) & 0xF8 | 2;
          result -= 4;
        }
        while ( (int *)(v4 + v10 - 8 - 16LL * (unsigned int)v9) != result );
      }
      else
      {
        v21 = v4 + v10 - 8 - 16LL * (unsigned int)v9;
        do
        {
          v22 = *result;
          v23 = *((_QWORD *)result - 1);
          result -= 4;
          *(_QWORD *)(v5 + 8 * v22) = v23;
        }
        while ( (int *)v21 != result );
      }
    }
  }
  return result;
}

