__int64 __fastcall sub_CFA730(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v9; // rsi
  _DWORD v10[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v10);
  sub_DFDA50(v4, 48);
  v5 = sub_DA8220(a1, a2, v10);
  if ( (_BYTE)v5 )
  {
    if ( !v10[6] && v11 && v12 )
    {
      sub_E00FC0(v10);
      sub_DFFFB0(v10);
    }
    v6 = sub_CDA870((__int64)v10);
    if ( v6 )
    {
      v7 = sub_B54430(v6);
      if ( v7 <= 0x3F )
      {
        v9 = v3 & ((1LL << v7) - 1);
        if ( (v3 & (1LL << ((unsigned __int8)v7 - 1))) != 0 )
          v9 |= -(1LL << v7);
        v3 = v9;
      }
    }
    *(_QWORD *)sub_CE9C80((__int64)v10) = v3;
  }
  sub_DFF560(v10);
  return v5;
}

