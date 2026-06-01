__int64 __fastcall sub_13F0100(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        double a7,
        double a8)
{
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rbx
  __m128i si128; // xmm0
  bool v12; // zf
  _BYTE *v13; // rax
  __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // rbx
  void *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  _BYTE *v23; // rcx
  char v24; // di
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  void *v27; // rsi
  void **v29; // rbp
  size_t v30; // rax
  void **v31; // r15
  void **v32; // r12
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // r15
  void **v36; // r12
  __int64 v37; // rax
  char *v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  void **v41; // rbp
  size_t v42; // rax
  void **v43; // r15
  void **v44; // r12
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // r15
  void **v48; // r12
  unsigned __int32 v49; // ebx
  unsigned __int64 v50; // r8
  __int64 v51; // rdx
  char *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // rax
  unsigned __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rdx
  void *v65; // [rsp+30h] [rbp-168h]
  unsigned __int64 v66; // [rsp+30h] [rbp-168h]
  unsigned int v67; // [rsp+30h] [rbp-168h]
  unsigned __int64 v68; // [rsp+30h] [rbp-168h]
  char v70; // [rsp+4Fh] [rbp-149h] BYREF
  void *v71[2]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v72; // [rsp+60h] [rbp-138h] BYREF
  void *src; // [rsp+70h] [rbp-128h] BYREF
  size_t n; // [rsp+78h] [rbp-120h]
  __int64 v75; // [rsp+80h] [rbp-118h] BYREF
  void *v76; // [rsp+90h] [rbp-108h]
  _BYTE v77[16]; // [rsp+A0h] [rbp-F8h] BYREF
  __int16 v78; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i v80; // [rsp+C8h] [rbp-D0h]
  _BYTE v81[192]; // [rsp+D8h] [rbp-C0h] BYREF

  v8 = a2;
  v9 = a1;
  v10 = a3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  *(_QWORD *)a1 = 0;
  v80 = si128;
  v12 = *(_WORD *)(a2 + 16) == 1;
  *(_WORD *)(a1 + 16) = a4 == 0 ? 14 : 9;
  v13 = v81;
  *(_WORD *)(a1 + 18) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  ptr = v81;
  v81[0] = 34;
  v80.m128i_i64[0] = 1;
  if ( v12 )
  {
    v24 = 0;
    v22 = 1;
    v23 = v81;
    goto LABEL_20;
  }
LABEL_2:
  v15 = *(_WORD *)(v8 + 16);
  if ( (unsigned __int16)(v15 - 17) <= 2u )
  {
LABEL_4:
    v16 = *(_QWORD *)(a3 + 56);
    v17 = *(_QWORD *)(a3 + 88);
    v70 = 0;
    sub_13D35F0((__int64)v71, v8, v17, v16, &v70);
    if ( !v70 )
    {
      sub_13D3E20(&src, (_BYTE *)v71[0], (__int64)v71[1], 0);
      v19 = n;
      v20 = src;
      v21 = v80.m128i_i64[0];
      if ( n + v80.m128i_i64[0] > v80.m128i_i64[1] )
      {
        v65 = src;
        sub_2236E10(&ptr, v81, n + v80.m128i_i64[0], 1);
        v21 = v80.m128i_i64[0];
        v20 = v65;
      }
      if ( v19 )
      {
        memmove((char *)ptr + v21, v20, v19);
        v21 = v80.m128i_i64[0];
      }
      v80.m128i_i64[0] = v21 + v19;
      if ( src != &v75 )
        operator delete(src);
    }
    if ( v71[0] != &v72 )
      operator delete(v71[0]);
    goto LABEL_7;
  }
  while ( 1 )
  {
    if ( (unsigned __int16)(v15 - 9) <= 6u )
      goto LABEL_4;
    if ( v15 == 3 )
    {
      sub_145C700(*(double *)si128.m128i_i64, a8);
      goto LABEL_7;
    }
    v49 = v80.m128i_i32[0];
    v50 = (unsigned int)(*(_DWORD *)(v8 + 4) + v80.m128i_i32[0]);
    if ( v50 != v80.m128i_i64[0] )
    {
      if ( v50 >= v80.m128i_i64[0] )
      {
        v51 = v80.m128i_i64[0];
        if ( v50 > v80.m128i_i64[1] )
        {
          v68 = (unsigned int)(*(_DWORD *)(v8 + 4) + v80.m128i_i32[0]);
          sub_2236E10(&ptr, v81, v68, 1);
          v51 = v80.m128i_i64[0];
          v50 = v68;
        }
        v52 = (char *)ptr;
        if ( (char *)ptr + v51 != (char *)ptr + v50 )
        {
          v66 = v50;
          memset((char *)ptr + v51, 0, v50 - v51);
          v52 = (char *)ptr;
          v50 = v66;
        }
        v80.m128i_i64[0] = v50;
        goto LABEL_85;
      }
      v80.m128i_i64[0] = (unsigned int)(*(_DWORD *)(v8 + 4) + v80.m128i_i32[0]);
    }
    v52 = (char *)ptr;
LABEL_85:
    v53 = *(_QWORD *)(a3 + 56);
    v54 = *(_QWORD *)(a3 + 88);
    src = &v52[v49];
    LOBYTE(v71[0]) = 0;
    v55 = sub_13D1B40(v8, (__int64 *)&src, v54, v53, v71);
    v56 = v55;
    if ( !LOBYTE(v71[0]) )
    {
      if ( v55 && src != (char *)ptr + v49 )
      {
        v67 = v55;
        memcpy((char *)ptr + v49, src, v55);
        v56 = v67;
      }
      if ( *(_DWORD *)(v8 + 4) != v56 )
      {
        v57 = v80.m128i_i64[0];
        v58 = v56 + v49;
        if ( v58 != v80.m128i_i64[0] )
        {
          if ( v58 >= v80.m128i_i64[0] )
          {
            if ( v58 > v80.m128i_i64[1] )
            {
              sub_2236E10(&ptr, v81, v58, 1);
              v57 = v80.m128i_i64[0];
            }
            if ( (char *)ptr + v57 != (char *)ptr + v58 )
              memset((char *)ptr + v57, 0, v58 - v57);
          }
          v80.m128i_i64[0] = v58;
        }
      }
    }
LABEL_7:
    v8 += 24;
    if ( *(_WORD *)(v8 + 16) == 1 )
      break;
    if ( (*(_BYTE *)(v8 + 18) & 3) == 0 )
      goto LABEL_2;
    v18 = v80.m128i_i64[0];
    if ( (unsigned __int64)(v80.m128i_i64[0] + 1) > v80.m128i_i64[1] )
    {
      sub_2236E10(&ptr, v81, v80.m128i_i64[0] + 1, 1);
      v18 = v80.m128i_i64[0];
    }
    *((_BYTE *)ptr + v18) = 32;
    v15 = *(_WORD *)(v8 + 16);
    ++v80.m128i_i64[0];
    if ( (unsigned __int16)(v15 - 17) <= 2u )
      goto LABEL_4;
  }
  v22 = v80.m128i_i64[0];
  v23 = ptr;
  v10 = a3;
  v9 = a1;
  v24 = v80.m128i_i8[0] - 1;
  v13 = (char *)ptr + v80.m128i_i64[0] - 1;
LABEL_20:
  if ( *v13 != 92 )
    goto LABEL_21;
  v39 = (unsigned int)(v22 - 2);
  v40 = v22 - 2;
  if ( v23[v39] == 92 )
  {
    do
      LOBYTE(v39) = --v40;
    while ( v23[v40] == 92 );
  }
  if ( ((v24 - (_BYTE)v39) & 1) != 0 )
  {
    sub_FC70B0((__int64)&src, *(_QWORD *)(v10 + 48), *(_DWORD *)(v8 - 24), 1291);
    if ( (_BYTE)v78 )
    {
      sub_FC7790(v75, (__int64 *)&src, SHIBYTE(v78));
      v75 = 0;
      v78 = 0;
    }
    if ( v76 != v77 )
      operator delete(v76);
    v41 = (void **)src;
    if ( src )
    {
      v42 = n;
      if ( n )
      {
        if ( (unsigned __int64)src >= n && (unsigned __int64)src <= n + 14848 )
        {
          v60 = *(unsigned int *)(n + 14976);
          *(_DWORD *)(n + 14976) = v60 + 1;
          *(_QWORD *)(v42 + 8 * v60 + 14848) = v41;
        }
        else
        {
          v43 = *((void ***)src + 66);
          v44 = &v43[8 * (unsigned __int64)*((unsigned int *)src + 134)];
          if ( v43 != v44 )
          {
            do
            {
              while ( 1 )
              {
                v44 -= 8;
                v45 = (void **)v44[3];
                if ( v45 == v44 + 5 )
                  break;
                operator delete(v45);
                if ( v43 == v44 )
                  goto LABEL_66;
              }
            }
            while ( v43 != v44 );
LABEL_66:
            v44 = (void **)v41[66];
          }
          if ( v44 != v41 + 68 )
            free(v44);
          v46 = (void **)v41[52];
          if ( v46 != v41 + 54 )
            free(v46);
          v47 = v41 + 48;
          v48 = v41 + 8;
          do
          {
            while ( *v47 != v47 + 2 )
            {
              operator delete(*v47);
              v47 -= 4;
              if ( v47 == v48 )
                goto LABEL_74;
            }
            v47 -= 4;
          }
          while ( v48 != v47 );
LABEL_74:
          operator delete(v41, 0x3A0u);
        }
      }
    }
    v25 = v80.m128i_i64[0];
    v22 = --v80.m128i_i64[0];
    if ( v80.m128i_i64[1] < v25 )
    {
LABEL_76:
      sub_2236E10(&ptr, v81, v25, 1);
      v22 = v80.m128i_i64[0];
    }
  }
  else
  {
LABEL_21:
    v25 = v22 + 1;
    if ( v80.m128i_i64[1] < (unsigned __int64)(v22 + 1) )
      goto LABEL_76;
  }
  *((_BYTE *)ptr + v22) = 34;
  v26 = ++v80.m128i_i64[0];
  if ( !a4 )
  {
LABEL_23:
    v27 = ptr;
    goto LABEL_24;
  }
  *(_BYTE *)ptr = 39;
  *((char *)ptr + v80.m128i_i64[0] - 1) = 39;
  v26 = v80.m128i_i64[0];
  if ( v80.m128i_i64[0] == 3 )
  {
    v27 = ptr;
    if ( *((_BYTE *)ptr + 1) != 39 )
      goto LABEL_24;
LABEL_29:
    sub_FC70B0((__int64)&src, *(_QWORD *)(v10 + 48), *(_DWORD *)a2, 1048);
    if ( (_BYTE)v78 )
    {
      sub_FC7790(v75, (__int64 *)&src, SHIBYTE(v78));
      v75 = 0;
      v78 = 0;
    }
    if ( v76 != v77 )
      operator delete(v76);
    v29 = (void **)src;
    if ( src )
    {
      v30 = n;
      if ( n )
      {
        if ( (unsigned __int64)src >= n && (unsigned __int64)src <= n + 14848 )
        {
          v59 = *(unsigned int *)(n + 14976);
          *(_DWORD *)(n + 14976) = v59 + 1;
          *(_QWORD *)(v30 + 8 * v59 + 14848) = v29;
        }
        else
        {
          v31 = *((void ***)src + 66);
          v32 = &v31[8 * (unsigned __int64)*((unsigned int *)src + 134)];
          if ( v31 != v32 )
          {
            do
            {
              while ( 1 )
              {
                v32 -= 8;
                v33 = (void **)v32[3];
                if ( v33 == v32 + 5 )
                  break;
                operator delete(v33);
                if ( v31 == v32 )
                  goto LABEL_40;
              }
            }
            while ( v31 != v32 );
LABEL_40:
            v32 = (void **)v29[66];
          }
          if ( v32 != v29 + 68 )
            free(v32);
          v34 = (void **)v29[52];
          if ( v34 != v29 + 54 )
            free(v34);
          v35 = v29 + 48;
          v36 = v29 + 8;
          do
          {
            while ( *v35 != v35 + 2 )
            {
              operator delete(*v35);
              v35 -= 4;
              if ( v36 == v35 )
                goto LABEL_48;
            }
            v35 -= 4;
          }
          while ( v35 != v36 );
LABEL_48:
          operator delete(v29, 0x3A0u);
        }
      }
    }
    v80.m128i_i64[0] = 0;
    v37 = 0;
    if ( v80.m128i_i64[1] <= 2uLL )
    {
      sub_2236E10(&ptr, v81, 3, 1);
      v37 = v80.m128i_i64[0];
    }
    v38 = (char *)ptr + v37;
    *(_WORD *)v38 = 8231;
    v38[2] = 39;
    v26 = v80.m128i_i64[0] + 3;
    v80.m128i_i64[0] += 3;
    goto LABEL_23;
  }
  if ( v80.m128i_i64[0] != 4 )
    goto LABEL_29;
  v27 = ptr;
  if ( *((_BYTE *)ptr + 1) != 92 )
    goto LABEL_29;
LABEL_24:
  sub_145C860(v10, v27, v26, v9, a5, a6);
  if ( ptr != v81 )
    free(ptr);
  return v9;
}
