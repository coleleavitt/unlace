__int64 __fastcall sub_FE34D0(const void *a1, size_t a2, __int16 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v10; // ebx
  bool v11; // r12
  char v12; // dl
  char v13; // dl
  char v14; // cl

  result = sub_FDD620(a5, a4);
  if ( (_DWORD)result == 1 )
  {
    if ( (*(_BYTE *)(a5 + 2) & 4) == 0 && (a4 & 0x10A026) != 0 )
    {
      result = sub_6F3470(a6, a1, a2);
      *(_WORD *)result = *(_WORD *)result & 0xFE00 | 5;
      *(_QWORD *)result |= 0x40080000000uLL;
    }
  }
  else
  {
    v10 = result;
    v11 = (_DWORD)result == 3;
    if ( (_DWORD)result == 2 )
    {
      result = sub_6F3470(a6, a1, a2);
      v14 = *(_BYTE *)(result + 3);
      *(_WORD *)result = *(_WORD *)result & 0xFE00 | 5;
      *(_BYTE *)(result + 3) = v14 & 0xF7;
      *(_BYTE *)(result + 3) = v14 & 0xE7 | 0x10;
      *(_BYTE *)(result + 3) |= 0x80u;
    }
    else
    {
      result = sub_6F3470(a6, a1, a2);
      *(_WORD *)result = *(_WORD *)result & 0xFE00 | a3 & 0x1FF;
      v12 = (8 * v11) | *(_BYTE *)(result + 3) & 0xF7;
      *(_BYTE *)(result + 3) = v12;
      if ( v10 == 3 || (v12 & 0x3A) != 0 )
        *(_BYTE *)(result + 3) = v12 & 0x6F | 0x80;
      else
        *(_BYTE *)(result + 3) = (16 * (v10 == 2)) | (((*(_BYTE *)(result + 4) & 0x30) != 0) << 7) | v12 & 0x6F;
      v13 = 1;
      if ( (*(_BYTE *)(result + 3) & 0x3A) == 0 )
        v13 = (*(_BYTE *)(result + 4) & 0x30) != 0;
      *(_BYTE *)(result + 3) = (v13 << 7) | *(_BYTE *)(result + 3) & 0x7F;
    }
  }
  return result;
}
