__int64 __fastcall sub_383170(__m128 *a1, const char *a2, int a3)
{
  const char *v5; // rbp
  size_t v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r14
  _QWORD *v9; // r12
  __int64 result; // rax
  double v11; // rax
  void *v12; // r15
  double v13; // rax
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
  char *v31; // rdx
  char *v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r9
  int v36; // edx
  unsigned __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rcx
  char v40; // al
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r9
  __int64 v47; // rax
  int v48; // r8d
  unsigned __int64 v49; // rdx
  char *v50; // r9
  unsigned __int64 v51; // rdi
  int v52; // ecx
  unsigned __int64 v53; // rsi
  __int64 v54; // rax
  double v55[2]; // [rsp+0h] [rbp-B8h] BYREF
  char *p_s; // [rsp+10h] [rbp-A8h]
  __int64 v57; // [rsp+18h] [rbp-A0h]
  __int64 v58; // [rsp+20h] [rbp-98h]
  __int64 *v59; // [rsp+28h] [rbp-90h]
  __int64 v60; // [rsp+30h] [rbp-88h]
  char *v61; // [rsp+38h] [rbp-80h]
  unsigned __int64 v62; // [rsp+40h] [rbp-78h]
  unsigned __int64 v63; // [rsp+48h] [rbp-70h]
  unsigned __int8 v64; // [rsp+5Fh] [rbp-59h] BYREF
  char *s; // [rsp+60h] [rbp-58h] BYREF
  __int128 v66; // [rsp+68h] [rbp-50h]
  unsigned __int64 v67; // [rsp+78h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = a2;
    s = nullptr;
    v66 = 0;
    v6 = strlen(a2);
    v7 = v6 + 1;
  }
  else
  {
    v7 = 1;
    v6 = 0;
    s = nullptr;
    v66 = 0;
    v5 = &byte_22CD811;
  }
  p_s = (char *)&s;
  s = (char *)qvector_reserve(&s, 0, v7, 1);
  memmove(s, v5, v6);
  s[v6] = 0;
  if ( s )
  {
    *(_QWORD *)&v66 = 0;
    qfree(s);
  }
  v8 = qword_2CA1698;
  v9 = *(_QWORD **)(qword_2CA1698 + 1480);
  result = sub_615160(*v9, 44, 16);
  if ( !(_BYTE)result && !*v5 )
  {
    v9[331] = 0;
    return result;
  }
  v11 = *(double *)a1[2].m128_u64;
  v12 = (void *)a1[1].m128_u64[1];
  a1[1].m128_u64[1] = 0;
  v55[1] = v11;
  v13 = *(double *)&a1[2].m128_u64[1];
  a1[2] = 0;
  v55[0] = v13;
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
    if ( (unsigned __int8)sub_615160(*v9, 44, 32) && (a1[9].m128_i8[0] & 1) == 0 )
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
        v66 = 0;
        if ( (*(__int64 (__fastcall **)(__m128 *, char *, unsigned __int8 *))(v16 + 208))(a1, p_s, &v64) > 0 )
        {
          (*(void (__fastcall **)(__m128 *))(a1->m128_u64[0] + 264))(a1);
          (*(void (__fastcall **)(__m128 *, char *, _QWORD))(a1->m128_u64[0] + 56))(a1, s, v64);
          (*(void (__fastcall **)(__m128 *, _QWORD))(a1->m128_u64[0] + 32))(
            a1,
            (*(_DWORD *)(v8 + 904) & 2) == 0 ? 32 : 58);
          a3 = -1;
        }
        if ( s )
        {
          *(_QWORD *)&v66 = 0;
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
          v27 = _mm_loadh_ps(v55);
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
        if ( !(unsigned __int8)sub_615160(*v9, 45, 4)
          && (*(__int64 (__fastcall **)(__m128 *))(a1->m128_u64[0] + 200))(a1) > 0 )
        {
          v30 = haystack;
          if ( a1[10].m128_u64[1] )
            v30 = (const char *)a1[10].m128_u64[0];
          a1[9].m128_i32[0] |= 0x100u;
          a1[11].m128_u64[1] = (unsigned __int64)v30;
        }
      }
      if ( !(unsigned __int8)sub_615160(*v9, 45, 4) )
      {
        v19 = (_BYTE *)a1[11].m128_u64[1];
        if ( !v19 || !*v19 )
          sub_381FB0((__int64)a1, v8);
      }
      if ( (a1[9].m128_i32[0] & 0x100) != 0 && (a1[9].m128_i32[0] & 0x60) != 0x20 )
      {
        v20 = a1[12].m128_u8[0];
        if ( v20 != 4 || a1[6].m128_i32[3] != -1 )
        {
          sub_37D0E0((__int64)a1, v20);
          v21 = *(__int64 (__fastcall **)(__m128 *, char))(a1->m128_u64[0] + 96);
          if ( (char *)v21 == (char *)sub_3598B0 )
          {
            v22 = a1[2].m128_u64[0];
            v23 = 2;
            if ( v22 )
              v23 = v22-- + 1;
            v24 = a1[1].m128_i64[1];
            if ( a1[2].m128_u64[1] < v23 )
            {
              v47 = qvector_reserve(&a1[1].m128_u16[4], v24, v23, 1);
              a1[1].m128_u64[1] = v47;
              v24 = v47;
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
          sub_37D200((__int64)a1);
          v25 = *(void (__fastcall **)(__m128 *, __int64, _QWORD))(a1->m128_u64[0] + 56);
          v26 = closing_comment(a1, v24);
          v25(a1, v26, 0);
          (*(void (__fastcall **)(__m128 *, _QWORD))(a1->m128_u64[0] + 72))(a1, a1[12].m128_u8[0]);
        }
      }
      sub_3DA2C0(&a1[1].m128_u16[4]);
      result = sub_37FF70((__int64)a1, (__int64)&a1[1].m128_i64[1]);
      goto LABEL_51;
    }
    if ( a3 < 0 )
    {
      if ( a3 == -1 )
      {
        a3 = (unsigned __int8)sub_614FB0(*v9, 40);
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
        s = nullptr;
        v66 = 0;
        tag_remove();
        v31 = s;
        if ( (_QWORD)v66 )
        {
          p_s = s;
          v32 = strrchr(s, 46);
          v31 = p_s;
          if ( v32 )
          {
            v33 = strlen(v32);
            v31 = p_s;
            v17 = v17 + 1 - v33;
            if ( v17 <= 0 )
              v17 = 1;
          }
        }
        if ( v31 )
        {
          *(_QWORD *)&v66 = 0;
          qfree(v31);
        }
      }
      (*(void (__fastcall **)(__m128 *, __int64 *, _QWORD))(a1->m128_u64[0] + 48))(a1, &a1[1].m128_i64[1], v17);
      goto LABEL_30;
    }
    v34 = a1[1].m128_u32[0];
    v66 = 0;
    s = nullptr;
    if ( sub_375980(0x52u, p_s, 0, v34) <= 0 || (v35 = v66) == 0 || !a3 )
    {
LABEL_95:
      if ( s )
      {
        *(_QWORD *)&v66 = 0;
        qfree(s);
      }
      v15 = a1[9].m128_i32[0];
      goto LABEL_28;
    }
    v36 = *(_DWORD *)(v8 + 772);
    v59 = &a1[1].m128_i64[1];
    v37 = a1[2].m128_u64[0];
    v62 = a3;
    v38 = v36 & 0x40;
    if ( v37 )
    {
      v62 = --v37 + a3;
      v63 = v62 - 1;
      if ( !v38 )
        goto LABEL_86;
    }
    else
    {
      v63 = v62 - 1;
      if ( !v38 )
      {
LABEL_86:
        v39 = 0;
        do
        {
          v40 = s[v39];
          if ( (unsigned __int8)(v40 - 1) <= 0xFDu )
          {
            if ( !under_debugger )
              interr(1513);
            BUG();
          }
          v58 = v39;
          v57 = v35;
          sub_357520(v59);
          v35 = v57;
          v39 = v58 + 1;
        }
        while ( v57 != v58 + 1 );
        goto LABEL_89;
      }
    }
    v57 = v37;
    sub_35CD10(v59, v37 + 2 * v66);
    v49 = a1[1].m128_u64[1];
    v50 = s;
    v51 = v49 + v57;
    v41 = a1[2].m128_u64[0];
    v60 = v49 + v41;
    v61 = &s[v66];
    if ( s == &s[(_QWORD)v66] )
      goto LABEL_90;
    do
    {
      v52 = (unsigned __int8)*v50;
      v58 = (__int64)v50;
      v57 = v51;
      qsnprintf(v51, v60 - v51, (int)"%02X", v52, v48, (int)v50, SLOBYTE(v55[0]));
      v51 += 2LL;
      v50 = (char *)(v58 + 1);
    }
    while ( v61 != (char *)(v58 + 1) );
LABEL_89:
    v41 = a1[2].m128_u64[0];
LABEL_90:
    if ( v41 && v63 < v41 - 1 )
    {
      sub_35CD10(v59, v62 - 2);
      v42 = (a1[2].m128_u64[0] == 0) + a1[2].m128_u64[0] - 1;
      v43 = v42 + 3;
      v44 = v42 + 4;
      if ( a1[2].m128_u64[1] < v42 + 4 )
      {
        v53 = a1[1].m128_u64[1];
        v60 = v42 + 3;
        v58 = v42;
        v57 = v42 + 4;
        v54 = qvector_reserve(v59, v53, v44, 1);
        v43 = v60;
        v42 = v58;
        a1[1].m128_u64[1] = v54;
        v44 = v57;
      }
      v45 = a1[1].m128_u64[1];
      a1[2].m128_u64[0] = v44;
      *(_BYTE *)(v45 + v43) = 0;
      v46 = a1[1].m128_u64[1] + v42;
      *(_WORD *)v46 = -32542;
      *(_BYTE *)(v46 + 2) = -90;
    }
    goto LABEL_95;
  }
  if ( (a1[9].m128_i8[0] & 1) == 0 )
  {
    if ( a3 == 0xFFFF )
      a3 = (unsigned __int8)sub_614FB0(*v9, 40);
    goto LABEL_11;
  }
  v28 = v12;
  result = 0;
LABEL_54:
  v9[331] = 0;
  if ( v28 )
  {
    LOBYTE(v55[0]) = result;
    qfree(v28);
    return LOBYTE(v55[0]);
  }
  return result;
}

