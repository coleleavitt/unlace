__int64 __fastcall sub_19A2760(__int64 a1, int a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD **)(a1 + 248);
  v4 = v3[2383];
  result = sub_EEE9A0(16, v3, 8u);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x68;
  if ( unk_2CD7484 )
  {
    v6 = result;
    sub_EE9B50(104);
    result = v6;
  }
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
