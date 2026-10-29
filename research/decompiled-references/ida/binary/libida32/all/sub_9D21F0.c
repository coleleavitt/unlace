__int64 __fastcall sub_9D21F0(_QWORD *a1, _QWORD *a2, const void **a3)
{
  size_t v4; // r12
  const void *v6; // r15
  size_t v7; // r14
  int v8; // eax
  _QWORD *v9; // r8
  _QWORD *v11; // r12
  const void *v12; // rdx
  __int64 v13; // r12
  const void *v14; // rsi
  size_t v15; // rdx
  size_t v16; // rax
  int v17; // eax
  __int64 v18; // rax
  const void *v19; // rsi
  size_t v20; // rdx
  const void *v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+10h] [rbp-58h]
  const void *v23; // [rsp+20h] [rbp-48h] BYREF
  size_t v24; // [rsp+28h] [rbp-40h]

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v13 = a1[4];
      v14 = *a3;
      v15 = (size_t)a3[1];
      v16 = *(_QWORD *)(v13 + 40);
      v23 = *(const void **)(v13 + 32);
      v24 = v16;
      v17 = sub_9A0DC0((__int64)&v23, v14, v15);
      v9 = nullptr;
      if ( v17 < 0 )
        return (__int64)v9;
    }
  }
  else
  {
    v4 = a2[5];
    v6 = *a3;
    v7 = (size_t)a3[1];
    v21 = (const void *)a2[4];
    v23 = *a3;
    v24 = v7;
    if ( (int)sub_9A0DC0((__int64)&v23, v21, v4) < 0 )
    {
      v9 = (_QWORD *)a1[3];
      if ( v9 == a2 )
        return (__int64)v9;
      v11 = (_QWORD *)std::_Rb_tree_decrement();
      v12 = (const void *)v11[4];
      v24 = v11[5];
      v23 = v12;
      if ( (int)sub_9A0DC0((__int64)&v23, v6, v7) < 0 )
      {
        v9 = nullptr;
        if ( v11[3] )
          return (__int64)a2;
        return (__int64)v9;
      }
    }
    else
    {
      v23 = v21;
      v24 = v4;
      v8 = sub_9A0DC0((__int64)&v23, v6, v7);
      v9 = a2;
      if ( v8 >= 0 )
        return (__int64)v9;
      if ( (_QWORD *)a1[4] == a2 )
        return 0;
      v18 = std::_Rb_tree_increment();
      v23 = v6;
      v19 = *(const void **)(v18 + 32);
      v20 = *(_QWORD *)(v18 + 40);
      v22 = v18;
      v24 = v7;
      if ( (int)sub_9A0DC0((__int64)&v23, v19, v20) < 0 )
      {
        v9 = nullptr;
        if ( a2[3] )
          return v22;
        return (__int64)v9;
      }
    }
  }
  return sub_9D20F0((__int64)a1, (__int64)a3);
}

