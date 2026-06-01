__int64 __fastcall sub_CC7130(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // r8
  __int64 v7; // rax
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 584);
  if ( (_BYTE)v2 )
    return v2;
  if ( !*(_BYTE *)(a1 + 586) )
  {
    v7 = sub_CBED90(a1, a2);
    if ( !BYTE4(v7) )
      return 0;
    v8[0] = a2 | 4;
    if ( !(unsigned __int8)sub_CA4BA0(a1, v7, v8) )
      return 0;
  }
  v3 = *(_QWORD *)(a2 + 16);
  v4 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(v3 + 8));
  if ( !(unsigned __int8)sub_CB2AD0(a1, v4, *(_QWORD *)(v3 + 8), v3, v5) )
    return v2;
  v8[0] = v3 | 4;
  if ( !(unsigned __int8)sub_CA4D80(a1, v4, 0, v8) )
    return v2;
  return (unsigned int)sub_CC6FE0(a1, 1u, v3, v4 | 0x100000000LL);
}
