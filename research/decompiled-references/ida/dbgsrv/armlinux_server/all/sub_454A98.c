/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454A98
// Address: 0x0000000000454A98

//----- (0000000000454A98) ----------------------------------------------------
__int64 __fastcall sub_454A98(__int64 a1, char **a2, unsigned __int64 a3, __int64 a4, char a5)
{
  _QWORD *v6; // x25
  char **v7; // x26
  __int64 v8; // x0
  unsigned __int64 v9; // x27
  char *v10; // x1
  __int64 i; // x21
  _DWORD *v12; // x2
  char *v13; // x0
  __int16 v14; // w20
  unsigned __int64 v15; // x23
  unsigned __int64 v16; // x22
  _QWORD *v17; // x0
  __int64 v18; // x1
  _WORD *v19; // x0
  _QWORD *v20; // x0
  const void *v21; // x6
  unsigned int *v22; // x2
  int v23; // w1
  const void *v26[2]; // [xsp+A0h] [xbp-10h] BYREF

  v6 = (_QWORD *)(a1 + 88);
  v7 = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 88) = a1 + 136;
  *(_QWORD *)(a1 + 96) = 1;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(float *)(a1 + 120) = 1.0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 216) = sub_450B50;
  *(_QWORD *)(a1 + 224) = a1;
  v8 = a1 + 512;
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = a4;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 304) = -1;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_QWORD *)(v8 - 172) = 0;
  *(_QWORD *)(v8 - 164) = 0;
  *(_DWORD *)(a1 + 356) = 1;
  *(_QWORD *)(a1 + 672) = 0;
  *(_BYTE *)(a1 + 680) = 0;
  *(_BYTE *)(a1 + 684) = 0;
  *(_DWORD *)(a1 + 688) = 0;
  *(_BYTE *)(a1 + 692) = 0;
  *(_QWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = a1 + 752;
  *(_QWORD *)(a1 + 712) = 1;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  *(float *)(a1 + 736) = 1.0;
  *(_QWORD *)(a1 + 752) = 0;
  *(_BYTE *)(a1 + 760) = 0;
  *(_DWORD *)(a1 + 764) = 5;
  if ( !a2 )
  {
    v10 = "__cdecl";
    v7 = off_51A6B0;
    v9 = 132;
    goto LABEL_4;
  }
  v9 = a3;
  if ( a3 )
  {
    v10 = *a2;
LABEL_4:
    for ( i = 0; ; v10 = v7[i] )
    {
      v14 = i + 128;
      sub_452A08(v26, v10);
      v15 = sub_49E0C0((__int64 *)v26[0], *((_QWORD *)v26[0] - 3), 3339675911LL);
      v16 = v15 % *(_QWORD *)(a1 + 96);
      v17 = sub_453430(v6, v16, v26, v15);
      if ( v17 && (v18 = *v17, v19 = (_WORD *)(*v17 + 16LL), v18) )
      {
        *v19 = v14;
        v12 = v26[0];
        v13 = (char *)v26[0] - 24;
        if ( (char *)v26[0] - 24 == (char *)std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_6;
      }
      else
      {
        v20 = sub_49E050(0x20u);
        v21 = v26[0];
        v26[0] = &std::string::_Rep::_S_empty_rep_storage[3];
        *v20 = 0;
        v20[1] = v21;
        *((_WORD *)v20 + 8) = 0;
        *((_WORD *)sub_4535F0(v6, v16, v15, v20) + 8) = v14;
        v12 = v26[0];
        v13 = (char *)v26[0] - 24;
        if ( (char *)v26[0] - 24 == (char *)std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_6;
      }
      if ( &_pthread_key_create )
      {
        v22 = v12 - 2;
        do
          v23 = __ldaxr(v22);
        while ( __stlxr(v23 - 1, v22) );
      }
      else
      {
        v23 = *(v12 - 2);
        *(v12 - 2) = v23 - 1;
      }
      if ( v23 > 0 )
      {
LABEL_6:
        if ( ++i >= v9 )
          break;
        continue;
      }
      j__free_0(v13);
      if ( ++i >= v9 )
        break;
    }
  }
  sub_454820(a1, 0, a5);
  return (__int64)v26[1] ^ _stack_chk_guard;
}
// 51A6B0: using guessed type char *off_51A6B0[28];
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
