void __fastcall sub_68E310(__int64 a1, __int64 *a2, __m128i a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rsi
  size_t v9; // rdx
  __int64 v10; // rbp
  void (__fastcall ***v11)(void *); // r12
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int i; // ebp
  __int64 v16; // rdx
  __int64 v17; // rsi
  _DWORD *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  char v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rsi
  char *v27; // rdi
  __int64 *v28; // rbp
  __int64 *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r14
  __int16 v34; // ax
  __int64 v35; // rbp
  _BYTE *v36; // rdi
  char *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  _BYTE *v40; // r12
  void (__fastcall *v41)(_BYTE *, __int64); // rbp
  __int64 v42; // r14
  _QWORD *v43; // rbp
  _QWORD *v44; // r14
  __int64 v45; // r12
  int v46; // edx
  __int64 v47; // r12
  __int64 v48; // r12
  __int64 v49; // rdi
  void (__fastcall ***v50)(void *); // rbx
  __int64 v51; // r12
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // rax
  _BYTE *v57; // r12
  void (__fastcall *v58)(_BYTE *, __int64); // rbp
  __int64 v59; // r14
  _QWORD *v60; // rbp
  _QWORD *v61; // r14
  __int64 v62; // r12
  __int64 *v63; // [rsp+0h] [rbp-B8h]
  char *v64; // [rsp+8h] [rbp-B0h]
  __int64 *v65; // [rsp+10h] [rbp-A8h]
  __int64 v66; // [rsp+18h] [rbp-A0h]
  __int64 v67; // [rsp+20h] [rbp-98h] BYREF
  char v68[8]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v69; // [rsp+30h] [rbp-88h] BYREF
  __int64 v70; // [rsp+38h] [rbp-80h]
  char *v71; // [rsp+40h] [rbp-78h] BYREF
  __int64 v72; // [rsp+48h] [rbp-70h]
  _QWORD v73[2]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v74[88]; // [rsp+60h] [rbp-58h] BYREF

  if ( !*(_BYTE *)(a1 + 2528) || (v4 = *(_QWORD *)(a1 + 4408)) != 0 && *(_DWORD *)(a1 + 4456) < *(_DWORD *)(v4 - 4) )
  {
    v50 = (void (__fastcall ***)(void *))*a2;
    if ( *a2 )
    {
      v12 = (*((_DWORD *)v50 + 4))-- == 1;
      if ( v12 )
      {
        (**v50)(v50);
        sub_186B220(v50);
      }
    }
    *a2 = 0;
  }
  else
  {
    v67 = 0;
    v6 = *(_QWORD *)(a1 + 2480);
    if ( v6 )
    {
      a3 = _mm_loadl_epi64((const __m128i *)(v6 - 8));
      v63 = (__int64 *)a3.m128i_i64[0];
      v7 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(a3) + 8);
      v8 = *(_DWORD **)(a1 + 2480);
      v67 = v7 + 8;
      *(_QWORD *)v7 = a3.m128i_i64[0];
      if ( v8 )
      {
        v9 = 4LL * (unsigned int)*(v8 - 1);
        if ( v9 <= 4 )
        {
          if ( v9 == 4 )
            *(_DWORD *)(v7 + 8) = *v8;
        }
        else
        {
          memmove((void *)(v7 + 8), v8, v9);
        }
      }
    }
    v10 = sub_186B270(0xA0u);
    sub_1373200(v10, *(_QWORD *)(a1 + 8));
    v11 = (void (__fastcall ***)(void *))*a2;
    ++*(_DWORD *)(v10 + 16);
    if ( v11 )
    {
      v12 = (*((_DWORD *)v11 + 4))-- == 1;
      if ( v12 )
      {
        (**v11)(v11);
        sub_186B220(v11);
      }
    }
    v13 = *(_QWORD *)(a1 + 4752);
    *a2 = v10;
    if ( v13 )
    {
      sub_7826B0(v13, a1 + 96, a1 + 4480);
      sub_781190(*(_QWORD *)(a1 + 4752), &v67);
    }
    v70 = 0;
    v69 = *(_QWORD *)(a1 + 8);
    v65 = &v69;
    sub_7E6CD0(a1 + 4480, &v69);
    v14 = v70;
    for ( i = 0; v70; ++i )
    {
      while ( 1 )
      {
        if ( i >= *(_DWORD *)(v14 - 4) )
          goto LABEL_21;
        v16 = *(_QWORD *)(v14 + 8LL * i);
        if ( v16 )
        {
          if ( !*(_WORD *)(v16 + 4) && !*(_DWORD *)(v16 + 24) )
          {
            v17 = *(_QWORD *)(v16 + 16);
            v18 = *(_DWORD **)(v17 + 24);
            if ( !v18 || *v18 == -1 )
              break;
          }
        }
LABEL_20:
        ++i;
        if ( !v14 )
          goto LABEL_21;
      }
      v46 = *(_DWORD *)(v67 + 4LL * i);
      if ( v46 == -1 )
      {
        sub_135F9B0(*a2, v17, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL));
      }
      else
      {
        if ( v46 != 1 )
          goto LABEL_20;
        sub_135F9B0(*a2, v17, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL));
      }
      v14 = v70;
    }
LABEL_21:
    v19 = *(_QWORD *)(a1 + 4752);
    if ( v19 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, a2);
    sub_786820(a1 + 4376, a2);
    v20 = *(_QWORD *)(a1 + 4712);
    v21 = 0x7FFFFFFF8LL;
    if ( v20 )
      v21 = 8LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
    v22 = *(_QWORD *)(v20 + v21);
    if ( v22 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, a2);
    v23 = sub_17F9BB0(v22);
    v24 = sub_1859610(v23, "model_validate", 0);
    if ( !v24 )
    {
LABEL_28:
      sub_2334C0(v65);
      if ( v67 )
        sub_186B220((void *)(v67 - 8));
      return;
    }
    if ( (unsigned int)sub_180B130(v23) )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        v52 = sub_180B150(v23, "model_validate");
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v52, "Verifying solution\n");
      }
      else
      {
        sub_180B150(v23, "model_validate");
        std::operator<<<std::char_traits<char>>();
      }
    }
    v25 = *a2;
    v73[0] = 0;
    v64 = v68;
    sub_1360C00(v68, v25, v73);
    sub_18572D0(v73);
    v26 = 1;
    v27 = v68;
    sub_1360B80(v68, 1);
    v28 = *(__int64 **)(a1 + 4408);
    if ( v28 )
    {
      v29 = &v28[*((unsigned int *)v28 - 1)];
      if ( v29 != v28 )
      {
        v63 = (__int64 *)&v71;
        while ( 1 )
        {
          while ( 1 )
          {
            v33 = *v28;
            v34 = *(_WORD *)(*v28 + 4);
            if ( v34 )
              break;
            if ( (*(_BYTE *)(v33 + 30) & 2) == 0 )
              goto LABEL_36;
LABEL_39:
            if ( v29 == ++v28 )
              goto LABEL_43;
          }
          if ( v34 != 2 )
          {
LABEL_36:
            v30 = *(_QWORD *)(a1 + 8);
            v31 = *v28;
            v71 = nullptr;
            v72 = v30;
            sub_1361190(v64, v31, v63);
            v32 = *(_QWORD *)(a1 + 8);
            if ( !*(_BYTE *)(v32 + 4) )
            {
              if ( *(_DWORD *)v32 || *(_QWORD *)(v32 + 16) < *(_QWORD *)(v32 + 8) )
              {
                sub_68CF60((__int64)v71, v72);
                sub_13606C0(v64);
                goto LABEL_28;
              }
              v32 = *(_QWORD *)(a1 + 8);
            }
            v27 = v71;
            if ( *(char **)(v32 + 864) == v71 )
            {
              sub_180B130(v71);
              if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
              {
                sub_186A4C0(*(double *)a3.m128i_i64);
                v47 = sub_180B150(v27, v31);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(v73, v33, *(_QWORD *)(a1 + 8), 0, 0, 0);
                sub_160E8B0(v47, v73);
                std::operator<<<std::char_traits<char>>();
                sub_18572D0(v74);
                sub_186A500(v74, "\n");
              }
              else
              {
                v51 = sub_180B150(v27, v31);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(v73, v33, *(_QWORD *)(a1 + 8), 0, 0, 0);
                sub_160E8B0(v51, v73);
                std::operator<<<std::char_traits<char>>();
                sub_18572D0(v74);
              }
              sub_180B130(v74);
              v24 = sub_186A530(*(double *)a3.m128i_i64);
              if ( v24 )
              {
                sub_186A4C0(*(double *)a3.m128i_i64);
                v48 = sub_180B150(v74, "\n");
                std::__ostream_insert<char,std::char_traits<char>>();
                v49 = sub_160EBE0(v48, v63);
                std::operator<<<std::char_traits<char>>();
                sub_186A500(v49, "\n");
                v27 = v71;
                v24 = 0;
              }
              else
              {
                v66 = sub_180B150(v74, "\n");
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_160EBE0(v66, v63);
                std::operator<<<std::char_traits<char>>();
                v27 = v71;
              }
            }
            v26 = v72;
            sub_68CF60((__int64)v27, v72);
            goto LABEL_39;
          }
          if ( v29 == ++v28 )
          {
LABEL_43:
            if ( !v24 )
            {
              sub_180B130(v27);
              if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
              {
                sub_186A4C0(*(double *)a3.m128i_i64);
                v35 = sub_180B150(v27, v26);
                sub_185CA40(a1 + 4392, v35);
                v36 = (_BYTE *)v35;
                v37 = "\n";
                std::operator<<<std::char_traits<char>>();
                sub_186A500(v35, "\n");
              }
              else
              {
                v54 = sub_180B150(v27, v26);
                sub_185CA40(a1 + 4392, v54);
                v36 = (_BYTE *)v54;
                v37 = "\n";
                std::operator<<<std::char_traits<char>>();
              }
              sub_180B130(v36);
              if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
              {
                sub_186A4C0(*(double *)a3.m128i_i64);
                v55 = *(_QWORD *)(a1 + 4712);
                v56 = 0x7FFFFFFF8LL;
                if ( v55 )
                  v56 = 8LL * (unsigned int)(*(_DWORD *)(v55 - 4) - 1);
                v57 = *(_BYTE **)(v55 + v56);
                if ( v57 )
                {
                  v58 = *(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v57 + 24LL);
                  v59 = sub_180B150(v36, "\n");
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v37 = (char *)v59;
                  v36 = v57;
                  v58(v57, v59);
                }
                sub_186A500(v36, v37);
              }
              else
              {
                v38 = *(_QWORD *)(a1 + 4712);
                v39 = 0x7FFFFFFF8LL;
                if ( v38 )
                  v39 = 8LL * (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
                v40 = *(_BYTE **)(v38 + v39);
                if ( v40 )
                {
                  v41 = *(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v40 + 24LL);
                  v42 = sub_180B150(v36, "\n");
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v37 = (char *)v42;
                  v36 = v40;
                  v41(v40, v42);
                }
              }
              sub_180B130(v36);
              if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
              {
                sub_186A4C0(*(double *)a3.m128i_i64);
                v60 = *(_QWORD **)(a1 + 4496);
                if ( v60 )
                {
                  v61 = &v60[2 * *((unsigned int *)v60 - 1)];
                  while ( v61 != v60 )
                  {
                    v62 = sub_180B150(v36, v37);
                    sub_1606360(v73, *v60, *(_QWORD *)(a1 + 8), 0, 0, 0);
                    sub_160E8B0(v62, v73);
                    std::__ostream_insert<char,std::char_traits<char>>();
                    std::ostream::_M_insert<unsigned long>();
                    v37 = "\n";
                    std::operator<<<std::char_traits<char>>();
                    v36 = v74;
                    v60 += 2;
                    sub_18572D0(v74);
                  }
                }
                sub_186A500(v36, v37);
              }
              else
              {
                v43 = *(_QWORD **)(a1 + 4496);
                if ( v43 )
                {
                  v44 = &v43[2 * *((unsigned int *)v43 - 1)];
                  while ( v44 != v43 )
                  {
                    v45 = sub_180B150(v36, v37);
                    sub_1606360(v73, *v43, *(_QWORD *)(a1 + 8), 0, 0, 0);
                    sub_160E8B0(v45, v73);
                    std::__ostream_insert<char,std::char_traits<char>>();
                    std::ostream::_M_insert<unsigned long>();
                    v37 = "\n";
                    std::operator<<<std::char_traits<char>>();
                    v36 = v74;
                    v43 += 2;
                    sub_18572D0(v74);
                  }
                }
              }
              exit(0);
            }
            break;
          }
        }
      }
    }
    if ( (unsigned int)sub_180B130(v27) )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        v53 = sub_180B150(v27, v26);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v53, "solution verified\n");
      }
      else
      {
        sub_180B150(v27, v26);
        std::operator<<<std::char_traits<char>>();
      }
    }
    sub_13606C0(v64);
    sub_2334C0(v65);
    if ( v67 )
      sub_186B220((void *)(v67 - 8));
  }
}

