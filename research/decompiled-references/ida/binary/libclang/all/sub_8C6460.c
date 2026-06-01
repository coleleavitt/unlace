__int64 __fastcall sub_8C6460(
        __int64 a1,
        __int64 a2,
        char a3,
        _DWORD *a4,
        __int64 a5,
        char a6,
        int a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        const __m128i *a11,
        __int64 a12,
        void *src,
        _QWORD *a14)
{
  unsigned __int8 v19; // si
  int v20; // edx
  unsigned __int8 v21; // al
  _QWORD *v22; // r13
  char v23; // al
  __int64 v24; // rdi
  _QWORD *v25; // rax
  __int64 result; // rax
  char v27; // al

  if ( !a4 )
  {
    v19 = *(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
    v27 = *(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
    LOBYTE(v20) = (*(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0;
    goto LABEL_15;
  }
  v19 = 1;
  if ( (*a4 & 0x4000) != 0 )
  {
    LOBYTE(v20) = 1;
    if ( ((*a4 >> 14) & 2) != 0 )
      goto LABEL_4;
LABEL_16:
    v21 = 1;
    v20 = (*(unsigned __int8 *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) >> 1) & 1;
    if ( ((*a4 >> 14) & 4) != 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
  LOBYTE(v20) = 1;
  v19 = *(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
  if ( ((*a4 >> 14) & 2) == 0 )
    goto LABEL_16;
LABEL_4:
  v21 = 1;
  if ( ((*a4 >> 14) & 4) == 0 )
  {
LABEL_14:
    v27 = *(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
LABEL_15:
    v21 = (v27 & 4) != 0;
  }
LABEL_5:
  sub_8C2660((__int16 *)a1, 0x18u, a2, a8, a9, a10, a11, a12, src, (__int64)a14, v21, v20, v19);
  *(_QWORD *)(a1 + 64) = a5;
  v22 = src;
  *(_DWORD *)(a1 + 72) = a7;
  v23 = *(_BYTE *)(a1 + 2);
  *(_QWORD *)(a1 + 56) = a4;
  *(_BYTE *)(a1 + 2) = v23 & 0xCF | ((16 * a6) | (32 * a3)) & 0x30;
  while ( 1 )
  {
    v24 = *v22 & 0xFFFFFFFFFFFFFFF8LL;
    result = *(_BYTE *)(v24 + 28) & 0x7F;
    if ( (_BYTE)result == 26 )
      break;
    if ( (((_BYTE)result + 54) & 0x7Fu) <= 1 || (unsigned int)(unsigned __int8)result - 51 <= 1 )
      v24 = sub_77AA60(v24);
    v25 = (_QWORD *)sub_7984D0(v24);
    result = sub_7A4F00(v25);
    if ( (_BYTE)result )
      break;
    if ( a14 == ++v22 )
    {
      result = *(_QWORD *)(a2 + 18928);
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
  }
  return result;
}

