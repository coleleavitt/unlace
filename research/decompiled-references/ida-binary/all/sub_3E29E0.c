__int64 __fastcall sub_3E29E0(__int64 *a1, char *a2, __int64 a3, __int64 a4, double a5)
{
  char *v5; // r12
  unsigned int v6; // ebp
  __int64 v7; // r13
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r15d
  char *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // [rsp+8h] [rbp-60h]
  unsigned int v28; // [rsp+Ch] [rbp-5Ch]
  _DWORD v29[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v30 = __readfsqword(0x28u);
  v6 = a3;
  ++dword_8D1258;
  if ( (debug & 0x40000) != 0 )
  {
    v24 = *((_QWORD *)a2 + 1);
    a2 = sub_3DED80((__int64)a1, 1);
    sub_3E25E0((__int64)"<%s> insert_nodes(count=%zu, index=%d)\n", (__int64)a2, v24, v6, v25, v26);
  }
  v7 = (int)v6;
  if ( a1[3] < (unsigned __int64)(int)v6 )
  {
    if ( !under_debugger )
      interr(40278, a2, a3, a4, a5);
    BUG();
  }
  sub_3DF8D0((__int64)v29, a1[1], (__int64)a1, 0, a5);
  v9 = *((_DWORD *)v5 + 2) + v6 - 1;
  if ( (debug & 0x40000) != 0 )
  {
    v27 = *((_DWORD *)v5 + 2) + v6 - 1;
    v10 = v29[1];
    v28 = v29[0];
    v11 = sub_3DED80((__int64)a1, 1);
    sub_3E25E0(
      (__int64)"<%s> model->beginInsertRows(parent={row=%d, col=%d, this}, first=%d, last=%d)\n",
      (__int64)v11,
      v28,
      v10,
      v6,
      v27);
    v9 = v27;
  }
  QT::QAbstractItemModel::beginInsertRows(a1[1], v29, v6, (unsigned int)v9, v8, v9);
  v12 = *(__int64 **)v5;
  v13 = *(_QWORD *)v5 + 8LL * *((_QWORD *)v5 + 1);
  if ( v13 != *(_QWORD *)v5 )
  {
    do
    {
      v14 = *v12++;
      *(_QWORD *)(v14 + 40) = a1;
    }
    while ( v12 != (__int64 *)v13 );
    v15 = 8LL * *((_QWORD *)v5 + 1);
    v16 = v15 >> 3;
    if ( v15 >> 3 )
    {
      v17 = a1[3];
      v18 = *(__int64 **)v5;
      v19 = a1[2];
      if ( a1[4] < (unsigned __int64)(v16 + v17) )
      {
        v23 = qvector_reserve(a1 + 2, v19, v16 + v17, 8);
        a1[2] = v23;
        v17 = a1[3];
        v19 = v23;
      }
      v20 = 8 * v7;
      memmove((void *)(v19 + v20 + v15), (const void *)(v19 + v20), 8 * v17 - v20);
      v21 = 0;
      if ( v18 != &v18[(unsigned __int64)v15 / 8] )
      {
        do
        {
          *(_QWORD *)(v19 + v20 + v21) = v18[v21 / 8];
          v21 += 8LL;
        }
        while ( v21 != v15 );
      }
      a1[3] += v16;
    }
  }
  QT::QAbstractItemModel::endInsertRows((QT::QAbstractItemModel *)a1[1]);
  --dword_8D1258;
  return 1;
}
