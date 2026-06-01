__int64 __fastcall sub_43E980(__int64 *a1, __int64 a2, double a3)
{
  int v4; // eax
  __int64 *v5; // r13
  __int64 v6; // r14
  __int64 *v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rsi
  char v11; // dl
  QT::QAbstractItemView *v13; // r12
  __int64 v14; // rax
  _QWORD *v15; // r15
  __int64 *v16; // rax
  __int64 v17; // r12
  char v18; // dl
  __int64 v19; // rax
  const char *v20; // rsi
  _QWORD *v21; // r12
  __int128 v22; // xmm0
  __int64 v23; // r14
  _QWORD *v24; // r15
  unsigned __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rbp
  unsigned __int64 v30; // r8
  size_t v31; // r9
  const void *v32; // r10
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-90h]
  unsigned __int64 v37; // [rsp+8h] [rbp-90h]
  unsigned __int64 v38; // [rsp+8h] [rbp-90h]
  size_t v39; // [rsp+10h] [rbp-88h]
  const void *v40; // [rsp+18h] [rbp-80h]
  __int64 v41; // [rsp+20h] [rbp-78h] BYREF
  __int128 v42; // [rsp+28h] [rbp-70h]
  const void *v43; // [rsp+40h] [rbp-58h] BYREF
  __int64 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v4 = *(_DWORD *)(a2 + 8);
  v45 = __readfsqword(0x28u);
  if ( v4 == 69 )
  {
    v21 = *(_QWORD **)(a2 + 48);
    v22 = 0;
    v23 = *(_QWORD *)(a2 + 40);
    v8 = 0;
    v24 = &v21[*(_QWORD *)(a2 + 56)];
    if ( v21 == v24 )
      return 0;
    do
    {
      v25 = *v21 + 1LL;
      if ( v25 < *(_QWORD *)(v23 + 240) )
      {
        v26 = *(_QWORD *)(v23 + 232) + 152 * v25;
        if ( v26 )
        {
          if ( *(_BYTE *)(v26 + 148) != 2 )
          {
            if ( a1 )
            {
              v27 = a1[1];
              v28 = *a1;
              if ( a1[2] < (unsigned __int64)(v27 + 1) )
              {
                v34 = qvector_reserve(a1, v28, v27 + 1, 32);
                v27 = a1[1];
                v22 = 0;
                *a1 = v34;
                v28 = v34;
              }
              v29 = v28 + 32 * v27;
              *(_QWORD *)v29 = 0;
              *(_DWORD *)(v29 + 24) = 0;
              *(_OWORD *)(v29 + 8) = v22;
              ++a1[1];
              if ( v26 != v29 )
              {
                v30 = *(_QWORD *)(v26 + 8);
                if ( !v30 || (v31 = v30 - 1, v30 == 1) )
                {
                  *(_QWORD *)(v29 + 8) = 0;
                }
                else
                {
                  v32 = *(const void **)v26;
                  v33 = *(void **)v29;
                  if ( *(_QWORD *)(v29 + 16) < v30 )
                  {
                    v40 = *(const void **)v26;
                    v39 = v30 - 1;
                    v38 = *(_QWORD *)(v26 + 8);
                    v35 = qvector_reserve(v29, *(_QWORD *)v29, v38, 1);
                    v32 = v40;
                    v31 = v39;
                    *(_QWORD *)v29 = v35;
                    v30 = v38;
                    v33 = (void *)v35;
                  }
                  *(_QWORD *)(v29 + 8) = v30;
                  v37 = v30;
                  memmove(v33, v32, v31);
                  v22 = 0;
                  *(_BYTE *)(*(_QWORD *)v29 + v37 - 1) = 0;
                }
              }
              *(_DWORD *)(v29 + 24) = *(_DWORD *)(v26 + 144);
            }
            v8 = 1;
          }
        }
      }
      ++v21;
    }
    while ( v24 != v21 );
  }
  else
  {
    if ( v4 > 69 )
    {
      if ( v4 == 70 )
      {
        v5 = *(__int64 **)(a2 + 48);
        v6 = *(_QWORD *)(a2 + 40);
        v7 = &v5[*(_QWORD *)(a2 + 56)];
        if ( v7 != v5 )
        {
          v8 = 0;
          do
          {
            v9 = *v5;
            v10 = *(_QWORD *)(v6 + 184) + 80 * *v5;
            v11 = *(_BYTE *)(v10 + 72);
            LOBYTE(v9) = v11 == 8;
            v8 |= (v11 == 3) | (unsigned int)v9;
            if ( a1 )
              sub_43E420((__int64)a1, v10);
            ++v5;
          }
          while ( v7 != v5 );
          return v8;
        }
      }
      return 0;
    }
    if ( ((v4 - 63) & 0xFFFFFFFD) != 0 || !*(_QWORD *)(a2 + 200) )
      return 0;
    v13 = *(QT::QAbstractItemView **)a2;
    QT::QAbstractItemView::model(*(QT::QAbstractItemView **)a2);
    v14 = QT::QAbstractItemView::model(v13);
    v15 = *(_QWORD **)(v14 + 216);
    if ( !v15 )
      v15 = *(_QWORD **)(v14 + 208);
    v16 = *(__int64 **)(a2 + 200);
    v17 = *v16;
    v36 = *v16 + 16 * v16[1];
    if ( v36 == *v16 )
      return 0;
    v8 = 0;
    do
    {
      v41 = 0;
      v42 = 0;
      dirtree_get_abspath_by_cursor(&v41, *v15, v17, 0);
      sub_42B280(&v43, (__int64)&v41);
      v19 = sub_42C9E0(&v43, (const char *)&v41);
      v20 = (const char *)v19;
      if ( v19 )
      {
        v18 = *(_BYTE *)(v19 + 72);
        LOBYTE(v19) = v18 == 3;
        v8 |= (v18 == 8) | (unsigned int)v19;
        if ( a1 )
          sub_43E420((__int64)a1, (__int64)v20);
        if ( v43 )
        {
          v44 = 0;
          a3 = qfree(v43, v20);
        }
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          a3 = qfree(v41, v20, a3);
        }
      }
      else
      {
        if ( v43 )
        {
          v44 = 0;
          a3 = qfree(v43, nullptr);
        }
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          a3 = qfree(v41, nullptr);
        }
      }
      v17 += 16;
    }
    while ( v36 != v17 );
  }
  return v8;
}
