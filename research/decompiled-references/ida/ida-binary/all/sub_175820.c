__int64 __fastcall sub_175820(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 v9; // xmm0
  __int64 v10; // r8
  __int64 v11; // r9
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  void **p_src; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v21; // rbx
  void **v22; // r13
  void *v23; // rdi
  const void *v24; // r13
  void *v25; // rdi
  char v26; // [rsp-8h] [rbp-58h]
  unsigned __int16 v27; // [rsp+6h] [rbp-4Ah] BYREF
  void *src; // [rsp+8h] [rbp-48h] BYREF
  __int128 v29; // [rsp+10h] [rbp-40h]
  unsigned __int64 v30; // [rsp+20h] [rbp-30h]

  v9 = 0;
  v30 = __readfsqword(0x28u);
  v29 = 0;
  src = nullptr;
  if ( sub_1F3BF0(*(_QWORD *)(a1 + 16), &src) <= 0 )
  {
    v21 = xmmword_8D0AA8;
    if ( (unsigned __int64)xmmword_8D0AA8 > 1 )
    {
      v24 = (const void *)qword_8D0AA0;
      v25 = src;
      if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)xmmword_8D0AA8 )
      {
        src = (void *)qvector_reserve(&src, src, xmmword_8D0AA8, 1);
        v25 = src;
      }
      *(_QWORD *)&v29 = v21;
      memmove(v25, v24, v21 - 1);
      *((char *)src + v21 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v29 = 0;
    }
  }
  else
  {
    *(double *)v9.m128_u64 = sub_1FDA50(*(_QWORD *)(a1 + 16) + 216LL);
  }
  p_src = &src;
  v27 = (8 * ((BYTE2(xmmword_8BCDC0) & 1) == 0))
      | (16 * ((_WORD)xmmword_8BCDB0 != 0))
      | (SBYTE2(xmmword_8BCDC0) >> 5) & 4
      | (BYTE2(xmmword_8BCDC0) >> 2) & 3;
  v17 = sub_1697D0(
          (int)"@0:576[]\n"
               "Text search (slow!)\n"
               "\n"
               "<~S~tring:q::50::>\n"
               "  <Match ~c~ase:C>\n"
               "  <~R~egular expression:C>\n"
               "  <~I~dentifier:C>\n"
               "  <##Parameters#Search ~U~p:C>\n"
               "  <#Find all occurrences and display a list#~F~ind all occurrences:C>>\n",
          (__int64)&src,
          (__int64)&v27,
          16 * (unsigned int)((_WORD)xmmword_8BCDB0 != 0),
          v10,
          v11,
          v9,
          a3,
          a4,
          a5,
          v12,
          v13,
          a8,
          a9,
          v26);
  if ( v17 )
  {
    if ( (unsigned __int64)v29 <= 1 )
    {
      v17 = 0;
    }
    else
    {
      LOWORD(xmmword_8BCDB0) = (v27 >> 4) & 1;
      BYTE2(xmmword_8BCDC0) = ((v27 & 8) == 0) | (32 * v27) & 0x80 | (4 * v27) & 0xC;
      sub_388150((v27 & 8) != 0 ? -1 : 1);
      v19 = v29;
      if ( (unsigned __int64)v29 > 1 )
      {
        v22 = (void **)src;
        v23 = (void *)qword_8D0AA0;
        if ( *((_QWORD *)&xmmword_8D0AA8 + 1) < (unsigned __int64)v29 )
        {
          qword_8D0AA0 = qvector_reserve(&qword_8D0AA0, qword_8D0AA0, v29, 1);
          v23 = (void *)qword_8D0AA0;
        }
        p_src = v22;
        *(_QWORD *)&xmmword_8D0AA8 = v19;
        memmove(v23, v22, v19 - 1);
        *(_BYTE *)(qword_8D0AA0 + v19 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&xmmword_8D0AA8 = 0;
      }
      v17 = 1;
    }
  }
  if ( src )
  {
    *(_QWORD *)&v29 = 0;
    qfree(src, p_src, v15, v16, v18);
  }
  return v17;
}
