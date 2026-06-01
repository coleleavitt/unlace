__int64 __fastcall sub_9F5F30(_QWORD *a1, _QWORD *a2, const void **a3)
{
  size_t v4; // r12
  const void *v6; // r15
  size_t v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r8
  _QWORD *v13; // r12
  const void *v14; // rdx
  __int64 v15; // r12
  const void *v16; // rsi
  size_t v17; // rdx
  size_t v18; // rax
  int v19; // eax
  __int64 v20; // rax
  const void *v21; // rsi
  size_t v22; // rdx
  const void *v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  const void *v25; // [rsp+20h] [rbp-48h] BYREF
  size_t v26; // [rsp+28h] [rbp-40h]

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v15 = a1[4];
      v16 = *a3;
      v17 = (size_t)a3[1];
      v18 = *(_QWORD *)(v15 + 40);
      v25 = *(const void **)(v15 + 32);
      v26 = v18;
      v19 = sub_9C4B00((__int64)&v25, v16, v17);
      v11 = nullptr;
      if ( v19 < 0 )
        return (__int64)v11;
    }
  }
  else
  {
    v4 = a2[5];
    v6 = *a3;
    v7 = (size_t)a3[1];
    v23 = (const void *)a2[4];
    v25 = *a3;
    v26 = v7;
    if ( (int)sub_9C4B00((__int64)&v25, v23, v4) < 0 )
    {
      v11 = (_QWORD *)a1[3];
      if ( v11 == a2 )
        return (__int64)v11;
      v13 = (_QWORD *)std::_Rb_tree_decrement(a2);
      v14 = (const void *)v13[4];
      v26 = v13[5];
      v25 = v14;
      if ( (int)sub_9C4B00((__int64)&v25, v6, v7) < 0 )
      {
        v11 = nullptr;
        if ( v13[3] )
          return (__int64)a2;
        return (__int64)v11;
      }
    }
    else
    {
      v25 = v23;
      v26 = v4;
      v8 = sub_9C4B00((__int64)&v25, v6, v7);
      v11 = a2;
      if ( v8 >= 0 )
        return (__int64)v11;
      if ( (_QWORD *)a1[4] == a2 )
        return 0;
      v20 = std::_Rb_tree_increment(a2, (const char *)v6, v9, v10, a2);
      v25 = v6;
      v21 = *(const void **)(v20 + 32);
      v22 = *(_QWORD *)(v20 + 40);
      v24 = v20;
      v26 = v7;
      if ( (int)sub_9C4B00((__int64)&v25, v21, v22) < 0 )
      {
        v11 = nullptr;
        if ( a2[3] )
          return v24;
        return (__int64)v11;
      }
    }
  }
  return sub_9F5E30((__int64)a1, (__int64)a3);
}
