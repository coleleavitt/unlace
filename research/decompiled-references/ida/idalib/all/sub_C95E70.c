__int64 __fastcall sub_C95E70(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        const void *a5,
        __int64 a6,
        int a7,
        _BYTE *a8)
{
  __int16 v12; // cx
  char v13; // dl
  char v14; // al
  size_t v15; // r13
  unsigned __int8 v16; // al
  __int64 result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 6;
  if ( unk_2CD7484 )
    sub_EE9B50(6);
  *(_WORD *)(a1 + 1) &= 0xF801u;
  v12 = *(_WORD *)(a1 + 2);
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a7;
  *(_WORD *)(a1 + 2) = (8 * a4) | v12 & 0xF807;
  v13 = a8[56];
  if ( v13 == -1 )
  {
    *(_BYTE *)(a1 + 3) &= ~8u;
    goto LABEL_13;
  }
  v14 = (8 * (v13 == 0)) | *(_BYTE *)(a1 + 3) & 0xF7;
  *(_BYTE *)(a1 + 3) = v14;
  if ( (v14 & 8) == 0 )
  {
    if ( v13 == 1 )
    {
      sub_A4F8A0(a1 + 24, (__int64)a8);
      goto LABEL_7;
    }
LABEL_13:
    abort();
  }
  if ( v13 )
    goto LABEL_13;
  *(_BYTE *)(a1 + 3) = (16 * (*a8 & 1)) | v14 & 0xEF;
LABEL_7:
  *(_DWORD *)(a1 + 4) = a6;
  v15 = 8 * a6;
  if ( v15 )
    memmove((void *)(a1 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a1) >> 3) ^ 1) & 1) + 24), a5, v15);
  v16 = sub_B659F0(a1);
  *(_BYTE *)(a1 + 1) = (v16 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v16 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}
