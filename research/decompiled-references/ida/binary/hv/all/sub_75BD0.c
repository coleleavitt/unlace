__int64 __fastcall sub_75BD0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  unsigned int v14; // ebp
  int v15; // r9d
  unsigned int v16; // ebx
  _DWORD *v17; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  char v25; // [rsp+0h] [rbp-68h]
  char v26; // [rsp+1Bh] [rbp-4Dh] BYREF
  int v27; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v28; // [rsp+20h] [rbp-48h] BYREF
  int v29; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v14 = a3;
  if ( (dword_1671A4 & 0x100000) != 0 )
    sub_2A380((int)"TLS: OpenSSL version \"%s\"\n", a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, v25);
  if ( (unsigned int)sub_9A8C0(
                       a2,
                       (unsigned int)"OpenSSL %d.%d.%d%c",
                       (unsigned int)&v27,
                       (unsigned int)&v28,
                       (unsigned int)&v29,
                       (unsigned int)&v26) == 4 )
  {
    v16 = v26 | (v29 << 8) | (v28 << 16) | (v27 << 24);
    if ( v16 >= v14 )
    {
      if ( v16 > 0x100FFFF )
      {
        v17 = (_DWORD *)operator new(0x218u);
        memset(v17, 0, 0x218u);
        *(_QWORD *)v17 = off_163620;
LABEL_7:
        *a1 = v17;
        v17[92] = v16;
        return 1;
      }
LABEL_15:
      v17 = (_DWORD *)operator new(0x1A8u);
      memset(v17, 0, 0x1A8u);
      *(_QWORD *)v17 = off_163550;
      goto LABEL_7;
    }
  }
  else if ( (unsigned int)sub_9A8C0(
                            a2,
                            (unsigned int)"LibreSSL %d.%d.%d",
                            (unsigned int)&v27,
                            (unsigned int)&v28,
                            (unsigned int)&v29,
                            v15) == 3
         && v27 == 2
         && (unsigned int)(v28 - 2) <= 3 )
  {
    if ( (dword_1671A4 & 0x100000) != 0 )
      sub_2A380(
        (int)"TLS: LibreSSL detected. Setting OpenSSL API version to 1.0.1g\n",
        (__int64)"LibreSSL %d.%d.%d",
        v19,
        v20,
        v21,
        v22,
        a7,
        a8,
        a9,
        a10,
        v23,
        v24,
        a13,
        a14,
        v25);
    v16 = 16777575;
    if ( v14 <= 0x1000167 )
      goto LABEL_15;
  }
  return 0;
}

