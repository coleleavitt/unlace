__int64 __fastcall sub_133F0(__int64 a1, __int64 a2, char a3, char a4)
{
  __int16 v7; // ax
  int v8; // eax
  __int64 v9; // rax
  int v11; // ecx
  int v12; // esi
  __int16 v13; // di
  __int16 v14; // dx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // [rsp+10h] [rbp-48h]

  *(_BYTE *)(a1 + 600) = 0;
  qlseek();
  if ( qlread() != 28 )
    return 0;
  v7 = *(_WORD *)(a1 + 32);
  if ( v7 == 17744 )
    goto LABEL_6;
  if ( v7 != 23126 )
  {
    if ( v7 == 23117 || v7 == 19802 )
    {
      if ( qlread() == 8 && v20 == 0x6B6E694C696E55LL )
        *(_BYTE *)(a1 + 600) = 1;
      qlseek();
      if ( qlread() != 4 )
        return 0;
    }
LABEL_6:
    *(_QWORD *)(a1 + 592) = 0;
    qlseek();
    *(_QWORD *)(a1 + 320) = 0;
    *(_QWORD *)(a1 + 576) = 0;
    memset(
      (void *)((a1 + 328) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)a1 + 320 - (((_DWORD)a1 + 328) & 0xFFFFFFF8) + 264) >> 3));
    qlseek();
    if ( (unsigned __int64)(qlread() - 93) <= 0xAB )
    {
      v8 = *(_DWORD *)(a1 + 320);
      if ( v8 == 4542530 || v8 == 17744 || v8 == 19536 )
      {
        if ( (unsigned __int8)sub_13040((__m128i *)(a1 + 72), (const __m128i *)(a1 + 320), a3, a4) )
        {
          if ( *(_WORD *)(a1 + 96) == 523 )
            v9 = *(_QWORD *)(a1 + 120);
          else
            v9 = *(unsigned int *)(a1 + 124);
          *(_QWORD *)(a1 + 584) = v9;
          return 1;
        }
      }
    }
    return 0;
  }
  qlseek();
  if ( qlread() == 40 )
  {
    *(_QWORD *)(a1 + 312) = 0;
    memset(
      (void *)((a1 + 80) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a1 - (((_DWORD)a1 + 80) & 0xFFFFFFF8) + 320) >> 3));
    v11 = *(unsigned __int16 *)(a1 + 34);
    v12 = *(unsigned __int16 *)(a1 + 38);
    v13 = *(unsigned __int8 *)(a1 + 37);
    *(_DWORD *)(a1 + 72) = *(unsigned __int16 *)(a1 + 32);
    v14 = v11;
    v15 = *(_QWORD *)(a1 + 40);
    v16 = v11 | (*(unsigned __int8 *)(a1 + 36) << 16);
    v17 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 76) = v16;
    v18 = *(_DWORD *)(a1 + 44) + 40 - v12;
    if ( v14 == 512 || v14 == -31132 || v14 == -21916 )
    {
      *(_QWORD *)(a1 + 112) = v15;
      *(_WORD *)(a1 + 96) = 523;
      *(_DWORD *)(a1 + 156) = v18;
      *(_QWORD *)(a1 + 120) = v17;
    }
    else
    {
      *(_DWORD *)(a1 + 124) = v17;
      v17 = (unsigned int)v17;
      *(_WORD *)(a1 + 96) = 267;
      *(_QWORD *)(a1 + 112) = v15;
      *(_DWORD *)(a1 + 156) = v18;
    }
    v19 = *(_QWORD *)(a1 + 56);
    *(_WORD *)(a1 + 164) = v13;
    *(_QWORD *)(a1 + 584) = v17;
    *(_QWORD *)(a1 + 232) = v19;
    *(_QWORD *)(a1 + 240) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 128) = 0x100000001LL;
    *(_QWORD *)(a1 + 592) = 0;
    return 1;
  }
  return 0;
}
