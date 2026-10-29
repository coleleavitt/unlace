__int64 __fastcall sub_2206A40(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // r12
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // r8d
  _QWORD *v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rsi
  __int64 i; // rcx

  v3 = (__int64 *)a2;
  v5 = *(_DWORD *)(a2 + 8);
  if ( a3 > 0x40 )
  {
    if ( a3 == v5 )
    {
      *(_DWORD *)(a1 + 8) = a3;
      sub_2205510(a1, (const void **)a2);
      return a1;
    }
    else
    {
      v8 = operator new[](8 * (((unsigned __int64)a3 + 63) >> 6));
      v9 = a3 >> 6;
      if ( a3 >> 6 )
      {
        v10 = *(_QWORD **)a2;
        v11 = v9 - 1;
        if ( (v8 >= *(_QWORD *)a2 + 16LL || *(_QWORD *)a2 >= v8 + 16) && v11 > 1 )
        {
          v12 = 0;
          do
          {
            *(__m128i *)(v8 + v12 * 8) = _mm_loadu_si128((const __m128i *)&v10[v12]);
            v12 += 2;
          }
          while ( v12 != 2LL * (a3 >> 7) );
          v13 = 2 * (a3 >> 7);
          if ( v9 != (_DWORD)v13 )
            *(_QWORD *)(v8 + 8 * v13) = v10[v13];
        }
        else
        {
          v15 = v11;
          for ( i = 0; ; ++i )
          {
            *(_QWORD *)(v8 + 8 * i) = v10[i];
            if ( v15 == i )
              break;
          }
        }
      }
      v14 = -a3 & 0x3F;
      if ( v14 )
        *(_QWORD *)(v8 + 8LL * v9) = *(_QWORD *)(*v3 + 8LL * v9) << v14 >> v14;
      *(_DWORD *)(a1 + 8) = a3;
      *(_QWORD *)a1 = v8;
      return a1;
    }
  }
  else
  {
    if ( v5 > 0x40 )
      v3 = *(__int64 **)a2;
    v6 = *v3;
    *(_DWORD *)(a1 + 8) = a3;
    *(_QWORD *)a1 = v6;
    sub_CF8100((unsigned __int64 *)a1);
    return a1;
  }
}
