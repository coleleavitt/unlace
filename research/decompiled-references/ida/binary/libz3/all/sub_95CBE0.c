__int64 __fastcall sub_95CBE0(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  double v6; // xmm0_8
  unsigned int v7; // ebp
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // edx

  result = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)result )
  {
    v5 = *(_DWORD *)(a1 + 72) + 1;
    *(_DWORD *)(a1 + 72) = v5;
    if ( *(_DWORD *)(result + 20) < v5 )
    {
      sub_95BEA0(a1, a2, a3, a4);
      *(_DWORD *)(a1 + 72) = 0;
      result = *(_QWORD *)(a1 + 16);
    }
    v6 = (double)*(int *)(*(_QWORD *)a1 + 10324LL) * *(double *)(result + 8);
    result = *(unsigned int *)(a1 + 68);
    v7 = (int)v6;
    if ( (unsigned int)result < (int)v6 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(a1 + 56);
        if ( !v8 )
          break;
        v9 = *(_DWORD *)(a1 + 64);
        if ( v9 >= *(_DWORD *)(v8 - 4) )
          break;
        *(_DWORD *)(a1 + 68) = result + 1;
        *(_DWORD *)(a1 + 64) = v9 + 1;
        sub_957DE0((__int64 *)a1, *(_QWORD *)(16LL * v9 + v8), *(_QWORD *)(16LL * v9 + v8 + 8));
        result = *(unsigned int *)(a1 + 68);
        if ( (unsigned int)result >= v7 )
          return result;
      }
      if ( (unsigned int)result < (int)v6 )
      {
        do
        {
          v10 = *(_QWORD *)(a1 + 160);
          if ( !v10 )
            break;
          v11 = *(_DWORD *)(a1 + 168);
          if ( v11 >= *(_DWORD *)(v10 - 4) )
            break;
          *(_DWORD *)(a1 + 168) = v11 + 1;
          *(_DWORD *)(a1 + 68) = result + 1;
          sub_959410(
            (__int64 *)a1,
            *(_QWORD *)(v10 + 24LL * v11),
            *(_QWORD *)(v10 + 24LL * v11 + 8),
            *(_QWORD *)(v10 + 24LL * v11 + 16));
          result = *(unsigned int *)(a1 + 68);
        }
        while ( (unsigned int)result < v7 );
      }
    }
  }
  return result;
}

