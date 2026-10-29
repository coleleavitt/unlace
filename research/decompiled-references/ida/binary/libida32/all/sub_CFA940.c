__int64 __fastcall sub_CFA940(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rax
  _DWORD v8[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v8);
  sub_DFDA50(v4, 48);
  v5 = sub_DA8220(a1, a2, v8);
  if ( (_BYTE)v5 )
  {
    if ( !v8[6] && v9 && v10 )
    {
      sub_E00FC0(v8);
      sub_DFFFB0(v8);
    }
    v6 = sub_CDA870((__int64)v8);
    if ( v6 )
      sub_B54430(v6);
    *(_BYTE *)sub_CEAA70((__int64)v8) = v3;
  }
  sub_DFF560(v8);
  return v5;
}

