__int64 __fastcall sub_386DC0(__m128 *a1, const char *src, int a3)
{
  const char *v5; // rbp
  size_t v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r14
  _QWORD *v9; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rax
  void *v12; // r15
  unsigned __int64 v13; // rax
  const char *v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rax
  int v17; // ebx
  __int32 v18; // eax
  _BYTE *v19; // rax
  unsigned __int8 v20; // si
  __int64 (__fastcall *v21)(__m128 *, char); // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  void (__fastcall *v25)(__m128 *, __int64, _QWORD); // rbx
  __int64 v26; // rax
  __m128 v27; // xmm0
  void *v28; // rdi
  unsigned __int64 v29; // rax
  const char *v30; // rax
  bool v31; // zf
  const char *v32; // rsi
  char *v33; // rdx
  char *v34; // rax
  int v35; // eax
  unsigned __int64 v36; // rcx
  __int64 v37; // r9
  int v38; // edx
  unsigned __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rcx
  char v42; // al
  unsigned __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // r10
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r9
  __int64 v49; // rax
  int v50; // r8d
  unsigned __int64 v51; // rdx
  char *v52; // r9
  __int64 v53; // rdi
  int v54; // ecx
  unsigned __int64 v55; // rsi
  __int64 v56; // rax
  int v57[2]; // [rsp+0h] [rbp-B8h] BYREF
  int v58[2]; // [rsp+8h] [rbp-B0h]
  int v59[2]; // [rsp+10h] [rbp-A8h]
  __int64 v60; // [rsp+18h] [rbp-A0h]
  __int64 v61; // [rsp+20h] [rbp-98h]
  __int64 *v62; // [rsp+28h] [rbp-90h]
  __int64 v63; // [rsp+30h] [rbp-88h]
  char *v64; // [rsp+38h] [rbp-80h]
  unsigned __int64 v65; // [rsp+40h] [rbp-78h]
  unsigned __int64 v66; // [rsp+48h] [rbp-70h]
  unsigned __int8 v67; // [rsp+5Fh] [rbp-59h] BYREF
  char *s; // [rsp+60h] [rbp-58h] BYREF
  int v69[4]; // [rsp+68h] [rbp-50h]
  void *v70; // [rsp+78h] [rbp-40h]

  v70 = (void *)__readfsqword(0x28u);
  if ( src )
  {
    v5 = src;
    s = nullptr;
    *(_OWORD *)v69 = 0;
    v6 = strlen(src);
    v7 = v6 + 1;
  }
  else
  {
    v7 = 1;
    v6 = 0;
    s = nullptr;
    *(_OWORD *)v69 = 0;
    v5 = &byte_22F0C30;
  }
  *(_QWORD *)v59 = &s;
  s = (char *)qvector_reserve(&s, 0, v7, 1);
  memmove(s, v5, v6);
  s[v6] = 0;
  if ( s )
  {
    *(_QWORD *)v69 = 0;
    qfree(s);
  }
  v8 = qword_2CCB598;
  v9 = *(_QWORD **)(qword_2CCB598 + 1672);
  result = sub_631C90(*v9, 44, 16);
  if ( !(_BYTE)result && !*v5 )
  {
    v9[356] = 0;
    return result;
  }
  v11 = a1[2].m128_u64[0];
  v12 = (void *)a1[1].m128_u64[1];
  a1[1].m128_u64[1] = 0;
  *(_QWORD *)v58 = v11;
  v13 = a1[2].m128_u64[1];
  a1[2] = 0;
  *(_QWORD *)v57 = v13;
  if ( a3 < 0 )
  {
    if ( a3 == 0x80000000 )
      a3 = 0;
    if ( a1[6].m128_i32[3] == -1 )
    {
      v29 = a1[6].m128_u64[0];
      if ( v29 )
        a1[6].m128_i32[3] = *(_QWORD *)(v29 + 8);
    }
LABEL_11:
    if ( (unsigned __int8)sub_631C90(*v9, 44, 32) && (a1[9].m128_i8[0] & 1) == 0 )
    {
      (*(void (__fastcall **)(__m128 *, const char *, _QWORD))(a1->m128_u64[0] + 248))(a1, v5, (unsigned int)a3);
      v14 = haystack;
      if ( a1[7].m128_u64[1] )
        v14 = (const char *)a1[7].m128_u64[0];
      (*(void (__fastcall **)(__m128 *, const char *, _QWORD))(a1->m128_u64[0] + 56))(a1, v14, 0);
    }
    a1[9].m128_i32[1] = a1[8].m128_u64[1];
    (*(void (__fastcall **)(__m128 *, const char *, _QWORD))(a1->m128_u64[0] + 256))(a1, v5, (unsigned int)a3);
    v15 = a1[9].m128_i32[0];
    if ( (v15 & 0x2001) == 0 && (v15 & 0x1800) != 0 )
    {
      if ( (v15 & 0x800) != 0 )
      {
        v16 = a1->m128_u64[0];
        s = nullptr;
        *(_OWORD *)v69 = 0;
        if ( (*(__int64 (__fastcall **)(__m128 *, _QWORD, unsigned __int8 *))(v16 + 208))(a1, *(_QWORD *)v59, &v67) > 0 )
        {
          (*(void (__fastcall **)(__m128 *))(a1->m128_u64[0] + 264))(a1);
          (*(void (__fastcall **)(__m128 *, char *, _QWORD))(a1->m128_u64[0] + 56))(a1, s, v67);
          (*(void (__fastcall **)(__m128 *, _QWORD))(a1->m128_u64[0] + 32))(
            a1,
            (*(_DWORD *)(v8 + 1072) & 2) == 0 ? 32 : 58);
          a3 = -1;
        }
        if ( s )
        {
          *(_QWORD *)v69 = 0;
          qfree(s);
        }
        v15 = a1[9].m128_i32[0];
      }
      BYTE1(v15) |= 0x20u;
      a1[9].m128_i32[0] = v15;
    }
    if ( (v15 & 1) != 0 )
    {
LABEL_30:
      (*(void (__fastcall **)(__m128 *, const char *, _QWORD))(a1->m128_u64[0] + 56))(a1, v5, 0);
      v18 = a1[9].m128_i32[0];
      if ( (v18 & 1) == 0 )
      {
        (*(void (__fastcall **)(__m128 *))(a1->m128_u64[0] + 272))(a1);
        v18 = a1[9].m128_i32[0];
      }
      if ( (v18 & 0x71) == 0x10 )
      {
        a1[9].m128_i32[0] = v18 & 0xFFFFFFEF;
        result = (*(__int64 (__fastcall **)(__m128 *))(a1->m128_u64[0] + 216))(a1);
        if ( (_BYTE)result )
        {
LABEL_51:
          v27 = _mm_loadh_ps((const double *)v57);
          if ( (a1[9].m128_i32[0] & 0x60) == 0x20 )
            a1[9].m128_i32[0] = a1[9].m128_i32[0] & 0xFFFFFF9F | 0x40;
          v28 = (void *)a1[1].m128_u64[1];
          a1[1].m128_u64[1] = (unsigned __int64)v12;
          a1[2] = v27;
          goto LABEL_54;
        }
        v18 = a1[9].m128_i32[0];
      }
      if ( (v18 & 0x380) == 0x80 && (a1[6].m128_i32[3] != -1 || (v18 & 0x60) == 0x40) )
      {
        LOBYTE(v18) = v18 & 0x7F;
        a1[9].m128_i32[0] = v18;
        if ( !(unsigned __int8)sub_631C90(*v9, 45, 4)
          && (*(__int64 (__fastcall **)(__m128 *))(a1->m128_u64[0] + 200))(a1) > 0 )
        {
          v30 = haystack;
          if ( a1[10].m128_u64[1] )
            v30 = (const char *)a1[10].m128_u64[0];
          a1[9].m128_i32[0] |= 0x100u;
          a1[11].m128_u64[1] = (unsigned __int64)v30;
        }
      }
      if ( !(unsigned __int8)sub_631C90(*v9, 45, 4) )
      {
        v19 = (_BYTE *)a1[11].m128_u64[1];
        if ( !v19 || !*v19 )
          sub_385BA0((__int64)a1, v8);
      }
      if ( (a1[9].m128_i32[0] & 0x100) != 0 && (a1[9].m128_i32[0] & 0x60) != 0x20 )
      {
        v20 = a1[12].m128_u8[0];
        if ( v20 != 4 || a1[6].m128_i32[3] != -1 )
        {
          sub_380B50((__int64)a1, v20);
          v21 = *(__int64 (__fastcall **)(__m128 *, char))(a1->m128_u64[0] + 96);
          if ( (char *)v21 == (char *)sub_35CB90 )
          {
            v22 = a1[2].m128_u64[0];
            v23 = 2;
            if ( v22 )
              v23 = v22-- + 1;
            v24 = a1[1].m128_i64[1];
            if ( a1[2].m128_u64[1] < v23 )
            {
              v49 = qvector_reserve(&a1[1].m128_u16[4], v24, v23, 1);
              a1[1].m128_u64[1] = v49;
              v24 = v49;
            }
            a1[2].m128_u64[0] = v23;
            *(_BYTE *)(v24 + v22) = 32;
            *(_BYTE *)(a1[1].m128_u64[1] + v22 + 1) = 0;
          }
          else
          {
            v24 = 32;
            v21(a1, 32);
          }
          sub_380C70((__int64)a1);
          v25 = *(void (__fastcall **)(__m128 *, __int64, _QWORD))(a1->m128_u64[0] + 56);
          v26 = closing_comment(a1, v24);
          v25(a1, v26, 0);
          (*(void (__fastcall **)(__m128 *, _QWORD))(a1->m128_u64[0] + 72))(a1, a1[12].m128_u8[0]);
        }
      }
      sub_3E0180(&a1[1].m128_u16[4]);
      result = sub_383AF0((__int64)a1, (__int64)&a1[1].m128_i64[1]);
      goto LABEL_51;
    }
    if ( a3 < 0 )
    {
      if ( a3 == -1 )
      {
        a3 = (unsigned __int8)sub_631AD0(*v9, 40);
        v15 = a1[9].m128_i32[0];
      }
      else
      {
        a3 = -a3;
      }
    }
    if ( v15 >= 0 )
    {
LABEL_28:
      v17 = a1[9].m128_i32[1] + a3;
      if ( (v15 & 0x200000) != 0 )
      {
        v31 = a1[7].m128_u64[1] == 0;
        s = nullptr;
        v32 = haystack;
        *(_OWORD *)v69 = 0;
        if ( !v31 )
          v32 = (const char *)a1[7].m128_u64[0];
        tag_remove(*(_QWORD *)v59, v32, 0);
        v33 = s;
        if ( *(_QWORD *)v69 )
        {
          *(_QWORD *)v59 = s;
          v34 = strrchr(s, 46);
          v33 = *(char **)v59;
          if ( v34 )
          {
            v35 = strlen(v34);
            v33 = *(char **)v59;
            v17 = v17 + 1 - v35;
            if ( v17 <= 0 )
              v17 = 1;
          }
        }
        if ( v33 )
        {
          *(_QWORD *)v69 = 0;
          qfree(v33);
        }
      }
      (*(void (__fastcall **)(__m128 *, __int64 *, _QWORD))(a1->m128_u64[0] + 48))(a1, &a1[1].m128_i64[1], v17);
      goto LABEL_30;
    }
    v36 = a1[1].m128_u64[0];
    *(_OWORD *)v69 = 0;
    s = nullptr;
    if ( sub_3792E0(0x52u, *(_QWORD *)v59, 0, v36) <= 0 || (v37 = *(_QWORD *)v69) == 0 || !a3 )
    {
LABEL_97:
      if ( s )
      {
        *(_QWORD *)v69 = 0;
        qfree(s);
      }
      v15 = a1[9].m128_i32[0];
      goto LABEL_28;
    }
    v38 = *(_DWORD *)(v8 + 940);
    v62 = &a1[1].m128_i64[1];
    v39 = a1[2].m128_u64[0];
    v65 = a3;
    v40 = v38 & 0x40;
    if ( v39 )
    {
      v65 = --v39 + a3;
      v66 = v65 - 1;
      if ( !v40 )
        goto LABEL_88;
    }
    else
    {
      v66 = v65 - 1;
      if ( !v40 )
      {
LABEL_88:
        v41 = 0;
        do
        {
          v42 = s[v41];
          if ( (unsigned __int8)(v42 - 1) <= 0xFDu )
          {
            if ( !under_debugger )
              interr(1513);
            BUG();
          }
          v61 = v41;
          v60 = v37;
          sub_35A910(v62);
          v37 = v60;
          v41 = v61 + 1;
        }
        while ( v60 != v61 + 1 );
        goto LABEL_91;
      }
    }
    v60 = v39;
    sub_3600E0(v62, v39 + 2LL * *(_QWORD *)v69);
    v51 = a1[1].m128_u64[1];
    v52 = s;
    v53 = v51 + v60;
    v43 = a1[2].m128_u64[0];
    v63 = v51 + v43;
    v64 = &s[*(_QWORD *)v69];
    if ( s == &s[*(_QWORD *)v69] )
      goto LABEL_92;
    do
    {
      v54 = (unsigned __int8)*v52;
      v61 = (__int64)v52;
      v60 = v53;
      qsnprintf(v53, v63 - v53, (unsigned int)"%02X", v54, v50, (_DWORD)v52);
      v53 += 2;
      v52 = (char *)(v61 + 1);
    }
    while ( v64 != (char *)(v61 + 1) );
LABEL_91:
    v43 = a1[2].m128_u64[0];
LABEL_92:
    if ( v43 && v66 < v43 - 1 )
    {
      sub_3600E0(v62, v65 - 2);
      v44 = (a1[2].m128_u64[0] == 0) + a1[2].m128_u64[0] - 1;
      v45 = v44 + 3;
      v46 = v44 + 4;
      if ( a1[2].m128_u64[1] < v44 + 4 )
      {
        v55 = a1[1].m128_u64[1];
        v63 = v44 + 3;
        v61 = v44;
        v60 = v44 + 4;
        v56 = qvector_reserve(v62, v55, v46, 1);
        v45 = v63;
        v44 = v61;
        a1[1].m128_u64[1] = v56;
        v46 = v60;
      }
      v47 = a1[1].m128_u64[1];
      a1[2].m128_u64[0] = v46;
      *(_BYTE *)(v47 + v45) = 0;
      v48 = a1[1].m128_u64[1] + v44;
      *(_WORD *)v48 = -32542;
      *(_BYTE *)(v48 + 2) = -90;
    }
    goto LABEL_97;
  }
  if ( (a1[9].m128_i8[0] & 1) == 0 )
  {
    if ( a3 == 0xFFFF )
      a3 = (unsigned __int8)sub_631AD0(*v9, 40);
    goto LABEL_11;
  }
  v28 = v12;
  result = 0;
LABEL_54:
  v9[356] = 0;
  if ( v28 )
  {
    LOBYTE(v57[0]) = result;
    qfree(v28);
    return LOBYTE(v57[0]);
  }
  return result;
}
