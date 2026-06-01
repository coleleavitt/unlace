__int64 __fastcall sub_6B26F0(__int64 a1)
{
  char v2; // cl
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v8; // rdx
  __int16 v9; // ax
  unsigned __int64 v10; // rdi

  if ( (*(_BYTE *)(a1 + 20) & 0x20) != 0 )
  {
    v2 = *(_BYTE *)(a1 + 23);
    v3 = (unsigned __int16)(*(_DWORD *)(a1 + 20) >> 6);
    v4 = 0;
    v5 = (a1 + 8 * v3 + 48 + 4LL * ((v2 & 0x10) != 0) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 8) != 0 )
      v4 = ((*(_BYTE *)(v5 + 1) & 4) != 0) + 1LL;
    v6 = v5 + 8 * v4;
    if ( ((*(_WORD *)(a1 + 22) >> 6) & 0xF) != 2 )
      __asm { jmp     rax }
    v9 = *(_WORD *)v5;
    v8 = 0;
    v10 = v6 + 8LL * (v9 & 0x3FF);
    if ( (v2 & 4) != 0 )
      v8 = v3;
    return *(_QWORD *)((v10 + v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else if ( *(_BYTE *)(a1 + 16) == 26
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && sub_B0D320(a1) )
  {
    return (*(_BYTE *)(a1 + 20) >> 2) & 7;
  }
  else
  {
    return 0;
  }
}

