__int64 __fastcall sub_1C7E0(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rbp
  int v8; // eax
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // r12
  __int64 v16; // rdx
  size_t v17; // r12
  void *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v23; // rax
  const char *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r14
  const char *v27; // rdx
  __int64 v28; // rax
  void *v29; // rbp
  __int64 v30; // rdx
  __int64 v32; // [rsp+10h] [rbp-78h]

  v4 = *a1;
  v5 = a1[1];
  if ( v5 == 1 && *(_QWORD *)(v4 + 8) <= 1u && *(_DWORD *)(v4 + 60) == -4 )
  {
    v25 = a2[2];
    v26 = (__int64)(a2 + 1);
    if ( !v25 )
      goto LABEL_46;
    do
    {
      if ( a3 > *(_DWORD *)(v25 + 32) )
      {
        v25 = *(_QWORD *)(v25 + 24);
      }
      else
      {
        v26 = v25;
        v25 = *(_QWORD *)(v25 + 16);
      }
    }
    while ( v25 );
    if ( (_QWORD *)v26 == a2 + 1 || a3 < *(_DWORD *)(v26 + 32) )
    {
LABEL_46:
      v28 = operator new(0x40u);
      *(_QWORD *)(v28 + 40) = 0;
      v29 = (void *)v28;
      *(_DWORD *)(v28 + 32) = a3;
      *(_OWORD *)(v28 + 48) = 0;
      sub_18430(a2, v26, a3);
      if ( v30 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++a2[5];
        return 0;
      }
      if ( v29 )
      {
        operator delete(v29, 0x40u);
        return 0;
      }
    }
    return 0;
  }
  v6 = *a1;
  v7 = a2 + 1;
  v32 = v4 + 72 * v5;
  if ( v32 == v4 )
    return 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v6 + 64);
    v9 = *(_DWORD *)(v6 + 60);
    if ( v8 != 2 )
      break;
    if ( *(_DWORD *)(a1[5] + 28) == 45 && v9 == -2 )
    {
      v24 = haystack;
      if ( !*(_QWORD *)(v6 + 32) )
        goto LABEL_29;
      goto LABEL_41;
    }
    if ( v9 == -4 )
      v9 = a3;
LABEL_6:
    v10 = a2[2];
    v11 = (__int64)(a2 + 1);
    if ( !v10 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        v13 = *(_QWORD *)(v10 + 24);
        if ( v9 <= *(_DWORD *)(v10 + 32) )
          break;
        v10 = *(_QWORD *)(v10 + 24);
        if ( !v13 )
          goto LABEL_11;
      }
      v11 = v10;
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v12 );
LABEL_11:
    if ( v7 == (_QWORD *)v11 || v9 < *(_DWORD *)(v11 + 32) )
    {
LABEL_13:
      v14 = operator new(0x40u);
      *(_DWORD *)(v14 + 32) = v9;
      v15 = (void *)v14;
      *(_QWORD *)(v14 + 40) = 0;
      *(_OWORD *)(v14 + 48) = 0;
      v11 = sub_18430(a2, v11, v9);
      if ( v16 )
      {
        v11 = (__int64)v15;
        std::_Rb_tree_insert_and_rebalance();
        ++a2[5];
      }
      else if ( v15 )
      {
        operator delete(v15, 0x40u);
      }
    }
    v17 = *(_QWORD *)(v6 + 8);
    v18 = nullptr;
    if ( v17 )
    {
      v18 = (void *)sub_96030(*(_QWORD *)(v6 + 8));
      memcpy(v18, *(const void **)v6, v17);
    }
    v19 = *(_QWORD *)(v11 + 48);
    v20 = *(_QWORD *)(v11 + 40);
    if ( *(_QWORD *)(v11 + 56) < (unsigned __int64)(v19 + 1) )
    {
      v23 = sub_96080(v11 + 40, v20, v19 + 1, 24);
      *(_QWORD *)(v11 + 40) = v23;
      v20 = v23;
      v19 = *(_QWORD *)(v11 + 48);
    }
    v6 += 72;
    v21 = v20 + 24 * v19;
    *(_QWORD *)v21 = v18;
    *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
    ++*(_QWORD *)(v11 + 48);
    if ( v32 == v6 )
      return 0;
  }
  if ( v9 == -4 )
  {
    v9 = a3;
    goto LABEL_6;
  }
  v27 = "commit id";
  if ( !v8 )
    v27 = "worklist id";
  sub_19CE0((__int64)a1, (__int64)"No %s is permitted here\n", v27);
  v24 = haystack;
  if ( *(_QWORD *)(v6 + 32) )
LABEL_41:
    v24 = *(const char **)(v6 + 24);
LABEL_29:
  sub_8F890(0, v24);
  return 7;
}

