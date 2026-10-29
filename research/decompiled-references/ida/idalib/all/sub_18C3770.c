__int64 __fastcall sub_18C3770(__int64 a1, int a2)
{
  _QWORD *v3; // rsi
  unsigned __int8 *v4; // rax
  int v5; // edx
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD **)(a1 + 248);
  v4 = (unsigned __int8 *)v3[2181];
  v5 = v4[8];
  if ( v5 == v4[14] )
  {
    v6 = v3[2340];
  }
  else if ( v5 == v4[30] )
  {
    v6 = v3[2341];
  }
  else
  {
    v6 = v3[2342];
  }
  result = sub_EEE9A0(24, v3, 8u);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x3A;
  if ( unk_2CD7484 )
  {
    v8 = result;
    sub_EE9B50(58);
    result = v8;
  }
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v6;
  *(_DWORD *)(result + 16) = a2;
  return result;
}
