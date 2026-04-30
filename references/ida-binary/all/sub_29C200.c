void __fastcall sub_29C200(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 (*v11)(void); // rax
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 i; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64); // rax
  int v26; // r13d
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 (__fastcall *v30)(__int64); // rax
  int v31; // eax
  unsigned int *v32; // rax
  unsigned int v33; // r12d
  __int64 v34; // rax
  __int64 (__fastcall *v35)(__int64, unsigned int); // rdx
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rdx
  char v49; // [rsp-8h] [rbp-58h]
  __int64 v50; // [rsp+0h] [rbp-50h]
  __int64 v51; // [rsp+8h] [rbp-48h]
  __int64 v52; // [rsp+10h] [rbp-40h]
  __int64 v53; // [rsp+10h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 72) != -1 )
  {
    v11 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
    if ( (char *)v11 == (char *)interactive_graph_t__::vfunc_7 )
      v12 = *(_DWORD *)(a1 + 184);
    else
      v12 = v11();
    v13 = *(_QWORD *)(a1 + 248);
    v14 = *(_QWORD *)(v13 + 40);
    v15 = *(_QWORD *)(v13 + 24);
    v16 = v13 + 8;
    for ( i = 10 * v12 + 5 + 30 * v14; v15 != v16; v15 = std::_Rb_tree_increment(v15) )
      i += 10LL * *(_QWORD *)(v15 + 64);
    v51 = qalloc(i);
    if ( !v51 )
      sub_22DB40((int)"set_custom_layout", a2, v18, v19, v20, v21, a3, a4, a5, a6, v22, v23, a9, a10, v49);
    v24 = v51 + i;
    v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v25 == interactive_graph_t__::vfunc_7 )
      v26 = *(_DWORD *)(a1 + 184);
    else
      v26 = v25(a1);
    v27 = pack_dd(v51, v24, (unsigned int)v26);
    if ( v26 > 0 )
    {
      v28 = v26;
      v29 = 0;
      v50 = v28;
      do
      {
        v35 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
        if ( v35 == interactive_graph_t__::vfunc_19 )
        {
          v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
          if ( v30 == interactive_graph_t__::vfunc_7 )
          {
            v31 = *(_DWORD *)(a1 + 184);
          }
          else
          {
            v53 = v27;
            v31 = v30(a1);
            v27 = v53;
          }
          if ( v31 <= (int)v29 )
            sub_16B930((__int64)"nrect(%d) failed", v29);
          v32 = (unsigned int *)(*(_QWORD *)(a1 + 224) + 16 * v29);
        }
        else
        {
          v52 = v27;
          v32 = (unsigned int *)v35(a1, v29);
          v27 = v52;
        }
        v33 = v32[1];
        ++v29;
        v34 = pack_dd(v27, v24, *v32);
        v27 = pack_dd(v34, v24, v33);
      }
      while ( v50 != v29 );
    }
    v36 = pack_dd(v27, v24, *(unsigned int *)(*(_QWORD *)(a1 + 248) + 40LL));
    v37 = *(_QWORD *)(a1 + 248);
    v38 = *(_QWORD *)(v37 + 24);
    if ( v38 != v37 + 8 )
    {
      do
      {
        v39 = pack_dd(v36, v24, *(unsigned int *)(v38 + 32));
        v40 = pack_dd(v39, v24, *(unsigned int *)(v38 + 36));
        v41 = pack_dd(v40, v24, *(unsigned int *)(v38 + 48));
        v42 = pack_dd(v41, v24, *(unsigned int *)(v38 + 52));
        v43 = pack_dd(v42, v24, *(unsigned int *)(v38 + 40));
        v44 = *(_QWORD *)(v38 + 64);
        v36 = pack_dd(v43, v24, (unsigned int)v44);
        if ( (int)v44 > 0 )
        {
          v45 = 0;
          v46 = 8LL * (unsigned int)v44;
          do
          {
            v47 = pack_dd(v36, v24, *(unsigned int *)(*(_QWORD *)(v38 + 56) + v45));
            v48 = *(unsigned int *)(*(_QWORD *)(v38 + 56) + v45 + 4);
            v45 += 8;
            v36 = pack_dd(v47, v24, v48);
          }
          while ( v45 != v46 );
        }
        v38 = std::_Rb_tree_increment(v38);
      }
      while ( v38 != *(_QWORD *)(a1 + 248) + 8LL );
    }
    sub_29C0F0(*(_QWORD *)(a1 + 72), a1, v51, v36 - v51, *(double *)a3.m128_u64);
  }
}
