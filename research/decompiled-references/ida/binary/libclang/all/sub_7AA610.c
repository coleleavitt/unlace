char __fastcall sub_7AA610(__int64 a1, __int64 a2)
{
  char v4; // al
  char v5; // r12
  char v6; // r15
  char v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 *v10; // rdi
  __int64 v11; // rcx
  __int16 v12; // dx
  __int64 v13; // rcx
  __int16 v14; // dx
  _DWORD v16[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v4 == 36 )
  {
    if ( (unsigned int)sub_7803B0(a2) )
    {
      v5 = 2;
      v6 = 4;
      v7 = 0;
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 84) & 3) != 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 8u;
      }
      v5 = 3;
      v6 = 5;
      v7 = 1;
    }
    if ( !(unsigned __int8)sub_7A63A0(a2, v16)
      || (v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL)
                                     + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v8 + 16) != 42) )
    {
      LOBYTE(v8) = sub_7A63A0(a2, v16);
      if ( !(_BYTE)v8
        || (v5 = v6,
            v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL)
                                       + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v8 + 16) != 43) )
      {
        if ( (*(_BYTE *)(a2 + 84) & 3) != 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          v8 = *(_QWORD *)(a1 + 128);
          *(_BYTE *)(v8 + 8) |= 1u;
        }
        v5 = v7;
      }
    }
  }
  else if ( v4 == 34 )
  {
    if ( *(char *)(a2 + 82) >= 0
      || (*(_BYTE *)(a2 + 29) & 0x60) != 0
      || (v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2), (*(_BYTE *)(v8 + 82) & 0x40) != 0) )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      v8 = *(_QWORD *)(a1 + 128);
      *(_BYTE *)(v8 + 7) &= ~0x80u;
    }
    v5 = 32;
  }
  else
  {
    v5 = 8;
    LOBYTE(v8) = sub_7A5660((_QWORD *)a2);
    if ( !(_BYTE)v8 )
    {
      LOBYTE(v8) = sub_7A57A0((_QWORD *)a2, a2);
      v5 = 16 * v8;
    }
  }
  if ( (*(_BYTE *)(a2 + 83) & 0x10) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 104);
    v10 = (unsigned __int64 *)(v9 + 96);
    if ( *(char *)(a2 + 82) < 0 )
    {
      sub_6E77B0(v10, v9);
      v13 = *(_QWORD *)(a1 + 128);
      LOWORD(v8) = *(_WORD *)(v13 + 4);
      v14 = v8 & 0xE07F;
      LOWORD(v8) = (((unsigned __int8)v5 | (unsigned __int8)((unsigned __int16)v8 >> 7)) & 0x3F) << 7;
      *(_WORD *)(v13 + 4) = v8 | v14;
    }
    else
    {
      sub_6E77B0(v10, v9);
      v11 = *(_QWORD *)(a1 + 128);
      LOWORD(v8) = *(_WORD *)(v11 + 6);
      v12 = v8 & 0xFE07;
      LOWORD(v8) = 8 * (((unsigned __int8)v5 | (unsigned __int8)((unsigned __int16)v8 >> 3)) & 0x3F);
      *(_WORD *)(v11 + 6) = v8 | v12;
    }
  }
  return v8;
}

