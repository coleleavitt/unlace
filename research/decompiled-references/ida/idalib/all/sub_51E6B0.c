void __fastcall sub_51E6B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // r8d
  const __m128i *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // r13d
  __int64 *v10; // r15
  const __m128i *v11; // rax
  const __m128i *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  _BOOL8 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __m128i v29; // xmm0
  const __m128i *v30; // rax
  __int64 v31; // rsi
  const __m128i *v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __m128i v36; // xmm0
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __m128i v42; // xmm0
  __int64 v43; // rcx
  __int64 v44; // r13
  __int64 v45; // rax
  void *v46; // rdi
  _QWORD *v47; // rbp
  void *v48; // rdi
  __int32 v49; // eax
  __int64 v50; // rax
  __int32 v51; // [rsp+Ch] [rbp-3Ch]

  if ( (_BYTE)a2 )
  {
    sub_7BF0F0(a1 + 48);
    sub_517D80((__int64 *)a1);
    sub_51E300((__int64 *)a1);
    return;
  }
  v3 = *(_QWORD *)(a1 + 104);
  v4 = *(_DWORD *)(a1 + 44);
  v5 = (const __m128i *)(a1 + 96);
  if ( v3 )
  {
    a2 = *(unsigned int *)(a1 + 40);
    v6 = a1 + 96;
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v3 + 16);
        v8 = *(_QWORD *)(v3 + 24);
        if ( (int)a2 > *(_DWORD *)(v3 + 32) )
          break;
        v6 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v7 )
          goto LABEL_7;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v8 );
LABEL_7:
    if ( v5 != (const __m128i *)v6 && *(_DWORD *)(v6 + 32) <= v4 )
    {
      if ( !under_debugger )
        interr(1198);
      BUG();
    }
  }
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(__int64 **)(a1 + 16);
  if ( v9 <= v4 )
  {
    do
    {
      while ( !v10[1] )
      {
        if ( *(_DWORD *)(a1 + 44) < ++v9 )
          goto LABEL_35;
      }
      v11 = *(const __m128i **)(a1 + 104);
      v12 = v5;
      if ( v11 )
      {
        do
        {
          while ( 1 )
          {
            v13 = v11[1].m128i_i64[0];
            v14 = v11[1].m128i_i64[1];
            if ( v9 > v11[2].m128i_i32[0] )
              break;
            v12 = v11;
            v11 = (const __m128i *)v11[1].m128i_i64[0];
            if ( !v13 )
              goto LABEL_18;
          }
          v11 = (const __m128i *)v11[1].m128i_i64[1];
        }
        while ( v14 );
LABEL_18:
        if ( v5 != v12 && v12[2].m128i_i32[0] <= v9 )
          goto LABEL_34;
      }
      v15 = operator new(0x68u);
      *(_DWORD *)(v15 + 32) = v9;
      v17 = (__m128i *)v15;
      *(_QWORD *)(v15 + 40) = 0;
      *(_DWORD *)(v15 + 96) = 0;
      *(_OWORD *)(v15 + 48) = 0;
      *(_OWORD *)(v15 + 80) = 0;
      *(_OWORD *)(v15 + 64) = 0;
      if ( v5 == v12 )
      {
        if ( !*(_QWORD *)(a1 + 128) )
          goto LABEL_28;
        v19 = *(_QWORD *)(a1 + 120);
        v12 = nullptr;
        if ( *(_DWORD *)(v19 + 32) >= v9 )
          goto LABEL_28;
      }
      else
      {
        v18 = v12[2].m128i_u32[0];
        if ( (int)v18 <= v9 )
        {
          if ( (int)v18 >= v9 )
            goto LABEL_56;
          if ( *(const __m128i **)(a1 + 120) == v12 )
          {
LABEL_59:
            v19 = (__int64)v12;
            if ( !v12 )
            {
LABEL_56:
              if ( v17 )
              {
                a2 = 104;
                operator delete(v17, 0x68u);
              }
              goto LABEL_34;
            }
            goto LABEL_60;
          }
          v51 = v12[2].m128i_i32[0];
          v50 = std::_Rb_tree_increment(v12, a2, v16, v18);
          v19 = v50;
          if ( *(_DWORD *)(v50 + 32) <= v9 )
            goto LABEL_28;
          LODWORD(v18) = v51;
          if ( !v12[1].m128i_i64[1] )
            goto LABEL_59;
          v12 = (const __m128i *)v50;
        }
        else
        {
          v19 = (__int64)v12;
          if ( *(const __m128i **)(a1 + 112) == v12 )
            goto LABEL_29;
          v20 = std::_Rb_tree_decrement(v12);
          v19 = v20;
          if ( *(_DWORD *)(v20 + 32) >= v9 )
          {
LABEL_28:
            a2 = (unsigned int)v9;
            v12 = (const __m128i *)sub_514540(a1 + 88, v9);
            goto LABEL_29;
          }
          if ( *(_QWORD *)(v20 + 24) )
            v19 = (__int64)v12;
          else
            v12 = nullptr;
        }
      }
LABEL_29:
      if ( !v19 )
        goto LABEL_56;
      if ( !v12 && v5 != (const __m128i *)v19 )
      {
        LODWORD(v18) = *(_DWORD *)(v19 + 32);
LABEL_60:
        v21 = v9 < (int)v18;
        goto LABEL_33;
      }
      v21 = 1;
LABEL_33:
      a2 = (__int64)v17;
      v12 = v17;
      std::_Rb_tree_insert_and_rebalance(v21, v17, v19, v5);
      ++*(_QWORD *)(a1 + 128);
LABEL_34:
      v22 = *v10;
      v23 = v12[2].m128i_i64[1];
      v10 += 8;
      ++v9;
      v24 = _mm_loadu_si128(v12 + 3);
      v12[2].m128i_i64[1] = v22;
      v12[3].m128i_i64[0] = *(v10 - 7);
      v12[3].m128i_i64[1] = *(v10 - 6);
      v25 = *(v10 - 5);
      *(v10 - 8) = v23;
      *(__m128i *)(v10 - 7) = v24;
      v26 = v12[4].m128i_i64[0];
      v12[4].m128i_i64[0] = v25;
      v27 = *(v10 - 4);
      *(v10 - 5) = v26;
      v28 = v12[4].m128i_i64[1];
      v12[4].m128i_i64[1] = v27;
      v29 = _mm_loadu_si128(v12 + 5);
      v12[5].m128i_i64[0] = *(v10 - 3);
      v12[5].m128i_i64[1] = *(v10 - 2);
      *(v10 - 4) = v28;
      *(__m128i *)(v10 - 3) = v29;
    }
    while ( *(_DWORD *)(a1 + 44) >= v9 );
  }
LABEL_35:
  sub_51E040(a1);
  v30 = *(const __m128i **)(a1 + 104);
  if ( v30 )
  {
    v31 = *(unsigned int *)(a1 + 40);
    v32 = v5;
    do
    {
      while ( 1 )
      {
        v33 = v30[1].m128i_i64[0];
        v34 = v30[1].m128i_i64[1];
        if ( (int)v31 > v30[2].m128i_i32[0] )
          break;
        v32 = v30;
        v30 = (const __m128i *)v30[1].m128i_i64[0];
        if ( !v33 )
          goto LABEL_40;
      }
      v30 = (const __m128i *)v30[1].m128i_i64[1];
    }
    while ( v34 );
LABEL_40:
    if ( v5 != v32 )
    {
      while ( 1 )
      {
        v49 = v32[2].m128i_i32[0];
        if ( v49 > *(_DWORD *)(a1 + 44) )
          break;
        v35 = v32[2].m128i_i64[1];
        v36 = _mm_loadu_si128(v32 + 3);
        v37 = (__int64 *)(*(_QWORD *)(a1 + 16) + ((__int64)(v49 - *(_DWORD *)(a1 + 40)) << 6));
        v32[2].m128i_i64[1] = *v37;
        v32[3].m128i_i64[0] = v37[1];
        v32[3].m128i_i64[1] = v37[2];
        v38 = v37[3];
        *v37 = v35;
        *(__m128i *)(v37 + 1) = v36;
        v39 = v32[4].m128i_i64[0];
        v32[4].m128i_i64[0] = v38;
        v40 = v37[4];
        v37[3] = v39;
        v41 = v32[4].m128i_i64[1];
        v32[4].m128i_i64[1] = v40;
        v42 = _mm_loadu_si128(v32 + 5);
        v32[5].m128i_i64[0] = v37[5];
        v43 = v37[6];
        v32[5].m128i_i64[1] = v43;
        v37[4] = v41;
        *(__m128i *)(v37 + 5) = v42;
        v44 = std::_Rb_tree_increment(v32, v31, v41, v43);
        v45 = std::_Rb_tree_rebalance_for_erase(v32, v5);
        v46 = *(void **)(v45 + 72);
        v47 = (_QWORD *)v45;
        if ( v46 )
        {
          *(_QWORD *)(v45 + 80) = 0;
          qfree(v46);
        }
        v48 = (void *)v47[5];
        if ( v48 )
        {
          v47[6] = 0;
          qfree(v48);
        }
        v31 = 104;
        operator delete(v47, 0x68u);
        --*(_QWORD *)(a1 + 128);
        if ( v5 == (const __m128i *)v44 )
          break;
        v32 = (const __m128i *)v44;
      }
    }
  }
}
