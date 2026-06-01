unsigned __int64 __fastcall sub_3A70C0(__int64 a1, unsigned int a2, __int64 a3)
{
  char *v4; // rdi
  __int64 v5; // rax
  char *v7; // rdx
  _QWORD *v8; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rax
  void *v18; // rdi
  _QWORD *v19; // rbp
  void *v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int *v23; // [rsp+10h] [rbp-28h] BYREF
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
      v8 = *(_QWORD **)(qword_2CA1698 + 1384);
      memmove(v4, v4 + 8, v7 - v4 - 8);
      if ( (*(_QWORD *)(a3 + 48))-- == 1 )
      {
        v17 = std::_Rb_tree_rebalance_for_erase();
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
      v10 = v8[17];
      if ( v10 )
      {
        v11 = (__int64)(v8 + 16);
        do
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(v10 + 16);
            v13 = *(_QWORD *)(v10 + 24);
            if ( *(_DWORD *)(v10 + 32) < v22 )
              break;
            v11 = v10;
            v10 = *(_QWORD *)(v10 + 16);
            if ( !v12 )
              goto LABEL_12;
          }
          v10 = *(_QWORD *)(v10 + 24);
        }
        while ( v13 );
LABEL_12:
        if ( v8 + 16 != (_QWORD *)v11 && v22 >= *(_DWORD *)(v11 + 32) )
          goto LABEL_15;
      }
      else
      {
        v11 = (__int64)(v8 + 16);
      }
      v23 = &v22;
      v11 = sub_3A56C0(v8 + 15, v11, &v23);
LABEL_15:
      v14 = *(_QWORD *)(v11 + 48);
      v15 = *(_QWORD *)(v11 + 40);
      if ( *(_QWORD *)(v11 + 56) < (unsigned __int64)(v14 + 1) )
      {
        v21 = qvector_reserve(v11 + 40, v15, v14 + 1, 8);
        *(_QWORD *)(v11 + 40) = v21;
        v15 = v21;
        v14 = *(_QWORD *)(v11 + 48);
      }
      *(_QWORD *)(v15 + 8 * v14) = a1;
      ++*(_QWORD *)(v11 + 48);
    }
  }
  return v24 - __readfsqword(0x28u);
}

