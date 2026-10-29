void __fastcall sub_19D19D0(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8,
        __int64 a9,
        char *a10,
        char *s)
{
  __int16 *v13; // r15
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // r14
  unsigned __int8 *v18; // rax
  __int64 v19; // rbp
  size_t v20; // rax
  size_t v21; // r8
  __int16 v22; // ax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  size_t v28; // r15
  int v29; // eax
  char *v30; // rdx
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  size_t v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  unsigned int v43; // r14d
  unsigned int v44; // r15d
  unsigned __int8 *v45; // rax
  __int64 v46; // rbp
  size_t v47; // r12
  _BYTE *v48; // rcx
  __int64 v49; // rax
  size_t v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  void *v56; // rdi
  size_t v57; // rax
  __int64 v58; // r9
  _WORD *v59; // r15
  __int64 v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  size_t v65; // r15
  int v66; // eax
  char *v67; // rdx
  __int64 v68; // rcx
  int v69; // esi
  __int64 v70; // rax
  size_t v71; // [rsp+0h] [rbp-E8h]
  size_t v72; // [rsp+0h] [rbp-E8h]
  __int64 v73; // [rsp+0h] [rbp-E8h]
  __int64 v74; // [rsp+0h] [rbp-E8h]
  __int64 v75[3]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v76; // [rsp+24h] [rbp-C4h]
  void *ptr; // [rsp+30h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v79[40]; // [rsp+48h] [rbp-A0h] BYREF
  void *v80; // [rsp+70h] [rbp-78h] BYREF
  size_t v81; // [rsp+78h] [rbp-70h]
  __int64 v82; // [rsp+80h] [rbp-68h] BYREF
  void *v83; // [rsp+88h] [rbp-60h]
  _BYTE v84[80]; // [rsp+98h] [rbp-50h] BYREF

  v75[0] = a5;
  if ( a3 == 2 )
    return;
  if ( !s )
  {
    if ( a3 == 1 )
    {
      v51 = j__strlen(a10);
      sub_9EC740((__int64)&v80, a4, a10, v51, 0);
      sub_168ED20(a2, (char *)&v80, v52, v53, v54, v55);
      v56 = v83;
      if ( v83 == v84 )
        return;
    }
    else
    {
      if ( a3 == 3 )
      {
        if ( (*(_WORD *)a9 & 0x1FFu) - 81 > 4 )
          return;
        ptr = &si128.m128i_u64[1];
        v36 = j__strlen("(");
        sub_19CF0A0(&ptr, "(", (__int64)&asc_22F6C36[v36 + 2]);
        sub_9EE7C0(&ptr, a10);
        sub_F78400((__int64)&v80, v75);
        sub_9EE560(&ptr, v80, v81);
        if ( v80 != &v82 )
          operator delete(v80);
        sub_9EE7C0(&ptr, ")");
        v37 = *(_DWORD *)(a9 + 44);
        LODWORD(v76) = *(_DWORD *)(a9 + 32);
        HIDWORD(v76) = v37;
        sub_19CF590((__int64)&v80, v76, 1, ptr, si128.m128i_i64[0]);
      }
      else
      {
        v73 = a6;
        ptr = &si128.m128i_u64[1];
        v57 = j__strlen("(");
        sub_19CF0A0(&ptr, "(", (__int64)&asc_22F6C36[v57 + 2]);
        sub_9EE7C0(&ptr, a10);
        sub_F78400((__int64)&v80, v75);
        sub_9EE560(&ptr, v80, v81);
        v58 = v73;
        if ( v80 != &v82 )
        {
          operator delete(v80);
          v58 = v73;
        }
        v74 = v58;
        sub_9EE7C0(&ptr, ")");
        v59 = (_WORD *)sub_BFB840(v74);
        v60 = sub_EEC8C0((unsigned __int64)v59, (__int64)")", *(double *)a7.m128i_i64);
        if ( (*v59 & 0x1FF) == 0x14 )
        {
          v67 = (char *)ptr;
          v68 = si128.m128i_i64[0];
          v69 = v60;
        }
        else
        {
          sub_9EE7C0(&ptr, "(");
          sub_9EC740((__int64)&v80, v60, ptr, si128.m128i_i64[0], 0);
          sub_168ED20(a2, (char *)&v80, v61, v62, v63, v64);
          if ( v83 != v84 )
            operator delete(v83);
          v65 = j__strlen(")");
          v66 = sub_15F0EF0(a1, SHIDWORD(v60), 0, a7, a8);
          v67 = ")";
          v68 = v65;
          v69 = v66;
        }
        sub_9EC740((__int64)&v80, v69, v67, v68, 0);
      }
      sub_168ED20(a2, (char *)&v80, v38, v39, v40, v41);
      if ( v83 != v84 )
        operator delete(v83);
      v56 = ptr;
      if ( ptr == &si128.m128i_u64[1] )
        return;
    }
    operator delete(v56);
    return;
  }
  if ( a3 == 3 )
  {
    if ( (*(_WORD *)a9 & 0x1FFu) - 81 > 4 )
      return;
    v42 = *(_QWORD *)(a1 + 272);
    v43 = *(_DWORD *)(a9 + 32);
    v44 = *(_DWORD *)(a9 + 44);
    ptr = v79;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    v45 = (unsigned __int8 *)sub_1021A70(v42, v43 - 1, nullptr);
    if ( (unsigned __int8)sub_13D14D0(*v45, *(_QWORD *)(a1 + 232)) )
    {
      v70 = si128.m128i_i64[0];
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, v79, si128.m128i_i64[0] + 1, 1);
        v70 = si128.m128i_i64[0];
      }
      *((_BYTE *)ptr + v70) = 32;
      v46 = ++si128.m128i_i64[0];
    }
    else
    {
      v46 = si128.m128i_i64[0];
    }
    v47 = j__strlen(s);
    if ( v47 + v46 > si128.m128i_i64[1] )
    {
      sub_2236E10(&ptr, v79, v47 + v46, 1);
      v46 = si128.m128i_i64[0];
    }
    v48 = ptr;
    if ( v47 )
    {
      memcpy((char *)ptr + v46, s, v47);
      v48 = ptr;
      v46 = si128.m128i_i64[0];
    }
    v75[2] = __PAIR64__(v44, v43);
    si128.m128i_i64[0] = v47 + v46;
    sub_19CF590((__int64)&v80, __SPAIR64__(v44, v43), 1, v48, v47 + v46);
  }
  else
  {
    if ( (*(_WORD *)a6 & 0x1FF) == 0x57 )
      a6 = *(_QWORD *)(a6 + 16);
    v13 = (__int16 *)sub_BFB840(a6);
    v14 = sub_EEC8C0((unsigned __int64)v13, (__int64)a2, *(double *)a7.m128i_i64);
    v15 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    v16 = *(_QWORD *)(a1 + 272);
    v17 = v14;
    ptr = v79;
    si128 = v15;
    v18 = (unsigned __int8 *)sub_1021A70(v16, (int)v14 - 1, nullptr);
    if ( (unsigned __int8)sub_13D14D0(*v18, *(_QWORD *)(a1 + 232)) )
    {
      v49 = si128.m128i_i64[0];
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, v79, si128.m128i_i64[0] + 1, 1);
        v49 = si128.m128i_i64[0];
      }
      *((_BYTE *)ptr + v49) = 32;
      v19 = ++si128.m128i_i64[0];
    }
    else
    {
      v19 = si128.m128i_i64[0];
    }
    v20 = j__strlen(s);
    v21 = v20;
    if ( v20 + v19 > si128.m128i_i64[1] )
    {
      v72 = v20;
      sub_2236E10(&ptr, v79, v20 + v19, 1);
      v19 = si128.m128i_i64[0];
      v21 = v72;
    }
    if ( v21 )
    {
      v71 = v21;
      memcpy((char *)ptr + v19, s, v21);
      v19 = si128.m128i_i64[0];
      v21 = v71;
    }
    v22 = *v13;
    v23 = v21 + v19;
    si128.m128i_i64[0] = v21 + v19;
    if ( (v22 & 0x1FF) == 0x14 )
    {
      v30 = (char *)ptr;
      v31 = v17;
    }
    else
    {
      if ( (unsigned __int64)(v23 + 1) > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, v79, v23 + 1, 1);
        v23 = si128.m128i_i64[0];
      }
      *((_BYTE *)ptr + v23) = 40;
      sub_9EC740((__int64)&v80, v17, ptr, ++si128.m128i_i64[0], 0);
      sub_168ED20(a2, (char *)&v80, v24, v25, v26, v27);
      if ( v83 != v84 )
        operator delete(v83);
      v28 = j__strlen(")");
      v29 = sub_15F0EF0(a1, SHIDWORD(v17), 0, v15, a8);
      v30 = ")";
      v23 = v28;
      v31 = v29;
    }
    sub_9EC740((__int64)&v80, v31, v30, v23, 0);
  }
  sub_168ED20(a2, (char *)&v80, v32, v33, v34, v35);
  if ( v83 != v84 )
    operator delete(v83);
  if ( ptr != v79 )
    free(ptr);
}
