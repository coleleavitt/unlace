_QWORD *__fastcall sub_9DFC10(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v3; // cx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r12
  _QWORD *result; // rax

  v3 = *(_WORD *)(a2 + 2);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = (v3 >> 3) & 0x7F;
  if ( (unsigned __int8)v6 > 0xCu )
    return sub_9DF520(a1, v5, a3, v6);
  v7 = 1LL << v6;
  v6 = v7;
  if ( (v7 & 0x19A0) != 0 )
    return sub_9DF520(a1, v5, a3, v6);
  v6 = v7 & 0x10;
  if ( (v7 & 0x10) == 0 )
    return sub_9DF520(a1, v5, a3, v6);
  v8 = a3;
  if ( (*(_WORD *)v5 & 0x1FF) != 0x47 )
  {
LABEL_9:
    a3 = v8;
    return sub_9DF520(a1, v5, a3, v6);
  }
  result = (_QWORD *)sub_9DDBF0(a1, *(_QWORD *)(v5 + 16));
  if ( !result )
  {
    v5 = *(_QWORD *)(a2 + 16);
    goto LABEL_9;
  }
  return result;
}
