__int64 __fastcall sub_498E70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 v11; // rax
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  char v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 120) & 1) != 0 )
    goto LABEL_11;
  v12[0] = sub_48B5B0(a2, a3);
  v12[1] = v7;
  if ( v12[0] == -1 )
  {
    if ( v7 )
      goto LABEL_11;
  }
  v8 = *(__int64 **)(a2 + 216);
  if ( !v8 )
    v8 = *(__int64 **)(a2 + 208);
  v9 = *v8;
  v13 = -1;
  v14 = 0;
  dirtree_resolve_cursor(&v13, v9, v12);
  if ( v13 == -1 )
    goto LABEL_11;
  if ( !v14 )
  {
    sub_4988A0(&v13, (_QWORD *)a2, a3);
    if ( (int)(HIDWORD(v13) | v13) >= 0 && v15 )
    {
      v11 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(*(_QWORD *)(a2 + 304) + 2472LL));
      (*(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 144LL))(a1, v11, &v13, a4);
      return a1;
    }
    goto LABEL_11;
  }
  if ( a4 == 9 || !*(_DWORD *)(a3 + 4) )
  {
LABEL_11:
    sub_4E1980(a1, a2, a3, a4);
    return a1;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 2;
  *(_OWORD *)a1 = 0;
  return a1;
}
