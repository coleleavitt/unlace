__int64 __fastcall sub_3FF320(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 *a5)
{
  __int64 *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // r14
  unsigned __int64 v11; // r13
  size_t v12; // r8
  __int64 v13; // r15
  size_t v14; // r9
  __int64 v15; // rsi
  __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // [rsp+0h] [rbp-48h]
  size_t v23; // [rsp+8h] [rbp-40h]

  v6 = *a1;
  v7 = *a5;
  v8 = *a3;
  v9 = (*a1)[1];
  if ( v9 > 1 )
  {
    v17 = *v6;
    v18 = v9 - 1;
    v19 = v9 + 1;
    if ( v6[2] < v9 + 1 )
    {
      v21 = qvector_reserve(*a1, v17, v19, 1);
      v18 = v9 - 1;
      v19 = v9 + 1;
      *v6 = v21;
      v17 = v21;
    }
    v6[1] = v19;
    *(_BYTE *)(v17 + v9) = 0;
    *(_BYTE *)(*v6 + v18) = 124;
    v6 = *a1;
  }
  v10 = *a2 + 56 * v8;
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v11 != 1 )
    {
      v13 = v6[1];
      v14 = v11 - 1;
      if ( v13 )
      {
        --v13;
        v14 = v12 + v13;
        v11 += v13;
      }
      v15 = *v6;
      if ( v6[2] < v11 )
      {
        v23 = v14;
        v22 = v12;
        v20 = qvector_reserve(v6, v15, v11, 1);
        v14 = v23;
        v12 = v22;
        *v6 = v20;
        v15 = v20;
      }
      v6[1] = v11;
      *(_BYTE *)(v15 + v14) = 0;
      memcpy((void *)(v13 + *v6), *(const void **)v10, v12);
    }
  }
  *a1[1] &= ~v7;
  return 0;
}

