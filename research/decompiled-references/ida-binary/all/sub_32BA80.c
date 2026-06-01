__int64 __fastcall sub_32BA80(
        unsigned int a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 result; // rax
  const char *v10; // r12
  __int64 flags; // rax
  int v13; // ebp
  char *v14; // rdx
  double v15; // xmm0_8
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 data_elsize; // r15
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  _BYTE *v24; // rsi
  _BYTE *v25; // rax
  const char *v26; // rsi
  char *v27; // r14
  size_t v28; // rax
  size_t v29; // rbp
  char *v30; // rdx
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  unsigned int v33; // ebp
  __int64 qword; // rax
  __int64 wide_word; // rbp
  size_t v36; // rax
  size_t v37; // r15
  void *v38; // rdi
  size_t v39; // rdx
  char v40; // [rsp+0h] [rbp-618h]
  size_t v41; // [rsp+8h] [rbp-610h]
  __int64 v42; // [rsp+18h] [rbp-600h] BYREF
  char *s; // [rsp+20h] [rbp-5F8h] BYREF
  __int128 v44; // [rsp+28h] [rbp-5F0h]
  void *dest; // [rsp+40h] [rbp-5D8h] BYREF
  __int128 v46; // [rsp+48h] [rbp-5D0h]
  __int128 v47; // [rsp+60h] [rbp-5B8h]
  __int64 v48; // [rsp+70h] [rbp-5A8h]
  __int64 v49; // [rsp+78h] [rbp-5A0h]
  __int64 v50; // [rsp+80h] [rbp-598h]
  char v51; // [rsp+88h] [rbp-590h] BYREF
  char v52; // [rsp+1C8h] [rbp-450h] BYREF
  char src[1032]; // [rsp+1D0h] [rbp-448h] BYREF
  unsigned __int64 v54; // [rsp+5D8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  result = 0;
  if ( (BYTE9(xmmword_8CC820) & 4) == 0 )
    return result;
  v10 = (const char *)xmmword_8CC810;
  v44 = 0;
  v46 = 0;
  s = nullptr;
  dest = nullptr;
  if ( get_forced_operand(&s, xmmword_8CC810, a1) < 0 && (~((unsigned __int16)get_flags_ex(v10, 4) >> 8) & 6) == 0 )
  {
    print_operand(&s, v10, a1, 0, 0);
    if ( (unsigned __int64)v44 > 1 )
      tag_remove(&s, s, 0);
  }
  flags = get_flags_ex(v10, 4);
  v49 = 0;
  v13 = flags;
  v14 = &v51;
  v47 = -1;
  v15 = 0.0;
  v50 = 0;
  do
  {
    *(_WORD *)v14 = 0;
    v14 += 40;
    *((_WORD *)v14 - 19) = 0;
    *((_WORD *)v14 - 18) = 0;
    *((_DWORD *)v14 - 2) = 0;
    *((_WORD *)v14 - 17) = 0;
    *((_OWORD *)v14 - 2) = 0;
    *((_QWORD *)v14 - 2) = 0;
  }
  while ( &v52 != v14 );
  v48 = -1;
  v16 = flags & 0x600;
  if ( v16 == 1536 )
  {
    v26 = v10;
    print_operand(&dest, v10, a1, 0, 0);
    if ( (unsigned __int64)v46 > 1 )
    {
      v26 = (const char *)dest;
      tag_remove(&dest, dest, 0);
    }
    if ( (unsigned __int64)v44 <= 1 )
      goto LABEL_17;
    goto LABEL_10;
  }
  v17 = flags;
  data_elsize = get_data_elsize(v10, flags, 0);
  if ( v16 != 1024 )
    goto LABEL_7;
  v33 = v13 & 0xF0000000;
  if ( v33 )
  {
    if ( v33 == 0x10000000 )
    {
      wide_word = (unsigned int)get_wide_word(v10, 0.0);
      goto LABEL_36;
    }
    if ( v33 == 0x20000000 || v33 == 0x80000000LL )
    {
      wide_word = (unsigned int)get_wide_dword(v10, 0.0);
      goto LABEL_36;
    }
    if ( v33 != 805306368 && v33 != 2415919104LL )
      goto LABEL_7;
    qword = get_qword(v10);
  }
  else
  {
    qword = get_wide_byte(v10, v17, v18);
  }
  wide_word = qword;
LABEL_36:
  if ( data_elsize && (get_item_end(v10) - (__int64)v10) / data_elsize == 1 )
  {
    btoa64(src, 1024, wide_word, 0, 0.0);
    v36 = strlen(src);
    v37 = v36;
    if ( v36 )
    {
      v38 = dest;
      v39 = v36 + 1;
      if ( *((_QWORD *)&v46 + 1) < v36 + 1 )
      {
        v41 = v36 + 1;
        dest = (void *)qvector_reserve(&dest, dest, v39, 1);
        v39 = v41;
        v38 = dest;
      }
      *(_QWORD *)&v46 = v39;
      memmove(v38, src, v37);
      *((_BYTE *)dest + v37) = 0;
    }
    else
    {
      *(_QWORD *)&v46 = 0;
    }
    goto LABEL_10;
  }
LABEL_7:
  v24 = dest;
  if ( *((_QWORD *)&v46 + 1) <= 9u )
  {
    dest = (void *)qvector_reserve(&dest, dest, 10, 1);
    v24 = dest;
  }
  *(_QWORD *)&v46 = 10;
  *(_QWORD *)v24 = 0x6E776F6E6B6E753CLL;
  v25 = dest;
  v24[8] = 62;
  v25[9] = 0;
LABEL_10:
  v26 = (const char *)&v42;
  v42 = (int)(a1 + 1);
  if ( (unsigned int)sub_1697D0(
                       (int)"@0:477[]\n"
                            "Manual operand\n"
                            "\n"
                            "Enter alternate string for the %D operand\n"
                            "\n"
                            "  Original operand: %q\n"
                            "  <~O~perand:q:100:40::>\n"
                            "\n"
                            "\n"
                            "\n",
                       (__int64)&v42,
                       (__int64)&dest,
                       (__int64)&s,
                       v19,
                       v20,
                       (__m128)0LL,
                       a3,
                       a4,
                       a5,
                       v22,
                       v23,
                       a8,
                       a9,
                       v40) )
  {
    trim(s);
    v27 = s;
    v28 = strlen(s);
    v29 = v28;
    if ( v28 )
    {
      v31 = v28 + 1;
      v32 = v44;
      if ( (unsigned __int64)v44 < v31 )
      {
        if ( *((_QWORD *)&v44 + 1) < v31 )
        {
          s = (char *)qvector_reserve(&s, v27, v31, 1);
          v27 = s;
          v32 = v44;
        }
        memset(&v27[v32], 0, v31 - v32);
        *(_QWORD *)&v44 = v31;
        v27 = s;
      }
      else if ( v31 != (_QWORD)v44 )
      {
        *(_QWORD *)&v44 = v31;
      }
      v27[v29] = 0;
    }
    else if ( v27 )
    {
      *(_QWORD *)&v44 = 0;
      v15 = qfree(v27, (const char *)&v42);
      s = nullptr;
      *((_QWORD *)&v44 + 1) = 0;
    }
    v30 = (char *)&s1;
    if ( (_QWORD)v44 )
      v30 = s;
    v26 = (const char *)a1;
    set_forced_operand(v10, a1, v30);
  }
LABEL_17:
  if ( dest )
  {
    *(_QWORD *)&v46 = 0;
    v15 = qfree(dest, v26);
  }
  if ( s )
  {
    *(_QWORD *)&v44 = 0;
    qfree(s, v26, v15);
  }
  return 1;
}
