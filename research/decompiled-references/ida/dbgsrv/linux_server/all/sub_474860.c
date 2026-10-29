/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474860
// Address: 0x0000000000474860

//----- (0000000000474860) ----------------------------------------------------
__int64 __fastcall sub_474860(
        _QWORD *a1,
        char *a2,
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
  unsigned int v15; // ebx
  _DWORD *v16; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  char v24; // [rsp+0h] [rbp-68h]
  char v25; // [rsp+1Bh] [rbp-4Dh] BYREF
  int v26; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v27; // [rsp+20h] [rbp-48h] BYREF
  int v28; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v14 = a3;
  if ( (dword_4C94E4 & 0x100000) != 0 )
    *(double *)a7.m128_u64 = sub_470E00(
                               (int)"TLS: OpenSSL version \"%s\"\n",
                               (__int64)a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               a10,
                               a11,
                               a12,
                               a13,
                               a14,
                               v24);
  if ( sub_485540(a2, "OpenSSL %d.%d.%d%c", (unsigned int)&v26, (unsigned int)&v27, (unsigned int)&v28, &v25) == 4 )
  {
    v15 = v25 | (v28 << 8) | (v27 << 16) | (v26 << 24);
    if ( v15 >= v14 )
    {
      if ( v15 > 0x100FFFF )
      {
        v16 = (_DWORD *)operator new(0x218u);
        memset(v16, 0, 0x218u);
        *(_QWORD *)v16 = off_4C3FD0;
LABEL_7:
        *a1 = v16;
        v16[92] = v15;
        return 1;
      }
LABEL_15:
      v16 = (_DWORD *)operator new(0x1A8u);
      memset(v16, 0, 0x1A8u);
      *(_QWORD *)v16 = off_4C3F00;
      goto LABEL_7;
    }
  }
  else if ( sub_485540(a2, "LibreSSL %d.%d.%d", (unsigned int)&v26, (unsigned int)&v27, (unsigned int)&v28) == 3
         && v26 == 2
         && (unsigned int)(v27 - 2) <= 3 )
  {
    if ( (dword_4C94E4 & 0x100000) != 0 )
      sub_470E00(
        (int)"TLS: LibreSSL detected. Setting OpenSSL API version to 1.0.1g\n",
        (__int64)"LibreSSL %d.%d.%d",
        v18,
        v19,
        v20,
        v21,
        a7,
        a8,
        a9,
        a10,
        v22,
        v23,
        a13,
        a14,
        v24);
    v15 = 16777575;
    if ( v14 <= 0x1000167 )
      goto LABEL_15;
  }
  return 0;
}
// 474991: variable 'v24' is possibly undefined
// 474A01: variable 'v18' is possibly undefined
// 474A01: variable 'v19' is possibly undefined
// 474A01: variable 'v20' is possibly undefined
// 474A01: variable 'v21' is possibly undefined
// 474A01: variable 'v22' is possibly undefined
// 474A01: variable 'v23' is possibly undefined
// 4C3F00: using guessed type __int64 (__fastcall *off_4C3F00[2])();
// 4C3FD0: using guessed type __int64 (__fastcall *off_4C3FD0[2])();
// 4C94E4: using guessed type int dword_4C94E4;
