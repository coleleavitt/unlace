__int64 __fastcall sub_CDA340(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // r8
  __int64 v7; // rax
  _QWORD v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 1360);
  if ( (_BYTE)v2 )
    return v2;
  if ( !*(_BYTE *)(a1 + 1362) )
  {
    v7 = sub_CBEB30(a1, a2);
    if ( !BYTE4(v7) )
      return 0;
    v8[0] = a2 | 4;
    if ( !(unsigned __int8)sub_CFF720(a1, (unsigned int)v7, v8) )
      return 0;
  }
  v3 = *(_QWORD *)(a2 + 16);
  v4 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v3 + 8));
  if ( !(unsigned __int8)sub_CB6350(a1, v4, *(_QWORD *)(v3 + 8), v3, v5) )
    return v2;
  v8[0] = v3 | 4;
  if ( !(unsigned __int8)sub_D19550(a1, v4, 0, v8) )
    return v2;
  return (unsigned int)sub_CDA1F0(a1, 1u, v3, v4 | 0x100000000LL);
}
