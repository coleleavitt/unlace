__int64 __fastcall sub_55E360(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax
  unsigned int v4; // ebp
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // edx
  unsigned int v13; // edi
  int v14; // eax
  __int64 i; // rax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // eax

  v2 = *(_BYTE *)(a1 + 188) == 0;
  *(_BYTE *)(a1 + 180) = 1;
  if ( !v2 )
    return *(unsigned int *)(a1 + 184);
  v4 = *(_DWORD *)(a1 + 56);
  v5 = a1 + 172;
  sub_55C7B0(
    a1,
    _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4 - *(_DWORD *)(a1 + 64)), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 60))).m128i_i64[0],
    0);
  v6 = *(unsigned int *)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 60);
  *(_BYTE *)(a1 + 188) = 1;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 168) = v6;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(a1 + 120))(
         *(_QWORD *)(a1 + 112),
         v6,
         v7,
         a1 + 172);
  v9 = *(_DWORD *)(a1 + 172);
  *(_QWORD *)(a1 + 104) = v8;
  v10 = *(_DWORD *)(a1 + 160);
  if ( v9 )
  {
    if ( *(_DWORD *)(a1 + 164) != v10 )
    {
      sub_55D080((unsigned int *)a1);
      do
      {
        v11 = *(unsigned int *)(a1 + 56);
        if ( (unsigned int)v11 >= v4 )
          break;
        v12 = *(_DWORD *)(a1 + 164);
        v13 = *(_DWORD *)(a1 + 160);
        if ( v12 == v13 || !*(_QWORD *)(a1 + 104) )
          break;
        v14 = *(_DWORD *)(a1 + 176);
        if ( v14 )
        {
          if ( *(_DWORD *)a1 == 10 )
          {
            ++*(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = 0;
            *(_BYTE *)(a1 + 188) = 1;
            *(_DWORD *)(a1 + 184) = 0;
          }
          else
          {
            if ( (*(_DWORD *)a1 != 65279 || (_DWORD)v11) && *(_BYTE *)(a1 + 188) )
              ++*(_DWORD *)(a1 + 184);
            *(_DWORD *)(a1 + 64) += v14;
          }
          v11 = (unsigned int)(v14 + v11);
          *(_DWORD *)(a1 + 56) = v11;
        }
        for ( i = *(_QWORD *)(a1 + 96) + 24LL * v12; ; i += 24 )
        {
          v16 = *(_DWORD *)(i + 20);
          if ( (unsigned int)v11 < v16 && v16 != *(_DWORD *)(i + 16) )
            break;
          if ( v12 >= v13 || (++v12, *(_DWORD *)(a1 + 164) = v12, v12 >= v13) )
          {
            *(_QWORD *)(a1 + 104) = 0;
            *(_QWORD *)(a1 + 168) = 0;
            *(_DWORD *)a1 = 0;
            *(_DWORD *)(a1 + 176) = 1;
            goto LABEL_7;
          }
          v11 = *(unsigned int *)(i + 40);
          v17 = *(_QWORD *)(i + 24);
          *(_DWORD *)(a1 + 56) = v11;
          *(_QWORD *)(a1 + 60) = v17;
        }
        v18 = *(_DWORD *)(a1 + 168);
        if ( (unsigned int)v11 < v18 || (unsigned int)v11 >= *(_DWORD *)(a1 + 172) + v18 )
        {
          *(_DWORD *)(a1 + 168) = v11;
          *(_QWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(a1 + 120))(
                                    *(_QWORD *)(a1 + 112),
                                    v11,
                                    *(_QWORD *)(a1 + 60),
                                    v5);
          if ( !*(_DWORD *)(a1 + 172) )
          {
            v19 = *(_DWORD *)(a1 + 160);
            *(_QWORD *)(a1 + 104) = 0;
            *(_DWORD *)(a1 + 164) = v19;
          }
        }
        sub_55D080((unsigned int *)a1);
        v13 = *(_DWORD *)(a1 + 160);
LABEL_7:
        ;
      }
      while ( *(_DWORD *)(a1 + 164) != v13 );
    }
    return *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(a1 + 164) = v10;
  result = *(unsigned int *)(a1 + 184);
  *(_QWORD *)(a1 + 104) = 0;
  return result;
}
