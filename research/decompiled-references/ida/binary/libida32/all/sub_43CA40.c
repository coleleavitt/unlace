__int64 __fastcall sub_43CA40(__m128i *a1, unsigned int a2, __int64 a3)
{
  int v4; // eax
  char v6; // r13
  __int16 v7; // dx
  const char *v8; // r14
  unsigned int v9; // r15d
  const char *v10; // rdx
  char *v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r13d
  int v14; // r14d
  int v15; // r8d
  int v16; // r15d
  __int64 v17; // rdi
  void *flags_by_size; // rax
  int v19; // r15d
  int v20; // eax
  int v21; // r13d
  int v22; // eax
  int v23; // r14d
  unsigned int v24; // r15d
  __m128i *v26; // rax
  __m128i si128; // xmm0
  char *v28; // rdx
  int v29; // edx
  int v30; // edx
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // edx
  int v35; // eax
  int v36; // [rsp+0h] [rbp-A8h]
  int *v37; // [rsp+8h] [rbp-A0h]
  int v38; // [rsp+8h] [rbp-A0h]
  void **p_src; // [rsp+10h] [rbp-98h]
  int v40; // [rsp+18h] [rbp-90h]
  unsigned int v41; // [rsp+1Ch] [rbp-8Ch]
  unsigned int v42; // [rsp+1Ch] [rbp-8Ch]
  void *src; // [rsp+20h] [rbp-88h] BYREF
  void *v44[2]; // [rsp+28h] [rbp-80h]
  __int64 v45; // [rsp+38h] [rbp-70h]
  int v46[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v47; // [rsp+50h] [rbp-58h]
  int v48[2]; // [rsp+58h] [rbp-50h]
  int v49; // [rsp+60h] [rbp-48h]
  int v50[2]; // [rsp+68h] [rbp-40h]
  int v51; // [rsp+70h] [rbp-38h]
  __int64 v52; // [rsp+78h] [rbp-30h]
  int v53; // [rsp+80h] [rbp-28h]
  int v54; // [rsp+88h] [rbp-20h]
  __int64 v55; // [rsp+90h] [rbp-18h]

  v4 = *(_DWORD *)a3;
  *(_QWORD *)v50 = __readfsqword(0x28u);
  if ( (v4 & 0x4000) != 0 && (v4 & 0x80000) == 0 )
  {
    v6 = 0;
  }
  else
  {
    if ( (v4 & 0x400000) == 0 )
    {
      v29 = (v4 & 0x10000) != 0 ? *(_DWORD *)(a3 + 24) : *(unsigned __int16 *)(a3 + 4);
      v30 = v29 - (((v4 & 0x20) == 0) - 1);
      v31 = v4 & 0x404;
      if ( v31 )
      {
        if ( v31 == 4 )
        {
          v30 *= 4;
        }
        else if ( v31 != 1024 )
        {
          v30 *= 8;
        }
      }
      else
      {
        v30 *= 2;
      }
      v32 = *(_DWORD *)(a3 + 8);
      v33 = *(_DWORD *)(a3 + 20);
      v34 = v32 + v30;
      if ( v33 >= v32 && v33 < v34 )
        return 0;
      if ( a2 >= v32 && a2 < v34 )
        return 0;
    }
    v6 = 1;
  }
  v7 = *(_WORD *)(a3 + 4);
  src = nullptr;
  p_src = &src;
  *(_OWORD *)v44 = 0;
  if ( v7 )
  {
    sub_3573A0((char **)&src);
  }
  else
  {
    v26 = (__m128i *)qvector_reserve(&src, 0, 34, 1);
    src = v26;
    v44[0] = &qword_20 + 2;
    *v26 = _mm_load_si128((const __m128i *)&xmmword_2383920);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2383930);
    v26[2].m128i_i8[0] = 101;
    v26[1] = si128;
    *((_BYTE *)src + 33) = 0;
  }
  v8 = haystack;
  if ( v44[0] )
    v8 = (const char *)src;
  v9 = *(_DWORD *)(a3 + 20);
  if ( (get_flags_ex(v9, 4) & 0x800) == 0 )
    set_cmt(v9, v8, 0);
  if ( (get_flags_ex(a2, 4) & 0x800) == 0 )
    set_cmt(a2, "switch jump", 0);
  if ( src )
  {
    v44[0] = nullptr;
    qfree(src);
  }
  if ( *(_DWORD *)(a3 + 16) != -1 )
  {
    *(_OWORD *)v44 = 0;
    src = nullptr;
    sub_43ADF0((__int64)a1, (__int64)&src, a2, 1, nullptr);
    v10 = haystack;
    if ( v44[0] )
      v10 = (const char *)src;
    sub_437DE0(a1, *(_DWORD *)(a3 + 16), v10, 0, nullptr);
    forget_problem(13, *(unsigned int *)(a3 + 16));
    if ( (sub_3B9AA0((__int64)a1, *(_DWORD *)(a3 + 16), 4) & 0xC000) != 0x4000 )
    {
      sub_3573A0((char **)&src);
      v11 = (char *)haystack;
      if ( v44[0] )
        v11 = (char *)src;
      sub_4C0DE0(
        (int)a1,
        *(_DWORD *)(a3 + 16),
        v11,
        v36,
        (int)v37,
        (int)&src,
        v40,
        (int)src,
        v44[0],
        (__int64)v44[1],
        v45,
        v46[0],
        *(void **)&v46[2],
        v47,
        v48[0],
        v49,
        v50[0],
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    if ( src )
    {
      v44[0] = nullptr;
      qfree(src);
    }
  }
  if ( v6 )
  {
    v12 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 1) == 0 )
    {
LABEL_40:
      v41 = *(_DWORD *)(a3 + 8);
      if ( (v12 & 0x400000) != 0 )
      {
        v21 = 2;
        v38 = *(unsigned __int16 *)(a3 + 4);
        v22 = v12 & 0x404;
        if ( (v12 & 0x404) != 0 )
        {
          if ( v22 == 4 )
          {
            v21 = 4;
          }
          else
          {
            v21 = 1;
            if ( v22 != 1024 )
              v21 = 8;
          }
        }
        v23 = -((v12 >> 5) & 1);
        if ( v38 > v23 )
        {
          v24 = v23 * v21 + v41;
          do
          {
            sub_3DC640(a1, a2, v24, 0x13u);
            ++v23;
            v24 += v21;
          }
          while ( v38 != v23 );
        }
      }
      else
      {
        sub_43C2A0(a1, a2, (int *)a3);
        if ( (get_flags_ex(v41, 4) & 0x800) == 0 )
          set_cmt(v41, "jump table for switch statement", 0);
        if ( (sub_3B9AA0((__int64)a1, v41, 4) & 0xC000) != 0x4000 || (unsigned int)sub_4393D0(v41) )
        {
          *(_OWORD *)v44 = 0;
          src = nullptr;
          sub_3573A0((char **)p_src);
          v28 = (char *)haystack;
          if ( v44[0] )
            v28 = (char *)src;
          sub_4C0DE0(
            (int)a1,
            v41,
            v28,
            v36,
            (int)v37,
            (int)p_src,
            v40,
            (int)src,
            v44[0],
            (__int64)v44[1],
            v45,
            v46[0],
            *(void **)&v46[2],
            v47,
            v48[0],
            v49,
            v50[0],
            v51,
            v52,
            v53,
            v54,
            v55);
          if ( src )
          {
            v44[0] = nullptr;
            qfree(src);
          }
        }
      }
      forget_problem(13, v41);
      goto LABEL_49;
    }
    v13 = *(_DWORD *)(a3 + 12);
    v14 = *(unsigned __int16 *)(a3 + 4);
    v15 = *(_DWORD *)a3 & 0x802;
    if ( v15 )
    {
      if ( v15 == 2 )
      {
        v16 = 4 * v14;
        sub_43BE50(a1, v13, 4 * v14);
        v17 = 4;
        if ( (*(_BYTE *)a3 & 8) != 0 )
        {
          v42 = 2 * v14 + v13;
          v37 = v46;
          v47 = 0;
          *(_QWORD *)v48 = 0;
          *(_OWORD *)v46 = 0;
          sub_3CE970(a1->m128i_i64, v13, (void *)0x10000400, 2 * v14, -1, (const __m128i *)v46);
          if ( v47 )
            ((void (__fastcall *)(int *, int *, __int64))v47)(v46, v46, 3);
          v47 = 0;
          *(_QWORD *)v48 = 0;
          *(_OWORD *)v46 = 0;
          sub_3CE970(a1->m128i_i64, v42, (void *)0x10000400, 2 * v14, -1, (const __m128i *)v46);
          if ( v47 )
            ((void (__fastcall *)(int *, int *, __int64))v47)(v46, v46, 3);
          if ( (get_flags_ex(v13, 4) & 0x800) == 0 )
            set_cmt(v13, "low halves of switch values", 0);
          if ( (get_flags_ex(v42, 4) & 0x800) == 0 )
            set_cmt(v42, "high halves of switch values", 0);
          v19 = 4 * (v14 <= 200);
          if ( get_array_parameters(0, v42) <= 0 )
          {
            v35 = 6;
            if ( v14 >= 201 )
              v35 = -1;
            HIDWORD(src) = 4 * (v14 <= 200);
            LODWORD(src) = 0;
            LODWORD(v44[0]) = v35;
            set_array_parameters(v42, p_src);
          }
          forget_problem(13, v42);
          goto LABEL_35;
        }
      }
      else if ( v15 == 2048 )
      {
        v16 = *(unsigned __int16 *)(a3 + 4);
        sub_43BE50(a1, v13, v16);
        v17 = 1;
      }
      else
      {
        v16 = 8 * v14;
        sub_43BE50(a1, v13, 8 * v14);
        v17 = 8;
      }
    }
    else
    {
      v16 = 2 * v14;
      sub_43BE50(a1, v13, 2 * v14);
      v17 = 2;
    }
    flags_by_size = (void *)get_flags_by_size(v17);
    v37 = v46;
    v47 = 0;
    *(_QWORD *)v48 = 0;
    *(_OWORD *)v46 = 0;
    sub_3CE970(a1->m128i_i64, v13, flags_by_size, v16, -1, (const __m128i *)v46);
    if ( v47 )
      ((void (__fastcall *)(int *, int *, __int64))v47)(v46, v46, 3);
    v19 = 4 * (v14 <= 200);
    if ( (*(_BYTE *)(a3 + 2) & 1) != 0 )
    {
      if ( (get_flags_ex(v13, 4) & 0x800) == 0 )
        set_cmt(v13, "indirect table for switch statement", 0);
    }
    else if ( (get_flags_ex(v13, 4) & 0x800) == 0 )
    {
      set_cmt(v13, "value table for switch statement", 0);
    }
LABEL_35:
    if ( get_array_parameters(0, v13) <= 0 )
    {
      v20 = 6;
      if ( v14 >= 201 )
        v20 = -1;
      HIDWORD(src) = v19;
      LODWORD(src) = 0;
      LODWORD(v44[0]) = v20;
      set_array_parameters(v13, p_src);
    }
    forget_problem(13, v13);
    v12 = *(_DWORD *)a3;
    goto LABEL_40;
  }
LABEL_49:
  v44[1] = a1;
  LODWORD(v44[0]) = -1;
  src = &off_2AFEA20;
  v45 = a3;
  sub_43A340(a1, a2, a3, (__int64)p_src, 0);
  if ( (*(_BYTE *)a3 & 0x20) != 0 )
    sub_3DC640(a1, a2, *(_DWORD *)(a3 + 16), 0x13u);
  sub_3CA520(a1, a2, 0x80000000LL);
  return 1;
}

