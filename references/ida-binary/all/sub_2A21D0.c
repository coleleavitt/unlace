unsigned __int64 __fastcall sub_2A21D0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rdi

  v3 = operator new(0x30u);
  v4 = *a2;
  *(_DWORD *)(v3 + 8) = 0;
  v5 = (_QWORD *)v3;
  v3 += 8;
  *(_QWORD *)(v3 + 8) = 0;
  *a1 = v5;
  v5[3] = v3;
  v5[4] = v3;
  v5[5] = 0;
  return sub_2A2040(v5, v4);
}
