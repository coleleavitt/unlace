__int64 __fastcall sub_2195B0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  char *v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11; // xmm0
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __m128 v17; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdi
  _QWORD *v33; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 i; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+10h] [rbp-98h] BYREF
  __m128i v36; // [rsp+18h] [rbp-90h] BYREF
  int v37[2]; // [rsp+28h] [rbp-80h]
  int v38[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v39; // [rsp+40h] [rbp-68h]
  __m128i v40; // [rsp+48h] [rbp-60h] BYREF
  __int64 v41; // [rsp+58h] [rbp-50h]
  __m128i v42; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-30h]

  v43 = __readfsqword(0x28u);
  v4 = *(int *)(dbg + 64);
  v5 = (char *)*(unsigned int *)(dbg + 64);
  sub_215280((__int64)&v35, (int)v5);
  v6 = sub_210380((__int64)a2);
  if ( *((_DWORD *)v6 + 2) != 1 || (v5 = (char *)v6[3]) == nullptr )
  {
LABEL_10:
    v16 = v35;
    v17 = _mm_loadh_ps((const double *)&v38[2]);
    v18 = _mm_loadu_si128(&v36);
    v35 = 0;
    *(__m128 *)(a1 + 32) = v17;
    v19 = _mm_loadu_si128(&v40);
    *(_QWORD *)a1 = v16;
    v20 = *(_QWORD *)v37;
    *(__m128i *)(a1 + 56) = v19;
    v11 = _mm_load_si128(&v42);
    *(_QWORD *)(a1 + 24) = v20;
    *(_QWORD *)v37 = 0;
    *(_QWORD *)(a1 + 48) = v39;
    v21 = v41;
    *(__m128i *)(a1 + 8) = v18;
    *(_QWORD *)(a1 + 72) = v21;
    v36 = 0;
    *(_OWORD *)v38 = 0;
    *(__m128i *)(a1 + 80) = v11;
    goto LABEL_11;
  }
  sub_20C080(&v35, v5, v7, v8, v9, v10);
  v11.m128i_i64[0] = *(_QWORD *)v38;
  if ( *(_DWORD *)(dbg + 64) != *(_QWORD *)v38 )
  {
    v12 = *(_QWORD *)v38;
    if ( v4 > *(__int64 *)v38 )
    {
      v5 = nullptr;
      v33 = sub_219340(a2, 0);
      for ( i = v13; v33; i = v15 )
      {
        v5 = (char *)v33[15];
        if ( i >= 16 * ((unsigned __int64)(v5 == nullptr) + ((__int64)&v5[-v33[11]] >> 3) - 1)
                + ((__int64)(v33[10] - v33[8]) >> 5)
                + ((__int64)(v33[12] - v33[13]) >> 5)
          || v4 <= v12 )
        {
          break;
        }
        v14 = sub_210380((__int64)&v33);
        v5 = nullptr;
        v12 += (int)sub_20D840(&v35, v14[3], 1);
        v33 = sub_219340(&v33, 0);
      }
    }
    goto LABEL_10;
  }
  v5 = *(char **)v37;
  sub_216730(a1, *(__int64 *)v37);
  v28 = v41;
  if ( v41 )
  {
    v29 = v42.m128i_i64[0];
    if ( v42.m128i_i64[0] )
    {
      v30 = 0;
      do
      {
        v31 = v28 + 32 * v30;
        v32 = *(_QWORD *)(v31 + 8);
        if ( v32 )
        {
          *(_QWORD *)(v31 + 16) = 0;
          qfree(v32, v5);
          v28 = v41;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    v42.m128i_i64[0] = 0;
    *(double *)v11.m128i_i64 = qfree(v28, v5);
  }
  if ( v39 )
  {
    v40.m128i_i64[0] = 0;
    *(double *)v11.m128i_i64 = qfree(v39, v5, *(double *)v11.m128i_i64);
  }
LABEL_11:
  v22 = *(_QWORD *)v37;
  if ( *(_QWORD *)v37 )
  {
    v23 = *(_QWORD *)v38;
    if ( *(_QWORD *)v38 )
    {
      v24 = 0;
      do
      {
        v25 = v22 + 32 * v24;
        if ( *(int *)v25 >= -1 )
        {
          v26 = *(_QWORD *)(v25 + 8);
          if ( v26 )
          {
            *(_QWORD *)(v25 + 16) = 0;
            qfree(v26, v5);
            v22 = *(_QWORD *)v37;
          }
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)v38 = 0;
    *(double *)v11.m128i_i64 = qfree(v22, v5);
  }
  if ( v35 )
  {
    v36.m128i_i64[0] = 0;
    qfree(v35, v5, *(double *)v11.m128i_i64);
  }
  return a1;
}
