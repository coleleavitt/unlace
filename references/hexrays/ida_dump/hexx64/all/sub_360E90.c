__int64 __fastcall sub_360E90(__int64 a1, int a2)
{
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  void *v11; // rax
  __int64 nsec_stamp; // rbp
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 *v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  time_t v24; // rax
  __int64 v25; // rdi
  const char *v26; // rsi
  const char *v27; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+18h] [rbp-C0h]
  __int64 v29; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+38h] [rbp-A0h]
  __int64 v31; // [rsp+48h] [rbp-90h]
  __int64 v32; // [rsp+50h] [rbp-88h] BYREF
  __int128 v33; // [rsp+58h] [rbp-80h]
  __int64 v34; // [rsp+68h] [rbp-70h]
  __int128 v35; // [rsp+70h] [rbp-68h]
  __int64 v36; // [rsp+80h] [rbp-58h]
  __int128 v37; // [rsp+88h] [rbp-50h]
  unsigned __int64 v38; // [rsp+98h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 56)
    && ((v3 = *(_QWORD *)(*(_QWORD *)a1 + 800LL), !a2) || time(nullptr) - *(_QWORD *)(a1 + 88) >= a2) )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = a1 + 24;
    v29 = 0;
    v31 = -1;
    v30 = 0;
    if ( v4 == a1 + 24 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 32);
        v7 = sub_3605F0(v3 + 8, v6);
        if ( v7 < 0 )
        {
          if ( !under_debugger )
            sub_383060(51837);
          BUG();
        }
        if ( *(_DWORD *)(*(_QWORD *)(v3 + 184) + 120LL * v7 + 100) == 1 )
          break;
        v4 = std::_Rb_tree_increment(v4);
        if ( v4 == v5 )
          goto LABEL_11;
      }
      v8 = v30;
      v9 = v29;
      if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 1) )
      {
        v29 = qvector_reserve(&v29, v29, v30 + 1, 8);
        v9 = v29;
        v8 = v30;
      }
      *(_QWORD *)(v9 + 8 * v8) = v6;
      *(_QWORD *)&v30 = v30 + 1;
      v10 = std::_Rb_tree_increment(v4);
      v11 = (void *)std::_Rb_tree_rebalance_for_erase(v4, a1 + 24);
      v4 = v10;
      operator delete(v11, 0x28u);
      --*(_QWORD *)(a1 + 56);
    }
    while ( v10 != v5 );
LABEL_11:
    if ( !(_QWORD)v30 )
    {
LABEL_34:
      v13 = 1;
    }
    else
    {
      v27 = nullptr;
      v32 = 0;
      v34 = 0;
      v36 = 0;
      v28 = 0;
      v33 = 0;
      v35 = 0;
      v37 = 0;
      nsec_stamp = get_nsec_stamp();
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *, const char **, __int64 (__fastcall *)(__int64, unsigned __int64 *), _QWORD))(**(_QWORD **)(a1 + 8) + 80LL))(
              *(_QWORD *)(a1 + 8),
              &v32,
              &v29,
              &v27,
              sub_360690,
              0);
      if ( (_BYTE)v13 )
      {
        *(_DWORD *)(a1 + 100) += v30;
      }
      else
      {
        v26 = s1;
        if ( (_QWORD)v28 )
          v26 = v27;
        sub_6D0A0((__int64)"lumina: pushing metadata failed: %s\n", v26);
      }
      v14 = get_nsec_stamp();
      v15 = v36;
      *(_QWORD *)(a1 + 80) = v14 + *(_QWORD *)(a1 + 80) - nsec_stamp;
      if ( v15 )
      {
        v16 = v37;
        if ( (_QWORD)v37 )
        {
          v17 = 0;
          v18 = 0;
          do
          {
            v19 = (__int64 *)(v15 + v17);
            v20 = *(_QWORD *)(v15 + v17 + 64);
            if ( v20 )
            {
              v19[9] = 0;
              qfree(v20);
            }
            v21 = v19[4];
            if ( v21 )
            {
              v19[5] = 0;
              qfree(v21);
            }
            v22 = *v19;
            if ( *v19 )
            {
              v19[1] = 0;
              qfree(v22);
            }
            ++v18;
            v15 = v36;
            v17 += 88;
          }
          while ( v16 != v18 );
        }
        *(_QWORD *)&v37 = 0;
        qfree(v15);
      }
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v34);
      }
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27);
      }
    }
    v24 = time(nullptr);
    v25 = v29;
    *(_QWORD *)(a1 + 88) = v24;
    if ( v25 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v25);
    }
  }
  else
  {
    return 1;
  }
  return v13;
}
