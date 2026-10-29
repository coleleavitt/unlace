/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85CC0
// Address: 0x00085CC0

//----- (00085CC0) --------------------------------------------------------
unsigned int __usercall sub_85CC0@<eax>(unsigned int a1@<edx>, unsigned int *dest, __int16 *src, char a4, char a5)
{
  int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  char v9; // cl
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  unsigned int v16; // [esp+8h] [ebp-14h]

  v5 = src[12];
  LOBYTE(a1) = 1;
  v16 = a1;
  if ( v5 > 266 )
  {
    if ( (unsigned __int16)v5 != 267 )
    {
      if ( (unsigned __int16)v5 == 523 )
      {
        memcpy(dest, src, 0x60u);
        memcpy(dest + 28, src + 64, 0x88u);
        dest[24] = *((_DWORD *)src + 24);
        dest[25] = *((_DWORD *)src + 26);
        dest[26] = *((_DWORD *)src + 28);
        v6 = *((_DWORD *)src + 30);
        dest[27] = v6;
        LOBYTE(v6) = 1;
        v16 = v6;
        goto LABEL_12;
      }
      goto LABEL_8;
    }
  }
  else if ( (_WORD)v5 && (unsigned __int16)v5 != 263 )
  {
LABEL_8:
    if ( !a4 )
      sub_3ECA0((int)"The input file has non-standard magic number (%x)", src[12]);
    v16 = 0;
  }
  memcpy(dest, src, 0xF8u);
LABEL_12:
  if ( (unsigned __int16)(*((_WORD *)dest + 46) - 10) >= 4u )
  {
    if ( (v7 = dest[14], v8 = dest[15], v7 < v8) || v8 && (v8 & (v8 - 1)) != 0 || v7 && (v7 & (v7 - 1)) != 0 )
    {
      if ( !a4 )
        sub_85EB0("Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)", v7, v8);
    }
  }
  v9 = a5;
  v10 = dest[20];
  if ( (v10 > 0x77000000 || v10 < dest[21]) && !a4 )
  {
    sub_85EB0("Invalid file: bad ImageSize value %x", v10);
    v9 = a5;
  }
  if ( v9 )
  {
    v11 = dest[29];
    if ( v11 - 1 <= 0xE )
      memset(&dest[2 * v11 + 30], 0, 128 - 8 * v11);
    v12 = 16 * (*((_WORD *)dest + 12) == 523);
    v13 = *((unsigned __int16 *)dest + 10) + 24;
    v14 = v12 + 248 - v13;
    if ( v12 + 248 > v13 && v13 >= v12 + 120 )
    {
      if ( !a4 )
        sub_1C900();
      memset(&dest[2 * (16 - ((v14 + 7) >> 3)) + 30], 0, (v14 + 7) & 0xFFFFFFF8);
    }
  }
  return v16;
}
