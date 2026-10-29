unsigned __int64 __fastcall sub_3F2F40(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __m128i si128; // xmm1
  _QWORD *v5; // rax
  __int64 v6; // rsi
  __int64 j; // rbp
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 i; // r12
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rbp
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  bool v23; // [rsp+0h] [rbp-88h]
  __int64 v24; // [rsp+0h] [rbp-88h]
  __int64 v25; // [rsp+8h] [rbp-80h]
  bool v26; // [rsp+17h] [rbp-71h]
  __int64 v27; // [rsp+18h] [rbp-70h]
  unsigned __int64 v28; // [rsp+20h] [rbp-68h] BYREF
  __int64 v29; // [rsp+28h] [rbp-60h] BYREF
  __m128i v30; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_2BF9EE0;
  *(_QWORD *)(a1 + 16) = &off_2BF9F20;
  *(_QWORD *)(a1 + 8) = 0;
  v2 = qword_2CCB598;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = v2;
  *(_OWORD *)(a1 + 48) = 0;
  hook_event_listener(0, a1, 0, 1);
  *(_QWORD *)a1 = off_2B270D8;
  *(_QWORD *)(a1 + 16) = off_2B27118;
  netnode_check(a1 + 64, "$ proximity view", 0, 0);
  netnode_check(a1 + 72, "$ pv known blobs", 0, 0);
  netnode_check(a1 + 80, "$ hidden msg", 0, 0);
  v3 = a1 + 128;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v5 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 1672LL);
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = -1;
  *(_QWORD *)(a1 + 88) = v5;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = a1 + 128;
  *(_QWORD *)(a1 + 152) = a1 + 128;
  *(__m128i *)(a1 + 160) = si128;
  v30 = 0;
  sub_630CA0(*v5, 26, &v30, 16);
  v6 = *(_QWORD *)(a1 + 24);
  *(__m128i *)(a1 + 96) = _mm_load_si128(&v30);
  sub_7BEFF0(&v30, v6, "$ id numbers", 0, 0);
  *(_QWORD *)(a1 + 112) = v30.m128i_i64[0];
  netnode_check(&v28, "$ string windows", 0, 0);
  if ( (unsigned __int8)sub_7BE6E0(*(_QWORD *)(a1 + 24), &v28) )
  {
    v11 = v28;
    v25 = a1 + 120;
    v12 = sub_3EEB40(a1 + 120, v28);
    v14 = v13;
    if ( v13 )
    {
      v23 = v3 == v13 || v12 != nullptr;
      if ( !v23 )
        v23 = v11 < *(_QWORD *)(v13 + 32);
      v15 = operator new(0x28u);
      *(_QWORD *)(v15 + 32) = v11;
      std::_Rb_tree_insert_and_rebalance(v23, v15, v14, a1 + 128);
      ++*(_QWORD *)(a1 + 160);
      v11 = v28;
    }
    v24 = netnode_altval(v11, 0xFFFFFFFFLL, 65);
    if ( v24 )
    {
      for ( i = 0; i != v24; ++i )
      {
        v17 = netnode_altval(v28, i, 65);
        v18 = *(_QWORD *)(a1 + 24);
        v30.m128i_i64[0] = v17;
        v19 = v17;
        if ( (unsigned __int8)sub_7BE6E0(v18, &v30) )
        {
          v20 = sub_3EEB40(v25, v19);
          if ( v21 )
          {
            v26 = v3 == v21 || v20 != nullptr;
            if ( !v26 )
              v26 = v19 < *(_QWORD *)(v21 + 32);
            v27 = v21;
            v22 = operator new(0x28u);
            *(_QWORD *)(v22 + 32) = v19;
            std::_Rb_tree_insert_and_rebalance(v26, v22, v27, a1 + 128);
            ++*(_QWORD *)(a1 + 160);
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 72) != -1 )
  {
    for ( j = sub_7BEB80(a1 + 72, *(_QWORD *)(a1 + 24), 65); j != -1; j = sub_7BEBF0(
                                                                            a1 + 72,
                                                                            *(_QWORD *)(a1 + 24),
                                                                            j,
                                                                            65) )
    {
      v10 = *(_QWORD *)(a1 + 72);
      v29 = 1;
      netnode_supset(v10, j, &v29, 8, 65, v9);
    }
  }
  return v31 - __readfsqword(0x28u);
}
