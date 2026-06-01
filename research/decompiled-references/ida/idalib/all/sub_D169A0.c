__int64 __fastcall sub_D169A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 v6; // r13
  __int64 v7; // rax
  _DWORD v8[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-38h]

  sub_E291A0(v8, *(_QWORD *)(a1 + 168), a3);
  v3 = sub_CFDF60((__int64)v8);
  if ( (unsigned __int8)sub_DC8690(a1, a2, v3)
    && (v8[6] || !v9 || !*(_BYTE *)(v9 + 25))
    && (v4 = sub_DC9F80(a1, a2, v8), (_BYTE)v4) )
  {
    v6 = sub_D0EA30((__int64)v8);
    v7 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
    sub_E231E0(v7, v6);
  }
  else
  {
    v4 = 0;
  }
  sub_E232A0(v8);
  return v4;
}
