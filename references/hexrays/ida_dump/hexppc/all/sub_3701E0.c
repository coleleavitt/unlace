unsigned __int64 __fastcall sub_3701E0(__int64 a1, _QWORD *a2, _DWORD a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbp
  __int64 v15; // rbx
  void *v16; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  bool v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdi
  char *v23; // rax
  char *v24; // r14
  __int64 v25; // [rsp+8h] [rbp-E0h]
  bool v26; // [rsp+10h] [rbp-D8h]
  __int64 v27; // [rsp+10h] [rbp-D8h]
  __int64 v28; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v29; // [rsp+18h] [rbp-D0h]
  __int64 tinfo_property; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-A0h] BYREF
  char *s; // [rsp+50h] [rbp-98h] BYREF
  __int128 v33; // [rsp+58h] [rbp-90h]
  char *s1; // [rsp+70h] [rbp-78h] BYREF
  __int128 v35; // [rsp+78h] [rbp-70h]
  __int64 v36; // [rsp+90h] [rbp-58h] BYREF
  __int128 v37; // [rsp+98h] [rbp-50h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( !a2 )
    goto LABEL_10;
  v6 = *(_QWORD *)(a1 + 1136);
  v7 = *(_QWORD *)(v6 + 24);
  v8 = a2[5];
  v25 = v6 + 8;
  if ( v7 != v6 + 8 )
  {
    do
    {
      v9 = *(_QWORD **)(*(_QWORD *)(a1 + 1128) + 8LL);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v7 + 32);
        v11 = 24;
        v12 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v12 )
          goto LABEL_16;
        if ( (*(_BYTE *)(*v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        {
          do
          {
            v13 = *(_QWORD *)(v12 + 24);
            v11 = v12 + 24;
            if ( v10 >= v13 )
            {
              if ( v13 >= v10 )
              {
                if ( v9 != (_QWORD *)v12 )
                {
LABEL_16:
                  v18 = sub_365D80(v12 + 32, v8, (unsigned __int64)v9, a4, a5);
                  if ( v19 )
                  {
                    v20 = 1;
                    if ( !v18 && v19 != v12 + 40 )
                      v20 = v8 < *(_QWORD *)(v19 + 32);
                    v28 = v19;
                    v26 = v20;
                    v21 = operator new(0x28u);
                    *(_QWORD *)(v21 + 32) = v8;
                    std::_Rb_tree_insert_and_rebalance(v26, v21, v28, v11 + 16);
                    ++*(_QWORD *)(v11 + 48);
                  }
                  if ( *(int *)(v11 + 64) > 1 )
                  {
                    v22 = *(_QWORD *)(v11 + 56);
                    if ( (*(_BYTE *)(v11 + 56) & 0x3F) != 0x30 )
                    {
                      tinfo_property = 0;
                      v27 = v11 + 56;
                      tinfo_property = get_tinfo_property(v22, 11);
                      if ( (get_tinfo_property(tinfo_property, 2) & 0x1F) != 0x12 || !(unsigned __int8)is_mapped(v10) )
                      {
                        s = nullptr;
                        v33 = 0;
                        v31 = 0;
                        if ( (unsigned __int8)get_type_by_tid(&v31, v10)
                          && (get_tinfo_property(v31, 2) & 0x2F) == 0xD
                          && (v31 & 0x100) != 0
                          && get_tinfo_pdata(&s, v31, 0) )
                        {
                          get_tid_name(&s, v10);
                          v29 = v8;
                          v24 = (char *)::s1;
                          if ( (_QWORD)v33 )
                            v24 = s;
                        }
                        else
                        {
                          v36 = 0;
                          if ( get_udm_by_tid(&v36, 0, v10) == -1 )
                          {
                            v29 = v10;
                            v24 = nullptr;
                            if ( get_ea_name(&s, v10, 0, 0) > 0 )
                            {
                              calc_c_cpp_name(&s, s, v27, 1);
                              v29 = v10;
                              v24 = s;
                            }
                          }
                          else
                          {
                            v23 = strchr(s, 46);
                            if ( !v23 )
                            {
                              if ( !under_debugger )
                                sub_37EEE0(50220);
                              BUG();
                            }
                            v29 = v8;
                            v24 = v23 + 1;
                          }
                          clear_tinfo_t(&v36);
                        }
                        v35 = 0;
                        s1 = nullptr;
                        if ( (unsigned __int8)cleanup_name(&s1, v10, v24, 0) && sub_1CF6A0(s1) )
                        {
                          if ( s1 )
                          {
                            *(_QWORD *)&v35 = 0;
                            qfree(s1);
                          }
                          clear_tinfo_t(&v31);
                          if ( s )
                          {
                            *(_QWORD *)&v33 = 0;
                            qfree(s);
                          }
                        }
                        else
                        {
                          v37 = 0;
                          v36 = 0;
                          sub_3274C0(&v36, v27, v24, 0x200u);
                          sub_32CD90(a2, v29, 9u, v36);
                          if ( v36 )
                          {
                            *(_QWORD *)&v37 = 0;
                            qfree(v36);
                          }
                          if ( s1 )
                          {
                            *(_QWORD *)&v35 = 0;
                            qfree(s1);
                          }
                          clear_tinfo_t(&v31);
                          if ( s )
                          {
                            *(_QWORD *)&v33 = 0;
                            qfree(s);
                          }
                        }
                      }
                      clear_tinfo_t(&tinfo_property);
                    }
                  }
                }
                break;
              }
              v12 = *(_QWORD *)(v12 + 16);
            }
            else
            {
              v12 = *(_QWORD *)(v12 + 8);
            }
          }
          while ( (*(_BYTE *)v12 & 2) == 0 );
        }
      }
      v7 = std::_Rb_tree_increment(v7);
    }
    while ( v25 != v7 );
LABEL_10:
    v6 = *(_QWORD *)(a1 + 1136);
    if ( !v6 )
      goto LABEL_12;
  }
  sub_367A50(*(_QWORD **)(v6 + 16));
  operator delete((void *)v6, 0x30u);
LABEL_12:
  v14 = *(_QWORD **)(a1 + 1128);
  *(_QWORD *)(a1 + 1136) = 0;
  v15 = v14[11];
  while ( v15 )
  {
    sub_367A50(*(_QWORD **)(v15 + 24));
    v16 = (void *)v15;
    v15 = *(_QWORD *)(v15 + 16);
    operator delete(v16, 0x28u);
  }
  v14[11] = 0;
  v14[12] = v14 + 10;
  v14[13] = v14 + 10;
  v14[14] = 0;
  return v38 - __readfsqword(0x28u);
}
