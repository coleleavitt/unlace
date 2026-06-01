__int64 __fastcall sub_15671C0(__m128i *a1, __int64 a2, int *a3, __int64 a4, int a5, __m128i a6, __m128 a7)
{
  int v11; // eax
  __int64 v12; // rsi
  char *v13; // r12
  unsigned __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r10
  char *v18; // r15
  unsigned __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  char *v22; // r8
  __int64 v23; // rdi
  unsigned __int64 v24; // r11
  unsigned int v25; // r9d
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  char *v31; // r8
  __int64 v32; // rax
  char *v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rax
  _QWORD *v38; // r12
  __int64 v39; // rdi
  __int64 *v41; // rdi
  __int64 v42; // rax
  __int16 v43; // ax
  unsigned __int64 v44; // rsi
  char *v45; // r11
  size_t v46; // r9
  unsigned __int64 v47; // rdx
  void *v48; // rcx
  __int64 v49; // rdi
  __int64 i; // rax
  __int64 v51; // rax
  unsigned int v52; // r13d
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  _QWORD *v57; // [rsp+8h] [rbp-100h] BYREF
  void *dest; // [rsp+10h] [rbp-F8h]
  __int64 v59; // [rsp+18h] [rbp-F0h]
  __int64 v60; // [rsp+20h] [rbp-E8h]
  size_t n; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v62; // [rsp+30h] [rbp-D8h]
  char *v63; // [rsp+38h] [rbp-D0h]
  char *v64; // [rsp+40h] [rbp-C8h]
  size_t v65; // [rsp+48h] [rbp-C0h]
  int v66; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD *v67; // [rsp+58h] [rbp-B0h] BYREF
  int v68; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+68h] [rbp-A0h]
  __int64 v70; // [rsp+70h] [rbp-98h]
  void *v71[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v72; // [rsp+90h] [rbp-78h]
  _BYTE v73[16]; // [rsp+98h] [rbp-70h] BYREF
  __int8 *v74; // [rsp+A8h] [rbp-60h] BYREF
  void *ptr; // [rsp+B0h] [rbp-58h]
  __int64 v76; // [rsp+B8h] [rbp-50h]
  _BYTE v77[72]; // [rsp+C0h] [rbp-48h] BYREF

  v11 = *a3;
  v12 = *(unsigned int *)(a4 + 48);
  v13 = *((char **)a3 + 1);
  LODWORD(v57) = a5;
  *(_DWORD *)(a4 + 160) = v11;
  v14 = *(unsigned int *)(a4 + 52);
  *(_DWORD *)(a4 + 164) = a3[1];
  v15 = (unsigned int)a3[4];
  v59 = a4 + 32;
  v16 = a4 + 40;
  v17 = 8 * v15;
  v18 = &v13[v17];
  v19 = v17 >> 3;
  v20 = 8 * v12;
  v21 = (v17 >> 3) + v12;
  if ( 8 * v12 )
  {
    if ( v21 > v14 )
    {
      v62 = v17 >> 3;
      n = v17;
      v60 = v16;
      sub_2237220(v16, a4 + 56, v21, 8);
      v23 = *(unsigned int *)(a4 + 48);
      v22 = *(char **)(a4 + 40);
      LODWORD(v19) = v62;
      v17 = n;
      v20 = 8 * v23;
      v24 = (8 * v23) >> 3;
      dest = &v22[8 * v23];
      v16 = v60;
      if ( v62 > v24 )
        goto LABEL_4;
    }
    else
    {
      v22 = *(char **)(a4 + 40);
      v23 = v12;
      v24 = v20 >> 3;
      dest = &v22[v20];
      if ( v19 > v20 >> 3 )
      {
LABEL_4:
        v25 = v23 + v19;
        *(_DWORD *)(a4 + 48) = v25;
        if ( v22 != dest )
        {
          v62 = v24;
          n = v20;
          v60 = (__int64)v22;
          memcpy(&v22[8 * v25 - v20], v22, v20);
          v24 = v62;
          v20 = n;
          v22 = (char *)v60;
        }
        if ( v24 )
        {
          if ( (v22 >= v13 + 16 || v13 >= v22 + 16) && v24 - 1 > 3 )
          {
            v26 = 0;
            v27 = 0;
            v28 = ((v24 - 2) >> 1) + 1;
            do
            {
              a7 = (__m128)_mm_loadu_si128((const __m128i *)&v13[v26]);
              ++v27;
              *(__m128 *)&v22[v26] = a7;
              v26 += 16;
            }
            while ( v27 < v28 );
            v29 = 2 * v28;
            v30 = 16 * v28;
            v31 = &v22[v30];
            if ( v24 != v29 )
              *(_QWORD *)v31 = *(_QWORD *)&v13[v30];
          }
          else
          {
            for ( i = 0; i != v24; ++i )
              *(_QWORD *)&v22[8 * i] = *(_QWORD *)&v13[8 * i];
          }
          v13 += v20;
        }
        if ( v18 != v13 )
          memcpy(dest, v13, v18 - v13);
        goto LABEL_16;
      }
    }
    v44 = *(unsigned int *)(a4 + 52);
    n = v20 - v17;
    v45 = &v22[v20 - v17];
    v46 = v17;
    v47 = (v17 >> 3) + v23;
    v60 = v17 >> 3;
    v48 = dest;
    if ( v47 > v44 )
    {
      v65 = v17;
      v64 = v45;
      v63 = v22;
      v62 = v17;
      sub_2237220(v16, a4 + 56, v47, 8);
      v23 = *(unsigned int *)(a4 + 48);
      v46 = v65;
      v45 = v64;
      v48 = (void *)(*(_QWORD *)(a4 + 40) + 8 * v23);
      v22 = v63;
      v17 = v62;
    }
    if ( v45 != dest )
    {
      v63 = v22;
      v62 = v17;
      dest = v45;
      memmove(v48, v45, v46);
      LODWORD(v23) = *(_DWORD *)(a4 + 48);
      v22 = v63;
      v17 = v62;
      v45 = (char *)dest;
    }
    *(_DWORD *)(a4 + 48) = v60 + v23;
    if ( v45 != v22 )
    {
      v60 = v17;
      dest = v22;
      memmove(&v22[v17], v22, n);
      v17 = v60;
      v22 = (char *)dest;
    }
    if ( v13 != v18 )
      memmove(v22, v13, v17);
  }
  else
  {
    if ( v21 > v14 )
    {
      v60 = v17 >> 3;
      dest = (void *)v17;
      sub_2237220(v16, a4 + 56, v21, 8);
      v12 = *(unsigned int *)(a4 + 48);
      v19 = v60;
      v17 = (__int64)dest;
    }
    if ( v13 != v18 )
    {
      v51 = *(_QWORD *)(a4 + 40);
      dest = (void *)v19;
      memcpy((void *)(v51 + 8 * v12), v13, v17);
      LODWORD(v12) = *(_DWORD *)(a4 + 48);
      LODWORD(v19) = (_DWORD)dest;
    }
    *(_DWORD *)(a4 + 48) = v19 + v12;
  }
LABEL_16:
  a3[4] = 0;
  sub_15D8C50(a4 + 72, a3 + 10);
  a3[14] = 0;
  v32 = a1->m128i_i64[1];
  v68 = 0;
  v69 = 0;
  v33 = *(char **)(v32 + 56);
  v70 = 0;
  if ( (*v33 < 0 || (v33[89] & 1) != 0) && a1[2].m128i_i16[0] == 20 )
  {
    v71[0] = nullptr;
    v74 = &a1[31].m128i_i8[8];
    v71[1] = v73;
    v72 = 0x200000000LL;
    v76 = 0x200000000LL;
    ptr = v77;
    sub_14A9F50(a1, (__int64)v71, a6, a7);
    sub_147F860(v59, (__int64)v71);
    sub_15DCED0(v74, &v74);
    if ( ptr != v77 )
      free(ptr);
    if ( v71[1] != v73 )
      free(v71[1]);
  }
  sub_1487580((__int64)a1, a4, (__int64)&v68, (unsigned int)v57, 6, 0, a6, a7, 1u);
  if ( (unsigned __int8)sub_15AC7C0(a4)
    && (unsigned __int8)sub_1496E50((__int64)a1, a4, (unsigned int)v57, 6, 0, a6, a7) )
  {
    return 0;
  }
  if ( a1[2].m128i_i16[0] == 63 )
  {
    if ( ((((*(_DWORD *)a4 >> 12) & 0x7F) + 105) & 0x7Fu) <= 4 )
      v34 = (unsigned int)(dword_261ADD0[((*(_DWORD *)a4 >> 12) & 0x7F) - 23] + *(_DWORD *)(a4 + 192));
    else
      v34 = 0;
    if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) )
    {
      sub_1481BE0((__int64)a1, (unsigned int *)a2, v34);
      v49 = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(a2 + 16) = 0;
      sub_15DCED0(v49, a2 + 40);
      *(_DWORD *)(a2 + 56) = 0;
      *(_QWORD *)a2 = 0;
    }
    v35 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v35, a1[1].m128i_i32);
    v36 = a1[6].m128i_i64[0];
    v67 = nullptr;
    if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      qword_2CD8AE0[2] = 0x200000000LL;
      v57 = qword_2CD8AE0;
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
    v37 = sub_17D91F0(v36, *(_QWORD *)(a1[6].m128i_i64[0] + 608), 3, a4, qword_2CD8AE0, &v67);
    v38 = (_QWORD *)v37;
    if ( !*(_BYTE *)(a4 + 656) )
    {
      sub_1818070(*(_QWORD *)(a4 + 296), *(_QWORD *)(a4 + 648), v37);
      *(_BYTE *)(a4 + 656) = 1;
    }
    sub_17A3F10(a1[6].m128i_i64[0], v38);
    if ( v67 )
    {
      v57 = v67;
      v39 = a1[6].m128i_i64[0];
      v57 = v38;
      *(__m128 *)v71 = _mm_loadh_ps((const double *)&v57);
      return sub_17B2ED0(v39, v71);
    }
    else
    {
      return sub_17A2530(a1[6].m128i_i64[0], v38, 0);
    }
  }
  else
  {
    if ( (unsigned __int8)sub_15AC7C0(a4) )
      sub_17A3F10(a1[6].m128i_i64[0], *(_QWORD *)(a4 + 8));
    v41 = (__int64 *)a1->m128i_i64[1];
    v42 = v41[7];
    if ( (*(_BYTE *)(v42 + 2) & 4) != 0 && a1[2].m128i_i16[0] == 73 )
    {
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v41, a1[1].m128i_i32);
      v52 = a1[2].m128i_u32[2];
      if ( sub_13D0E90((__int64)a1[1].m128i_i64, 7)
        || sub_13D0E90((__int64)a1[1].m128i_i64, 10)
        || sub_13D0E90((__int64)a1[1].m128i_i64, 6) )
      {
        if ( !*(_BYTE *)(a4 + 656) )
        {
          sub_1818070(*(_QWORD *)(a4 + 296), *(_QWORD *)(a4 + 648), 0);
          *(_BYTE *)(a4 + 656) = 1;
        }
        sub_147F860(v59, a2);
        v53 = a1[6].m128i_i64[0];
        v67 = nullptr;
        if ( (unsigned __int8)sub_15AE040(a4, 0, v52, &v67, &v66, *(_QWORD *)(v53 + 248) + 17464LL) )
        {
          sub_FC70B0((__int64)v71, a1[6].m128i_i64[1], v52, v66);
          sub_AE9DF0((unsigned __int8 **)v71, (__int64)v67, 1u);
          sub_AEA040((__int64)v71);
        }
        if ( sub_13D0E90((__int64)a1[1].m128i_i64, 10) )
        {
          return sub_15020C0((__int64)a1, v52, v59, a6, a7);
        }
        else if ( sub_13D0E90((__int64)a1[1].m128i_i64, 6) )
        {
          return sub_14FC540(a1, v52, v59, a6, a7);
        }
        else
        {
          v55 = a1[6].m128i_i64[0];
          v56 = sub_1502630(a1, v52, v59, a6, a7);
          return sub_17A2530(v55, v56, 0);
        }
      }
      else
      {
        sub_FC70B0((__int64)v71, a1[6].m128i_i64[1], a1[1].m128i_i32[0], 1773);
        sub_AEA040((__int64)v71);
        LOWORD(v71[0]) = 63;
        sub_1566E40((__int64)a1, v71, 1, 0);
        return 0;
      }
    }
    else if ( (*(_BYTE *)(v42 + 1) & 8) != 0
           && ((v43 = a1[2].m128i_i16[0], (unsigned __int16)(v43 - 14) <= 1u) || (unsigned __int16)(v43 - 17) <= 2u)
           && (*(_BYTE *)a4 & 7) == 2
           && (unsigned int)sub_15AC7E0(a4) == 1 )
    {
      sub_1481E50((__int64)a1, a2, 0);
      v54 = sub_14AC9E0(a1, a4, a6, a7);
      return sub_17A2530(a1[6].m128i_i64[0], v54, 0);
    }
    else
    {
      return sub_14922F0(a1, a4, 0, a2, &v68, nullptr, a6, a7, 0);
    }
  }
}
