__int64 __fastcall sub_52E6A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // r13
  void *v8; // rdi
  __int64 v9; // rax
  signed __int64 v10; // r15
  __int64 *v11; // r13
  __m128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // r12
  void *v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // r15
  __int64 v23; // r13
  void *v24; // rax
  __int64 i; // rcx
  _QWORD *v26; // rdx

  v2 = *(_QWORD **)(a1 + 1632);
  result = sub_52E5A0((__int64)v2, a2, 1);
  if ( (_BYTE)result )
  {
    if ( (*(_BYTE *)(a2 + 32) & 0x10) != 0 )
    {
      v4 = (__int64 *)v2[7];
      v5 = &v4[10 * v2[8]];
      if ( 80LL * v2[8] )
      {
        while ( 1 )
        {
          v6 = *v4;
          v7 = v4;
          v4 += 10;
          if ( v6 == a2 )
            break;
          if ( v4 == v5 )
            goto LABEL_21;
        }
        sub_51ADF0((_QWORD *)v7[6]);
        v8 = (void *)v7[1];
        if ( v8 )
        {
          v7[2] = 0;
          qfree(v8);
        }
        v9 = v2[8];
        v10 = 0xCCCCCCCCCCCCCCCDLL * ((v2[7] + 80 * v9 - (__int64)v7) >> 4) - 2;
        if ( v10 >= 0 )
        {
          v11 = v7 + 5;
          do
          {
            *(v11 - 5) = *v4;
            v16 = v4[1];
            v17 = _mm_loadu_si128((const __m128i *)v4 + 1);
            v4[1] = 0;
            *(v11 - 4) = v16;
            *(__m128i *)(v11 - 3) = v17;
            v18 = v4[6];
            *((_OWORD *)v4 + 1) = 0;
            if ( v18 )
            {
              v12 = _mm_loadh_ps((const double *)v4 + 7);
              *(_DWORD *)v11 = *((_DWORD *)v4 + 10);
              v13 = v4[8];
              *(__m128 *)(v11 + 1) = v12;
              v11[3] = v13;
              *(_QWORD *)(v18 + 8) = v11;
              v14 = v4[9];
              v4[6] = 0;
              v11[4] = v14;
              v4[7] = (__int64)(v4 + 5);
              v4[8] = (__int64)(v4 + 5);
              v4[9] = 0;
            }
            else
            {
              *(_DWORD *)v11 = 0;
              v11[1] = 0;
              v11[2] = (__int64)v11;
              v11[3] = (__int64)v11;
              v11[4] = 0;
              v19 = v4[6];
              while ( v19 )
              {
                sub_51ADF0(*(_QWORD **)(v19 + 24));
                v20 = (void *)v19;
                v19 = *(_QWORD *)(v19 + 16);
                operator delete(v20, 0x30u);
              }
            }
            v15 = (void *)v4[1];
            if ( v15 )
            {
              v4[2] = 0;
              qfree(v15);
            }
            --v10;
            v4 += 10;
            v11 += 10;
          }
          while ( v10 != -1 );
          v9 = v2[8];
        }
        v2[8] = v9 - 1;
      }
    }
LABEL_21:
    v21 = v2[4];
    v22 = v2 + 2;
    while ( (_QWORD *)v21 != v22 )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(v21 + 32);
        v21 = std::_Rb_tree_increment();
        if ( v23 != a2 )
          break;
        v24 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v24, 0x38u);
        --v2[6];
        if ( (_QWORD *)v21 == v22 )
          goto LABEL_25;
      }
    }
LABEL_25:
    result = v2[18];
    for ( i = result + 8LL * v2[19]; i != result; result += 8 )
    {
      if ( *(_QWORD *)result )
      {
        v26 = *(_QWORD **)(*(_QWORD *)result + 32LL);
        if ( v26 )
        {
          if ( *v26 == a2 )
            *v26 = 0;
        }
      }
    }
  }
  return result;
}

