__int64 __fastcall sub_63A4A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rax

  if ( (_DWORD)a7 == 104 )
  {
    if ( HIDWORD(a7) == -1 )
      return 0xFFFFFFFFLL;
    if ( !a9 || ((*(_WORD *)a9 + 509) & 0x1FFu) > 0x7F )
      BUG();
    v10 = (*(_BYTE *)(a9 + 27) >> 3) & 3;
    if ( v10 )
    {
      v13 = *(unsigned __int16 *)(a9 + 24);
      v14 = sub_8C9100(a9);
      v12 = (unsigned int)sub_AC2210(HIDWORD(a7), v14, v10 == 2, a9 + 48, v13, *(unsigned int *)(a9 + 36));
      v11 = HIDWORD(a7);
    }
    else
    {
      v11 = HIDWORD(a7);
      v12 = *(unsigned int *)(a9 + 4LL * HIDWORD(a7) + 8LL * *(unsigned __int16 *)(a9 + 24) + 8 + 40);
    }
  }
  else
  {
    if ( (unsigned int)(a7 - 16) > 1 || HIDWORD(a7) == -1 )
      return 0xFFFFFFFFLL;
    if ( ((*(_BYTE *)(a8 + 60) >> 2) & 3) != 0 )
    {
      v12 = (unsigned int)sub_AC26A0(
                            HIDWORD(a7),
                            *(_QWORD *)(a8 + 40),
                            ((*(_BYTE *)(a8 + 60) >> 2) & 3) == 2,
                            *(_QWORD *)(a8 + 96),
                            *(unsigned int *)(a8 + 104),
                            *(unsigned int *)(a8 + 108));
      v11 = HIDWORD(a7);
    }
    else
    {
      v11 = HIDWORD(a7);
      v12 = *(unsigned int *)(*(_QWORD *)(a8 + 96) + 4LL * HIDWORD(a7) + 8LL * *(unsigned int *)(a8 + 104));
    }
  }
  return (v12 << 32) | v11;
}

