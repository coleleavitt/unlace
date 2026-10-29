__int64 __fastcall sub_2106C90(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  size_t v5; // r14
  size_t v6; // r15
  const void *v7; // r9
  const void *v8; // r8
  size_t v9; // r13
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  char v13; // cl
  const void *v14; // r15
  size_t v15; // rbp
  size_t v16; // rdx
  const void *v17; // rsi
  __int64 v19; // rax
  void *s2; // [rsp+8h] [rbp-60h]
  void *s1; // [rsp+10h] [rbp-58h]
  void *s1a; // [rsp+10h] [rbp-58h]
  const void *v23; // [rsp+20h] [rbp-48h] BYREF
  size_t v24; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
  {
    v3 = a1 + 8;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v4 = v3 + 32;
    if ( sub_9C4B50(a2, v3 + 32) < 0 )
      goto LABEL_14;
    if ( sub_9C4B50(v3 + 32, a2) < 0 )
      goto LABEL_18;
    v5 = *(_QWORD *)(a2 + 40);
    v6 = *(_QWORD *)(v3 + 72);
    v7 = *(const void **)(a2 + 32);
    v8 = *(const void **)(v3 + 64);
    v9 = v5;
    if ( v6 <= v5 )
      v9 = *(_QWORD *)(v3 + 72);
    if ( !v9 )
    {
      if ( v6 == v5 )
        goto LABEL_13;
      goto LABEL_9;
    }
    s1 = *(void **)(v3 + 64);
    s2 = *(void **)(a2 + 32);
    v10 = memcmp(s2, s1, v9);
    v7 = s2;
    v8 = s1;
    if ( !v10 )
      break;
    if ( v10 < 0 )
      goto LABEL_14;
    v11 = memcmp(s1, s2, v9);
    if ( v11 )
      goto LABEL_17;
    if ( v6 != v5 )
      goto LABEL_12;
LABEL_13:
    if ( *(_DWORD *)(a2 + 48) >= *(_DWORD *)(v3 + 80) )
      goto LABEL_18;
LABEL_14:
    v12 = *(_QWORD *)(v3 + 16);
    v13 = 1;
    if ( !v12 )
      goto LABEL_19;
LABEL_15:
    v3 = v12;
  }
  if ( v6 != v5 )
  {
LABEL_9:
    if ( v6 > v5 )
      goto LABEL_14;
    if ( v9 )
    {
      v11 = memcmp(v8, v7, v9);
      if ( v11 )
        goto LABEL_17;
    }
LABEL_12:
    if ( v6 < v5 )
      goto LABEL_18;
    goto LABEL_13;
  }
  v11 = memcmp(s1, s2, v9);
  if ( !v11 )
    goto LABEL_13;
LABEL_17:
  if ( v11 >= 0 )
    goto LABEL_13;
LABEL_18:
  v12 = *(_QWORD *)(v3 + 24);
  v13 = 0;
  if ( v12 )
    goto LABEL_15;
LABEL_19:
  if ( !v13 )
    goto LABEL_20;
LABEL_34:
  if ( *(_QWORD *)(a1 + 24) == v3 )
    return 0;
  v19 = std::_Rb_tree_decrement(v3);
  v4 = v19 + 32;
  v3 = v19;
LABEL_20:
  if ( sub_9C4B50(v4, a2) < 0 )
    return 0;
  if ( sub_9C4B50(a2, v4) >= 0
    && ((v14 = *(const void **)(v3 + 64),
         v15 = *(_QWORD *)(v3 + 72),
         v16 = *(_QWORD *)(a2 + 40),
         v17 = *(const void **)(a2 + 32),
         s1a = *(void **)(a2 + 40),
         v23 = v14,
         v24 = v15,
         (int)sub_9C4B00((__int64)&v23, v17, v16) < 0)
     || (v23 = v17, v24 = (size_t)s1a, (int)sub_9C4B00((__int64)&v23, v14, v15) >= 0)
     && *(_DWORD *)(v3 + 80) < *(_DWORD *)(a2 + 48)) )
  {
    return 0;
  }
  else
  {
    return v3;
  }
}
