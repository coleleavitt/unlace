__int64 __fastcall sub_D16220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  _BYTE *v6; // r13
  _DWORD v7[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+20h] [rbp-38h]

  sub_E291A0(v7, *(_QWORD *)(a1 + 168), a3);
  v3 = sub_CFDF60((__int64)v7);
  if ( (unsigned __int8)sub_DC8690(a1, a2, v3)
    && (v7[6] || !v8 || !*(_BYTE *)(v8 + 25))
    && (v4 = sub_DC9F80(a1, a2, v7), (_BYTE)v4) )
  {
    v6 = (_BYTE *)sub_D0C7E0((__int64)v7);
    *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *v6;
  }
  else
  {
    v4 = 0;
  }
  sub_E232A0(v7);
  return v4;
}
