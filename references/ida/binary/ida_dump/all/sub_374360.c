unsigned __int64 __fastcall sub_374360(
        __int64 a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned __int64 v12; // r13
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rbp
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  _QWORD *v18; // rbp
  __int64 v19; // rbx
  void *v20; // rdi
  __int64 v22; // rdx
  char *v23; // rax
  const char *v24; // r14
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v30; // [rsp+18h] [rbp-D0h]
  __int64 v31; // [rsp+90h] [rbp-58h] BYREF
  __int128 v32; // [rsp+98h] [rbp-50h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a2 )
    goto LABEL_10;
  v10 = *(_QWORD *)(a1 + 1136);
  v11 = *(_QWORD *)(v10 + 24);
  v12 = a2[5];
  v29 = v10 + 8;
  if ( v11 != v10 + 8 )
  {
    do
    {
      v13 = *(_QWORD **)(*(_QWORD *)(a1 + 1128) + 8LL);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v11 + 32);
        v15 = 24;
        v16 = *v13 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v16 )
          goto LABEL_16;
        if ( (*(_BYTE *)(*v13 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        {
          do
          {
            v17 = *(_QWORD *)(v16 + 24);
            v15 = v16 + 24;
            if ( v14 >= v17 )
            {
              if ( v17 >= v14 )
              {
                if ( v13 != (_QWORD *)v16 )
                {
LABEL_16:
                  sub_369F00(v16 + 32, v12);
                  if ( v22 )
                  {
                    *(_QWORD *)(operator new(0x28u) + 32) = v12;
                    std::_Rb_tree_insert_and_rebalance();
                    ++*(_QWORD *)(v15 + 48);
                  }
                  if ( *(int *)(v15 + 64) > 1 && (*(_BYTE *)(v15 + 56) & 0x3F) != 0x30 )
                  {
                    get_tinfo_property();
                    if ( (get_tinfo_property() & 0x1F) != 0x12 || !(unsigned __int8)is_mapped() )
                    {
                      if ( (unsigned __int8)get_type_by_tid() )
                        get_tinfo_property();
                      v31 = 0;
                      if ( get_udm_by_tid() == -1 )
                      {
                        v30 = v14;
                        v24 = nullptr;
                        if ( get_ea_name() > 0 )
                        {
                          calc_c_cpp_name();
                          v30 = v14;
                          v24 = nullptr;
                        }
                      }
                      else
                      {
                        v23 = strchr(nullptr, 46);
                        if ( !v23 )
                        {
                          if ( !under_debugger )
                            sub_383060(50220);
                          BUG();
                        }
                        v30 = v12;
                        v24 = v23 + 1;
                      }
                      clear_tinfo_t();
                      if ( !(unsigned __int8)cleanup_name() || !sub_1D3240(nullptr) )
                      {
                        v32 = 0;
                        v31 = 0;
                        sub_32B7F0(&v31, v15 + 56, v24);
                        sub_3311F0(a2, v30, 9u, v31, v25, v26, (__m128)0LL, a4, a5, a6, v27, v28, a9, a10);
                        if ( v31 )
                        {
                          *(_QWORD *)&v32 = 0;
                          qfree();
                        }
                      }
                      clear_tinfo_t();
                    }
                    clear_tinfo_t();
                  }
                }
                break;
              }
              v16 = *(_QWORD *)(v16 + 16);
            }
            else
            {
              v16 = *(_QWORD *)(v16 + 8);
            }
          }
          while ( (*(_BYTE *)v16 & 2) == 0 );
        }
      }
      v11 = std::_Rb_tree_increment();
    }
    while ( v29 != v11 );
LABEL_10:
    v10 = *(_QWORD *)(a1 + 1136);
    if ( !v10 )
      goto LABEL_12;
  }
  sub_36BBD0(*(_QWORD **)(v10 + 16));
  operator delete((void *)v10, 0x30u);
LABEL_12:
  v18 = *(_QWORD **)(a1 + 1128);
  *(_QWORD *)(a1 + 1136) = 0;
  v19 = v18[11];
  while ( v19 )
  {
    sub_36BBD0(*(_QWORD **)(v19 + 24));
    v20 = (void *)v19;
    v19 = *(_QWORD *)(v19 + 16);
    operator delete(v20, 0x28u);
  }
  v18[11] = 0;
  v18[12] = v18 + 10;
  v18[13] = v18 + 10;
  v18[14] = 0;
  return v33 - __readfsqword(0x28u);
}
