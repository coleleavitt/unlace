__int64 __fastcall sub_21975B0(__int64 a1, _DWORD *a2, __m128i *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  char v9; // r14
  char v10; // r8
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v15; // eax
  bool (__fastcall *v16)(__int64); // rax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  char v20; // al
  char v21; // [rsp+Fh] [rbp-49h]
  char v22; // [rsp+Fh] [rbp-49h]
  char v23; // [rsp+Fh] [rbp-49h]

  v5 = 128;
  v6 = sub_2195C60((__int64)a2, (unsigned int *)a3);
  v7 = 0;
  v8 = HIWORD(v6);
  v9 = BYTE4(v6) & 0xE;
  if ( (BYTE4(v6) & 0xE) == 0xA )
    v5 = 160;
  if ( v9 == 10 )
    v7 = 32;
  if ( (v6 & 0xE000000000LL) == 0 )
    v5 = v7;
  v10 = BYTE4(v6) & 0x10;
  if ( (v6 & 0x100000000LL) != 0 )
  {
    if ( v9 )
    {
      v11 = v5 | 2;
LABEL_10:
      v12 = v11;
      v5 = v11 | 0x40;
      BYTE1(v12) |= 2u;
      if ( v10 )
        v5 = v12;
      goto LABEL_12;
    }
    v16 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
    if ( v16 == sub_2195C40 )
    {
      if ( (unsigned int)(a2[2] - 19) <= 1 )
      {
LABEL_24:
        v21 = v10;
        sub_21965F0((__int64)a2, a3);
        v10 = v21;
        goto LABEL_25;
      }
    }
    else
    {
      v22 = v10;
      v20 = ((__int64 (__fastcall *)(_DWORD *, __int64))v16)(a2, v7);
      v10 = v22;
      if ( v20 )
        goto LABEL_24;
    }
    v23 = v10;
    sub_2195D00((__int64)a2, (unsigned __int64)a3);
    v10 = v23;
    v17 = (unsigned int)v17;
LABEL_25:
    v18 = v5;
    v11 = v5 | 3;
    v19 = v18 | 0x12;
    if ( v17 )
      v11 = v19;
    goto LABEL_10;
  }
  v15 = v5;
  if ( v10 )
  {
    BYTE1(v15) = BYTE1(v5) | 2;
    v5 = v15;
  }
LABEL_12:
  if ( (v8 & 0xC0) != 0 )
    v5 |= 4u;
  v13 = v5;
  if ( (v8 & 8) != 0 )
  {
    BYTE1(v13) = BYTE1(v5) | 1;
    v5 = v13;
  }
  if ( v9 == 2 )
    v5 |= 8u;
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = v5;
  return a1;
}
