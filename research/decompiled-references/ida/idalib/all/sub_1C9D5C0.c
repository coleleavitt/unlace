__int64 __fastcall sub_1C9D5C0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rcx
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // r8
  _WORD **v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v29; // [rsp+0h] [rbp-98h]
  unsigned __int64 v30; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v32; // [rsp+18h] [rbp-80h]
  _BYTE v33[120]; // [rsp+20h] [rbp-78h] BYREF

  v29 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 16), 0, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v29 == 1 )
    return 1;
  v18 = *(unsigned __int16 *)(a2 + 12);
  v32 = 0x800000000LL;
  ptr = v33;
  if ( (_DWORD)v18 )
  {
    v19 = (_WORD **)(a2 + 24);
    v20 = a2 + 8LL * (unsigned int)(v18 - 1) + 32;
    while ( 1 )
    {
      v21 = sub_1C9AFD0(a1, *v19, 0, a3, a4, a5, a6, v16, v17, a9, a10, v14, v18, v15);
      if ( v21 == 1 )
        goto LABEL_13;
      v14 = (unsigned int)v32;
      v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
      v23 = (unsigned int)v32 + 1LL;
      if ( v23 <= HIDWORD(v32) )
      {
        ++v19;
        *((_QWORD *)ptr + (unsigned int)v32) = v22;
        v18 = (unsigned int)(v32 + 1);
        LODWORD(v32) = v32 + 1;
        if ( (_WORD **)v20 == v19 )
          break;
      }
      else
      {
        v30 = v22;
        sub_2237220(&ptr, v33, v23, 8);
        v14 = (unsigned int)v32;
        ++v19;
        *((_QWORD *)ptr + (unsigned int)v32) = v30;
        v18 = (unsigned int)(v32 + 1);
        LODWORD(v32) = v32 + 1;
        if ( v19 == (_WORD **)v20 )
          break;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 14) & 1) == 0 )
  {
    v25 = 0;
    goto LABEL_12;
  }
  v24 = *(unsigned __int16 *)(a2 + 12);
  v25 = *(_QWORD *)(a2 + 8 * v24 + 24);
  if ( !v25 )
  {
LABEL_12:
    v27 = sub_1A8ACF0(
            *(__int64 **)(*a1 + 736),
            *(_DWORD *)(a2 + 8),
            v29 & 0xFFFFFFFFFFFFFFFELL,
            (unsigned __int64)ptr,
            v18,
            v25);
    goto LABEL_14;
  }
  v26 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 8 * v24 + 24), 0, a3, a4, a5, a6, v16, v17, a9, a10, v14, v18, v25);
  if ( v26 != 1 )
  {
    LODWORD(v18) = v32;
    v25 = v26 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_12;
  }
LABEL_13:
  v27 = 1;
LABEL_14:
  if ( ptr != v33 )
    free(ptr);
  return v27;
}
