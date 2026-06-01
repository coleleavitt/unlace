__int64 __fastcall sub_8C7300(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, __int64 a5)
{
  __int16 v7; // bp
  __int16 v8; // ax
  __int64 result; // rax
  unsigned __int8 v10; // al

  v7 = 2 - a4;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x31;
  if ( byte_4AD234C )
    sub_AC4570(49);
  v8 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 1) = (2 * v7) & 0x7FE | v8 & 0xF801;
  if ( a5 )
  {
    *(_QWORD *)(a5 + 40) = a3;
    *(_QWORD *)(a1 + 16) = a5 | 4;
    return a5 | 4;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a3 & 0xFFFFFFFFFFFFFFFBLL;
    v10 = sub_76D260(a1);
    *(_BYTE *)(a1 + 1) = (v10 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
    result = *(_BYTE *)(a1 + 2) & 0xF8 | (v10 >> 2) & 7u;
    *(_BYTE *)(a1 + 2) = result;
  }
  return result;
}

