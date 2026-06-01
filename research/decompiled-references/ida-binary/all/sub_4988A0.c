_QWORD *__fastcall sub_4988A0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  void (__fastcall *v15)(_QWORD *, __int64, _QWORD, __int64, __int64 *); // rax
  _QWORD v16[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v16[0] = sub_48B5B0((__int64)a2, a3);
  v16[1] = v5;
  if ( v16[0] != -1 )
  {
    v6 = (__int64 *)a2[27];
    if ( v6 )
      goto LABEL_3;
    goto LABEL_14;
  }
  if ( v5 )
    goto LABEL_5;
  v6 = (__int64 *)a2[27];
  if ( !v6 )
LABEL_14:
    v6 = (__int64 *)a2[26];
LABEL_3:
  v7 = *v6;
  v17 = -1;
  LOBYTE(v18) = 0;
  dirtree_resolve_cursor(&v17, v7, v16);
  if ( v17 != -1 && !(_BYTE)v18 )
  {
    v9 = sub_4A0FC0(a2[38], v17, 0);
    if ( v9 != -1 )
    {
      v10 = a2[38];
      v11 = v9;
      if ( (*(_BYTE *)(v10 + 1784) & 2) != 0 )
        v11 = sub_499380(*(_QWORD *)(v10 + 2472));
      if ( v11 >= 0 )
      {
        v12 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a2[38] + 2472LL));
        v13 = *(unsigned int *)(a3 + 4);
        v14 = v12;
        v15 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v12 + 96LL);
        v17 = -1;
        v18 = 0;
        v19 = 0;
        v15(a1, v14, (unsigned int)v11, v13, &v17);
        return a1;
      }
    }
  }
LABEL_5:
  *a1 = -1;
  a1[1] = 0;
  a1[2] = 0;
  return a1;
}
