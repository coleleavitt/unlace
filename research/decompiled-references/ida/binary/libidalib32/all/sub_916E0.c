__int64 __fastcall sub_916E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int8 v5; // al
  __int16 v6; // dx
  unsigned __int8 v7; // [rsp+Fh] [rbp-79h]
  unsigned __int8 v8; // [rsp+Fh] [rbp-79h]
  _BYTE v9[88]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 21) )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 || a1 != sub_15E0E0(v3) )
    return 0;
  sub_168960(
    v9,
    *(_QWORD *)(a1 + 8),
    *(unsigned int *)(a2 + 8),
    *(unsigned int *)(a2 + 12),
    (unsigned int)*(__int16 *)(a2 + 16));
  v5 = sub_91180(a1, a2);
  if ( !v5 )
  {
    sub_1692D0(v9);
    return 0;
  }
  v6 = *(_WORD *)(a2 + 16);
  if ( v6 != (__int16)0x8000 )
  {
    v7 = v5;
    sub_91660(a1, v6);
    v5 = v7;
  }
  v8 = v5;
  sub_1692D0(v9);
  sub_15E8C0(*(_QWORD *)(a1 + 8), 0);
  return v8;
}

