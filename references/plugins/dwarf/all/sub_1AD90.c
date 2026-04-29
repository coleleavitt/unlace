__int64 __fastcall sub_1AD90(__int64 a1, __int64 a2, char a3, char a4)
{
  __int16 v8; // ax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  int v13; // ecx
  int v14; // esi
  __int16 v15; // di
  __int16 v16; // dx
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v23[9]; // [rsp+10h] [rbp-48h] BYREF

  v23[1] = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 600) = 0;
  v22 = 0;
  qlseek(a2, 0, 0);
  if ( qlread(a2, a1 + 32, 28) != 28 )
    return 0;
  v8 = *(_WORD *)(a1 + 32);
  if ( v8 == 17744 )
    goto LABEL_6;
  if ( v8 != 23126 )
  {
    if ( v8 == 23117 || v8 == 19802 )
    {
      if ( qlread(a2, v23, 8) == 8 && v23[0] == 0x6B6E694C696E55LL )
        *(_BYTE *)(a1 + 600) = 1;
      qlseek(a2, 60, 0);
      if ( qlread(a2, &v22, 4) != 4 )
        return 0;
    }
LABEL_6:
    v9 = v22;
    *(_QWORD *)(a1 + 592) = v22;
    qlseek(a2, v9, 0);
    *(_QWORD *)(a1 + 320) = 0;
    *(_QWORD *)(a1 + 576) = 0;
    memset(
      (void *)((a1 + 328) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)a1 + 320 - (((_DWORD)a1 + 328) & 0xFFFFFFF8) + 264) >> 3));
    qlseek(a2, *(_QWORD *)(a1 + 592), 0);
    if ( (unsigned __int64)(qlread(a2, a1 + 320, 264) - 93) <= 0xAB )
    {
      v10 = *(_DWORD *)(a1 + 320);
      if ( v10 == 4542530 || v10 == 17744 || v10 == 19536 )
      {
        if ( (unsigned __int8)sub_1A9E0((__m128i *)(a1 + 72), (const __m128i *)(a1 + 320), a3, a4) )
        {
          if ( *(_WORD *)(a1 + 96) == 523 )
            v11 = *(_QWORD *)(a1 + 120);
          else
            v11 = *(unsigned int *)(a1 + 124);
          *(_QWORD *)(a1 + 584) = v11;
          return 1;
        }
      }
    }
    return 0;
  }
  qlseek(a2, v22, 0);
  if ( qlread(a2, a1 + 32, 40) == 40 )
  {
    *(_QWORD *)(a1 + 312) = 0;
    memset(
      (void *)((a1 + 80) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a1 - (((_DWORD)a1 + 80) & 0xFFFFFFF8) + 320) >> 3));
    v13 = *(unsigned __int16 *)(a1 + 34);
    v14 = *(unsigned __int16 *)(a1 + 38);
    v15 = *(unsigned __int8 *)(a1 + 37);
    *(_DWORD *)(a1 + 72) = *(unsigned __int16 *)(a1 + 32);
    v16 = v13;
    v17 = *(_QWORD *)(a1 + 40);
    v18 = v13 | (*(unsigned __int8 *)(a1 + 36) << 16);
    v19 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 76) = v18;
    v20 = *(_DWORD *)(a1 + 44) + 40 - v14;
    if ( v16 == 512 || v16 == -31132 || v16 == -21916 )
    {
      *(_QWORD *)(a1 + 112) = v17;
      *(_WORD *)(a1 + 96) = 523;
      *(_DWORD *)(a1 + 156) = v20;
      *(_QWORD *)(a1 + 120) = v19;
    }
    else
    {
      *(_DWORD *)(a1 + 124) = v19;
      v19 = (unsigned int)v19;
      *(_WORD *)(a1 + 96) = 267;
      *(_QWORD *)(a1 + 112) = v17;
      *(_DWORD *)(a1 + 156) = v20;
    }
    v21 = *(_QWORD *)(a1 + 56);
    *(_WORD *)(a1 + 164) = v15;
    *(_QWORD *)(a1 + 584) = v19;
    *(_QWORD *)(a1 + 232) = v21;
    *(_QWORD *)(a1 + 240) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 128) = 0x100000001LL;
    *(_QWORD *)(a1 + 592) = v22;
    return 1;
  }
  return 0;
}
