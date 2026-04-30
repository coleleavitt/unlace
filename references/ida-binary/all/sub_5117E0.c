unsigned __int64 __fastcall msg_entries_t__::vfunc_5(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  size_t v13; // r14
  __int64 v14; // r13
  size_t v15; // r15
  __int64 v16; // rsi
  void *v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v25; // [rsp+8h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return v25 - __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 16);
  v24 = 32;
  v8 = v6 + 48 * v3 - 48;
  v9 = *(_QWORD *)(v8 + 8);
  if ( v9 - 1 < a2 )
  {
    *(_BYTE *)(*(_QWORD *)v8 + v9 - 1) = 32;
    v9 = *(_QWORD *)(v8 + 8);
  }
  v10 = a2 + 1;
  v11 = *(_QWORD *)v8;
  if ( a2 + 1 < v9 )
    goto LABEL_6;
  if ( v9 < v10 )
  {
    v18 = *(_QWORD *)(v8 + 16);
    if ( (unsigned __int64)&v24 < v11 || (unsigned __int64)&v24 >= v11 + v18 )
    {
      if ( v18 >= v10
        || (v21 = qvector_reserve(v8, v11, a2 + 1, 1), v9 = *(_QWORD *)(v8 + 8),
                                                       *(_QWORD *)v8 = v21,
                                                       v11 = v21,
                                                       v9 < v10) )
      {
        do
        {
          v20 = v9;
          *(_BYTE *)(v11 + v9++) = 32;
          v11 = *(_QWORD *)v8;
        }
        while ( v20 != a2 );
      }
    }
    else if ( v18 >= v10
           || (v23 = qvector_reserve(v8, v11, a2 + 1, 1),
               v9 = *(_QWORD *)(v8 + 8),
               *(_QWORD *)v8 = v23,
               v11 = v23,
               v9 < v10) )
    {
      do
      {
        v19 = v9;
        *(_BYTE *)(v11 + v9++) = 32;
        v11 = *(_QWORD *)v8;
      }
      while ( a2 != v19 );
    }
LABEL_6:
    *(_QWORD *)(v8 + 8) = v10;
  }
  *(_BYTE *)(v11 + a2) = 0;
  v12 = *(_QWORD *)(a3 + 8);
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v12 != 1 )
    {
      v14 = *(_QWORD *)(v8 + 8);
      v15 = v12 - 1;
      if ( v14 )
      {
        --v14;
        v15 = v13 + v14;
        v12 += v14;
      }
      v16 = *(_QWORD *)v8;
      if ( *(_QWORD *)(v8 + 16) < v12 )
      {
        v22 = qvector_reserve(v8, v16, v12, 1);
        *(_QWORD *)v8 = v22;
        v16 = v22;
      }
      *(_QWORD *)(v8 + 8) = v12;
      *(_BYTE *)(v16 + v15) = 0;
      memcpy((void *)(v14 + *(_QWORD *)v8), *(const void **)a3, v13);
    }
  }
  v17 = *(void **)(v8 + 24);
  if ( v17 )
  {
    QT::QTextLayout::~QTextLayout(*(QT::QTextLayout **)(v8 + 24));
    operator delete(v17, 8u);
    *(_QWORD *)(v8 + 24) = 0;
  }
  *(_QWORD *)(v8 + 32) = -1;
  return v25 - __readfsqword(0x28u);
}
