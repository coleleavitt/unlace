void __fastcall sub_5066F0(__int64 a1, char a2)
{
  __int64 v3; // rax
  int v4; // r8d
  const __m128i *v5; // rbx
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r13d
  __int64 *v11; // r15
  const __m128i *v12; // rax
  const __m128i *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i *v17; // r14
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm0
  const __m128i *v29; // rax
  const __m128i *v30; // rbp
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __int64 v41; // r13
  __int64 v42; // rax
  void *v43; // rdi
  _QWORD *v44; // rbp
  void *v45; // rdi
  __int32 v46; // eax
  __int64 v47; // rax

  if ( a2 )
  {
    sub_79BCF0(a1 + 48);
    sub_500150((__int64 *)a1);
    sub_506340((__int64 *)a1);
    return;
  }
  v3 = *(_QWORD *)(a1 + 96);
  v4 = *(_DWORD *)(a1 + 44);
  v5 = (const __m128i *)(a1 + 88);
  if ( v3 )
  {
    v6 = *(_DWORD *)(a1 + 40);
    v7 = a1 + 88;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v3 + 16);
        v9 = *(_QWORD *)(v3 + 24);
        if ( v6 > *(_DWORD *)(v3 + 32) )
          break;
        v7 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v8 )
          goto LABEL_7;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v9 );
LABEL_7:
    if ( v5 != (const __m128i *)v7 && *(_DWORD *)(v7 + 32) <= v4 )
    {
      if ( !under_debugger )
        interr(1198);
      BUG();
    }
  }
  v10 = *(_DWORD *)(a1 + 40);
  v11 = *(__int64 **)(a1 + 16);
  if ( v10 <= v4 )
  {
    while ( 1 )
    {
      while ( !v11[1] )
      {
        if ( *(_DWORD *)(a1 + 44) < ++v10 )
          goto LABEL_32;
      }
      v12 = *(const __m128i **)(a1 + 96);
      v13 = v5;
      if ( v12 )
      {
        do
        {
          while ( 1 )
          {
            v14 = v12[1].m128i_i64[0];
            v15 = v12[1].m128i_i64[1];
            if ( v10 > v12[2].m128i_i32[0] )
              break;
            v13 = v12;
            v12 = (const __m128i *)v12[1].m128i_i64[0];
            if ( !v14 )
              goto LABEL_18;
          }
          v12 = (const __m128i *)v12[1].m128i_i64[1];
        }
        while ( v15 );
LABEL_18:
        if ( v5 != v13 && v13[2].m128i_i32[0] <= v10 )
          goto LABEL_31;
      }
      v16 = operator new(0x68u);
      *(_DWORD *)(v16 + 32) = v10;
      v17 = (__m128i *)v16;
      *(_QWORD *)(v16 + 40) = 0;
      *(_DWORD *)(v16 + 96) = 0;
      *(_OWORD *)(v16 + 48) = 0;
      *(_OWORD *)(v16 + 80) = 0;
      *(_OWORD *)(v16 + 64) = 0;
      if ( v5 == v13 )
        break;
      v18 = v13[2].m128i_i32[0];
      if ( v18 > v10 )
      {
        v19 = (__int64)v13;
        if ( *(const __m128i **)(a1 + 104) == v13 )
          goto LABEL_29;
        v20 = std::_Rb_tree_decrement();
        v19 = v20;
        if ( *(_DWORD *)(v20 + 32) < v10 )
        {
          if ( *(_QWORD *)(v20 + 24) )
            v19 = (__int64)v13;
          else
            v13 = nullptr;
          goto LABEL_29;
        }
        goto LABEL_28;
      }
      if ( v18 >= v10 )
        goto LABEL_53;
      if ( *(const __m128i **)(a1 + 112) != v13 )
      {
        v47 = std::_Rb_tree_increment();
        v19 = v47;
        if ( *(_DWORD *)(v47 + 32) <= v10 )
          goto LABEL_28;
        if ( v13[1].m128i_i64[1] )
        {
          v13 = (const __m128i *)v47;
          goto LABEL_29;
        }
      }
      if ( !v13 )
      {
LABEL_53:
        if ( v17 )
          operator delete(v17, 0x68u);
        goto LABEL_31;
      }
LABEL_30:
      v13 = v17;
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(a1 + 120);
LABEL_31:
      v21 = *v11;
      v22 = v13[2].m128i_i64[1];
      v11 += 8;
      ++v10;
      v23 = _mm_loadu_si128(v13 + 3);
      v13[2].m128i_i64[1] = v21;
      v13[3].m128i_i64[0] = *(v11 - 7);
      v13[3].m128i_i64[1] = *(v11 - 6);
      v24 = *(v11 - 5);
      *(v11 - 8) = v22;
      *(__m128i *)(v11 - 7) = v23;
      v25 = v13[4].m128i_i64[0];
      v13[4].m128i_i64[0] = v24;
      v26 = *(v11 - 4);
      *(v11 - 5) = v25;
      v27 = v13[4].m128i_i64[1];
      v13[4].m128i_i64[1] = v26;
      v28 = _mm_loadu_si128(v13 + 5);
      v13[5].m128i_i64[0] = *(v11 - 3);
      v13[5].m128i_i64[1] = *(v11 - 2);
      *(v11 - 4) = v27;
      *(__m128i *)(v11 - 3) = v28;
      if ( *(_DWORD *)(a1 + 44) < v10 )
        goto LABEL_32;
    }
    if ( *(_QWORD *)(a1 + 120) )
    {
      v19 = *(_QWORD *)(a1 + 112);
      v13 = nullptr;
      if ( *(_DWORD *)(v19 + 32) < v10 )
      {
LABEL_29:
        if ( !v19 )
          goto LABEL_53;
        goto LABEL_30;
      }
    }
LABEL_28:
    v13 = (const __m128i *)sub_4FC9C0(a1 + 80, v10);
    goto LABEL_29;
  }
LABEL_32:
  sub_506080(a1);
  v29 = *(const __m128i **)(a1 + 96);
  if ( v29 )
  {
    v30 = v5;
    do
    {
      while ( 1 )
      {
        v31 = v29[1].m128i_i64[0];
        v32 = v29[1].m128i_i64[1];
        if ( *(_DWORD *)(a1 + 40) > v29[2].m128i_i32[0] )
          break;
        v30 = v29;
        v29 = (const __m128i *)v29[1].m128i_i64[0];
        if ( !v31 )
          goto LABEL_37;
      }
      v29 = (const __m128i *)v29[1].m128i_i64[1];
    }
    while ( v32 );
LABEL_37:
    if ( v5 != v30 )
    {
      while ( 1 )
      {
        v46 = v30[2].m128i_i32[0];
        if ( v46 > *(_DWORD *)(a1 + 44) )
          break;
        v33 = v30[2].m128i_i64[1];
        v34 = _mm_loadu_si128(v30 + 3);
        v35 = (__int64 *)(*(_QWORD *)(a1 + 16) + ((__int64)(v46 - *(_DWORD *)(a1 + 40)) << 6));
        v30[2].m128i_i64[1] = *v35;
        v30[3].m128i_i64[0] = v35[1];
        v30[3].m128i_i64[1] = v35[2];
        v36 = v35[3];
        *v35 = v33;
        *(__m128i *)(v35 + 1) = v34;
        v37 = v30[4].m128i_i64[0];
        v30[4].m128i_i64[0] = v36;
        v38 = v35[4];
        v35[3] = v37;
        v39 = v30[4].m128i_i64[1];
        v30[4].m128i_i64[1] = v38;
        v40 = _mm_loadu_si128(v30 + 5);
        v30[5].m128i_i64[0] = v35[5];
        v30[5].m128i_i64[1] = v35[6];
        v35[4] = v39;
        *(__m128i *)(v35 + 5) = v40;
        v41 = std::_Rb_tree_increment();
        v42 = std::_Rb_tree_rebalance_for_erase();
        v43 = *(void **)(v42 + 72);
        v44 = (_QWORD *)v42;
        if ( v43 )
        {
          *(_QWORD *)(v42 + 80) = 0;
          qfree(v43);
        }
        v45 = (void *)v44[5];
        if ( v45 )
        {
          v44[6] = 0;
          qfree(v45);
        }
        operator delete(v44, 0x68u);
        --*(_QWORD *)(a1 + 120);
        if ( v5 == (const __m128i *)v41 )
          break;
        v30 = (const __m128i *)v41;
      }
    }
  }
}

