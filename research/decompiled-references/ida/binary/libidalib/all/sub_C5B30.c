unsigned __int64 __fastcall sub_C5B30(__int64 a1)
{
  __int64 v2; // r9
  int v3; // eax
  char v4; // r13
  __int64 v5; // r9
  char *v7; // rsi
  _BYTE *v8; // r13
  unsigned __int64 v9; // rbp
  char *v10; // rsi
  _BYTE *v11; // r13
  unsigned __int64 v12; // rbp
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v18 = 0;
  src = (void *)qvector_reserve();
  *(_QWORD *)&v18 = 1;
  *(_BYTE *)src = 0;
  v3 = *(_DWORD *)(a1 + 256);
  if ( (~(_BYTE)v3 & 0xA) != 0 )
    goto LABEL_2;
  if ( *(_QWORD *)(a1 + 368) > 1u )
  {
    callui(203, 16, a1, 8, 1, v2, src, v18, *((_QWORD *)&v18 + 1), v19);
    v3 = *(_DWORD *)(a1 + 256);
LABEL_2:
    v4 = 1;
    goto LABEL_3;
  }
  v10 = (char *)src;
  if ( *((_QWORD *)&v18 + 1) <= 0x23u )
  {
    src = (void *)qvector_reserve();
    v10 = (char *)src;
  }
  *(_QWORD *)&v18 = 36;
  *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_1D3180);
  v11 = src;
  v12 = v18;
  *((__m128i *)v10 + 1) = _mm_load_si128((const __m128i *)&xmmword_1D3190);
  *(_DWORD *)(v10 + 31) = 1701667182;
  v11[35] = 0;
  if ( v12 < 2 )
  {
    *(_QWORD *)(a1 + 456) = 0;
  }
  else
  {
    v13 = *(void **)(a1 + 448);
    if ( *(_QWORD *)(a1 + 464) < v12 )
    {
      v16 = qvector_reserve();
      *(_QWORD *)(a1 + 448) = v16;
      v13 = (void *)v16;
    }
    *(_QWORD *)(a1 + 456) = v12;
    memmove(v13, v11, v12 - 1);
    *(_BYTE *)(*(_QWORD *)(a1 + 448) + v12 - 1) = 0;
  }
  callui(203, 16, a1, 8, 0, v2, src, v18, *((_QWORD *)&v18 + 1), v19);
  v3 = *(_DWORD *)(a1 + 256);
  v4 = 0;
LABEL_3:
  if ( (v3 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 272) <= 1u )
    {
      v7 = (char *)src;
      if ( *((_QWORD *)&v18 + 1) <= 0x23u )
      {
        src = (void *)qvector_reserve();
        v7 = (char *)src;
      }
      *(_QWORD *)&v18 = 36;
      *(__m128i *)v7 = _mm_load_si128((const __m128i *)&xmmword_1D3180);
      v8 = src;
      v9 = v18;
      *((__m128i *)v7 + 1) = _mm_load_si128((const __m128i *)&xmmword_1D31A0);
      *(_DWORD *)(v7 + 31) = 1701667182;
      v8[35] = 0;
      if ( v9 > 1 )
      {
        v14 = *(void **)(a1 + 448);
        if ( *(_QWORD *)(a1 + 464) < v9 )
        {
          v15 = qvector_reserve();
          *(_QWORD *)(a1 + 448) = v15;
          v14 = (void *)v15;
        }
        *(_QWORD *)(a1 + 456) = v9;
        memmove(v14, v8, v9 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 448) + v9 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 456) = 0;
      }
      callui(203, 16, a1, 1, 0, v2, src, v18, *((_QWORD *)&v18 + 1), v19);
      v4 = 0;
    }
    else
    {
      callui(203, 16, a1, 1, 1, v2, src, v18, *((_QWORD *)&v18 + 1), v19);
    }
  }
  ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, void **, __int64))callui)(203, 18, a1, 0, &src, v2);
  callui(203, 10, a1, 0, v4 & 1, v5, src, v18, *((_QWORD *)&v18 + 1), v19);
  if ( src )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v19 - __readfsqword(0x28u);
}

