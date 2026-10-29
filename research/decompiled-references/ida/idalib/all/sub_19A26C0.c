__int64 __fastcall sub_19A26C0(__int64 a1, int a2, __int16 a3)
{
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  __int64 result; // rax
  bool v8; // r12
  bool v9; // zf
  __int16 v10; // dx
  __int64 v11; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD **)(a1 + 248);
  v6 = v5[2330];
  result = sub_EEE9A0(16, v5, 8u);
  v8 = a3 == 149;
  v9 = unk_2CD7484 == 0;
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x73;
  if ( !v9 )
  {
    v11 = result;
    sub_EE9B50(115);
    result = v11;
  }
  v10 = *(_WORD *)(result + 1);
  *(_QWORD *)(result + 8) = v6;
  *(_DWORD *)(result + 4) = a2;
  v10 &= 0xF801u;
  *(_WORD *)(result + 1) = v10;
  *(_BYTE *)(result + 2) = (8 * v8) | HIBYTE(v10) & 0xF7;
  return result;
}
