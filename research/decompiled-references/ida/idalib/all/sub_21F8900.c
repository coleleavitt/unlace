__int64 __fastcall sub_21F8900(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rdx
  char v5; // cl
  char v6; // cl
  __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rsi
  __int64 *v14; // rsi
  _QWORD v16[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(_DWORD **)a2;
  v4 = *(unsigned __int8 *)(a2 + 20);
  v5 = *(_BYTE *)(a2 + 20);
  if ( *(_UNKNOWN **)a2 == &unk_26F7BE0 )
  {
    v7 = 0x7FFE000000000000LL;
    v6 = v5 & 7;
    if ( v6 != 1 )
    {
      v7 = 0x7FFF000000000000LL;
      v8 = 16382;
      v9 = 0x7FFE000000000000LL;
      goto LABEL_4;
    }
    goto LABEL_17;
  }
  v6 = v5 & 7;
  if ( v6 == 1 )
  {
    v7 = 0x7FFF000000000000LL;
    if ( (unsigned int)(v3[2] + 64) > 0x7F )
    {
      v14 = *(__int64 **)(a2 + 8);
LABEL_18:
      v11 = *v14;
      v12 = v14[1];
      goto LABEL_13;
    }
LABEL_17:
    v14 = (__int64 *)(a2 + 8);
    goto LABEL_18;
  }
  v7 = 0;
  v8 = 0x3FFF;
  v9 = 0x7FFF000000000000LL;
LABEL_4:
  if ( v6 != 3 && v6 )
  {
    v10 = v8 + *(_DWORD *)(a2 + 16);
    if ( (unsigned int)(v3[2] + 64) > 0x7F )
    {
      v13 = *(__int64 **)(a2 + 8);
      v11 = *v13;
      v12 = v13[1];
      if ( v10 == 1 )
        goto LABEL_8;
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(_QWORD *)(a2 + 16);
      v13 = (__int64 *)(a2 + 8);
      if ( v10 == 1 )
      {
LABEL_8:
        v7 = (unsigned __int64)(*((_WORD *)v13 + 7) & 1) << 48;
        goto LABEL_13;
      }
    }
    v7 = (v10 << 48) & 0x7FFF000000000000LL;
    goto LABEL_13;
  }
  v11 = 0;
  if ( v6 == 3 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 0;
    v7 = v9;
  }
LABEL_13:
  LOBYTE(v4) = (unsigned __int8)v4 >> 3;
  v16[0] = v11;
  v16[1] = v12 & 0xFFFFFFFFFFFFLL | v7 | (v4 << 63);
  sub_2205600(a1, 128, v16, 2);
  return a1;
}
