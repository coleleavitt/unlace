__int64 __fastcall sub_CF2D20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 v6; // r13
  __int64 v7; // rbp
  _DWORD v8[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-38h]

  sub_E05460(v8, *(_QWORD *)(a1 + 168), a3);
  v3 = sub_CDA220((__int64)v8);
  if ( (unsigned __int8)sub_DA4950(a1, a2, v3)
    && (v8[6] || !v9 || !*(_BYTE *)(v9 + 25))
    && (v4 = sub_DA6240(a1, a2, v8), (_BYTE)v4) )
  {
    v6 = sub_CEB200((__int64)v8);
    v7 = sub_DFD980(*(_QWORD *)(a1 + 176), 64);
    sub_DFF4A0(v7, v6);
    *(_QWORD *)(v7 + 48) = *(_QWORD *)(v6 + 48);
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v6 + 56);
  }
  else
  {
    v4 = 0;
  }
  sub_DFF560(v8);
  return v4;
}

