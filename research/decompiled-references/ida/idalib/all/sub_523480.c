unsigned __int64 __fastcall sub_523480(__int64 a1)
{
  unsigned __int64 v1; // rbp
  bool v2; // zf
  int *v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m128i *v9; // r13
  unsigned __int64 v10; // rsi
  int *v11; // rdx
  __int64 v12; // rax
  _BOOL8 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 i; // r9
  int *v18; // rax
  unsigned __int64 v19; // rsi
  int *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD **v23; // rbx
  void *v24; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-80h]
  char v28[8]; // [rsp+10h] [rbp-78h] BYREF
  int v29; // [rsp+18h] [rbp-70h] BYREF
  void *v30; // [rsp+20h] [rbp-68h]
  int *v31; // [rsp+28h] [rbp-60h]
  int *v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 48) == 0;
  v34 = __readfsqword(0x28u);
  v29 = 0;
  v30 = nullptr;
  v4 = &v29;
  v31 = &v29;
  v32 = &v29;
  v33 = 0;
  if ( !v2 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v1);
        if ( v5 )
          break;
LABEL_14:
        if ( ++v1 >= *(_QWORD *)(a1 + 48) )
          goto LABEL_15;
      }
      v6 = *(_QWORD *)(v5 + 56);
      v9 = (__m128i *)operator new(0x30u);
      v9[2] = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v1);
      if ( v4 == &v29 )
      {
        if ( !v33 )
          goto LABEL_41;
        v11 = v32;
        v4 = nullptr;
        if ( *((_QWORD *)v32 + 4) >= v6 )
          goto LABEL_41;
      }
      else
      {
        v10 = *((_QWORD *)v4 + 4);
        if ( v6 >= v10 )
        {
          if ( v10 >= v6 )
            goto LABEL_36;
          if ( v32 == v4 )
          {
LABEL_35:
            v11 = v4;
            if ( v4 )
              goto LABEL_43;
            goto LABEL_36;
          }
          v27 = *((_QWORD *)v4 + 4);
          v26 = std::_Rb_tree_increment(v4, v10, v7, v8);
          v11 = (int *)v26;
          if ( v6 >= *(_QWORD *)(v26 + 32) )
            goto LABEL_41;
          v10 = v27;
          if ( !*((_QWORD *)v4 + 3) )
            goto LABEL_35;
          v4 = (int *)v26;
        }
        else
        {
          v11 = v4;
          if ( v31 == v4 )
            goto LABEL_9;
          v12 = std::_Rb_tree_decrement(v4);
          v11 = (int *)v12;
          if ( *(_QWORD *)(v12 + 32) >= v6 )
          {
LABEL_41:
            v4 = (int *)sub_51F940((__int64)v28, v6);
            goto LABEL_9;
          }
          if ( *(_QWORD *)(v12 + 24) )
            v11 = v4;
          else
            v4 = nullptr;
        }
      }
LABEL_9:
      if ( v11 )
      {
        if ( v11 == &v29 || v4 )
        {
          v13 = 1;
        }
        else
        {
          v10 = *((_QWORD *)v11 + 4);
LABEL_43:
          v13 = v6 < v10;
        }
        v4 = (int *)v9;
        std::_Rb_tree_insert_and_rebalance(v13, v9, v11, &v29);
        ++v33;
        goto LABEL_14;
      }
LABEL_36:
      if ( !v9 )
        goto LABEL_14;
      ++v1;
      operator delete(v9, 0x30u);
    }
    while ( v1 < *(_QWORD *)(a1 + 48) );
  }
LABEL_15:
  v14 = *(int *)(a1 + 8);
  if ( (_DWORD)v14 == -1 )
    v15 = 0;
  else
    v15 = *(_QWORD *)(switch_dbctx(v14) + 1784);
  sub_522FB0((_QWORD *)v15);
  if ( *(_DWORD *)(v15 + 64) == 3 )
  {
    if ( v33 )
    {
      if ( !under_debugger )
        interr(1887);
      BUG();
    }
  }
  else
  {
    v16 = *(_QWORD *)(v15 + 16);
    for ( i = v16 + 72LL * *(_QWORD *)(v15 + 24); v16 != i; v16 += 72 )
    {
      v18 = (int *)v30;
      v19 = *(_QWORD *)(v16 + 56);
      v20 = &v29;
      if ( v30 )
      {
        do
        {
          while ( 1 )
          {
            v21 = *((_QWORD *)v18 + 2);
            v22 = *((_QWORD *)v18 + 3);
            if ( *((_QWORD *)v18 + 4) < v19 )
              break;
            v20 = v18;
            v18 = *((int **)v18 + 2);
            if ( !v21 )
              goto LABEL_24;
          }
          v18 = *((int **)v18 + 3);
        }
        while ( v22 );
LABEL_24:
        if ( v20 != &v29 && v19 < *((_QWORD *)v20 + 4) )
          v20 = &v29;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL * *((_QWORD *)v20 + 5)) = v16;
    }
  }
  v23 = (_QWORD **)v30;
  if ( v30 )
  {
    do
    {
      sub_51FED0(v23[3]);
      v24 = v23;
      v23 = (_QWORD **)v23[2];
      operator delete(v24, 0x30u);
    }
    while ( v23 );
  }
  return v34 - __readfsqword(0x28u);
}
