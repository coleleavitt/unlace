void __fastcall sub_69BCC0(__int64 a1, __int64 *a2, __m128i a3)
{
  void (__fastcall ***v5)(void *); // r12
  bool v6; // zf
  const void *v7; // rdi
  void *v8; // rax
  void (__fastcall ***v9)(void *); // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rsi
  size_t v15; // rdx
  __int64 v16; // r12
  void (__fastcall ***v17)(void *); // r13
  __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned int i; // r12d
  __int64 v22; // rdx
  __int64 v23; // rsi
  _DWORD *v24; // rdx
  int v25; // edx
  __int64 v26; // rdi
  __int64 v27; // rdi
  char v28; // r12
  __int64 *v29; // rbx
  unsigned __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rsi
  char *v35; // rdi
  __int64 *v36; // rbp
  __int64 *v37; // r13
  _BYTE *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r14
  __int16 v42; // ax
  __int64 v43; // rsi
  _BYTE *v44; // rdi
  __int64 *v45; // rbx
  unsigned __int64 v46; // rbp
  __int64 v47; // rsi
  __int64 v48; // r12
  __int64 v49; // r12
  __int64 v50; // r12
  __int64 v51; // rbp
  _BYTE *v52; // rdi
  _QWORD *v53; // rbp
  _QWORD *v54; // r14
  __int64 v55; // r12
  __int64 v56; // rdi
  __int64 v57; // rbp
  _QWORD *v58; // rbp
  _QWORD *v59; // r14
  __int64 v60; // r12
  __int64 *v61; // [rsp+0h] [rbp-B8h]
  char *v62; // [rsp+8h] [rbp-B0h]
  __int64 *v63; // [rsp+10h] [rbp-A8h]
  __int64 v64; // [rsp+18h] [rbp-A0h]
  __int64 v65; // [rsp+20h] [rbp-98h] BYREF
  char v66[8]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v67; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v68; // [rsp+38h] [rbp-80h]
  __int64 v69; // [rsp+40h] [rbp-78h] BYREF
  _BYTE *v70; // [rsp+48h] [rbp-70h]
  _QWORD v71[2]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v72[88]; // [rsp+60h] [rbp-58h] BYREF

  v5 = (void (__fastcall ***)(void *))*a2;
  if ( *a2 )
  {
    v6 = (*((_DWORD *)v5 + 4))-- == 1;
    if ( v6 )
    {
      (**v5)(v5);
      sub_186B220(v5);
    }
  }
  v7 = *(const void **)(a1 + 624);
  *a2 = 0;
  if ( v7 )
  {
    v8 = __dynamic_cast(
           v7,
           (const struct __class_type_info *)&`typeinfo for'sat::extension,
           (const struct __class_type_info *)&`typeinfo for'euf::solver,
           0);
    if ( v8 )
    {
      sub_791ED0(v71, v8);
      v9 = (void (__fastcall ***)(void *))*a2;
      if ( *a2 )
      {
        v6 = (*((_DWORD *)v9 + 4))-- == 1;
        if ( v6 )
        {
          (**v9)(v9);
          sub_186B220(v9);
        }
      }
      v10 = v71[0];
      *a2 = v71[0];
      if ( v10 )
        return;
    }
  }
  if ( !*(_BYTE *)(a1 + 2528) )
    return;
  v11 = *(_QWORD *)(a1 + 4624);
  if ( v11 )
  {
    if ( *(_DWORD *)(a1 + 4560) < *(_DWORD *)(v11 - 4) )
      return;
  }
  v65 = 0;
  v12 = *(_QWORD *)(a1 + 2480);
  if ( v12 )
  {
    a3 = _mm_loadl_epi64((const __m128i *)(v12 - 8));
    v61 = (__int64 *)a3.m128i_i64[0];
    v13 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(a3) + 8);
    v14 = *(_DWORD **)(a1 + 2480);
    v65 = v13 + 8;
    *(_QWORD *)v13 = a3.m128i_i64[0];
    if ( v14 )
    {
      v15 = 4LL * (unsigned int)*(v14 - 1);
      if ( v15 <= 4 )
      {
        if ( v15 == 4 )
          *(_DWORD *)(v13 + 8) = *v14;
      }
      else
      {
        memmove((void *)(v13 + 8), v14, v15);
      }
    }
  }
  v16 = sub_186B270(0xA0u);
  sub_1373200(v16, *(_QWORD *)(a1 + 8));
  v17 = (void (__fastcall ***)(void *))*a2;
  ++*(_DWORD *)(v16 + 16);
  if ( v17 )
  {
    v6 = (*((_DWORD *)v17 + 4))-- == 1;
    if ( v6 )
    {
      (**v17)(v17);
      sub_186B220(v17);
    }
  }
  v18 = *(_QWORD *)(a1 + 4704);
  *a2 = v16;
  if ( v18 )
    sub_781190(v18, &v65);
  v19 = *(_QWORD *)(a1 + 8);
  v68 = nullptr;
  v67 = v19;
  v63 = &v67;
  sub_7E6CD0(a1 + 4648, &v67);
  v20 = v68;
  for ( i = 0; v20; ++i )
  {
    if ( i >= *((_DWORD *)v20 - 1) )
      break;
    v22 = v20[i];
    if ( v22 )
    {
      if ( !*(_WORD *)(v22 + 4) && !*(_DWORD *)(v22 + 24) )
      {
        v23 = *(_QWORD *)(v22 + 16);
        v24 = *(_DWORD **)(v23 + 24);
        if ( !v24 || *v24 == -1 )
        {
          v25 = *(_DWORD *)(v65 + 4LL * i);
          if ( v25 == -1 )
          {
            sub_135F9B0(*a2, v23, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL));
            goto LABEL_33;
          }
          if ( v25 == 1 )
          {
            sub_135F9B0(*a2, v23, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL));
LABEL_33:
            v20 = v68;
          }
        }
      }
    }
  }
  v26 = *(_QWORD *)(a1 + 4704);
  if ( v26 )
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 32LL))(v26, a2);
  sub_786820(a1 + 4544, a2);
  v27 = sub_17F9BB0(a1 + 4544);
  v28 = sub_1859610(v27, "model_validate", 0);
  if ( v28 )
  {
    if ( (unsigned int)sub_180B130(v27) )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        v32 = sub_180B150(v27, "model_validate");
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v32, "Verifying solution\n");
      }
      else
      {
        sub_180B150(v27, "model_validate");
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v33 = *a2;
    v71[0] = 0;
    v62 = v66;
    sub_1360C00(v66, v33, v71);
    sub_18572D0(v71);
    v34 = 1;
    v35 = v66;
    sub_1360B80(v66, 1);
    v36 = *(__int64 **)(a1 + 4624);
    if ( !v36 || (v37 = &v36[*((unsigned int *)v36 - 1)], v37 == v36) )
    {
LABEL_94:
      if ( (unsigned int)sub_180B130(v35) )
      {
        if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
        {
          sub_186A4C0(*(double *)a3.m128i_i64);
          v56 = sub_180B150(v35, v34);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v56, "solution verified\n");
        }
        else
        {
          sub_180B150(v35, v34);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      sub_13606C0(v62);
      goto LABEL_38;
    }
    v61 = &v69;
    while ( 1 )
    {
      v41 = *v36;
      v42 = *(_WORD *)(*v36 + 4);
      if ( v42 )
      {
        if ( v42 == 2 )
          goto LABEL_61;
      }
      else if ( (*(_BYTE *)(v41 + 30) & 2) != 0 )
      {
        goto LABEL_61;
      }
      v38 = *(_BYTE **)(a1 + 8);
      v39 = *v36;
      v69 = 0;
      v35 = v62;
      v70 = v38;
      sub_1361190(v62, v39, v61);
      v40 = *(_QWORD *)(a1 + 8);
      if ( !*(_BYTE *)(v40 + 4) )
      {
        if ( *(_DWORD *)v40 || *(_QWORD *)(v40 + 16) < *(_QWORD *)(v40 + 8) )
        {
          v43 = v69;
          if ( v69 )
          {
            v44 = v70;
            v6 = (*(_DWORD *)(v69 + 8))-- == 1;
            if ( v6 )
              sub_15D7BC0(v44, v43);
          }
          sub_13606C0(v62);
          v45 = v68;
          if ( v68 )
          {
            v46 = (unsigned __int64)&v68[*((unsigned int *)v68 - 1)];
            if ( (unsigned __int64)v68 >= v46 )
              goto LABEL_99;
            do
            {
              v47 = *v45;
              if ( *v45 )
              {
                v6 = (*(_DWORD *)(v47 + 8))-- == 1;
                if ( v6 )
                  sub_15D7BC0(v67, v47);
              }
              ++v45;
            }
            while ( (unsigned __int64)v45 < v46 );
            v45 = v68;
            if ( v68 )
LABEL_99:
              sub_186B220(v45 - 1);
          }
          if ( v65 )
            goto LABEL_48;
          return;
        }
        v40 = *(_QWORD *)(a1 + 8);
      }
      v34 = v69;
      if ( *(_QWORD *)(v40 + 864) == v69 )
      {
        sub_180B130(v35);
        if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
        {
          sub_186A4C0(*(double *)a3.m128i_i64);
          v48 = sub_180B150(v35, v34);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v71, v41, *(_QWORD *)(a1 + 8), 0, 0, 0);
          sub_160E8B0(v48, v71);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(v72);
          sub_186A500(v72, "\n");
        }
        else
        {
          v50 = sub_180B150(v35, v34);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v71, v41, *(_QWORD *)(a1 + 8), 0, 0, 0);
          sub_160E8B0(v50, v71);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(v72);
        }
        sub_180B130(v72);
        v28 = sub_186A530(*(double *)a3.m128i_i64);
        if ( v28 )
        {
          sub_186A4C0(*(double *)a3.m128i_i64);
          v49 = sub_180B150(v72, "\n");
          std::__ostream_insert<char,std::char_traits<char>>();
          v35 = (char *)sub_160EBE0(v49, v61);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v35, "\n");
          v34 = v69;
          v28 = 0;
        }
        else
        {
          v64 = sub_180B150(v72, "\n");
          std::__ostream_insert<char,std::char_traits<char>>();
          v35 = (char *)sub_160EBE0(v64, v61);
          std::__ostream_insert<char,std::char_traits<char>>();
          v34 = v69;
        }
      }
      if ( v34 )
      {
        v35 = v70;
        v6 = (*(_DWORD *)(v34 + 8))-- == 1;
        if ( v6 )
          sub_15D7BC0(v35, v34);
      }
LABEL_61:
      if ( v37 == ++v36 )
      {
        if ( !v28 )
        {
          sub_180B130(v35);
          if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
          {
            sub_186A4C0(*(double *)a3.m128i_i64);
            v51 = sub_180B150(v35, v34);
            sub_185CA40(a1 + 4360, v51);
            v52 = (_BYTE *)v51;
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v51, "\n");
          }
          else
          {
            v57 = sub_180B150(v35, v34);
            sub_185CA40(a1 + 4360, v57);
            v52 = (_BYTE *)v57;
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          sub_180B130(v52);
          if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
          {
            sub_186A4C0(*(double *)a3.m128i_i64);
            v58 = *(_QWORD **)(a1 + 4664);
            if ( v58 )
            {
              v59 = &v58[2 * *((unsigned int *)v58 - 1)];
              while ( v59 != v58 )
              {
                v60 = sub_180B150(v52, "\n");
                sub_1606360(v71, *v58, *(_QWORD *)(a1 + 8), 0, 0, 0);
                sub_160E8B0(v60, v71);
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                v52 = v72;
                v58 += 2;
                sub_18572D0(v72);
              }
            }
            sub_186A500(v52, "\n");
          }
          else
          {
            v53 = *(_QWORD **)(a1 + 4664);
            if ( v53 )
            {
              v54 = &v53[2 * *((unsigned int *)v53 - 1)];
              while ( v54 != v53 )
              {
                v55 = sub_180B150(v52, "\n");
                sub_1606360(v71, *v53, *(_QWORD *)(a1 + 8), 0, 0, 0);
                sub_160E8B0(v55, v71);
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                v52 = v72;
                v53 += 2;
                sub_18572D0(v72);
              }
            }
          }
          exit(0);
        }
        goto LABEL_94;
      }
    }
  }
LABEL_38:
  v29 = v68;
  if ( v68 )
  {
    v30 = (unsigned __int64)&v68[*((unsigned int *)v68 - 1)];
    if ( (unsigned __int64)v68 >= v30 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v6 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( (unsigned __int64)++v29 >= v30 )
          goto LABEL_45;
      }
      sub_15D7BC0(v67, v31);
      ++v29;
    }
    while ( (unsigned __int64)v29 < v30 );
LABEL_45:
    v29 = v68;
    if ( v68 )
LABEL_46:
      sub_186B220(v29 - 1);
  }
  if ( v65 )
LABEL_48:
    sub_186B220((void *)(v65 - 8));
}

