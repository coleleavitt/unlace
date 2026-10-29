unsigned __int64 __fastcall sub_51A000(__int64 a1, QT::QHeaderView *a2)
{
  int v3; // eax
  bool v4; // zf
  _BYTE *v5; // rsi
  int v6; // r12d
  __int64 v7; // rax
  size_t v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r8
  int v11; // ebx
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  bool v14; // cf
  unsigned __int64 v15; // rbx
  int v16; // ebx
  _BYTE *v17; // rax
  _BYTE *v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  _BYTE *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-50h]
  unsigned __int64 v30; // [rsp+8h] [rbp-50h]
  char v31; // [rsp+12h] [rbp-46h] BYREF
  _BYTE src[5]; // [rsp+13h] [rbp-45h] BYREF
  unsigned __int64 v33[8]; // [rsp+18h] [rbp-40h] BYREF

  v33[0] = __readfsqword(0x28u);
  v3 = QT::QHeaderView::count(a2);
  v4 = *(_QWORD *)(a1 + 16) == 0;
  v5 = *(_BYTE **)a1;
  *(_QWORD *)(a1 + 8) = 0;
  v6 = v3;
  if ( v4 )
  {
    v22 = qvector_reserve(a1, v5, 1, 1);
    *(_QWORD *)a1 = v22;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + v22);
  }
  *v5 = 1;
  ++*(_QWORD *)(a1 + 8);
  v7 = pack_dd(src, v33, (unsigned int)v6) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = v9 + v7;
    if ( __CFADD__(v9, v7) )
    {
      if ( v9 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v9 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
        memcpy((void *)(v9 + *(_QWORD *)a1), src, v8);
        goto LABEL_9;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v23 = *(_BYTE **)a1;
    v24 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) < v10 )
    {
      v30 = v10;
      v28 = qvector_reserve(a1, v23, v10, 1);
      v10 = v30;
      *(_QWORD *)a1 = v28;
      v23 = (_BYTE *)v28;
      v24 = *(_QWORD *)(a1 + 8);
    }
    v29 = v10;
    memset(&v23[v24], 0, v10 - v24);
    *(_QWORD *)(a1 + 8) = v29;
    goto LABEL_8;
  }
LABEL_9:
  v11 = v6 + 14;
  v12 = *(_QWORD *)(a1 + 8);
  v31 = 0;
  if ( v6 + 7 >= 0 )
    v11 = v6 + 7;
  v13 = v11 >> 3;
  v14 = __CFADD__(v12, v13);
  v15 = v12 + v13;
  if ( !v14 )
  {
    if ( v12 >= v15 )
      goto LABEL_13;
    v19 = *(_BYTE **)a1;
    v20 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int64)&v31 < *(_QWORD *)a1 || &v31 >= &v19[v20] )
    {
      v21 = v12;
      if ( v20 >= v15
        || (v27 = qvector_reserve(a1, v19, v15, 1),
            v21 = *(_QWORD *)(a1 + 8),
            *(_QWORD *)a1 = v27,
            v19 = (_BYTE *)v27,
            v21 < v15) )
      {
        while ( 1 )
        {
          v19[v21++] = v31;
          if ( v15 == v21 )
            break;
          v19 = *(_BYTE **)a1;
        }
      }
    }
    else
    {
      v25 = v12;
      if ( v20 >= v15
        || (v26 = qvector_reserve(a1, v19, v15, 1),
            *(_QWORD *)a1 = v26,
            v19 = (_BYTE *)v26,
            v25 = *(_QWORD *)(a1 + 8),
            v25 < v15) )
      {
        while ( 1 )
        {
          v19[v25++] = 0;
          if ( v15 == v25 )
            break;
          v19 = *(_BYTE **)a1;
        }
      }
    }
  }
  *(_QWORD *)(a1 + 8) = v15;
LABEL_13:
  v16 = 0;
  if ( v6 > 0 )
  {
    do
    {
      if ( !(unsigned __int8)QT::QHeaderView::isSectionHidden(a2, v16) )
      {
        v17 = (_BYTE *)(*(_QWORD *)a1 + v12 + (v16 >> 3));
        *v17 |= 1 << (v16 & 7);
      }
      ++v16;
    }
    while ( v6 != v16 );
  }
  return v33[0] - __readfsqword(0x28u);
}
