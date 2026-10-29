// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall sub_910380(
        __int64 a1,
        const void *a2,
        size_t a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int128 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        __int64 a23,
        int a24)
{
  __m128i v27; // xmm0
  int v28; // eax
  char *v29; // rdi
  bool v30; // zf
  int v31; // edx
  char *v32; // rax
  int v33; // ecx
  unsigned __int64 result; // rax
  _DWORD *v35; // r9
  unsigned __int64 v36; // rax
  char *v37; // rax

  v27 = _mm_loadu_si128((const __m128i *)(&a7 + 1));
  *(_QWORD *)(a1 + 376) = *(_QWORD *)((char *)&a9 + 4);
  v28 = HIDWORD(a9);
  *(__m128i *)(a1 + 360) = v27;
  *(_DWORD *)(a1 + 384) = v28;
  *(_DWORD *)(a1 + 244) = a21;
  v29 = *(char **)(a1 + 48);
  v30 = a3 != 0 && a2 != nullptr;
  v31 = *(_DWORD *)(a1 + 96);
  if ( !v30 || a4 == 1 )
  {
    *(_QWORD *)a1 = a2;
    goto LABEL_4;
  }
  v37 = &v29[(a3 + 7) & 0xFFFFFFFFFFFFFFF8LL];
  if ( v31 || (unsigned __int64)v37 > *(_QWORD *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 88) = 1;
    return -64;
  }
  *(_QWORD *)(a1 + 48) = v37;
  *(_QWORD *)(a1 + 56) = v37;
  *(_QWORD *)(a1 + 64) = v37;
  result = -64;
  if ( v29 )
  {
    *(_QWORD *)a1 = v29;
    memcpy(v29, a2, a3);
    v29 = *(char **)(a1 + 48);
    v31 = *(_DWORD *)(a1 + 96);
LABEL_4:
    *(_QWORD *)(a1 + 8) = a3;
    v32 = v29 + 8704;
    *(_DWORD *)(a1 + 16) = a5;
    if ( v31 || (unsigned __int64)v32 > *(_QWORD *)(a1 + 40) )
    {
      *(_BYTE *)(a1 + 88) = 1;
      v29 = nullptr;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = v32;
      *(_QWORD *)(a1 + 56) = v32;
      *(_QWORD *)(a1 + 64) = v32;
    }
    *(_QWORD *)(a1 + 24) = v29;
    v33 = a24;
    *(_DWORD *)(a1 + 2464) = 0;
    *(_QWORD *)(a1 + 6020) = 0x100000000LL;
    *(_QWORD *)(a1 + 6012) = 0;
    *(_QWORD *)(a1 + 6028) = 0x800000004LL;
    result = sub_90ABE0((__m128i *)(a1 + 104), a1 + 32, (const __m128i *)(&a7 + 1), v33, 0, 1, 0);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      v35 = *(_DWORD **)a1;
      v36 = *(_QWORD *)(a1 + 8);
      HIDWORD(a11) = 3;
      a10 = 1;
      if ( v35 && v36 > 7 )
      {
        result = sub_90F9A0(
                   a1 + 408,
                   a1 + 104,
                   nullptr,
                   (_QWORD *)(a1 + 32),
                   &a7,
                   v35,
                   v36,
                   a5,
                   1u,
                   1u,
                   *(_WORD **)(a1 + 24));
        if ( result <= 0xFFFFFFFFFFFFFF88LL )
        {
          *(_DWORD *)(a1 + 6064) = result;
          return 0;
        }
      }
      else
      {
        result = -32;
        if ( a5 != 2 )
        {
          *(_DWORD *)(a1 + 6064) = 0;
          return 0;
        }
      }
    }
  }
  return result;
}
