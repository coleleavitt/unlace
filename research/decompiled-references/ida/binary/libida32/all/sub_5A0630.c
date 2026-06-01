__int64 __fastcall sub_5A0630(_QWORD *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r13d
  int v6; // r14d
  int v8; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a3 < *a2 && *sub_4EE820((__int64)(a1 + 203), a3) == a3 )
    sub_5A03C0(a1, (__int64)a2, a3);
  v4 = sub_3BCF60((__int64)a1, a3);
  v5 = v4;
  if ( v4 == -1 || (v6 = sub_3B9AA0((__int64)a1, v4, 4), (~BYTE1(v6) & 6) != 0) || (v6 & 0x10000) == 0 )
  {
    sub_5A0500(a1, a2, a3);
    return 1;
  }
  if ( (sub_3C0CC0((__int64)a1, v5) & 2) == 0 )
  {
    if ( (v6 & 0x1000) == 0 || (unsigned int)find_sp_value(&v8, v5, 0xFFFFFFFFLL) != 1 )
      return 0;
    sub_5A02E0(a1, (__int64)a2, v5, v8);
  }
  return 1;
}

