__int64 __fastcall sub_372C00(__int64 a1, __int64 **a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // rax
  const void *v12; // r15
  size_t v13; // rax
  size_t v14; // r13
  __int64 v15; // rsi
  void *v17; // rdi
  size_t v18; // rdx
  __int64 *v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // r8
  unsigned __int64 v23; // r15
  __int64 v24; // r15
  const char *v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-40h]
  size_t v30; // [rsp+8h] [rbp-40h]

  sub_674F0(*a2, (__int64)"%zu", a6);
  v9 = a6 << 6;
  sub_674F0(*a2 + 3, (__int64)"%a", a3);
  v10 = *a2;
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 192) + v9 + 56) & 3;
  v12 = *(&off_4B8E40 + v11);
  if ( v12 && (v13 = strlen((const char *)*(&off_4B8E40 + v11)), (v14 = v13) != 0) )
  {
    v17 = (void *)v10[6];
    v18 = v13 + 1;
    if ( v10[8] < v13 + 1 )
    {
      v30 = v13 + 1;
      v28 = qvector_reserve(v10 + 6, v10[6], v18, 1);
      v18 = v30;
      v10[6] = v28;
      v17 = (void *)v28;
    }
    v10[7] = v18;
    memmove(v17, v12, v14);
    *(_BYTE *)(v10[6] + v14) = 0;
  }
  else
  {
    v10[7] = 0;
  }
  v15 = v9 + *(_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(v15 + 40) )
  {
    v19 = *a2;
    v20 = (*a2)[7];
    if ( v20 )
    {
      v23 = v20 + 1;
      v22 = (*a2)[7];
      v21 = v19[6];
      --v20;
      if ( v19[8] >= v23 )
        goto LABEL_11;
    }
    else
    {
      v21 = v19[6];
      v22 = 1;
      v23 = 2;
      if ( (unsigned __int64)v19[8] >= 2 )
        goto LABEL_11;
    }
    v29 = v22;
    v27 = qvector_reserve(v19 + 6, v21, v23, 1);
    v22 = v29;
    v19[6] = v27;
    v21 = v27;
LABEL_11:
    v19[7] = v23;
    *(_BYTE *)(v21 + v20) = 47;
    *(_BYTE *)(v19[6] + v22) = 0;
    v15 = v9 + *(_QWORD *)(a1 + 192);
    v24 = *(_QWORD *)(v15 + 24);
    if ( v15 + 8 != v24 )
    {
      do
      {
        v25 = ",";
        v26 = (*a2)[7];
        if ( v26 > 1 )
        {
          v25 = (const char *)&unk_3F3793;
          if ( *(_BYTE *)((*a2)[6] + v26 - 2) != 47 )
            v25 = ",";
        }
        sub_F6610(*a2 + 6, (__int64)"%s%a", v25, a3);
        v24 = std::_Rb_tree_increment(v24);
      }
      while ( v15 + 8 != v24 );
      v15 = v9 + *(_QWORD *)(a1 + 192);
    }
  }
  return sub_326540(*a2 + 9, v15 + 48, nullptr, 0);
}
