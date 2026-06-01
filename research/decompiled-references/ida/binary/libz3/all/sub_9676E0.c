__int64 __fastcall sub_9676E0(__int64 *a1)
{
  char *v1; // rax
  int v2; // r14d
  int v3; // eax
  unsigned int v4; // ebp
  unsigned int v5; // r12d
  __int64 v6; // rax
  char *v7; // r15
  __int64 v8; // rbx
  size_t v9; // rdx
  __int64 result; // rax
  unsigned int n; // [rsp+Ch] [rbp-3Ch]

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v2 = *((_DWORD *)v1 - 2);
    v3 = *((_DWORD *)v1 - 1);
    n = v3 - v2;
    v4 = (((unsigned int)(3 * v3) >> 1) + 7) & 0xFFFFFFFC;
    v5 = v4 + v2 - v3;
    v6 = sub_186B270(v4 + 16);
    v7 = (char *)*a1;
    v8 = v6 + 16;
    v9 = *(unsigned int *)(*a1 - 12);
    *(_DWORD *)(v6 + 12) = v4;
    *(_QWORD *)(v6 + 4) = _mm_unpacklo_epi32((__m128i)v9, _mm_cvtsi32_si128(v5)).m128i_u64[0];
    memcpy((void *)(v6 + 16), v7, v9);
    memcpy((void *)(v8 + v5), &v7[v2], n);
    result = sub_186B220(v7 - 16);
  }
  else
  {
    result = sub_186B270(0x30u);
    *(_DWORD *)(result + 12) = 32;
    v8 = result + 16;
    *(_QWORD *)(result + 4) = 0x2000000000LL;
  }
  *a1 = v8;
  return result;
}

