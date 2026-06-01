__int64 __fastcall sub_1BDA050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        char a8,
        char a9,
        char a10)
{
  unsigned int v12; // edx
  char v13; // r10
  char v14; // bl
  char v15; // r12
  __int64 result; // rax
  __int64 *v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-48h]
  int v21; // [rsp+8h] [rbp-40h]
  char v22; // [rsp+Ch] [rbp-3Ch]

  v12 = *(_DWORD *)(a1 + 2988);
  v13 = a8;
  v14 = a9;
  v15 = a10;
  if ( 4864 - v12 > 0x4F )
  {
    *(_DWORD *)(a1 + 2988) = v12 + 80;
    result = a1 + v12 + 2992;
    goto LABEL_3;
  }
  v19 = *(_QWORD *)(a1 + 2872);
  *(_QWORD *)(a1 + 2952) += 80LL;
  result = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 2880) < (unsigned __int64)(result + 80) || !v19 )
  {
    v22 = v13;
    v21 = a6;
    v20 = a5;
    result = sub_986170(a1 + 2872, 80, 80, 3, a5, a6);
    a5 = v20;
    LODWORD(a6) = v21;
    v13 = v22;
LABEL_3:
    v17 = *(__int64 **)(a1 + 2856);
    if ( !v17 )
      goto LABEL_12;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 2872) = result + 80;
  v17 = *(__int64 **)(a1 + 2856);
  if ( !v17 )
  {
LABEL_12:
    *(_QWORD *)(a1 + 2856) = result;
    goto LABEL_8;
  }
LABEL_6:
  while ( *v17 )
    v17 = (__int64 *)*v17;
  *v17 = result;
LABEL_8:
  v18 = _mm_loadu_si128((const __m128i *)&a7);
  *(_DWORD *)(a1 + 2864) = (*(_DWORD *)(a1 + 2864) + 1) & 0x3FFFFFFF | *(_DWORD *)(a1 + 2864) & 0xC0000000;
  *(_QWORD *)result = 0;
  *(_BYTE *)(result + 8) = (32 * (v13 & 1)) | ((v14 & 1) << 6) | 1;
  *(_QWORD *)(result + 16) = a2;
  *(_QWORD *)(result + 24) = a3;
  *(__m128i *)(result + 32) = v18;
  *(_QWORD *)(result + 48) = a4;
  *(_DWORD *)(result + 56) = a6;
  *(_QWORD *)(result + 64) = a5;
  *(_BYTE *)(result + 72) = v15;
  return result;
}
