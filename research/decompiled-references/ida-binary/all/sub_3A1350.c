bool __fastcall sub_3A1350(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  _DWORD v11[4]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a1 + 2472);
  v4 = *v3;
  v10 = 0;
  (*(void (__fastcall **)(_DWORD *, __int64 *, __int64 *))(v4 + 496))(v11, v3, &v10);
  if ( (v11[1] | v11[0]) < 0
    || !v12
    || (v5 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2472)), v6 = sub_499520(v5, v11), v6 == -1)
    || (v9 = sub_4A0A30(a1, v6, 0), v9 == -1) )
  {
    v7 = *(_QWORD **)(a2 + 8);
  }
  else
  {
    v7 = (_QWORD *)operator new(0x10u);
    *v7 = diffpos_sync_pos_t___vtable;
    v7[1] = v9;
    *(_QWORD *)(a2 + 8) = v7;
  }
  return v7 != nullptr;
}
