__int64 __fastcall sub_81C3A0(__int64 a1, int a2, const void *a3, __int64 a4, __int64 a5, int a6, int a7)
{
  unsigned __int8 v11; // al
  __int64 result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x79;
  if ( byte_4AD234C )
    sub_AC4570(121);
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 72) = a4;
  *(_DWORD *)(a1 + 76) = a2;
  *(_DWORD *)(a1 + 80) = a7;
  *(_DWORD *)(a1 + 84) = a6;
  if ( a4 )
    memmove((void *)(a1 + 16), a3, 8 * a4);
  v11 = sub_76C9C0(a1);
  *(_BYTE *)(a1 + 1) = (v11 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v11 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

