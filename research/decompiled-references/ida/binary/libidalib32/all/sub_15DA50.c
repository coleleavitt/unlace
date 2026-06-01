__int64 (__fastcall *__fastcall sub_15DA50(__int64 a1, __int64 a2, __int64 a3))(__int64 a1)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // eax
  int v12; // esi
  __int16 v13; // dx
  __int16 v14; // ax
  int v15; // ecx
  TScrollBar *v16; // rdi
  __int64 (__fastcall *result)(__int64); // rax
  __int64 v18; // rdi

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  qfree();
  qfree();
  *(_QWORD *)(a1 + 880) = v5;
  v7 = *(_QWORD *)(a1 + 752);
  *(_QWORD *)(a1 + 888) = v6;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, v7);
  v9 = *(_QWORD *)(a1 + 888);
  v10 = *(_QWORD *)(a1 + 752);
  *(_DWORD *)(a1 + 740) = v8;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v10);
  v12 = *(_DWORD *)(a1 + 740);
  v13 = v11 - v12;
  if ( v12 == v11 )
    v11 = v12 + 1;
  *(_DWORD *)(a1 + 744) = v11;
  if ( (unsigned __int16)(v13 - 1) >= 0x7FFEu )
    v13 = 32766;
  *(_WORD *)(a1 + 736) = v13;
  v14 = sub_152E50(a1);
  v15 = *(__int16 *)(a1 + 736);
  v16 = *(TScrollBar **)(a1 + 968);
  *(_WORD *)(a1 + 954) = v14;
  TScrollBar::setParams(v16, v14, 0, v15, *(_DWORD *)(a1 + 20), 1);
  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 384LL);
  if ( result != sub_157C10 )
    return (__int64 (__fastcall *)(__int64))result(a1);
  v18 = *(_QWORD *)(a1 + 848);
  if ( v18 )
    return (__int64 (__fastcall *)(__int64))(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 72LL))(
                                              v18,
                                              0,
                                              0);
  return result;
}

