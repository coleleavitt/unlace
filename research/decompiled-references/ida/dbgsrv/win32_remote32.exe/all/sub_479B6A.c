/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479B6A
// Address: 0x00479B6A

//----- (00479B6A) --------------------------------------------------------
char __cdecl sub_479B6A(unsigned __int64 *a1, __int64 a2, __int16 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int16 v4; // ax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  char v8; // cl

  v3 = *a1;
  v4 = sub_463600(a2 & *a1 & 0xFFFFFFFFFFFFFLL, a3);
  if ( v4 > 8u )
    return 1;
  if ( v4 < 8u )
    return 0;
  LODWORD(v6) = sub_4634C0(1, a3);
  if ( ((v3 & (v6 - 1)) >> 32) & 0xFFFFF | (unsigned int)v3 & ((_DWORD)v6 - 1) )
    return 1;
  if ( a3 == 48 )
  {
    v8 = (v3 & 0x7FF0000000000000LL) != 0;
  }
  else
  {
    LODWORD(v7) = a2 & (v3 >> 4);
    HIDWORD(v7) = (unsigned __int16)(WORD2(a2) & (HIDWORD(v3) >> 4));
    v8 = sub_463600(v7, a3);
  }
  return v8 & 1;
}
// 479BB5: variable 'v6' is possibly undefined
