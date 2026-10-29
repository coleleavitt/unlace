__int64 __fastcall sub_210CF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r11
  double v4; // xmm2_8
  double *v5; // rdx
  double v6; // xmm0_8
  __int64 v7; // r10
  __int64 v8; // rbp
  __int64 v9; // r12
  int v10; // edx
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // r8d
  double *v14; // r9
  double v15; // xmm1_8
  __int64 v16; // rdx
  double v17; // xmm0_8

  result = *(unsigned int *)(a1 + 360);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 232);
    v4 = *(double *)(a1 + 24);
    v5 = (double *)(a2 + 8LL * *(int *)(v3 + 4));
    v6 = *v5;
    if ( fabs(*v5) <= v4 )
      v6 = 0.0;
    v7 = *(_QWORD *)(a1 + 144);
    v8 = *(_QWORD *)(a1 + 152);
    v9 = *(_QWORD *)(a1 + 136);
    *v5 = v6;
    v10 = *(_DWORD *)(v7 + 4);
    if ( (int)result > 0 )
    {
      v11 = 0;
      v12 = 4LL * (unsigned int)(result - 1) + 4;
      while ( 1 )
      {
        result = *(int *)(v3 + v11 + 4);
        v13 = *(_DWORD *)(v7 + v11 + 8);
        v14 = (double *)(a2 + 8 * result);
        v15 = *v14;
        if ( v13 < v10 )
        {
          v16 = (unsigned int)(v10 - 1 - v13) + 1LL;
          result = 0;
          do
          {
            v17 = *(double *)(a2 + 8LL * *(int *)(v9 + 4LL * v13 + 4 * result + 4))
                * *(double *)(v8 + 8LL * v13 + 8 * result + 8);
            ++result;
            v15 = v15 + v17;
          }
          while ( v16 != result );
        }
        if ( fabs(v15) <= v4 )
        {
          v11 += 4;
          *v14 = 0.0;
          if ( v12 == v11 )
            return result;
        }
        else
        {
          v11 += 4;
          *v14 = v15;
          if ( v11 == v12 )
            return result;
        }
        v10 = v13;
      }
    }
  }
  return result;
}

