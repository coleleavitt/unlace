__int64 __fastcall sub_3A43F0(
        _DWORD *a1,
        char a2,
        const char *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        __int64 a15)
{
  unsigned __int64 v17; // rbp
  void *v19; // r12
  void *tlc_for_til; // rax
  void *v21; // r14
  size_t v22; // r15
  _BYTE *v23; // rsi
  __int64 v24; // r15
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // rdx
  _BYTE *v30; // rsi
  __m128i si128; // xmm0
  char *v32; // r15
  const char *v33; // rsi
  __m128i v34; // xmm0
  __int64 v35; // r8
  __int64 v36; // r9
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  __int64 *v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  const char *v42; // rdi
  int v43; // eax
  unsigned __int64 *v44; // rdi
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // rdx
  unsigned int v47; // ebx
  double v48; // xmm0_8
  const char *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rdi
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rax
  _QWORD *v58; // rsi
  unsigned __int64 v59; // rdx
  __int64 v60; // r14
  __int64 v61; // rax
  unsigned int v62; // edi
  __int64 v63; // rbp
  int v64; // eax
  char v65; // [rsp+0h] [rbp-188h]
  unsigned __int64 v66; // [rsp+8h] [rbp-180h]
  __int64 v67; // [rsp+8h] [rbp-180h]
  __int64 v69; // [rsp+18h] [rbp-170h]
  __int64 v70; // [rsp+18h] [rbp-170h]
  __int64 v71; // [rsp+20h] [rbp-168h] BYREF
  void *v72; // [rsp+28h] [rbp-160h] BYREF
  void *v73; // [rsp+30h] [rbp-158h] BYREF
  __int64 v74; // [rsp+38h] [rbp-150h] BYREF
  void *dest; // [rsp+40h] [rbp-148h] BYREF
  __int128 v76; // [rsp+48h] [rbp-140h]
  void *v77; // [rsp+60h] [rbp-128h] BYREF
  __int128 v78; // [rsp+68h] [rbp-120h]
  _QWORD v79[23]; // [rsp+80h] [rbp-108h] BYREF
  _QWORD *v80; // [rsp+138h] [rbp-50h]
  unsigned __int64 v81; // [rsp+148h] [rbp-40h]

  v17 = a5;
  v81 = __readfsqword(0x28u);
  v19 = (void *)operator new(0x40u);
  sub_3A4010((__int64)v19, 5, a6, a15);
  tlc_for_til = (void *)create_tlc_for_til(a4, 0);
  v21 = tlc_for_til;
  if ( !a2 )
  {
    v77 = v19;
    v50 = a3;
    dest = tlc_for_til;
    sub_3A42C0((__int64)v79, (__int64)a3, 0xA5u, 3, &dest, (__int64)&v77);
    v53 = (__int64 *)v77;
    if ( dest )
      (*(void (__fastcall **)(void *))(*(_QWORD *)dest + 8LL))(dest);
    if ( v53 )
    {
      v54 = v53[3];
      if ( v54 )
      {
        v53[4] = 0;
        qfree(v54, v50);
      }
      v55 = *v53;
      if ( *v53 )
      {
        v53[1] = 0;
        qfree(v55, v50);
      }
      operator delete(v53, 0x40u);
    }
    LODWORD(v71) = v17;
    v56 = sub_4AED50(v79, &v71, v51, v52);
    v57 = v80[2];
    if ( v57 )
    {
      if ( v56 < v57 )
      {
        v47 = *(_DWORD *)(v80[1] + 4 * v56);
        goto LABEL_47;
      }
    }
    else if ( v56 < (*(int (__fastcall **)(_QWORD *))(*v80 + 32LL))(v80) )
    {
      v47 = v56 + 1;
LABEL_47:
      til_chooser_t__::vfunc_0(v79, (const char *)&v71);
      return v47;
    }
    v47 = 0;
    goto LABEL_47;
  }
  dest = nullptr;
  v76 = 0;
  if ( !a3 )
  {
    v23 = nullptr;
    v25 = 11;
    v24 = 0;
    v26 = 12;
LABEL_27:
    v69 = v25;
    v66 = v26;
    dest = (void *)qvector_reserve(&dest, v23, v26, 1);
    v25 = v69;
    v23 = dest;
    v26 = v66;
    goto LABEL_6;
  }
  v22 = strlen(a3);
  dest = (void *)qvector_reserve(&dest, 0, v22 + 1, 1);
  *(_QWORD *)&v76 = v22 + 1;
  *((_BYTE *)dest + v22) = 0;
  memmove(dest, a3, v22);
  v23 = dest;
  if ( (_QWORD)v76 )
  {
    v24 = v76 - 1;
    v25 = v76 + 10;
    v26 = v76 + 11;
  }
  else
  {
    v24 = 0;
    v26 = 12;
    v25 = 11;
  }
  if ( *((_QWORD *)&v76 + 1) < v26 )
    goto LABEL_27;
LABEL_6:
  *(_QWORD *)&v76 = v26;
  v23[v25] = 0;
  qmemcpy((char *)dest + v24, "\n<:E1::::>\n", 11);
  v27 = v76;
  if ( (_QWORD)v76 )
  {
    v28 = v76 + 30;
    v29 = v76 + 31;
    v30 = dest;
    v27 = v76 - 1;
    if ( *((_QWORD *)&v76 + 1) >= (unsigned __int64)(v76 + 31) )
      goto LABEL_8;
  }
  else
  {
    v30 = dest;
    v29 = 32;
    v28 = 31;
    if ( *((_QWORD *)&v76 + 1) >= 0x20u )
      goto LABEL_8;
  }
  v70 = v28;
  v67 = v29;
  dest = (void *)qvector_reserve(&dest, v30, v29, 1);
  v28 = v70;
  v30 = dest;
  v29 = v67;
LABEL_8:
  *(_QWORD *)&v76 = v29;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD4E0);
  v30[v28] = 0;
  v32 = (char *)dest + v27;
  v33 = a3;
  *(__m128i *)v32 = si128;
  v34 = _mm_load_si128((const __m128i *)&xmmword_5DD4F0);
  v73 = v19;
  *(__m128i *)(v32 + 15) = v34;
  v71 = 0;
  v72 = v21;
  sub_3A42C0((__int64)v79, (__int64)a3, 0xA5u, 3, &v72, (__int64)&v73);
  v39 = (__int64 *)v73;
  if ( v72 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v72 + 8LL))(v72);
  if ( v39 )
  {
    v40 = v39[3];
    if ( v40 )
    {
      v39[4] = 0;
      *(double *)v34.m128i_i64 = qfree(v40, v33);
    }
    v41 = *v39;
    if ( *v39 )
    {
      v39[1] = 0;
      qfree(v41, v33, *(double *)v34.m128i_i64);
    }
    operator delete(v39, 0x40u);
  }
  v77 = nullptr;
  v78 = 0;
  if ( !(_DWORD)v17 )
    goto LABEL_17;
  if ( v80[2] )
  {
    if ( v17 >= v80[5] )
    {
      v74 = -1;
      v58 = nullptr;
      v59 = 1;
      v60 = -1;
    }
    else
    {
      v58 = nullptr;
      v59 = 1;
      v60 = *(int *)(v80[4] + 4 * v17);
      v74 = v60;
    }
LABEL_51:
    v77 = (void *)qvector_reserve(&v77, v58, v59, 8);
    v58 = v77;
    v61 = v78;
    goto LABEL_52;
  }
  v62 = (*(__int64 (__fastcall **)(_QWORD *))(*v80 + 32LL))(v80);
  v61 = v78;
  v58 = v77;
  v59 = v78 + 1;
  if ( v62 < (unsigned int)v17 )
    v63 = -1;
  else
    v63 = v17 - 1;
  v74 = v63;
  v60 = v63;
  if ( &v74 >= v77 && &v74 < (__int64 *)((char *)v77 + 8 * *((_QWORD *)&v78 + 1)) )
  {
    if ( *((_QWORD *)&v78 + 1) < v59 )
    {
      v77 = (void *)qvector_reserve(&v77, v77, v59, 8);
      v58 = v77;
      v61 = v78;
    }
    v58[v61] = v63;
    goto LABEL_53;
  }
  if ( *((_QWORD *)&v78 + 1) < v59 )
    goto LABEL_51;
LABEL_52:
  v58[v61] = v60;
LABEL_53:
  *(_QWORD *)&v78 = v78 + 1;
LABEL_17:
  v42 = &s1;
  if ( (_QWORD)v76 )
    LODWORD(v42) = (_DWORD)dest;
  v43 = sub_1697D0(
          (int)v42,
          (__int64)v79,
          (__int64)&v77,
          (__int64)&v71,
          v35,
          v36,
          (__m128)0LL,
          a8,
          a9,
          a10,
          v37,
          v38,
          a13,
          a14,
          v65);
  v44 = (unsigned __int64 *)v77;
  if ( v43 == 1 && (_QWORD)v78 )
  {
    if ( a1 )
      *a1 = v71;
    v45 = *v44;
    v46 = v80[2];
    if ( v46 )
    {
      v47 = 0;
      if ( v45 < v46 )
        v47 = *(_DWORD *)(v80[1] + 4 * v45);
    }
    else
    {
      v64 = (*(__int64 (__fastcall **)(_QWORD *))(*v80 + 32LL))(v80);
      v47 = v45 + 1;
      v44 = (unsigned __int64 *)v77;
      if ( v45 >= v64 )
        v47 = 0;
    }
  }
  else
  {
    v47 = 0;
  }
  if ( v44 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v44, (const char *)v79);
  }
  v48 = til_chooser_t__::vfunc_0(v79, (const char *)v79);
  if ( dest )
  {
    *(_QWORD *)&v76 = 0;
    qfree(dest, (const char *)v79, v48);
  }
  return v47;
}
