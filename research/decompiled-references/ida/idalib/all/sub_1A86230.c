__int64 __fastcall sub_1A86230(__int64 *a1, int a2, __int64 a3)
{
  _QWORD *v4; // r13
  __int64 result; // rax
  __int16 v6; // dx
  __int64 v7; // [rsp+8h] [rbp-30h]

  v4 = (_QWORD *)sub_168B6C0((__int64)a1);
  sub_15F2480(*a1);
  result = sub_EEE9A0(24, v4, 8u);
  v6 = *(_WORD *)result & 0xFE00;
  LOBYTE(v6) = -101;
  *(_WORD *)result = v6;
  if ( unk_2CD7484 )
  {
    v7 = result;
    sub_EE9B50(155);
    result = v7;
  }
  *(_DWORD *)(result + 8) = a2;
  *(_QWORD *)(result + 16) = a3;
  return result;
}
