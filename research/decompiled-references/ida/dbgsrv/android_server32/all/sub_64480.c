/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64480
// Address: 0x00064480

//----- (00064480) --------------------------------------------------------
int __fastcall sub_64480(int a1)
{
  int v2; // r0
  size_t v3; // r6
  unsigned int v4; // r2
  void *v5; // r0
  _DWORD *v6; // r7
  int v7; // r0
  unsigned int *v9; // [sp+8Ch] [bp-Ch]
  void **v10; // [sp+90h] [bp-8h]
  int *v11; // [sp+94h] [bp-4h]

  *(_DWORD *)a1 = &off_DA178;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 4;
  memset((void *)(a1 + 16), 0, 0x40u);
  *(_BYTE *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 80) = -1;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = -1;
  *(_DWORD *)(a1 + 96) = 0;
  memset((void *)(a1 + 100), 0, 0x18u);
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
  *(_DWORD *)(a1 + 124) = 24;
  memset((void *)(a1 + 184), 0, 0x28u);
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 224) = a1 + 228;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 260) = a1 + 264;
  *(_DWORD *)(a1 + 272) = -1;
  memset((void *)(a1 + 276), 0, 0x34u);
  *(_DWORD *)(a1 + 332) = 0;
  *(_DWORD *)(a1 + 328) = 1;
  *(_DWORD *)(a1 + 336) = -1;
  *(_DWORD *)(a1 + 340) = -1;
  *(_DWORD *)(a1 + 344) = -1;
  *(_BYTE *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 380) = 0;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 372) = 0;
  *(_DWORD *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_DWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 384) = -1;
  *(_WORD *)(a1 + 388) = 0;
  v10 = (void **)(a1 + 132);
  v11 = (int *)(a1 + 148);
  v9 = (unsigned int *)(a1 + 136);
  v2 = _strlen_chk("UNDEFINED", 10);
  v3 = v2;
  if ( v2 )
  {
    v4 = v2 + 1;
    if ( *(_DWORD *)(a1 + 140) >= (unsigned int)(v2 + 1) )
    {
      v6 = (_DWORD *)(a1 + 132);
      v5 = *v10;
    }
    else
    {
      v5 = qvector_reserve((int)v10, *v10, v4, 1u);
      v6 = (_DWORD *)(a1 + 132);
      *v10 = v5;
      v4 = v3 + 1;
    }
    *v9 = v4;
    memmove(v5, "UNDEFINED", v3);
    *(_BYTE *)(*v6 + v3) = 0;
  }
  else
  {
    *v9 = 0;
  }
  v7 = sub_67514();
  if ( v7 >= 8 )
  {
    if ( !under_debugger )
      interr(2777);
    __debugbreak();
  }
  *(_DWORD *)(a1 + 128) = v7;
  if ( *v11 )
  {
    sub_1B6B6(v11, 0);
    qfree((void *)*v11);
    *v11 = 0;
    *(_DWORD *)(a1 + 156) = 0;
  }
  return a1;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// DA178: using guessed type _UNKNOWN *off_DA178;
// E0550: using guessed type char under_debugger;
