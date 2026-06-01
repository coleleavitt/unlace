__m128i *__fastcall sub_5383D0(
        __int64 *a1,
        const __m128i *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // r12
  const char *v16; // rsi
  _QWORD *v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __m128i *v28; // rbx
  bool v29; // cc
  char *v30; // r14
  size_t v31; // rax
  size_t v32; // r12
  const void *v33; // r14
  size_t v34; // rax
  size_t v35; // r12
  __m128i si128; // xmm0
  __int64 *v37; // rax
  const char *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  size_t v43; // rax
  size_t v44; // r15
  __int64 v45; // rax
  void (__fastcall *v46)(void *, const char *); // rax
  __m128i *v47; // rdi
  void *v48; // rdi
  size_t v49; // r15
  __int64 v50; // rax
  const char *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // r12
  __int64 v54; // rbp
  __int64 *v55; // rax
  __int64 v56; // rdi
  void *v57; // rdi
  size_t v58; // r15
  __int64 v59; // rax
  size_t v60; // [rsp+8h] [rbp-D0h]
  char *s; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v62; // [rsp+18h] [rbp-C0h]
  __int64 v63; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v64; // [rsp+38h] [rbp-A0h]
  int v65; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v66[20]; // [rsp+54h] [rbp-84h]
  __int64 v67; // [rsp+68h] [rbp-70h]
  __int128 v68; // [rsp+70h] [rbp-68h]
  __int64 v69; // [rsp+80h] [rbp-58h]
  int v70; // [rsp+88h] [rbp-50h]
  unsigned int v71; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v72; // [rsp+98h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  v12 = qalloc_or_throw(32);
  *(_DWORD *)(v12 + 8) = 1;
  v15 = v12;
  *(_QWORD *)v12 = ui_core_action_handler_t___vtable;
  *(_QWORD *)(v12 + 16) = 0;
  s = nullptr;
  *(_QWORD *)(v12 + 24) = a2;
  v16 = (const char *)a2[8].m128i_i64[1];
  v62 = 0;
  if ( !v16 )
    goto LABEL_26;
  v17 = QT::QCoreApplication::self;
  if ( *v16 != 64 )
  {
    v18 = sub_47A0E0(QT::QCoreApplication::self, v16, nullptr);
    goto LABEL_4;
  }
  v43 = strlen(v16 + 1);
  v44 = v43;
  if ( v43 )
  {
    v60 = v43 + 1;
    s = (char *)qvector_reserve(&s, 0, v43 + 1, 1);
    *(_QWORD *)&v62 = v60;
    memmove(s, v16 + 1, v44);
    s[v44] = 0;
  }
  v45 = (*(__int64 (__fastcall **)(_QWORD *))(*v17 + 224LL))(v17);
  if ( v45 )
    v18 = sub_53C520(v45);
  else
LABEL_26:
    v18 = -1;
LABEL_4:
  v19 = a2->m128i_i64[0];
  *(_OWORD *)v66 = 0;
  *(_QWORD *)&v66[4] = v19;
  v20 = a2[7].m128i_i64[0];
  v70 = v18;
  *(_QWORD *)&v66[12] = v20;
  v21 = a2[8].m128i_i64[0];
  v68 = 0;
  v69 = v21;
  v22 = a2[5].m128i_i32[0];
  v65 = 64;
  v67 = v15;
  *(_QWORD *)&v68 = 2;
  v23 = (v22 & 0x200000) == 0 ? 1 : 65;
  v24 = v23;
  if ( (v22 & 0x400000) != 0 )
  {
    LOBYTE(v24) = ((v22 & 0x200000) == 0 ? 1 : 65) | 0x80;
    v23 = v24;
  }
  v71 = v23 | 0x80000000;
  v25 = sub_537F20(a1, (__int64)&v65, (__m128)0LL, a4, a5, a6, v13, v14, a9, a10);
  v28 = (__m128i *)v25;
  if ( !v25 )
  {
    if ( !under_debugger )
      interr(40724, &v65, v26, v27, 0.0);
    BUG();
  }
  v29 = (unsigned __int64)v62 <= 1;
  *(_QWORD *)(v15 + 16) = v25;
  if ( !v29 )
  {
    v30 = s;
    if ( s && (v31 = strlen(s), (v32 = v31) != 0) )
    {
      v57 = (void *)v28[10].m128i_i64[1];
      v58 = v31 + 1;
      if ( v28[11].m128i_i64[1] < v31 + 1 )
      {
        v59 = qvector_reserve(&v28[10].m128i_u64[1], v28[10].m128i_i64[1], v58, 1);
        v28[10].m128i_i64[1] = v59;
        v57 = (void *)v59;
      }
      v28[11].m128i_i64[0] = v58;
      memmove(v57, v30, v32);
      *(_BYTE *)(v28[10].m128i_i64[1] + v32) = 0;
    }
    else
    {
      v28[11].m128i_i64[0] = 0;
    }
  }
  v33 = (const void *)a2[2].m128i_i64[0];
  if ( v33 && (v34 = strlen((const char *)a2[2].m128i_i64[0]), (v35 = v34) != 0) )
  {
    v48 = (void *)v28->m128i_i64[1];
    v49 = v34 + 1;
    if ( v28[1].m128i_i64[1] < v34 + 1 )
    {
      v50 = qvector_reserve(&v28->m128i_u64[1], v28->m128i_i64[1], v49, 1);
      v28->m128i_i64[1] = v50;
      v48 = (void *)v50;
    }
    v28[1].m128i_i64[0] = v49;
    memmove(v48, v33, v35);
    *(_BYTE *)(v28->m128i_i64[1] + v35) = 0;
  }
  else
  {
    v28[1].m128i_i64[0] = 0;
  }
  v28[7].m128i_i32[0] = a2[5].m128i_i32[0] | 0x80000;
  v28[6] = _mm_load_si128(a2 + 6);
  v28[4] = _mm_load_si128(a2 + 3);
  si128 = _mm_load_si128(a2 + 4);
  v28[7].m128i_i32[3] = 0;
  v28[5] = si128;
  v37 = (__int64 *)a2->m128i_i64[1];
  if ( v37 )
  {
    v26 = v28[12].m128i_i64[0];
    *v37 = v26;
  }
  v38 = (const char *)v28;
  if ( (unsigned __int8)sub_535040(a1, v28, v26, v27, *(double *)si128.m128i_i64) )
  {
    v38 = (const char *)a2[7].m128i_i64[1];
    if ( v38 && *v38 )
    {
      v63 = 0;
      v64 = 0;
      sub_536F00((__int64)&v63, v38, 1, v39, v40, v41);
      v51 = &s1;
      if ( v28[2].m128i_i64[1] )
        v51 = (const char *)v28[2].m128i_i64[0];
      v38 = (const char *)&v63;
      sub_4B5050(v51, &v63, 0, 0.0, a4);
      v52 = v63;
      if ( v63 )
      {
        v53 = v64;
        if ( (_QWORD)v64 )
        {
          v54 = 0;
          do
          {
            v55 = (__int64 *)(v52 + 24 * v54);
            v56 = *v55;
            if ( *v55 )
            {
              v55[1] = 0;
              qfree(v56, (const char *)&v63);
              v52 = v63;
            }
            ++v54;
          }
          while ( v53 != v54 );
        }
        *(_QWORD *)&v64 = 0;
        qfree(v52, (const char *)&v63);
      }
    }
  }
  else
  {
    v46 = *(void (__fastcall **)(void *, const char *))(v28->m128i_i64[0] + 8);
    if ( v46 == ui_action_t__::vfunc_1 )
    {
      ui_action_t__::vfunc_0((__int64)v28, v28->m128i_i8);
      v47 = v28;
      v38 = (const char *)&qword_D0;
      v28 = nullptr;
      operator delete(v47, 0xD0u);
    }
    else
    {
      ((void (__fastcall *)(__m128i *))v46)(v28);
      v28 = nullptr;
    }
  }
  if ( s )
  {
    *(_QWORD *)&v62 = 0;
    qfree(s, v38);
  }
  return v28;
}
