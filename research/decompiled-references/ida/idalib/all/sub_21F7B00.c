__int64 __fastcall sub_21F7B00(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r10
  __int64 result; // rax
  __int64 v4; // rdx
  char v5; // di
  char v6; // di
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r9
  _QWORD *v13; // rsi

  v2 = *(_DWORD **)a2;
  result = a1;
  v4 = *(unsigned __int8 *)(a2 + 20);
  v5 = *(_BYTE *)(a2 + 20);
  if ( *(_UNKNOWN **)a2 == &unk_26F7BE0 )
  {
    v7 = 0x7FE0000000000000LL;
    v6 = v5 & 7;
    if ( v6 != 1 )
    {
      v7 = 0x7FF0000000000000LL;
      v8 = 1022;
      v9 = 0x7FE0000000000000LL;
      goto LABEL_4;
    }
    goto LABEL_17;
  }
  v6 = v5 & 7;
  if ( v6 == 1 )
  {
    v7 = 0x7FF0000000000000LL;
    if ( (unsigned int)(v2[2] + 64) > 0x7F )
    {
      v13 = *(_QWORD **)(a2 + 8);
LABEL_18:
      v12 = *v13 & 0xFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
LABEL_17:
    v13 = (_QWORD *)(a2 + 8);
    goto LABEL_18;
  }
  v7 = 0;
  v8 = 1023;
  v9 = 0x7FF0000000000000LL;
LABEL_4:
  if ( v6 == 3 || !v6 )
  {
    v12 = 0;
    if ( v6 != 3 )
      v7 = v9;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 16) + v8;
    v11 = *(_QWORD *)(a2 + 8);
    if ( (unsigned int)(v2[2] + 64) > 0x7F )
      v11 = **(_QWORD **)(a2 + 8);
    v12 = v11 & 0xFFFFFFFFFFFFFLL;
    if ( v10 == 1 )
      v7 = v11 & 0x10000000000000LL;
    else
      v7 = (v10 << 52) & 0x7FF0000000000000LL;
  }
LABEL_14:
  LOBYTE(v4) = (unsigned __int8)v4 >> 3;
  *(_DWORD *)(result + 8) = 64;
  *(_QWORD *)result = v12 | v7 | (v4 << 63);
  return result;
}
