__int64 __fastcall ida_logger_t__::vfunc_5(__int64 *a1, char *p_src, int a3)
{
  void *v4; // rax
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  unsigned __int32 v10; // ebp
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  size_t v13; // r15
  __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  void *v17; // rdx
  __int64 v18; // rax
  void *v19; // rcx
  __m128 v20; // xmm0
  unsigned __int32 v21; // eax
  const char *v23; // rdx
  unsigned __int64 v24; // r12
  size_t v25; // r8
  __int64 v26; // r15
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  void *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // [rsp+0h] [rbp-C8h]
  __int64 v46; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v47; // [rsp+8h] [rbp-C0h]
  __int64 v48; // [rsp+8h] [rbp-C0h]
  __int64 v49; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+18h] [rbp-B0h]
  _QWORD v51[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v52; // [rsp+40h] [rbp-88h]
  void *src; // [rsp+48h] [rbp-80h] BYREF
  __m128i v54; // [rsp+50h] [rbp-78h] BYREF
  __int64 v55; // [rsp+60h] [rbp-68h]
  __m128i v56; // [rsp+68h] [rbp-60h] BYREF
  __int64 v57; // [rsp+78h] [rbp-50h]
  int v58; // [rsp+80h] [rbp-48h]
  char v59; // [rsp+84h] [rbp-44h]
  unsigned __int64 v60; // [rsp+88h] [rbp-40h]

  v4 = *(void **)p_src;
  v60 = __readfsqword(0x28u);
  v6 = _mm_loadu_si128((const __m128i *)p_src + 2);
  v51[0] = &app_logger_t::do_vlog;
  src = v4;
  v7 = *((_QWORD *)p_src + 3);
  v54 = _mm_loadu_si128((const __m128i *)(p_src + 8));
  v55 = v7;
  v51[1] = 0;
  v52 = 0;
  v58 = a3;
  v59 = 0;
  *(_QWORD *)p_src = 0;
  *((_QWORD *)p_src + 3) = 0;
  *(_OWORD *)(p_src + 8) = 0;
  v56 = v6;
  *((_OWORD *)p_src + 2) = 0;
  v8 = *((_QWORD *)p_src + 6);
  *((_QWORD *)p_src + 6) = 0;
  v9 = a1[9] == 0;
  v57 = v8;
  if ( !v9 )
    goto LABEL_2;
  v36 = qmutex_create();
  a1[9] = v36;
  if ( !v36 )
  {
    if ( under_debugger )
      goto LABEL_48;
    interr(40585, p_src, v37, v38, 0.0);
LABEL_46:
    if ( !under_debugger )
      interr(70128, p_src, v40, v41, 0.0);
LABEL_48:
    BUG();
  }
  v39 = *a1;
  p_src = (char *)&v49;
  v49 = 0;
  v50 = 0;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(v39 + 48))(a1, &v49, (__int64)a1 + 81);
  if ( (unsigned __int64)v50 <= 1 )
    goto LABEL_38;
  if ( a1[3] )
    goto LABEL_46;
  v42 = fopenA(v49);
  a1[3] = v42;
  if ( v42 )
    *((_BYTE *)a1 + 40) = 1;
  else
    *((_BYTE *)a1 + 81) = 0;
LABEL_38:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49, (const char *)&v49);
  }
LABEL_2:
  if ( !a1[3] || (p_src = (char *)&src, v10 = sub_513D60((_BYTE *)a1 + 8, (__int64)&src, a3), !*((_BYTE *)a1 + 81)) )
  {
    qmutex_lock(a1[9]);
    if ( *((_BYTE *)a1 + 80) )
    {
      v24 = v54.m128i_i64[0];
      if ( !v54.m128i_i64[0] || (v25 = v54.m128i_i64[0] - 1, v54.m128i_i64[0] == 1) )
      {
        v10 = 0;
      }
      else
      {
        v26 = a1[7];
        v27 = v54.m128i_i64[0] - 1;
        if ( v26 )
        {
          --v26;
          v27 = v25 + v26;
          v24 = v54.m128i_i64[0] + v26;
        }
        v28 = a1[6];
        if ( a1[8] < v24 )
        {
          v46 = v54.m128i_i64[0] - 1;
          v48 = v27;
          v44 = qvector_reserve(a1 + 6, v28, v24, 1);
          v27 = v48;
          v25 = v46;
          a1[6] = v44;
          v28 = v44;
        }
        a1[7] = v24;
        v10 = v25;
        *(_BYTE *)(v28 + v27) = 0;
        p_src = (char *)src;
        memcpy((void *)(v26 + a1[6]), src, v25);
      }
      qmutex_unlock(a1[9]);
    }
    else
    {
      v11 = a1[7];
      if ( v11 > 1 )
      {
        if ( v54.m128i_i64[0] )
        {
          v12 = v54.m128i_i64[0] - 1;
          v13 = v54.m128i_i64[0] - 1;
          if ( v54.m128i_i64[0] != 1 )
          {
            v14 = a1[6];
            v15 = v12 + v11 - 1;
            v16 = v12 + v11;
            if ( a1[8] < v12 + v11 )
            {
              v47 = v12 + v11 - 1;
              v45 = v12 + v11;
              v43 = qvector_reserve(a1 + 6, v14, v16, 1);
              v15 = v47;
              v16 = v45;
              a1[6] = v43;
              v14 = v43;
            }
            a1[7] = v16;
            *(_BYTE *)(v14 + v15) = 0;
            memcpy((void *)(v11 - 1 + a1[6]), src, v13);
          }
        }
        v17 = src;
        v18 = v54.m128i_i64[1];
        a1[7] = 0;
        v19 = (void *)a1[6];
        v20 = _mm_loadh_ps((const double *)a1 + 8);
        a1[6] = (__int64)v17;
        src = v19;
        a1[8] = v18;
        v54 = (__m128i)v20;
      }
      *((_BYTE *)a1 + 80) = 1;
      qmutex_unlock(a1[9]);
      if ( QT::QCoreApplication::self )
      {
        if ( (unsigned __int8)is_main_thread() )
        {
          p_src = nullptr;
          v21 = sub_4797E0((__int64)v51, 0, 0);
          *((_BYTE *)a1 + 80) = 0;
          v10 = v21;
          goto LABEL_15;
        }
        v29 = operator new(0x58u);
        v30 = v55;
        v31 = v29;
        *(_QWORD *)v29 = &app_logger_t::do_vlog;
        v10 = 0;
        *(_DWORD *)(v29 + 80) = a3;
        v32 = _mm_load_si128(&v54);
        p_src = &byte_4;
        *(_QWORD *)(v29 + 8) = 0;
        v33 = _mm_loadu_si128(&v56);
        *(_QWORD *)(v29 + 16) = 0;
        *(_BYTE *)(v29 + 84) = 1;
        v34 = src;
        *(_QWORD *)(v31 + 48) = v30;
        v35 = v57;
        *(_QWORD *)(v31 + 24) = v34;
        *(_QWORD *)(v31 + 72) = v35;
        if ( v32.m128i_i64[0] )
          v10 = v32.m128i_i32[0] - 1;
        *(__m128i *)(v31 + 32) = v32;
        *(__m128i *)(v31 + 56) = v33;
        src = nullptr;
        v55 = 0;
        v57 = 0;
        v54 = 0;
        v56 = 0;
        sub_4797E0(v31, 4, 0);
      }
      else
      {
        v23 = &s1;
        if ( v54.m128i_i64[0] )
          v23 = (const char *)src;
        p_src = "%s";
        __printf_chk(1, "%s", v23);
        v10 = 0;
      }
      *((_BYTE *)a1 + 80) = 0;
    }
  }
LABEL_15:
  v51[0] = &app_logger_t::do_vlog;
  if ( v55 )
  {
    v56.m128i_i64[0] = 0;
    qfree(v55, p_src);
  }
  if ( src )
  {
    v54.m128i_i64[0] = 0;
    qfree(src, p_src);
  }
  v51[0] = &off_86FF78;
  qsem_free(v52);
  return v10;
}
