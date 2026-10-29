__int64 __fastcall sub_DA5220(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // r12d
  __int64 v4; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-88h] BYREF
  int v9; // [rsp+18h] [rbp-70h]
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+28h] [rbp-60h]
  _QWORD v12[11]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v8);
  sub_DFDA50(v2, 48);
  if ( !v9 || v9 == 2 )
  {
    if ( !v10 )
    {
LABEL_5:
      v3 = 1;
      v4 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
      sub_DFF4A0(v4, v8);
      goto LABEL_6;
    }
  }
  else if ( v9 != 3 && !(v8[0] | v11) )
  {
    goto LABEL_5;
  }
  v3 = sub_DA5070(a1, a2, v8, 3);
  if ( (_BYTE)v3 )
  {
    if ( (unsigned __int8)sub_CDA840((__int64)v8) || v9 || *(_DWORD *)(sub_CDA220((__int64)v8) + 20) != -1 )
    {
      v6 = *(_QWORD *)(a1 + 176);
      sub_CDA6F0((__int64)v12, (__int64)v8, 0);
      v7 = sub_DFD980(v6, 48);
      sub_DFF520(v7);
      sub_DFF560(v12);
    }
    else
    {
      v3 = 0;
      v12[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      sub_E0FE60(a1, v12, 2499, 0);
    }
  }
LABEL_6:
  sub_DFF560(v8);
  return v3;
}

