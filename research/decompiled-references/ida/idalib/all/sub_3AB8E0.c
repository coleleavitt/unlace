unsigned __int64 __fastcall sub_3AB8E0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char *v4; // rdi
  __int64 v5; // rax
  char *v7; // rdx
  _QWORD *v8; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rax
  void *v18; // rdi
  _QWORD *v19; // rbp
  void *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 *v23; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-20h]

  v4 = *(char **)(a3 + 40);
  v5 = *(_QWORD *)(a3 + 48);
  v22 = a2;
  v24 = __readfsqword(0x28u);
  v7 = &v4[8 * v5];
  if ( v4 != v7 )
  {
    while ( *(_QWORD *)v4 != a1 )
    {
      v4 += 8;
      if ( v7 == v4 )
        return v24 - __readfsqword(0x28u);
    }
    if ( v7 != v4 )
    {
      v8 = *(_QWORD **)(qword_2CCB598 + 1576);
      memmove(v4, v4 + 8, v7 - v4 - 8);
      if ( (*(_QWORD *)(a3 + 48))-- == 1 )
      {
        v17 = std::_Rb_tree_rebalance_for_erase(a3, v8 + 10);
        v18 = *(void **)(v17 + 64);
        v19 = (_QWORD *)v17;
        if ( v18 )
        {
          *(_QWORD *)(v17 + 72) = 0;
          qfree(v18);
        }
        v20 = (void *)v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          qfree(v20);
        }
        operator delete(v19, 0x58u);
        --v8[14];
      }
      v10 = (_QWORD *)v8[17];
      if ( v10 )
      {
        v11 = v8 + 16;
        do
        {
          while ( 1 )
          {
            v12 = v10[2];
            v13 = v10[3];
            if ( v10[4] < v22 )
              break;
            v11 = v10;
            v10 = (_QWORD *)v10[2];
            if ( !v12 )
              goto LABEL_12;
          }
          v10 = (_QWORD *)v10[3];
        }
        while ( v13 );
LABEL_12:
        if ( v8 + 16 != v11 && v22 >= v11[4] )
          goto LABEL_15;
      }
      else
      {
        v11 = v8 + 16;
      }
      v23 = &v22;
      v11 = sub_3A9D80(v8 + 15, v11, &v23);
LABEL_15:
      v14 = v11[6];
      v15 = v11[5];
      if ( v11[7] < (unsigned __int64)(v14 + 1) )
      {
        v21 = qvector_reserve(v11 + 5, v15, v14 + 1, 8);
        v11[5] = v21;
        v15 = v21;
        v14 = v11[6];
      }
      *(_QWORD *)(v15 + 8 * v14) = a1;
      ++v11[6];
    }
  }
  return v24 - __readfsqword(0x28u);
}
