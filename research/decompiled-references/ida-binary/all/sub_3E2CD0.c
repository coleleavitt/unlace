__int64 __fastcall sub_3E2CD0(__int64 *a1, char *a2, unsigned __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbp
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // rbp
  _QWORD *v10; // r14
  _QWORD *v11; // r13
  _QWORD *v12; // rbx
  unsigned int v14; // r15d
  char *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // [rsp+Ch] [rbp-5Ch]
  _DWORD v19[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v5 = (int)a3;
  v20 = __readfsqword(0x28u);
  if ( (int)a3 > 0 )
  {
    ++dword_8D1258;
    v6 = (unsigned int)a2;
    if ( (debug & 0x40000) != 0 )
    {
      a2 = sub_3DED80((__int64)a1, 1);
      sub_3E25E0((__int64)"<%s> delete_nodes(index=%d, count=%d)\n", (__int64)a2, v6, (unsigned int)v5, v16, v17);
    }
    v7 = a1[3];
    if ( v7 < (int)v6 || (a3 = (int)(v5 + v6), v7 < a3) )
    {
      if ( !under_debugger )
        interr(40279, a2, a3, a4, a5);
      BUG();
    }
    sub_3DF8D0((__int64)v19, a1[1], (__int64)a1, 0, a5);
    v8 = v5 + v6 - 1;
    if ( (debug & 0x40000) != 0 )
    {
      v14 = v19[1];
      v18 = v19[0];
      v15 = sub_3DED80((__int64)a1, 1);
      sub_3E25E0(
        (__int64)"<%s> model->beginRemoveRows(parent={row=%d, col=%d, this}, first=%d, last=%d)\n",
        (__int64)v15,
        v18,
        v14,
        v6,
        (unsigned int)v5 + v6 - 1);
      v8 = v5 + v6 - 1;
    }
    QT::QAbstractItemModel::beginRemoveRows(a1[1], v19, v6, v8);
    v9 = v5;
    v10 = (_QWORD *)(a1[2] + 8LL * (int)v6);
    v11 = &v10[v9];
    v12 = v10;
    do
    {
      if ( *v12 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
      ++v12;
    }
    while ( v11 != v12 );
    memmove(v10, &v10[v9], a1[2] + 8 * a1[3] - (_QWORD)v11);
    a1[3] -= (v9 * 8) >> 3;
    QT::QAbstractItemModel::endRemoveRows((QT::QAbstractItemModel *)a1[1]);
    --dword_8D1258;
  }
  return 1;
}
