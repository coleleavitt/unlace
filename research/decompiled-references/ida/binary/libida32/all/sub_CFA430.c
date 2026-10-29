__int64 __fastcall sub_CFA430(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // eax
  _DWORD v9[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(unsigned __int16 *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v9);
  sub_DFDA50(v4, 48);
  v5 = sub_DA8220(a1, a2, v9);
  if ( (_BYTE)v5 )
  {
    if ( !v9[6] && v10 && v11 )
    {
      sub_E00FC0(v9);
      sub_DFFFB0(v9);
    }
    v6 = sub_CDA870((__int64)v9);
    if ( v6 )
    {
      v7 = sub_B54430(v6);
      if ( v7 <= 0xF )
        v3 &= (1 << v7) - 1;
    }
    *(_WORD *)sub_CE90A0((__int64)v9) = v3;
  }
  sub_DFF560(v9);
  return v5;
}

