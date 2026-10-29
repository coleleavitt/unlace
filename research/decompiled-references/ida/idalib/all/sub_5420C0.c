__int64 __fastcall sub_5420C0(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // edx
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a2;
  v9[1] = __readfsqword(0x28u);
  if ( !(_BYTE)v2 )
    return 1;
  v5 = *(_QWORD *)(*a1 + 1824LL);
  v6 = sub_5340D0(v5, v2);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(v6 + 16);
  v3 = 0;
  if ( v7 != -1 )
  {
    *(_WORD *)(v6 + 68) &= ~0x8000u;
    sub_533120((_QWORD *)(v5 + 80), v7);
    clear_tinfo_t(v5 + 216);
    v8 = sub_3BDE50(a1, v7);
    v9[0] = sub_3BDD60(a1, v8);
    if ( v9[0] != -1 )
      sub_7BEF80(v9, *a1, &stru_10A000, 83);
    return 1;
  }
  return v3;
}
