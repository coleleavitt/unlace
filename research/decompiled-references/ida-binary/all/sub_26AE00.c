__int64 __fastcall sub_26AE00(
        int a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  void (__fastcall **v10)(_QWORD *, __int64, __int16 *); // rax
  __int64 (__fastcall *v12)(__int64); // rax
  _BYTE *v13; // r12
  __int64 v14; // rcx
  int *v15; // rax
  __int64 v16; // rdx
  __m128i *v17; // rsi
  __m128i si128; // xmm0
  void *v19; // rsi
  char **p_s1; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __m128i *v30; // rbx
  __int64 v31; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // r12
  const char *v37; // rbp
  char *v38; // rax
  unsigned __int64 v39; // rdx
  char *v40; // rax
  const char *v41; // rbp
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // rsi
  const char *v46; // rsi
  char *v47; // rdi
  void (__fastcall **v48)(_QWORD *, __int64, char **); // rax
  const char *v49; // rsi
  char *v50; // rbp
  void (__fastcall **v51)(_QWORD *, __int64, char **); // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __m128 v56; // xmm4
  __m128 v57; // xmm5
  char v58; // [rsp+0h] [rbp-158h]
  size_t n; // [rsp+8h] [rbp-150h]
  __int16 v60; // [rsp+1Ch] [rbp-13Ch] BYREF
  __int16 v61; // [rsp+1Eh] [rbp-13Ah] BYREF
  char *s1; // [rsp+20h] [rbp-138h] BYREF
  __int128 v63; // [rsp+28h] [rbp-130h]
  __int64 (__fastcall **v64)(); // [rsp+40h] [rbp-118h] BYREF
  __int64 v65; // [rsp+48h] [rbp-110h]
  __int128 v66; // [rsp+50h] [rbp-108h]
  __int64 v67; // [rsp+60h] [rbp-F8h]
  const char *v68; // [rsp+68h] [rbp-F0h]
  int v69; // [rsp+70h] [rbp-E8h]
  __m128i v70; // [rsp+78h] [rbp-E0h] BYREF
  int v71; // [rsp+88h] [rbp-D0h]
  char v72; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v73[3]; // [rsp+A8h] [rbp-B0h] BYREF
  _QWORD v74[3]; // [rsp+C0h] [rbp-98h] BYREF
  char v75; // [rsp+D8h] [rbp-80h] BYREF
  int v76; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v77; // [rsp+F8h] [rbp-60h]
  __int128 v78; // [rsp+100h] [rbp-58h]
  char v79; // [rsp+110h] [rbp-48h]
  char v80; // [rsp+111h] [rbp-47h]
  unsigned __int64 v81; // [rsp+118h] [rbp-40h]

  v10 = (void (__fastcall **)(_QWORD *, __int64, __int16 *))*a2;
  v81 = __readfsqword(0x28u);
  (*v10)(a2, 3, &v60);
  v12 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v12 == form_actions_impl_t__::vfunc_9 )
    v13 = (_BYTE *)a2[4];
  else
    v13 = (_BYTE *)v12((__int64)a2);
  switch ( a1 )
  {
    case -2:
      if ( v60 )
        return 1;
      v48 = (void (__fastcall **)(_QWORD *, __int64, char **))*a2;
      s1 = nullptr;
      v49 = (_BYTE *)(&dword_0 + 1);
      v63 = 0;
      (*v48)(a2, 1, &s1);
      v50 = s1;
      if ( !(_QWORD)v63
        || (v49 = "<Default>", strcmp(s1, "<Default>"))
        && (v49 = "<Default debugger>", strcmp(v50, "<Default debugger>"))
        && (v49 = "<Database>", strcmp(v50, "<Database>"))
        && (v49 = "<Database debugger>", strcmp(v50, "<Database debugger>"))
        && (v49 = "<Current Database>", strcmp(v50, "<Current Database>"))
        && (v49 = "<Current Database debugger>", strcmp(v50, "<Current Database debugger>")) )
      {
        if ( v50 )
        {
          *(_QWORD *)&v63 = 0;
          qfree(v50, v49);
        }
        return 1;
      }
      sub_169630(
        (int)"Cannot save the desktop with a reserved name",
        (__int64)v49,
        v52,
        v53,
        v54,
        v55,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v56,
        v57,
        a9,
        a10,
        v58);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 48LL))(a2, 1);
      if ( s1 )
      {
        *(_QWORD *)&v63 = 0;
        qfree(s1, (_BYTE *)&dword_0 + 1);
      }
      return 0;
    case -1:
    case 3:
      if ( v60 || (v34 = 1, (unsigned __int8)(*v13 - 3) <= 1u) )
      {
        v33 = *a2;
        LOWORD(s1) = 1;
        (*(void (__fastcall **)(_QWORD *, __int64, char **))(v33 + 8))(a2, 4, &s1);
        v34 = 0;
      }
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a2 + 16LL))(a2, 4, v34);
      s1 = nullptr;
      v63 = 0;
      if ( v60 )
      {
        if ( *v13 == 2 )
        {
          v35 = 19;
          v36 = 18;
          v37 = "<Default debugger>";
        }
        else
        {
          v35 = 10;
          v36 = 9;
          v37 = "<Default>";
        }
        v38 = (char *)qvector_reserve(&s1, 0, v35, 1);
        s1 = v38;
        *(_QWORD *)&v63 = v35;
        *(_QWORD *)v38 = *(_QWORD *)v37;
        *(_QWORD *)&v38[v36 - 8] = *(_QWORD *)&v37[v36 - 8];
        v39 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v40 = &v38[-v39];
        v41 = (const char *)(v37 - v40);
        v42 = (v36 + (_DWORD)v40) & 0xFFFFFFF8;
        if ( v42 >= 8 )
        {
          v43 = v42 & 0xFFFFFFF8;
          v44 = 0;
          do
          {
            v45 = v44;
            v44 += 8;
            *(_QWORD *)(v39 + v45) = *(_QWORD *)&v41[v45];
          }
          while ( v44 < v43 );
        }
        s1[v36] = 0;
      }
      (*(void (__fastcall **)(_QWORD *, __int64, char **))(*a2 + 8LL))(a2, 1, &s1);
      (*(void (__fastcall **)(_QWORD *, _QWORD, bool))(*a2 + 88LL))(a2, 0, (unsigned __int64)v63 > 1);
      (*(void (__fastcall **)(_QWORD *, __int64, bool))(*a2 + 16LL))(a2, 1, v60 == 0);
      v46 = (_BYTE *)(&dword_0 + 2);
      (*(void (__fastcall **)(_QWORD *, __int64, bool))(*a2 + 16LL))(a2, 2, v60 == 0);
      v47 = s1;
      if ( !s1 )
        return 1;
      goto LABEL_45;
    case 1:
      if ( !v60 )
      {
        v51 = (void (__fastcall **)(_QWORD *, __int64, char **))*a2;
        s1 = nullptr;
        v63 = 0;
        (*v51)(a2, 1, &s1);
        v46 = nullptr;
        (*(void (__fastcall **)(_QWORD *, _QWORD, bool))(*a2 + 88LL))(a2, 0, (unsigned __int64)v63 > 1);
        v47 = s1;
        if ( s1 )
        {
LABEL_45:
          *(_QWORD *)&v63 = 0;
          qfree(v47, v46);
        }
      }
      return 1;
    case 2:
      v14 = (unsigned __int8)*v13;
      v65 = 0x3FF000004LL;
      v68 = "Select desktop to save";
      v66 = -1;
      v15 = (int *)&v72;
      v64 = (__int64 (__fastcall **)())&stru_86F6A0;
      v67 = 0;
      v69 = 3;
      v71 = -1;
      v70 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_860438), (__m128i)(unsigned __int64)&off_8603B0);
      do
      {
        *(_QWORD *)v15 = 0;
        v15 += 6;
        *((_OWORD *)v15 - 1) = 0;
      }
      while ( &v76 != v15 );
      v76 = 0;
      v16 = HIDWORD(v65);
      if ( ((HIDWORD(v65) >> 19) & 0x3F) != 0 )
      {
        if ( BYTE3(v65) != 0xFF )
        {
          if ( !under_debugger )
            interr(3449, ((HIDWORD(v65) >> 19) & 0x3F) - 1, HIDWORD(v65), v14, 0.0);
          BUG();
        }
        v16 = HIDWORD(v65) & 0xFE07FFFF;
        BYTE3(v65) = ((HIDWORD(v65) >> 19) & 0x3F) - 1;
        HIDWORD(v65) &= 0xFE07FFFF;
      }
      v77 = 0;
      v64 = desktop_chooser_t___vtable;
      v17 = (__m128i *)v73[0];
      v79 = v14;
      v80 = 1;
      v71 = 137;
      v78 = 0;
      if ( v73[2] <= 0x11u )
      {
        v73[0] = qvector_reserve(v73, v73[0], 18, 1);
        v17 = (__m128i *)v73[0];
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DCC20);
      v73[1] = 18;
      v17[1].m128i_i8[0] = 46;
      *v17 = si128;
      *(_BYTE *)(v73[0] + 17LL) = 0;
      v19 = (void *)v74[0];
      if ( v74[2] <= 0xCu )
      {
        v74[0] = qvector_reserve(v74, v74[0], 13, 1);
        v19 = (void *)v74[0];
      }
      v74[1] = 13;
      qmemcpy(v19, "Show JSON...", 12);
      p_s1 = &s1;
      *(_BYTE *)(v74[0] + 12LL) = 0;
      s1 = nullptr;
      v21 = sub_4AED50(&v64, &s1, v16, v14);
      v22 = v77;
      if ( v21 >= 0 && v21 < (unsigned __int64)v78 )
      {
        v23 = v77 + 56 * v21;
        if ( v23 )
        {
          s1 = nullptr;
          si128.m128i_i64[0] = 0;
          v63 = 0;
          if ( *(_QWORD *)(v23 + 8) )
          {
            n = *(_QWORD *)(v23 + 8);
            s1 = (char *)qalloc_or_throw(n);
            *((_QWORD *)&v63 + 1) = n;
            memcpy(s1, *(const void **)v23, n);
            *(_QWORD *)&v63 = n;
          }
          (*(void (__fastcall **)(_QWORD *, __int64, char **))(*a2 + 8LL))(a2, 1, &s1);
          v61 = *(_BYTE *)(v23 + 24) ^ 1;
          (*(void (__fastcall **)(_QWORD *, __int64, __int16 *))(*a2 + 8LL))(a2, 4, &v61);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 48LL))(a2, 1);
          p_s1 = nullptr;
          (*(void (__fastcall **)(_QWORD *, _QWORD, bool))(*a2 + 88LL))(a2, 0, (unsigned __int64)v63 > 1);
          if ( s1 )
          {
            *(_QWORD *)&v63 = 0;
            *(double *)si128.m128i_i64 = qfree(s1, nullptr);
          }
          v22 = v77;
        }
      }
      v64 = desktop_chooser_t___vtable;
      if ( v22 )
      {
        v24 = v78;
        if ( (_QWORD)v78 )
        {
          v25 = 0;
          v26 = 0;
          do
          {
            v27 = (__int64 *)(v22 + v25);
            v28 = *(_QWORD *)(v22 + v25 + 32);
            if ( v28 )
            {
              v27[5] = 0;
              *(double *)si128.m128i_i64 = qfree(v28, (const char *)p_s1);
            }
            v29 = *v27;
            if ( *v27 )
            {
              v27[1] = 0;
              *(double *)si128.m128i_i64 = qfree(v29, (const char *)p_s1, *(double *)si128.m128i_i64);
            }
            ++v26;
            v22 = v77;
            v25 += 56;
          }
          while ( v24 != v26 );
        }
        *(_QWORD *)&v78 = 0;
        *(double *)si128.m128i_i64 = qfree(v22, (const char *)p_s1);
      }
      v64 = (__int64 (__fastcall **)())&stru_86F6A0;
      v30 = (__m128i *)&v75;
      do
      {
        v31 = v30->m128i_i64[0];
        if ( v30->m128i_i64[0] )
        {
          v30->m128i_i64[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v31, (const char *)p_s1, *(double *)si128.m128i_i64);
        }
        v30 = (__m128i *)((char *)v30 - 24);
      }
      while ( v30 != &v70 );
      return 1;
    default:
      return 1;
  }
}
