/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E1F8
// Address: 0x0004E1F8

//----- (0004E1F8) --------------------------------------------------------
int __fastcall sub_4E1F8(int a1, char **a2, unsigned int a3, int a4, char a5)
{
  const void *v6; // r3
  char **v7; // r7
  char *v8; // r1
  int v9; // r6
  _DWORD *v10; // r3
  char *v11; // r0
  char *v12; // t1
  __int16 v13; // r5
  unsigned int v14; // r8
  int *v15; // r0
  int v16; // r0
  const void **v17; // r0
  unsigned int *v18; // r3
  int v19; // r2
  _DWORD *v21; // [sp+4h] [bp-28h]
  int v22; // [sp+8h] [bp-24h]
  unsigned int v23; // [sp+Ch] [bp-20h]
  const void *v24[3]; // [sp+20h] [bp-Ch] BYREF

  v23 = a3;
  *(_DWORD *)(a1 + 108) = a4;
  *(_DWORD *)(a1 + 48) = a1 + 72;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v6 = (const void *)_stack_chk_guard;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v24[1] = v6;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 52) = 1;
  *(_DWORD *)(a1 + 64) = 1065353216;
  *(_DWORD *)(a1 + 112) = sub_4B6C4;
  *(_DWORD *)(a1 + 116) = a1;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 1;
  *(_DWORD *)(a1 + 592) = 0;
  *(_BYTE *)(a1 + 596) = 0;
  *(_BYTE *)(a1 + 600) = 0;
  *(_DWORD *)(a1 + 604) = 0;
  *(_BYTE *)(a1 + 608) = 0;
  *(_DWORD *)(a1 + 612) = 0;
  *(_DWORD *)(a1 + 620) = 1;
  *(_DWORD *)(a1 + 624) = 0;
  *(_DWORD *)(a1 + 628) = 0;
  *(_DWORD *)(a1 + 632) = 1065353216;
  *(_DWORD *)(a1 + 636) = 0;
  *(_DWORD *)(a1 + 156) = -1;
  *(_DWORD *)(a1 + 616) = a1 + 640;
  *(_DWORD *)(a1 + 640) = 0;
  *(_BYTE *)(a1 + 644) = 0;
  *(_DWORD *)(a1 + 648) = 5;
  if ( !a2 )
  {
    v23 = 132;
    v8 = "__cdecl";
    v7 = off_D0B58;
    goto LABEL_4;
  }
  if ( a3 )
  {
    v7 = a2;
    v8 = *a2;
LABEL_4:
    v21 = (_DWORD *)(a1 + 48);
    v9 = 0;
    while ( 1 )
    {
      v13 = v9 + 128;
      sub_4CBA8(v24, v8);
      v14 = sub_7FDEC((unsigned __int8 *)v24[0], *((_DWORD *)v24[0] - 3), -955291385);
      v22 = v14 % *(_DWORD *)(a1 + 52);
      v15 = sub_4D264(v21, v22, v24, v14);
      if ( v15 && (v16 = *v15) != 0 )
      {
        *(_WORD *)(v16 + 8) = v13;
        v10 = v24[0];
        v11 = (char *)v24[0] - 12;
        if ( (char *)v24[0] - 12 == (char *)std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_6;
      }
      else
      {
        v17 = (const void **)sub_808A4(0x10u);
        *v17 = nullptr;
        v17[1] = v24[0];
        *((_WORD *)v17 + 4) = 0;
        v24[0] = &std::string::_Rep::_S_empty_rep_storage[3];
        *((_WORD *)sub_4D368(v21, v22, v14, v17) + 4) = v13;
        v10 = v24[0];
        v11 = (char *)v24[0] - 12;
        if ( (char *)v24[0] - 12 == (char *)std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_6;
      }
      if ( &_pthread_key_create )
      {
        v18 = v10 - 1;
        __dmb(0xBu);
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        __dmb(0xBu);
      }
      else
      {
        v19 = *(v10 - 1);
        *(v10 - 1) = v19 - 1;
      }
      if ( v19 > 0 )
      {
LABEL_6:
        if ( ++v9 >= v23 )
          break;
        goto LABEL_7;
      }
      sub_809EC(v11);
      if ( ++v9 >= v23 )
        break;
LABEL_7:
      v12 = v7[1];
      ++v7;
      v8 = v12;
    }
  }
  sub_4E030(a1, 0, a5);
  return a1;
}
// D0B58: using guessed type char *off_D0B58[28];
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
