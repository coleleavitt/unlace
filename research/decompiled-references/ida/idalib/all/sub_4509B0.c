__int64 __fastcall sub_4509B0(__m128i *a1, void *a2, __int64 a3)
{
  int v4; // eax
  char v6; // r13
  __int16 v7; // dx
  const char *v8; // r14
  __int64 v9; // r15
  const char *v10; // rdx
  char *v11; // rdx
  unsigned int v12; // r8d
  __int64 *v13; // r13
  int v14; // r14d
  int v15; // r8d
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 flags_by_size; // rax
  int v19; // r15d
  int v20; // eax
  unsigned __int64 v21; // r13
  int v22; // eax
  bool v23; // zf
  int v24; // eax
  int v25; // r15d
  int v26; // r14d
  __m128i *v28; // rax
  __m128i si128; // xmm0
  char *v30; // rdx
  int v31; // edx
  int v32; // edx
  int v33; // eax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  int v37; // eax
  int v38; // [rsp+0h] [rbp-A8h]
  __int64 *v39; // [rsp+8h] [rbp-A0h]
  int v40; // [rsp+8h] [rbp-A0h]
  __int64 *v41; // [rsp+10h] [rbp-98h]
  int v42; // [rsp+10h] [rbp-98h]
  void **p_src; // [rsp+18h] [rbp-90h]
  void *src; // [rsp+20h] [rbp-88h] BYREF
  void *v45[2]; // [rsp+28h] [rbp-80h]
  __int64 v46; // [rsp+38h] [rbp-70h]
  __int64 v47[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v48; // [rsp+50h] [rbp-58h]
  int v49[2]; // [rsp+58h] [rbp-50h]
  int v50; // [rsp+60h] [rbp-48h]
  int v51[2]; // [rsp+68h] [rbp-40h]
  int v52; // [rsp+70h] [rbp-38h]
  __int64 v53; // [rsp+78h] [rbp-30h]
  int v54; // [rsp+80h] [rbp-28h]
  int v55; // [rsp+88h] [rbp-20h]
  __int64 v56; // [rsp+90h] [rbp-18h]

  v4 = *(_DWORD *)a3;
  *(_QWORD *)v51 = __readfsqword(0x28u);
  if ( (v4 & 0x4000) != 0 && (v4 & 0x80000) == 0 )
  {
    v6 = 0;
  }
  else
  {
    if ( (v4 & 0x400000) == 0 )
    {
      v31 = (v4 & 0x10000) != 0 ? *(_DWORD *)(a3 + 40) : *(unsigned __int16 *)(a3 + 4);
      v32 = v31 - (((v4 & 0x20) == 0) - 1);
      v33 = v4 & 0x404;
      if ( v33 )
      {
        if ( v33 == 4 )
        {
          v32 *= 4;
        }
        else if ( v33 != 1024 )
        {
          v32 *= 8;
        }
      }
      else
      {
        v32 *= 2;
      }
      v34 = *(_QWORD *)(a3 + 8);
      v35 = *(_QWORD *)(a3 + 32);
      v36 = v34 + v32;
      if ( v35 >= v34 && v35 < v36 )
        return 0;
      if ( (unsigned __int64)a2 >= v34 && (unsigned __int64)a2 < v36 )
        return 0;
    }
    v6 = 1;
  }
  v7 = *(_WORD *)(a3 + 4);
  src = nullptr;
  p_src = &src;
  *(_OWORD *)v45 = 0;
  if ( v7 )
  {
    sub_35A790((char **)&src);
  }
  else
  {
    v28 = (__m128i *)qvector_reserve(&src, 0, 34, 1);
    src = v28;
    v45[0] = &qword_20 + 2;
    *v28 = _mm_load_si128((const __m128i *)&xmmword_23A7960);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7970);
    v28[2].m128i_i8[0] = 101;
    v28[1] = si128;
    *((_BYTE *)src + 33) = 0;
  }
  v8 = haystack;
  if ( v45[0] )
    v8 = (const char *)src;
  v9 = *(_QWORD *)(a3 + 32);
  if ( (get_flags_ex(v9, 4) & 0x800) == 0 )
    set_cmt(v9, v8, 0);
  if ( (get_flags_ex(a2, 4) & 0x800) == 0 )
    set_cmt(a2, "switch jump", 0);
  if ( src )
  {
    v45[0] = nullptr;
    qfree(src);
  }
  if ( *(_QWORD *)(a3 + 24) != -1 )
  {
    *(_OWORD *)v45 = 0;
    src = nullptr;
    sub_44EC70((__int64)a1, (__int64)&src, (__int64)a2, 1, nullptr);
    v10 = haystack;
    if ( v45[0] )
      v10 = (const char *)src;
    sub_44BB70(a1, *(void **)(a3 + 24), v10, 0, nullptr);
    forget_problem(13, *(_QWORD *)(a3 + 24));
    if ( (sub_3BE900(a1, *(_QWORD *)(a3 + 24), 4) & 0xC000) != 0x4000 )
    {
      sub_35A790((char **)&src);
      v11 = (char *)haystack;
      if ( v45[0] )
        v11 = (char *)src;
      sub_4D7EC0(
        (int)a1,
        *(_QWORD *)(a3 + 24),
        v11,
        v38,
        (int)v39,
        (int)v41,
        (int)&src,
        (int)src,
        v45[0],
        (__int64)v45[1],
        v46,
        v47[0],
        (void *)v47[1],
        v48,
        v49[0],
        v50,
        v51[0],
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    if ( src )
    {
      v45[0] = nullptr;
      qfree(src);
    }
  }
  if ( v6 )
  {
    v12 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 1) == 0 )
    {
LABEL_40:
      v21 = *(_QWORD *)(a3 + 8);
      if ( (v12 & 0x400000) != 0 )
      {
        v40 = 2;
        v42 = *(unsigned __int16 *)(a3 + 4);
        v22 = v12 & 0x404;
        if ( (v12 & 0x404) != 0 )
        {
          if ( v22 == 4 )
          {
            v40 = 4;
          }
          else
          {
            v23 = v22 == 1024;
            v24 = 8;
            if ( v23 )
              v24 = 1;
            v40 = v24;
          }
        }
        v25 = -((v12 >> 5) & 1);
        v26 = v25 * v40;
        if ( v42 > v25 )
        {
          do
          {
            ++v25;
            sub_3E2180(a1, (unsigned __int64)a2, v21 + v26, 0x13u);
            v26 += v40;
          }
          while ( v42 != v25 );
        }
      }
      else
      {
        sub_4501C0(a1, (__int64)a2, (int *)a3);
        if ( (get_flags_ex(v21, 4) & 0x800) == 0 )
          set_cmt(v21, "jump table for switch statement", 0);
        if ( (sub_3BE900(a1, v21, 4) & 0xC000) != 0x4000 || (unsigned int)sub_44D100(v21) )
        {
          *(_OWORD *)v45 = 0;
          src = nullptr;
          sub_35A790((char **)p_src);
          v30 = (char *)haystack;
          if ( v45[0] )
            v30 = (char *)src;
          sub_4D7EC0(
            (int)a1,
            v21,
            v30,
            v38,
            (int)v39,
            (int)v41,
            (int)p_src,
            (int)src,
            v45[0],
            (__int64)v45[1],
            v46,
            v47[0],
            (void *)v47[1],
            v48,
            v49[0],
            v50,
            v51[0],
            v52,
            v53,
            v54,
            v55,
            v56);
          if ( src )
          {
            v45[0] = nullptr;
            qfree(src);
          }
        }
      }
      forget_problem(13, v21);
      goto LABEL_49;
    }
    v13 = *(__int64 **)(a3 + 16);
    v14 = *(unsigned __int16 *)(a3 + 4);
    v15 = *(_DWORD *)a3 & 0x802;
    if ( v15 )
    {
      if ( v15 == 2 )
      {
        v16 = 4 * v14;
        sub_44FD20(a1, *(char **)(a3 + 16), v16);
        v17 = 4;
        if ( (*(_BYTE *)a3 & 8) != 0 )
        {
          v48 = 0;
          *(_OWORD *)v47 = 0;
          v41 = (__int64 *)((char *)v13 + 2 * v14);
          v39 = v47;
          *(_QWORD *)v49 = 0;
          sub_3D4400(
            a1->m128i_i64,
            v13,
            268436480,
            (char *)(2 * v14),
            (void *)0xFFFFFFFFFFFFFFFFLL,
            (const __m128i *)v47);
          if ( v48 )
            ((void (__fastcall *)(__int64 *, __int64 *, __int64))v48)(v47, v47, 3);
          v48 = 0;
          *(_QWORD *)v49 = 0;
          *(_OWORD *)v47 = 0;
          sub_3D4400(
            a1->m128i_i64,
            v41,
            268436480,
            (char *)(2 * v14),
            (void *)0xFFFFFFFFFFFFFFFFLL,
            (const __m128i *)v47);
          if ( v48 )
            ((void (__fastcall *)(__int64 *, __int64 *, __int64))v48)(v47, v47, 3);
          if ( (get_flags_ex(v13, 4) & 0x800) == 0 )
            set_cmt(v13, "low halves of switch values", 0);
          if ( (get_flags_ex(v41, 4) & 0x800) == 0 )
            set_cmt(v41, "high halves of switch values", 0);
          v19 = 4 * (v14 <= 200);
          if ( get_array_parameters(0, v41) <= 0 )
          {
            v37 = 6;
            if ( v14 >= 201 )
              v37 = -1;
            HIDWORD(src) = 4 * (v14 <= 200);
            LODWORD(src) = 0;
            LODWORD(v45[0]) = v37;
            set_array_parameters(v41, p_src);
          }
          forget_problem(13, v41);
          goto LABEL_35;
        }
      }
      else if ( v15 == 2048 )
      {
        v16 = (unsigned __int16)v14;
        sub_44FD20(a1, *(char **)(a3 + 16), (unsigned __int16)v14);
        v17 = 1;
      }
      else
      {
        v16 = 8 * v14;
        sub_44FD20(a1, *(char **)(a3 + 16), v16);
        v17 = 8;
      }
    }
    else
    {
      v16 = 2 * v14;
      sub_44FD20(a1, *(char **)(a3 + 16), v16);
      v17 = 2;
    }
    flags_by_size = get_flags_by_size(v17);
    v39 = v47;
    v48 = 0;
    *(_QWORD *)v49 = 0;
    *(_OWORD *)v47 = 0;
    sub_3D4400(a1->m128i_i64, v13, flags_by_size, (char *)v16, (void *)0xFFFFFFFFFFFFFFFFLL, (const __m128i *)v47);
    if ( v48 )
      ((void (__fastcall *)(__int64 *, __int64 *, __int64))v48)(v47, v47, 3);
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
      LODWORD(v45[0]) = v20;
      set_array_parameters(v13, p_src);
    }
    forget_problem(13, v13);
    v12 = *(_DWORD *)a3;
    goto LABEL_40;
  }
LABEL_49:
  v45[1] = a1;
  v45[0] = (void *)-1LL;
  src = &off_2B289E0;
  v46 = a3;
  sub_44E140(a1->m128i_i64, (__int64)a2, a3, (__int64)p_src, 0);
  if ( (*(_BYTE *)a3 & 0x20) != 0 )
    sub_3E2180(a1, (unsigned __int64)a2, *(_QWORD *)(a3 + 24), 0x13u);
  sub_3CFE00(a1, a2, 0x80000000LL);
  return 1;
}
