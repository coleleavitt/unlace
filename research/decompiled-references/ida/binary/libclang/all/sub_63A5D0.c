__m128i *__fastcall sub_63A5D0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  int v8; // eax
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v8 = a7;
  *a1 = _mm_loadu_si128((const __m128i *)&a7);
  a1[1] = _mm_loadu_si128((const __m128i *)&a8);
  if ( v8 == 104 )
  {
    if ( (_DWORD)a2 == -1 )
      goto LABEL_11;
    if ( !(_QWORD)a8 || ((*(_WORD *)a8 + 509) & 0x1FFu) > 0x7F )
      BUG();
    if ( (*(_BYTE *)(a8 + 27) & 4) != 0 )
      goto LABEL_11;
    v10 = sub_8C9100(a8);
  }
  else
  {
    if ( (unsigned int)(v8 - 16) > 1 )
      return a1;
    if ( (_DWORD)a2 == -1 || (*(_BYTE *)(*((_QWORD *)&a7 + 1) + 29LL) & 2) != 0 )
      goto LABEL_11;
    v10 = *(_QWORD *)(*((_QWORD *)&a7 + 1) + 40LL);
  }
  v12[0] = v10;
  v11 = 1;
  if ( (v10 & 3) != 1 )
    v11 = sub_C87220(v12, a2, 1);
  if ( (unsigned int)a2 < v11 )
  {
    a1->m128i_i32[1] = a2;
    return a1;
  }
LABEL_11:
  a1->m128i_i32[1] = -1;
  return a1;
}

