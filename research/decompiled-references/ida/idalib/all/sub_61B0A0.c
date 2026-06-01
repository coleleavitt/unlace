unsigned __int64 __fastcall sub_61B0A0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v6; // r13
  unsigned int v7; // eax
  _QWORD *v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rcx
  bool v13; // al
  __int64 i; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  void *v19; // rax
  unsigned int v20; // [rsp+Ch] [rbp-4Ch] BYREF
  __m128i v21; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v22 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1648);
  v21 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dd(&v21);
  v20 = v7;
  if ( a3 )
  {
    sub_61AF80(v6 + 4, &v20);
    return v22 - __readfsqword(0x28u);
  }
  v8 = v6 + 5;
  v9 = v6 + 5;
  if ( v6[6] )
  {
    v10 = v6[6];
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v10 + 32);
        if ( v11 >= v7 )
          break;
        v10 = *(_QWORD *)(v10 + 24);
        if ( !v10 )
          goto LABEL_8;
      }
      v12 = *(_QWORD *)(v10 + 16);
      if ( v7 >= v11 )
        break;
      v9 = (_QWORD *)v10;
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v12 )
      {
LABEL_8:
        v13 = v8 == v9;
        goto LABEL_9;
      }
    }
    for ( i = *(_QWORD *)(v10 + 24); i; i = *(_QWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(i + 24);
        if ( v7 < *(_DWORD *)(i + 32) )
          break;
        i = *(_QWORD *)(i + 24);
        if ( !v16 )
          goto LABEL_18;
      }
      v9 = (_QWORD *)i;
    }
LABEL_18:
    while ( v12 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v12 + 24);
        if ( *(_DWORD *)(v12 + 32) >= v7 )
          break;
        v12 = *(_QWORD *)(v12 + 24);
        if ( !v17 )
          goto LABEL_21;
      }
      v10 = v12;
      v12 = *(_QWORD *)(v12 + 16);
    }
LABEL_21:
    if ( v6[7] == v10 && v9 == v8 )
      goto LABEL_11;
    while ( v9 != (_QWORD *)v10 )
    {
      v18 = v10;
      v10 = std::_Rb_tree_increment(v10);
      v19 = (void *)std::_Rb_tree_rebalance_for_erase(v18, v6 + 5);
      operator delete(v19, 0x28u);
      --v6[9];
    }
  }
  else
  {
    v13 = 1;
LABEL_9:
    if ( (_QWORD *)v6[7] == v9 && v13 )
    {
LABEL_11:
      sub_6068F0((_QWORD *)v6[6]);
      v6[6] = 0;
      v6[7] = v8;
      v6[8] = v8;
      v6[9] = 0;
    }
  }
  return v22 - __readfsqword(0x28u);
}
