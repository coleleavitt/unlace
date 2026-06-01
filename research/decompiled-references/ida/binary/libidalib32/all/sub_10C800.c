__int64 __fastcall sub_10C800(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r13
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d

  sub_199E60(a1, a3);
  *(_QWORD *)a1 = &off_230758;
  *(_QWORD *)(a1 + 16) = 0;
  result = sub_F1870((_DWORD *)(a1 + 24), a4);
  *(_BYTE *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  if ( a2 )
  {
    v7 = operator new(0xA8u);
    result = sub_10C730(v7, a2, a3, v8, v9, v10);
    *(_QWORD *)(a1 + 16) = v7;
  }
  return result;
}

