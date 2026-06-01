__int64 __fastcall sub_2F4DC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  int v6; // eax
  int v7; // r8d
  int v8; // r9d
  _DWORD *v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // r12
  unsigned __int64 v12; // rbx
  __m128i *v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __m128i *v17; // rdx
  __m128i v18; // xmm1
  void *v19; // rbx
  __m128i si128; // xmm0
  __int64 v21; // rax
  size_t v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // r14
  __int64 v26; // r9
  __int64 v27; // rdx
  _QWORD *v28; // rdi
  _QWORD *i; // rax
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rdi
  bool v35; // zf
  __int64 *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _DWORD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  void (**v42)(void); // rdx
  _QWORD *v43; // rax
  int v44; // [rsp-8h] [rbp-228h]
  int v45; // [rsp+0h] [rbp-220h]
  int v46; // [rsp+0h] [rbp-220h]
  unsigned int v47; // [rsp+4h] [rbp-21Ch]
  int v48; // [rsp+8h] [rbp-218h]
  int v49; // [rsp+8h] [rbp-218h]
  _DWORD *v50; // [rsp+8h] [rbp-218h]
  int v51[4]; // [rsp+10h] [rbp-210h] BYREF
  void *ptr; // [rsp+20h] [rbp-200h]
  int v53[2]; // [rsp+28h] [rbp-1F8h]
  int v54; // [rsp+30h] [rbp-1F0h]
  __int64 v55; // [rsp+38h] [rbp-1E8h] BYREF
  __int64 v56; // [rsp+40h] [rbp-1E0h] BYREF
  void *v57; // [rsp+48h] [rbp-1D8h] BYREF
  __int64 v58; // [rsp+50h] [rbp-1D0h] BYREF
  int v59; // [rsp+58h] [rbp-1C8h]
  int v60; // [rsp+60h] [rbp-1C0h]
  int v61; // [rsp+68h] [rbp-1B8h]
  __m128i v62; // [rsp+70h] [rbp-1B0h] BYREF
  int v63; // [rsp+80h] [rbp-1A0h]
  int v64; // [rsp+88h] [rbp-198h]
  int v65; // [rsp+90h] [rbp-190h]
  int v66; // [rsp+98h] [rbp-188h]
  int v67; // [rsp+A0h] [rbp-180h]
  void *v68; // [rsp+A8h] [rbp-178h]
  int v69; // [rsp+B0h] [rbp-170h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-168h]
  char v71[32]; // [rsp+C0h] [rbp-160h] BYREF
  char *v72; // [rsp+E0h] [rbp-140h] BYREF

  std::ostringstream::basic_ostringstream(&v62);
  sub_1648CA0(&v62, a1[1], a3, 3);
  *(_QWORD *)v53 = a1[1];
  LODWORD(ptr) = sub_15D1F10(a3);
  std::stringbuf::str(&v58, &v62.m128i_u64[1]);
  sub_180C5A0(&v57, v58);
  v6 = sub_15E3D10(
         v53[0],
         (int)&v57,
         (int)&qword_18D6CD0,
         0,
         0,
         (int)ptr,
         1,
         v44,
         v45,
         v48,
         (int)&v57,
         v51[2],
         (int)ptr,
         v53[0],
         v54,
         v55,
         v56,
         (int)v57,
         v58,
         v59,
         v60,
         v61,
         v62.m128i_i32[0],
         v62.m128i_i32[2],
         v63,
         v64,
         v65,
         v66,
         v67,
         v68,
         v69,
         v70);
  *(_QWORD *)v53 = sub_15DC610(v53[0], v6, 0, 0, v7, v8, v46, v49, v51[0], v51[2], (int)ptr, v53[0], v54, v55, v56, v57);
  sub_233E40((__int64)&v58);
  if ( !*(_QWORD *)a2 )
  {
    v36 = (__int64 *)sub_186B270(0x50u);
    v37 = a1[1];
    *((_BYTE *)v36 + 24) = 1;
    *((_DWORD *)v36 + 2) = 0;
    v36[2] = 0;
    *v36 = (__int64)&off_1C60CE8;
    v36[4] = v37;
    ptr = v36;
    sub_2EB560(v36 + 5, "opt");
    v38 = ptr;
    v39 = *(_DWORD **)a2;
    ++*((_DWORD *)ptr + 2);
    v38[9] = 0;
    if ( v39 )
    {
      v35 = v39[2]-- == 1;
      if ( v35 )
      {
        v42 = *(void (***)(void))v39;
        ptr = v39;
        *(_QWORD *)v51 = v38;
        (*v42)();
        sub_186B220(v39);
        v38 = *(_QWORD **)v51;
      }
    }
    *(_QWORD *)a2 = v38;
  }
  v9 = *(_DWORD **)(sub_15D1F10(a3) + 24);
  if ( v9 && *v9 == 5 )
  {
    v40 = sub_15E1B70(a1[21]);
    v55 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    ptr = a1 + 27;
    sub_2F13A0(a1 + 27, &v55);
    v41 = sub_15E1B70(a1[21]);
    v56 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    sub_2F13A0(ptr, &v56);
  }
  else
  {
    v10 = sub_15E1B70(a1[1]);
    v58 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    sub_2F13A0(a1 + 27, &v58);
  }
  v11 = *(_DWORD **)a2;
  v12 = *(_QWORD *)(*(_QWORD *)v53 + 16LL);
  ptr = *(void **)(*(_QWORD *)a2 + 32LL);
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = *((__m128i **)v11 + 9);
  if ( v13 )
  {
    v14 = v13[-1].m128i_u32[3];
    if ( v14 == v13[-1].m128i_i32[2] )
    {
      v47 = (3 * v14 + 1) >> 1;
      v23 = 40 * v47 + 8;
      if ( 40 * v14 + 8 >= (unsigned int)v23 || v14 >= (3 * v14 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_2EB560(&v58, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v58);
        sub_233E40((__int64)&v58);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = sub_186B270(v23);
      v25 = *((_QWORD **)v11 + 9);
      v50 = (_DWORD *)v24;
      v13 = (__m128i *)(v24 + 8);
      if ( v25 )
      {
        v26 = *((unsigned int *)v25 - 1);
        v27 = v24 + 8;
        *(_DWORD *)(v24 + 4) = v26;
        v28 = &v25[5 * v26];
        for ( i = v25; v28 != i; *(_DWORD *)(v27 - 8) = *((_DWORD *)i - 2) )
        {
          v30 = i[1];
          i += 5;
          v27 += 40;
          *(_QWORD *)(v27 - 32) = v30;
          v31 = *(i - 5);
          *(i - 5) = 0;
          *(_QWORD *)(v27 - 40) = v31;
          *(_QWORD *)(v27 - 16) = *(i - 2);
          v32 = *(i - 3);
          *(i - 3) = 0;
          *(_QWORD *)(v27 - 24) = v32;
        }
        if ( (_DWORD)v26 )
        {
          *(_QWORD *)v51 = &v25[5 * v26];
          do
          {
            while ( 1 )
            {
              sub_2EB430(v25[2], v25[3]);
              v33 = *v25;
              if ( *v25 )
              {
                v34 = v25[1];
                v35 = (*(_DWORD *)(v33 + 8))-- == 1;
                if ( v35 )
                  break;
              }
              v25 += 5;
              if ( v25 == *(_QWORD **)v51 )
                goto LABEL_24;
            }
            sub_15D7BC0(v34, v33);
            v25 += 5;
          }
          while ( v25 != *(_QWORD **)v51 );
LABEL_24:
          v25 = *((_QWORD **)v11 + 9);
        }
        sub_186B220(v25 - 1);
        v17 = (__m128i *)((char *)v13 + 40 * (unsigned int)v50[1]);
        v16 = v50[1] + 1;
      }
      else
      {
        *(_DWORD *)(v24 + 4) = 0;
        v17 = (__m128i *)(v24 + 8);
        v16 = 1;
      }
      *((_QWORD *)v11 + 9) = v13;
      *v50 = v47;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = (__m128i *)((char *)v13 + 40 * v15);
    }
  }
  else
  {
    v43 = (_QWORD *)sub_186B270(0x58u);
    v13 = (__m128i *)(v43 + 1);
    *v43 = 2;
    v16 = 1;
    *((_QWORD *)v11 + 9) = v13;
    v17 = v13;
  }
  v18 = (__m128i)v12;
  v19 = ptr;
  v17[1].m128i_i64[0] = 0;
  v17[1].m128i_i64[1] = (__int64)v19;
  v17[2].m128i_i32[0] = 0;
  *v17 = _mm_unpacklo_epi64(v18, (__m128i)(unsigned __int64)v19);
  v13[-1].m128i_i32[3] = v16;
  *(__m128i *)v51 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_2EB430(0, (__int64)v19);
  si128 = _mm_load_si128((const __m128i *)v51);
  v72 = (char *)&`vtable for'std::ostringstream + 64;
  v62 = si128;
  sub_233E40((__int64)v71);
  v62.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&v69);
  v21 = `VTT for'std::ostringstream[2];
  v62.m128i_i64[0] = `VTT for'std::ostringstream[1];
  *(__int64 *)((char *)v62.m128i_i64 + *(_QWORD *)(v62.m128i_i64[0] - 24)) = v21;
  v72 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&v72);
  return *(_QWORD *)v53;
}

