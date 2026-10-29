size_t *__fastcall sub_223D830(size_t *a1, __m128 *a2, _BYTE *a3, __int64 a4, int a5, char a6)
{
  char *v7; // rax
  __int64 v8; // rbp
  size_t v11; // r15
  unsigned __int64 v12; // rbp
  __int8 *v13; // r14
  _BYTE *v14; // rax
  size_t v15; // rax
  _BYTE *v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // r14
  char **v20; // rbx
  char **v21; // rdi
  char *v22; // rax
  __int64 v23; // rsi
  size_t v24; // rdx
  size_t v25; // rbx
  void **v26; // r13
  void **v27; // r14
  void **v28; // rbp
  char *v29; // rdi
  char *v30; // r15
  __int64 v31; // rbx
  void *v32; // rdi
  char *v33; // rsi
  char *v34; // rsi
  void *v35; // r13
  size_t v36; // rdx
  char **v37; // rdi
  char *v38; // rsi
  void *v39; // rax
  char *v40; // rsi
  size_t v41; // rdx
  void *v44; // [rsp+10h] [rbp-118h] BYREF
  __int64 v45; // [rsp+18h] [rbp-110h]
  __int64 v46[2]; // [rsp+20h] [rbp-108h] BYREF
  void *dest; // [rsp+30h] [rbp-F8h] BYREF
  __m128 v48; // [rsp+38h] [rbp-F0h] BYREF
  void *src; // [rsp+50h] [rbp-D8h] BYREF
  size_t n; // [rsp+58h] [rbp-D0h]
  _QWORD v51[2]; // [rsp+60h] [rbp-C8h] BYREF
  void *v52[2]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v53[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int16 v54; // [rsp+90h] [rbp-98h]
  size_t v55[2]; // [rsp+A0h] [rbp-88h] BYREF
  char *v56[2]; // [rsp+B0h] [rbp-78h] BYREF
  __int16 v57; // [rsp+C0h] [rbp-68h]
  char v58; // [rsp+E8h] [rbp-40h]

  if ( !a4 )
  {
    v7 = "glob";
    if ( !a6 )
      v7 = "regex";
    v54 = 771;
    v52[0] = "Supplied ";
    v53[0] = v7;
    v55[0] = (size_t)v52;
    v57 = (unsigned __int16)&elf_gnu_hash_indexes[11] + 2;
    v55[1] = 0;
    v56[0] = " was blank";
    v8 = std::_V2::generic_category((std::_V2 *)((char *)&elf_gnu_hash_indexes[11] + 2));
    sub_2253560(&src, v55);
    sub_22205D0(a1, (__int64)&src, 22, v8);
    if ( src != v51 )
      operator delete(src);
    return a1;
  }
  if ( !a6 )
  {
    if ( a3 )
    {
      dest = &v48.m128_u16[4];
      sub_223C020(&dest, a3, (__int64)&a3[a4]);
      v11 = v48.m128_u64[0];
      if ( v48.m128_u64[0] )
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = (__int8 *)dest;
          v14 = memchr((char *)dest + v12, 42, v11 - v12);
          if ( !v14 )
            break;
          v15 = v14 - v13;
          if ( v15 == -1 )
            break;
          if ( v11 < v15 )
            std::__throw_out_of_range_fmt(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              "basic_string::replace",
              v15,
              v11);
          v12 = v15 + 2;
          sub_99BDC0(&dest, v15, v11 != v15, ".*", 2u);
          v11 = v48.m128_u64[0];
          if ( v12 >= v48.m128_u64[0] )
            goto LABEL_15;
        }
      }
      else
      {
LABEL_15:
        v13 = (__int8 *)dest;
      }
    }
    else
    {
      v48.m128_i8[8] = 0;
      v11 = 0;
      dest = &v48.m128_u16[4];
      v13 = &v48.m128_i8[8];
      v48.m128_u64[0] = 0;
    }
    v53[1] = v11;
    v52[0] = "^(";
    v55[0] = (size_t)v52;
    v56[0] = ")$";
    v53[0] = v13;
    v54 = 1283;
    v57 = 770;
    sub_2253560(&src, v55);
    v16 = dest;
    if ( src == v51 )
    {
      v36 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v51[0];
        else
          memcpy(dest, src, n);
        v36 = n;
        v16 = dest;
      }
      v48.m128_u64[0] = v36;
      v16[v36] = 0;
      v16 = src;
      goto LABEL_20;
    }
    if ( dest == &v48.m128_u16[4] )
    {
      v44 = (void *)v51[0];
      dest = src;
      v48 = _mm_loadh_ps((const double *)&v44);
    }
    else
    {
      v44 = (void *)v51[0];
      v17 = v48.m128_u64[1];
      dest = src;
      v48 = _mm_loadh_ps((const double *)&v44);
      if ( v16 )
      {
        src = v16;
        v51[0] = v17;
LABEL_20:
        n = 0;
        *v16 = 0;
        if ( src != v51 )
          operator delete(src);
        v44 = v46;
        sub_2233940((__int64)v46, (__int64)dest, v48.m128_i64[0], 0);
        src = v51;
        n = 0;
        LOBYTE(v51[0]) = 0;
        if ( (unsigned __int8)sub_2233C80(v46, &src) )
        {
          v45 = operator new(0x10u);
          sub_22339D0(v45, (__int64)v44);
          LODWORD(v55[1]) = a5;
          v55[0] = v45;
          v33 = (char *)a2[2].m128_u64[0];
          if ( v33 == (char *)a2[2].m128_u64[1] )
          {
            sub_223C7D0((__int64)&a2[1].m128_i64[1], v33, (__int64 *)v55);
          }
          else
          {
            v55[0] = 0;
            v34 = v33 + 16;
            *((_QWORD *)v34 - 2) = v45;
            *((_DWORD *)v34 - 2) = v55[1];
            a2[2].m128_u64[0] = (unsigned __int64)v34;
          }
          v35 = (void *)v55[0];
          if ( v55[0] )
          {
            sub_22339F0((void **)v55[0]);
            operator delete(v35, 0x10u);
          }
          *a1 = 0;
        }
        else
        {
          v55[0] = (size_t)&src;
          v57 = 260;
          v18 = std::_V2::generic_category((std::_V2 *)v46);
          sub_2253560(v52, v55);
          sub_22205D0(a1, (__int64)v52, 22, v18);
          if ( v52[0] != v53 )
            operator delete(v52[0]);
        }
        if ( src != v51 )
          operator delete(src);
        sub_22339F0((void **)v44);
        if ( dest != &v48.m128_u16[4] )
          operator delete(dest);
        return a1;
      }
    }
    v16 = v51;
    src = v51;
    goto LABEL_20;
  }
  v44 = a3;
  v20 = (char **)operator new(0x70u);
  v52[0] = v20;
  memset(v20, 0, 0x70u);
  v21 = v20 + 2;
  v20[7] = (char *)(v20 + 9);
  v20[8] = (char *)0x100000000LL;
  *v20 = (char *)(v20 + 2);
  v55[0] = (size_t)v56;
  if ( !a3 )
  {
    LOBYTE(v56[0]) = 0;
    v41 = 0;
LABEL_78:
    v20[1] = (char *)v41;
    *((_BYTE *)v21 + v41) = 0;
    v21 = (char **)v55[0];
    goto LABEL_34;
  }
  v44 = v56;
  sub_223C020(v55, a3, (__int64)&a3[a4]);
  v20 = (char **)v52[0];
  v21 = *(char ***)v52[0];
  if ( (char **)v55[0] == v56 )
  {
    v41 = v55[1];
    if ( v55[1] )
    {
      if ( v55[1] == 1 )
        *(_BYTE *)v21 = v56[0];
      else
        memcpy(v21, (const void *)v55[0], v55[1]);
      v41 = v55[1];
      v21 = (char **)*v20;
    }
    goto LABEL_78;
  }
  if ( v21 == (char **)((char *)v52[0] + 16) )
  {
    *(_QWORD *)v52[0] = v55[0];
    v20[1] = (char *)v55[1];
    v20[2] = v56[0];
  }
  else
  {
    *(_QWORD *)v52[0] = v55[0];
    v22 = v20[2];
    v20[1] = (char *)v55[1];
    v20[2] = v56[0];
    if ( v21 )
    {
      v55[0] = (size_t)v21;
      v56[0] = v22;
      goto LABEL_34;
    }
  }
  v21 = v56;
  v55[0] = (size_t)v56;
LABEL_34:
  v55[1] = 0;
  *(_BYTE *)v21 = 0;
  if ( (char **)v55[0] != v56 )
    operator delete((void *)v55[0]);
  v23 = *(_QWORD *)v52[0];
  v24 = *((_QWORD *)v52[0] + 1);
  *((_DWORD *)v52[0] + 8) = a5;
  sub_2225FD0((__int64)v55, v23, v24, 0x400u, 1);
  if ( (v58 & 1) != 0
    || (v37 = (char **)((char *)v52[0] + 56),
        *(__m128i *)((char *)v52[0] + 40) = _mm_load_si128((const __m128i *)v55),
        sub_22255F0(v37, v56),
        (v58 & 1) != 0) )
  {
    v25 = v55[0];
    v55[0] = 0;
    sub_223C6C0((__int64 *)v55);
    if ( v25 )
    {
      *a1 = v25;
      goto LABEL_39;
    }
  }
  else
  {
    sub_223C6C0((__int64 *)v55);
  }
  v38 = (char *)a2->m128_u64[1];
  if ( v38 == (char *)a2[1].m128_u64[0] )
  {
    sub_223D1E0(a2, v38, (__int64 *)v52);
  }
  else
  {
    v39 = v52[0];
    v40 = v38 + 8;
    v52[0] = nullptr;
    *((_QWORD *)v40 - 1) = v39;
    a2->m128_u64[1] = (unsigned __int64)v40;
  }
  *a1 = 0;
LABEL_39:
  v26 = (void **)v52[0];
  if ( v52[0] )
  {
    v27 = *((void ***)v52[0] + 7);
    v28 = &v27[5 * *((unsigned int *)v52[0] + 16)];
    if ( v27 != v28 )
    {
      do
      {
        while ( 1 )
        {
          v28 -= 5;
          v29 = (char *)v28[2];
          if ( v29 != (char *)(v28 + 5) )
            free(v29);
          v30 = (char *)*v28;
          v31 = (__int64)*v28 + 80 * *((unsigned int *)v28 + 2);
          if ( *v28 != (void *)v31 )
          {
            do
            {
              while ( 1 )
              {
                v31 -= 80;
                v32 = *(void **)(v31 + 8);
                if ( v32 == (void *)(v31 + 24) )
                  break;
                free(v32);
                if ( v30 == (char *)v31 )
                  goto LABEL_46;
              }
            }
            while ( v30 != (char *)v31 );
LABEL_46:
            v30 = (char *)*v28;
          }
          if ( v30 == (char *)(v28 + 2) )
            break;
          free(v30);
          if ( v27 == v28 )
            goto LABEL_49;
        }
      }
      while ( v27 != v28 );
LABEL_49:
      v28 = (void **)v26[7];
    }
    if ( v28 != v26 + 9 )
      free(v28);
    if ( *v26 != v26 + 2 )
      operator delete(*v26);
    operator delete(v26, 0x70u);
  }
  return a1;
}
