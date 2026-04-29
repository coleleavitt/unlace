bool __fastcall sub_14290(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)(*(_BYTE *)(a4 + 1) - 3) > 1u || !a6 || !a2 || !sub_141C0(a3, a4) )
    return 0;
  if ( !(unsigned int)sub_7FF0(0x2Eu, &v14, a3, a4) )
    goto LABEL_12;
  if ( !(*(_QWORD *)(a2 + 16) & 0x10LL | v14 & 1) )
    return 0;
  if ( (v14 & 1) != 0 )
  {
LABEL_12:
    v13 = *(_QWORD *)(a4 + 16);
    v12 = v13 + get_spd(a2, *(_QWORD *)(a3 + 16));
  }
  else
  {
    v11 = *(unsigned __int16 *)(a2 + 40);
    if ( !*(_WORD *)(a2 + 40) )
      v11 = (1 << (get_func_bitness(a2) + 4)) / 8;
    v12 = *(_QWORD *)(a4 + 16) - *(_QWORD *)(a2 + 56) - v11;
  }
  if ( a5 > v12 )
    return 0;
  return a5 + a6 > v12;
}
