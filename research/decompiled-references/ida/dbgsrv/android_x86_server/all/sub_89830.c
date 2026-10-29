/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89830
// Address: 0x00089830

//----- (00089830) --------------------------------------------------------
void __cdecl sub_89830(int a1)
{
  int v1; // eax
  size_t v2; // esi
  void **v3; // edx
  int v4; // ecx
  void *v5; // eax
  int v6; // eax
  int *v7; // [esp+1Ch] [ebp-50h]

  *(_DWORD *)a1 = &off_13851C;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = -1;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = -1;
  *(_BYTE *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 124) = 24;
  *(_DWORD *)(a1 + 128) = 4;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = -1;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 160) = a1 + 164;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 172) = a1 + 176;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 224) = a1 + 228;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 260) = a1 + 264;
  *(_DWORD *)(a1 + 272) = -1;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 292) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 300) = 0;
  *(_DWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 308) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 328) = 1;
  *(_OWORD *)(a1 + 332) = xmmword_EFCD0;
  *(_BYTE *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_DWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 372) = 0;
  *(_DWORD *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 380) = 0;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 384) = -1;
  *(_BYTE *)(a1 + 388) = 0;
  *(_BYTE *)(a1 + 389) = 0;
  v7 = (int *)(a1 + 148);
  v1 = __strlen_chk("UNDEFINED", 10);
  v2 = v1;
  if ( v1 )
  {
    v3 = (void **)(a1 + 132);
    v4 = v1 + 1;
    if ( *(_DWORD *)(a1 + 140) >= (unsigned int)(v1 + 1) )
    {
      v5 = *v3;
    }
    else
    {
      v5 = qvector_reserve(a1 + 132, *v3, v1 + 1, 1u);
      *(_DWORD *)(a1 + 132) = v5;
      v4 = v2 + 1;
    }
    *(_DWORD *)(a1 + 136) = v4;
    memmove(v5, "UNDEFINED", v2);
    *(_BYTE *)(*(_DWORD *)(a1 + 132) + v2) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 136) = 0;
  }
  v6 = sub_8E910();
  if ( v6 >= 8 )
  {
    if ( !(_BYTE)under_debugger )
      interr(2777);
    BUG();
  }
  *(_DWORD *)(a1 + 128) = v6;
  if ( *(_DWORD *)(a1 + 148) )
  {
    sub_1C180(v7, 0);
    qfree((void *)*v7);
    *(_DWORD *)(a1 + 148) = 0;
    *(_DWORD *)(a1 + 156) = 0;
  }
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// EFCD0: using guessed type __int128 xmmword_EFCD0;
// 13851C: using guessed type int (__cdecl *off_13851C)(int, int);
// 13E34C: using guessed type int under_debugger;
