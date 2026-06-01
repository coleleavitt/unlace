char __fastcall sub_C95670(
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
  unsigned __int8 v20; // si
  int v21; // edx
  unsigned __int8 v22; // al
  char v23; // al
  char v24; // dl
  __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  _QWORD *v28; // rax
  unsigned __int8 v29; // dl

  if ( !a4 )
  {
    v20 = *(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
    v23 = *(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
    LOBYTE(v21) = (*(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0;
    goto LABEL_7;
  }
  if ( (*a4 & 0x4000) != 0 )
  {
    v20 = 1;
    if ( ((*a4 >> 14) & 2) != 0 )
      goto LABEL_4;
  }
  else
  {
    v20 = *(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
    if ( ((*a4 >> 14) & 2) != 0 )
    {
LABEL_4:
      LOBYTE(v21) = 1;
      goto LABEL_5;
    }
  }
  v21 = (*(unsigned __int8 *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) >> 1) & 1;
LABEL_5:
  v22 = 1;
  if ( ((*a4 >> 14) & 4) == 0 )
  {
    v23 = *(_BYTE *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
LABEL_7:
    v22 = (v23 & 4) != 0;
  }
  sub_C941A0((__int16 *)a1, 0x17u, a2, a8, a9, a10, a11, a12, src, (__int64)a14, v22, v21, v20);
  v24 = *(_BYTE *)(a1 + 2);
  LOBYTE(v25) = a7;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  v26 = src;
  *(_DWORD *)(a1 + 72) = a7;
  *(_BYTE *)(a1 + 2) = (32 * (a3 & 1)) | (16 * (a6 & 1)) | v24 & 0xCF;
  while ( 1 )
  {
    v27 = *v26 & 0xFFFFFFFFFFFFFFF8LL;
    v29 = *(_BYTE *)(v27 + 28) & 0x7F;
    if ( v29 == 28 )
      break;
    if ( ((v29 + 52) & 0x7Fu) <= 1 || (unsigned int)v29 - 53 <= 1 )
      v27 = sub_B72ED0(v27);
    v28 = (_QWORD *)sub_B8BF30(v27);
    LOBYTE(v25) = sub_B979F0(v28);
    if ( (_BYTE)v25 )
      break;
    if ( a14 == ++v26 )
    {
      v25 = *(_QWORD *)(a2 + 19088);
      *(_QWORD *)(a1 + 8) = v25;
      return v25;
    }
  }
  return v25;
}
