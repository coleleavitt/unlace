__int64 __fastcall sub_547680(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // r14
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // r13
  void *v10; // rdi
  __int64 v11; // rax
  signed __int64 v12; // r15
  __int64 *v13; // r13
  __m128 v14; // xmm0
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // r12
  void *v21; // rdi
  __int64 v22; // rbx
  _QWORD *v23; // r15
  __int64 v24; // r13
  __int64 v25; // r12
  void *v26; // rax
  __int64 i; // rcx
  _QWORD *v28; // rdx

  v2 = a2;
  v3 = *(_QWORD **)(a1 + 1824);
  result = sub_547590((__int64)v3, a2, 1);
  if ( (_BYTE)result )
  {
    if ( (*(_BYTE *)(a2 + 32) & 0x10) != 0 )
    {
      v7 = (__int64 *)v3[7];
      v5 = (unsigned __int64)&v7[10 * v3[8]];
      if ( 80LL * v3[8] )
      {
        while ( 1 )
        {
          v8 = *v7;
          v9 = v7;
          v7 += 10;
          if ( v8 == a2 )
            break;
          if ( v7 == (__int64 *)v5 )
            goto LABEL_21;
        }
        sub_533530((_QWORD *)v9[6]);
        v10 = (void *)v9[1];
        if ( v10 )
        {
          v9[2] = 0;
          qfree(v10);
        }
        v5 = 0xCCCCCCCCCCCCCCCDLL;
        v11 = v3[8];
        v12 = 0xCCCCCCCCCCCCCCCDLL * ((v3[7] + 80 * v11 - (__int64)v9) >> 4) - 2;
        if ( v12 >= 0 )
        {
          v13 = v9 + 5;
          do
          {
            *(v13 - 5) = *v7;
            v17 = v7[1];
            v18 = _mm_loadu_si128((const __m128i *)v7 + 1);
            v7[1] = 0;
            *(v13 - 4) = v17;
            *(__m128i *)(v13 - 3) = v18;
            v19 = v7[6];
            *((_OWORD *)v7 + 1) = 0;
            if ( v19 )
            {
              v14 = _mm_loadh_ps((const double *)v7 + 7);
              *(_DWORD *)v13 = *((_DWORD *)v7 + 10);
              v5 = v7[8];
              *(__m128 *)(v13 + 1) = v14;
              v13[3] = v5;
              *(_QWORD *)(v19 + 8) = v13;
              v15 = v7[9];
              v7[6] = 0;
              v13[4] = v15;
              v7[7] = (__int64)(v7 + 5);
              v7[8] = (__int64)(v7 + 5);
              v7[9] = 0;
            }
            else
            {
              *(_DWORD *)v13 = 0;
              v13[1] = 0;
              v13[2] = (__int64)v13;
              v13[3] = (__int64)v13;
              v13[4] = 0;
              v20 = v7[6];
              while ( v20 )
              {
                sub_533530(*(_QWORD **)(v20 + 24));
                v21 = (void *)v20;
                v20 = *(_QWORD *)(v20 + 16);
                a2 = 48;
                operator delete(v21, 0x30u);
              }
            }
            v16 = (void *)v7[1];
            if ( v16 )
            {
              v7[2] = 0;
              qfree(v16);
            }
            --v12;
            v7 += 10;
            v13 += 10;
          }
          while ( v12 != -1 );
          v11 = v3[8];
        }
        v3[8] = v11 - 1;
      }
    }
LABEL_21:
    v22 = v3[4];
    v23 = v3 + 2;
    while ( (_QWORD *)v22 != v23 )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v22 + 32);
        v25 = v22;
        v22 = std::_Rb_tree_increment(v22, a2, v5, v6);
        if ( v24 != v2 )
          break;
        v26 = (void *)std::_Rb_tree_rebalance_for_erase(v25, v3 + 2);
        a2 = 56;
        operator delete(v26, 0x38u);
        --v3[6];
        if ( (_QWORD *)v22 == v23 )
          goto LABEL_25;
      }
    }
LABEL_25:
    result = v3[18];
    for ( i = result + 8LL * v3[19]; i != result; result += 8 )
    {
      if ( *(_QWORD *)result )
      {
        v28 = *(_QWORD **)(*(_QWORD *)result + 32LL);
        if ( v28 )
        {
          if ( *v28 == v2 )
            *v28 = 0;
        }
      }
    }
  }
  return result;
}
