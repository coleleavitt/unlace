__int64 __fastcall sub_1BD6F50(__int64 a1, void **p_ptr, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  void *v12; // r12
  _WORD *v13; // rax
  char v14; // r13
  __int64 v15; // r14
  __int64 v16; // rbx
  char v17; // al
  unsigned __int8 v18; // al
  __int64 result; // rax
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r8
  unsigned __int64 v23; // r13
  unsigned int v24; // eax
  bool v25; // r12
  __int16 v26; // r14
  signed __int64 v27; // r14
  __int64 v28; // r8
  _BYTE *v29; // rdx
  __int64 v30; // r14
  unsigned int v31; // r9d
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  char v38; // r12
  unsigned int v39; // edx
  unsigned int v40; // eax
  __int64 v41; // rsi
  __int64 v42; // rax
  unsigned __int64 v43; // rdi
  _QWORD *v44; // rbp
  unsigned int v45; // esi
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  unsigned __int64 v50; // rax
  _QWORD *v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rdx
  void **v55; // r12
  _DWORD *v56; // r13
  __int64 v57; // r8
  char v58; // r9
  unsigned int v59; // eax
  const char *v60; // rax
  char *v61; // rdi
  unsigned int v62; // eax
  const char *v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rax
  void **v66; // [rsp+8h] [rbp-190h]
  __int64 v67; // [rsp+8h] [rbp-190h]
  int v68; // [rsp+8h] [rbp-190h]
  __int64 v69; // [rsp+10h] [rbp-188h]
  __int64 *v70; // [rsp+18h] [rbp-180h]
  unsigned int v71; // [rsp+24h] [rbp-174h]
  __m128i v73; // [rsp+30h] [rbp-168h] BYREF
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __int64 v75; // [rsp+48h] [rbp-150h]
  _BYTE v76[256]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v77; // [rsp+150h] [rbp-48h]

  v8 = (__int64)p_ptr;
  v9 = *(_WORD *)p_ptr & 0x1FF;
  switch ( v9 )
  {
    case 20:
      v10 = sub_1BD6F50(a1, p_ptr[3], a3, a4);
      if ( v10 != 1 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
        if ( (void *)(v10 & 0xFFFFFFFFFFFFFFFELL) != p_ptr[3] )
        {
          v12 = p_ptr[2];
          v13 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
          v14 = *(_BYTE *)(v11 + 1);
          v15 = *(_QWORD *)(v11 + 8);
          v16 = (__int64)v13;
          *v13 = *v13 & 0xFE00 | 0x14;
          if ( unk_2CD7484 )
            sub_EE9B50(20);
          v17 = *(_BYTE *)(v16 + 1);
          *(_BYTE *)(v16 + 2) &= 0xF0u;
          *(_QWORD *)(v16 + 8) = v15;
          *(_QWORD *)(v16 + 16) = v12;
          *(_QWORD *)(v16 + 24) = v11;
          *(_BYTE *)(v16 + 1) = v14 & 0x3E | v17 & 1;
          v18 = sub_B62400(v16);
          *(_BYTE *)(v16 + 1) = (v18 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
          *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v18 >> 2) & 7;
          return v16;
        }
        return v8;
      }
      return 1;
    case 79:
      v20 = sub_1BD6F50(a1, p_ptr[2], a3, a4);
      if ( v20 == 1 )
        return 1;
      if ( (void *)(v20 & 0xFFFFFFFFFFFFFFFELL) == p_ptr[2] )
        return v8;
      v21 = *(_DWORD *)(a1 + 1952);
      v22 = *(unsigned int *)(a1 + 1956);
      if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v22, v21) )
      {
        v22 = 0;
        v21 = 0;
      }
      return sub_C0A3E0(
               *(_QWORD **)(a1 + 248),
               (__int64)p_ptr[1],
               (*((_WORD *)p_ptr + 1) >> 3) & 0x7F,
               v20 & 0xFFFFFFFFFFFFFFFELL,
               0,
               (*((_BYTE *)p_ptr + 1) >> 1) & 3,
               (v22 << 32) | v21);
    case 57:
      if ( ((_DWORD)p_ptr[2] & 0x3FFF8000) == 0x3FFF8000 )
        return v8;
      result = sub_1BD6F50(
                 a1,
                 *(&p_ptr[((*((_DWORD *)p_ptr + 4) >> 15) & 0x7FFFu) + 4] + ((*((_BYTE *)p_ptr + 19) & 0x40) != 0)),
                 a3,
                 a4);
      if ( result == 1 )
        return result;
      v23 = result & 0xFFFFFFFFFFFFFFFELL;
      v24 = *((_DWORD *)p_ptr + 4);
      v25 = (*((_BYTE *)p_ptr + 19) & 0x40) != 0;
      if ( *(&p_ptr[((v24 >> 15) & 0x7FFF) + 4] + v25) == (void *)v23 )
        return v8;
      v26 = *((_WORD *)p_ptr + 8);
      v75 = 0x400000000LL;
      ptr = v76;
      v27 = 8LL * (v26 & 0x7FFF);
      v28 = v27 >> 3;
      if ( (unsigned __int64)v27 > 0x20 )
      {
        sub_2237220(&ptr, v76, v27 >> 3, 8);
        v28 = v27 >> 3;
        v61 = (char *)ptr + 8 * (unsigned int)v75;
      }
      else
      {
        v29 = v76;
        if ( !v27 )
          goto LABEL_22;
        v61 = v76;
      }
      v68 = v28;
      memcpy(v61, &p_ptr[v25 + 4], v27);
      v29 = ptr;
      LODWORD(v27) = v75;
      v24 = *((_DWORD *)p_ptr + 4);
      LODWORD(v28) = v68;
LABEL_22:
      LODWORD(v75) = v28 + v27;
      v30 = (unsigned int)(v28 + v27);
      v31 = (v24 >> 15) & 0x7FFF;
      *(_QWORD *)&v29[8 * v31] = v23;
      if ( (*((_BYTE *)p_ptr + 19) & 0x40) != 0 )
        result = sub_C0ADB0(
                   *(_QWORD **)(a1 + 248),
                   *((_DWORD *)p_ptr + 1),
                   (__int64)p_ptr[4],
                   &p_ptr[(unsigned __int16)(((_WORD)p_ptr[2] & 0x7FFF) + 1) + 4],
                   (_WORD)p_ptr[2] & 0x7FFF,
                   *((unsigned int *)p_ptr + 5),
                   ptr,
                   v30,
                   *((_DWORD *)p_ptr + 6),
                   (*(_DWORD *)p_ptr & 0x4000) != 0,
                   v31);
      else
        result = sub_C0AB00(
                   *(_QWORD **)(a1 + 248),
                   *((_DWORD *)p_ptr + 1),
                   (__int64)p_ptr[((_WORD)p_ptr[2] & 0x7FFF) + 4],
                   &p_ptr[((_WORD)p_ptr[2] & 0x7FFF) + 5],
                   (_WORD)p_ptr[2] & 0x7FFF,
                   *((unsigned int *)p_ptr + 5),
                   ptr,
                   v30,
                   *((_DWORD *)p_ptr + 6),
                   (*(_DWORD *)p_ptr & 0x4000) != 0,
                   v31);
      goto LABEL_24;
  }
  if ( v9 != 4 )
  {
    if ( v9 == 24 )
    {
      if ( (a3 & 3) == 3 )
        sub_165EC80((_QWORD *)a1, (unsigned __int64)p_ptr, a3, *(double *)a5.m128_u64);
      v77 = 0;
      ptr = v76;
      v75 = 0x800000000LL;
      v66 = nullptr;
      if ( sub_18C0AE0((__int64)p_ptr) )
      {
        p_ptr = &ptr;
        sub_1BCD380(v8, (__int64)&ptr);
        v66 = &ptr;
      }
      v38 = 0;
      v69 = *(_QWORD *)(a4 + 48);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
        v38 = sub_B771C0(a4, (__int64)p_ptr, v36, v37) ^ 1;
      v39 = sub_B75A50(a4, 0);
      if ( v39 )
      {
        v71 = v39;
        v70 = *(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL);
        v60 = (const char *)sub_FBD4B0(v70, v39);
        if ( !strchr(v60, 102) || (v63 = (const char *)sub_FBD4B0(v70, v71), strchr(v63, 122)) )
        {
          v38 = 0;
          v69 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19112LL);
        }
      }
      v40 = 0;
      if ( (*(_QWORD *)v8 & 0x80000LL) != 0 )
        v40 = sub_1BC7250(v8);
      result = sub_19075A0(
                 a1,
                 a4,
                 v69,
                 v38,
                 v8 + 16,
                 a3 & 0xFFFFFFFFFFFFFFF8LL,
                 *(double *)a5.m128_u64,
                 a6,
                 *(_QWORD *)(v8 + 40),
                 *(_QWORD *)(v8 + 48),
                 v40,
                 (__int64)v66);
      *(_BYTE *)(result + 2) = ((*(_DWORD *)(v8 + 4) > 1u) << 6) | *(_BYTE *)(result + 2) & 0xBF;
      v32 = ptr;
      if ( ptr == v76 )
        return result;
LABEL_43:
      v67 = result;
      free(v32);
      return v67;
    }
    v55 = nullptr;
    v77 = 0;
    ptr = v76;
    v75 = 0x800000000LL;
    if ( sub_18C0AE0((__int64)p_ptr) )
    {
      v55 = &ptr;
      sub_1BCD380((__int64)p_ptr, (__int64)&ptr);
    }
    if ( (unsigned __int8)sub_C95850((__int64)p_ptr) )
    {
      if ( sub_B979F0((_QWORD *)a4) )
      {
        v62 = 0;
        if ( ((unsigned __int64)*p_ptr & 0x80000) != 0 )
          v62 = sub_1BC7250((__int64)p_ptr);
        result = sub_19075A0(
                   a1,
                   a4,
                   *(_QWORD *)(a4 + 48),
                   1,
                   (__int64)(p_ptr + 2),
                   a3 & 0xFFFFFFFFFFFFFFF8LL,
                   *(double *)a5.m128_u64,
                   a6,
                   (__int64)p_ptr[5],
                   (__int64)p_ptr[6],
                   v62,
                   (__int64)v55);
        *(_BYTE *)(result + 2) = ((*((_DWORD *)p_ptr + 1) > 1u) << 6) | *(_BYTE *)(result + 2) & 0xBF;
LABEL_24:
        v32 = ptr;
        if ( ptr == v76 )
          return result;
        goto LABEL_43;
      }
      v64 = *((_DWORD *)p_ptr + 6);
      if ( p_ptr[5] )
      {
        v65 = (__int64)p_ptr[6];
        v73.m128i_i64[0] = (__int64)p_ptr[5];
        v73.m128i_i64[1] = v65;
        v64 = sub_BF6BF0(&v73);
      }
      v56 = sub_19B4F00(a1, v64, (__int64)p_ptr[8], 1);
    }
    else
    {
      v56 = p_ptr[7];
    }
    if ( sub_B979F0((_QWORD *)a4) )
    {
      v57 = *(_QWORD *)(a4 + 48);
      v58 = 1;
    }
    else
    {
      v58 = 0;
      v57 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19088LL);
    }
    v59 = 0;
    if ( ((unsigned __int64)*p_ptr & 0x80000) != 0 )
      v59 = sub_1BC7250((__int64)p_ptr);
    result = (__int64)sub_19C4C50(
                        (__m128 *)a1,
                        (__int64)v56,
                        (*(_DWORD *)p_ptr & 0x100000) != 0,
                        *((_DWORD *)p_ptr + 18),
                        (__int64)p_ptr[5],
                        (__int64)p_ptr[6],
                        a5,
                        a6,
                        v59,
                        a4,
                        a3,
                        1,
                        (__int64)(p_ptr + 2),
                        v57,
                        v58,
                        0,
                        (__int64)v55);
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 35 > 3 || !(unsigned __int8)sub_B98200((_QWORD *)a4, (__int64)p_ptr) )
  {
    v33 = sub_1BD6F50(a1, p_ptr[2], a3, a4);
    if ( v33 != 1 )
    {
      v35 = v33 & 0xFFFFFFFFFFFFFFFELL;
      if ( p_ptr[2] != (void *)v35 )
        return sub_19249E0(a1, *((_DWORD *)p_ptr + 1), 4u, v35, 0, v34, a5, a6);
      return v8;
    }
    return 1;
  }
  v41 = (__int64)p_ptr[2];
  v42 = sub_1BD6F50(a1, v41, a3, a4);
  if ( v42 == 1 )
    return 1;
  v43 = *(_QWORD *)(v8 + 16);
  v44 = (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFELL);
  if ( v43 == (v42 & 0xFFFFFFFFFFFFFFFELL) )
    return v8;
  v45 = *(_BYTE *)(v8 + 2) <= 0xFu ? sub_EEB7E0(v43, v41, *(double *)a5.m128_u64) : *(_DWORD *)(v8 + 4);
  if ( (unsigned __int8)sub_18CFE50(a1, v45, (unsigned __int64)v44, a4, *(double *)a5.m128_u64) )
    return 1;
  v48 = 0;
  if ( (*v44 & 0x80000LL) != 0 )
    v48 = v44[4];
  v49 = (_QWORD *)(*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
    v49 = (_QWORD *)*v49;
  if ( v49 )
    v49 -= 8;
  v50 = sub_ABBA20(*(_QWORD **)(a1 + 248), *(_QWORD *)(a4 + 48), v48, (__int64)v49, v46, v47);
  v51 = *(_QWORD **)(a1 + 248);
  v52 = v50;
  if ( *(_DWORD *)(v51[2181] + 340LL) == 10 )
  {
    sub_1E63330(a1, *(unsigned int *)(v8 + 4), v50, 1, 0);
    v51 = *(_QWORD **)(a1 + 248);
  }
  v53 = *(unsigned int *)(a1 + 1952);
  v54 = *(unsigned int *)(a1 + 1956);
  if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v54, v53) )
  {
    v54 = 0;
    v53 = 0;
  }
  return sub_C09D40(v51, (__int64)v44, 4, v52, 0, 0, *(_DWORD *)(v8 + 4), 0, (v54 << 32) | v53);
}
