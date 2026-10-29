/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100052E40
// Address: 0x0000000100052E40

//----- (0000000100052E40) ----------------------------------------------------
__int64 __fastcall sub_100052E40(__int64 a1, __int64 a2, unsigned __int8 a3, char a4)
{
  unsigned int v6; // r13d
  int v7; // eax
  int v8; // eax
  __int16 v9; // cx
  char v10; // al
  off_t v11; // rsi
  int *v12; // r14
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v20; // [rsp+4h] [rbp-3Ch] BYREF
  __int64 v21; // [rsp+8h] [rbp-38h] BYREF

  v20 = 0;
  *(_BYTE *)(a1 + 600) = 0;
  v6 = 0;
  qlseek(a2, 0, 0);
  if ( qlread(a2, (void *)(a1 + 32), 28) != 28 )
    return v6;
  v7 = *(unsigned __int16 *)(a1 + 32);
  if ( v7 == 19802 || v7 == 23117 )
  {
    if ( qlread(a2, &v21, 8) == 8 && v21 == 0x6B6E694C696E55LL )
      *(_BYTE *)(a1 + 600) = 1;
    v6 = 0;
    qlseek(a2, 60, 0);
    if ( qlread(a2, &v20, 4) != 4 )
      return v6;
    v11 = v20;
  }
  else
  {
    if ( v7 == 23126 )
    {
      v6 = 0;
      qlseek(a2, 0, 0);
      if ( qlread(a2, (void *)(a1 + 32), 40) == 40 )
      {
        *(_OWORD *)(a1 + 304) = 0;
        *(_OWORD *)(a1 + 288) = 0;
        *(_OWORD *)(a1 + 272) = 0;
        *(_OWORD *)(a1 + 256) = 0;
        *(_OWORD *)(a1 + 240) = 0;
        *(_OWORD *)(a1 + 224) = 0;
        *(_OWORD *)(a1 + 208) = 0;
        *(_OWORD *)(a1 + 192) = 0;
        *(_OWORD *)(a1 + 176) = 0;
        *(_OWORD *)(a1 + 160) = 0;
        *(_OWORD *)(a1 + 144) = 0;
        *(_OWORD *)(a1 + 128) = 0;
        *(_OWORD *)(a1 + 112) = 0;
        *(_OWORD *)(a1 + 96) = 0;
        *(_OWORD *)(a1 + 80) = 0;
        *(_DWORD *)(a1 + 72) = *(unsigned __int16 *)(a1 + 32);
        v8 = *(unsigned __int16 *)(a1 + 34);
        *(_WORD *)(a1 + 76) = v8;
        *(_WORD *)(a1 + 78) = *(unsigned __int8 *)(a1 + 36);
        if ( v8 == 512 || v8 == 43620 || v8 == 34404 )
        {
          v9 = 523;
          v10 = 1;
        }
        else
        {
          v10 = 0;
          v9 = 267;
        }
        *(_WORD *)(a1 + 96) = v9;
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 112) = v16;
        *(_DWORD *)(a1 + 156) = HIDWORD(v16) - *(unsigned __int16 *)(a1 + 38) + 40;
        if ( v10 )
        {
          *(_QWORD *)(a1 + 120) = v17;
          v17 >>= 32;
        }
        else
        {
          *(_DWORD *)(a1 + 124) = v17;
          v17 = (unsigned int)v17;
        }
        *(_WORD *)(a1 + 164) = *(unsigned __int8 *)(a1 + 37);
        *(_OWORD *)(a1 + 232) = *(_OWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 128) = 0x100000001LL;
        if ( v10 )
          v17 = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 584) = v17;
        v15 = 592;
        v14 = 0;
        goto LABEL_33;
      }
      return v6;
    }
    v11 = 0;
  }
  *(_QWORD *)(a1 + 592) = v11;
  v6 = 0;
  qlseek(a2, v11, 0);
  v12 = (int *)(a1 + 320);
  __bzero(a1 + 320, 264);
  qlseek(a2, *(_QWORD *)(a1 + 592), 0);
  if ( qlread(a2, (void *)(a1 + 320), 264) - 93 <= 0xAB )
  {
    v13 = *v12;
    if ( (*v12 == 17744 || v13 == 4542530 || v13 == 19536)
      && (unsigned __int8)sub_10005CFE0((_OWORD *)(a1 + 72), (_OWORD *)(a1 + 320), a3, a4) )
    {
      if ( *(_WORD *)(a1 + 96) == 523 )
        v14 = *(_QWORD *)(a1 + 120);
      else
        v14 = *(unsigned int *)(a1 + 124);
      v15 = 584;
LABEL_33:
      *(_QWORD *)(a1 + v15) = v14;
      LOBYTE(v6) = 1;
      return v6;
    }
    return 0;
  }
  return v6;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
