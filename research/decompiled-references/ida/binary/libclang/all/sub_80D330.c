__int64 __fastcall sub_80D330(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6, unsigned __int64 a7)
{
  __int16 v11; // dx
  unsigned __int8 v12; // al
  int v13; // edx
  __int64 result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0xC;
  if ( byte_4AD234C )
    sub_AC4570(12);
  v11 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 16) = a5;
  *(_DWORD *)(a1 + 20) = a6;
  *(_QWORD *)(a1 + 24) = a7;
  *(_WORD *)(a1 + 1) = v11 & 0xC001 | ((a3 & 7) << 11);
  if ( a3 > 1 )
  {
    v12 = 0;
    if ( a3 != 6 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v12 = 0;
  if ( a3 >= 0 )
LABEL_5:
    v12 = (8 * sub_79B8A0(a7)) & 0x1F;
LABEL_6:
  v13 = *(unsigned __int8 *)(a1 + 2);
  *(_BYTE *)(a1 + 1) &= 0x3Fu;
  result = v13 & 0xFFFFFFF8 | (v12 >> 2) & 6;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

