/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400183D0
// Address: 0x00000001400183D0

//----- (00000001400183D0) ----------------------------------------------------
__int64 __fastcall sub_1400183D0(__int64 a1, __int64 a2, char a3, char a4)
{
  int v6; // edx
  unsigned __int8 v9; // si
  __int128 v10; // xmm0
  __int64 v11; // rdi
  __int16 v12; // ax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r14

  v6 = *(unsigned __int16 *)(a2 + 24);
  v9 = 1;
  if ( v6 && v6 != 263 && v6 != 267 )
  {
    if ( v6 == 523 )
    {
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
      *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 128);
      *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 144);
      *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 160);
      *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 176);
      *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 192);
      *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 208);
      *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 224);
      *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 240);
      *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 256);
      *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
      *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 104);
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 120);
      goto LABEL_9;
    }
    if ( !a3 )
      sub_140004990((signed __int64)"The input file has non-standard magic number (%x)", v6);
    v9 = 0;
  }
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  v10 = *(_OWORD *)(a2 + 112);
  v11 = a2 + 128;
  *(_OWORD *)(a1 + 112) = v10;
  *(_OWORD *)(a1 + 128) = *(_OWORD *)v11;
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(v11 + 16);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(v11 + 32);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(v11 + 48);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(v11 + 64);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(v11 + 80);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)(v11 + 96);
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(v11 + 112);
LABEL_9:
  v12 = *(_WORD *)(a1 + 92);
  if ( v12 != 10 && (unsigned __int16)(v12 - 11) > 2u )
  {
    if ( (v13 = *(_DWORD *)(a1 + 60), v14 = *(_DWORD *)(a1 + 56), v14 < v13)
      || v13 && ((v13 - 1) & v13) != 0
      || v14 && ((v14 - 1) & v14) != 0 )
    {
      if ( !a3 )
        sub_1400186A0(
          "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
          v14,
          v13);
    }
  }
  v15 = *(_DWORD *)(a1 + 80);
  if ( (v15 > 0x77000000 || v15 < *(_DWORD *)(a1 + 84)) && !a3 )
    sub_1400186A0("Invalid file: bad ImageSize value %x", v15);
  if ( a4 )
  {
    v16 = *(unsigned int *)(a1 + 116);
    if ( (_DWORD)v16 && (unsigned int)v16 < 0x10 )
      memset((void *)(a1 + 8 * (v16 + 15)), 0, 8 * (16 - v16));
    v17 = 248;
    if ( *(_WORD *)(a1 + 24) == 523 )
      v17 = 264;
    v18 = *(unsigned __int16 *)(a1 + 20) + 24LL;
    if ( v18 < v17 && v18 >= v17 - 128 )
    {
      if ( !a3 )
        sub_140002CE0((struct __crt_locale_pointers *)"Warning: image directories are covered by the section table, some "
                                                      "entries will be ignored\n");
      memset((void *)(a1 + 8 * (31 - ((v17 - v18 + 7) >> 3))), 0, 8 * ((v17 - v18 + 7) >> 3));
    }
  }
  return v9;
}
