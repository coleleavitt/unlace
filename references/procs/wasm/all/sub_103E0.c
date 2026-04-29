__int64 __fastcall sub_103E0(__int64 a1, _QWORD *a2, _DWORD *a3, _QWORD *a4, _BYTE *a5)
{
  __int64 v5; // r14
  unsigned int v6; // r13d
  char next_byte; // al
  __int64 v9; // r15
  __int64 v11; // r13
  __int64 v12; // rbp
  unsigned int v13; // r12d
  char v14; // al

  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    next_byte = insn_get_next_byte(a1);
    v6 |= (next_byte & 0x7F) << (7 * v5);
    if ( next_byte >= 0 )
      break;
    if ( ++v5 == 5 )
      goto LABEL_4;
  }
  if ( v5 == 4 && (unsigned __int8)next_byte > 0xFu )
  {
LABEL_4:
    *a2 = 0;
    return 0;
  }
  v9 = v5 + 1;
  if ( v6 > 0x1F )
    return 0;
  *a2 = v6;
  *a3 = 0;
  v11 = *a2 >> 6;
  if ( v11 )
    return 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = insn_get_next_byte(a1);
    v13 |= (v14 & 0x7F) << (7 * v12);
    if ( v14 >= 0 )
      break;
    if ( ++v12 == 5 )
      goto LABEL_14;
  }
  if ( v12 != 4 || (unsigned __int8)v14 <= 0xFu )
  {
    v9 = v5 + v12 + 2;
    v11 = v13;
  }
LABEL_14:
  *a4 = v11;
  if ( a5 )
  {
    ++v9;
    *a5 = insn_get_next_byte(a1);
  }
  return v9;
}
