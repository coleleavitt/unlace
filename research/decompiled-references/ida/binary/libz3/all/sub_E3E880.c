int __fastcall sub_E3E880(pthread_mutex_t *a1, __int64 a2)
{
  pthread_mutex_t *v2; // r13
  double v4; // rbx
  int v5; // eax
  double v6; // xmm0_8
  double v7; // xmm0_8
  __int64 v8; // rax
  int v9; // eax
  __int64 *v10; // r14
  __int64 *v11; // rbp
  __int64 *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rbp
  unsigned __int64 *v18; // r15
  unsigned __int64 *v19; // r14
  __int64 *v20; // rbp
  unsigned __int64 *v21; // rbx
  __int64 *v22; // r15
  __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  _OWORD *v25; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  const char *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rbp
  void *v36; // r14
  __int64 v37; // r14
  __int64 v38; // r14
  double v40; // [rsp+0h] [rbp-108h]
  __int64 v41; // [rsp+30h] [rbp-D8h]
  _OWORD v42[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v43; // [rsp+90h] [rbp-78h]
  void *ptr; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  int v46; // [rsp+A8h] [rbp-60h]
  __int128 v47; // [rsp+B0h] [rbp-58h]
  int v48; // [rsp+C0h] [rbp-48h]

  v2 = a1 + 5;
  v4 = *(double *)&a1;
  if ( &_pthread_key_create )
  {
    a1 += 5;
    v5 = pthread_mutex_lock(a1);
    if ( v5 )
      goto LABEL_56;
  }
  ++*(_DWORD *)(*(_QWORD *)&v4 + 264LL);
  *(_DWORD *)(*(_QWORD *)&v4 + 268LL) = *(_DWORD *)(a2 + 64);
  if ( &_pthread_key_create )
  {
    a1 = v2;
    pthread_mutex_unlock(v2);
  }
  v6 = 100.0 / *(double *)(a2 + 72);
  if ( &_pthread_key_create )
  {
    a1 = v2;
    v40 = 100.0 / *(double *)(a2 + 72);
    v5 = pthread_mutex_lock(v2);
    v6 = v40;
    if ( v5 )
LABEL_56:
      std::__throw_system_error(v5);
  }
  v7 = v6 + *(double *)(*(_QWORD *)&v4 + 240LL);
  --*(_DWORD *)(*(_QWORD *)&v4 + 248LL);
  *(double *)(*(_QWORD *)&v4 + 240LL) = v7;
  if ( &_pthread_key_create )
  {
    a1 = v2;
    pthread_mutex_unlock(v2);
  }
  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(v7) )
    {
      sub_186A4C0(v7);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v30 = std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v31 = *(unsigned int *)(*(_QWORD *)&v4 + 264LL);
      if ( (_DWORD)v31 )
      {
        sub_180B150(v30, v31);
        std::__ostream_insert<char,std::char_traits<char>>();
        v37 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v31 = *(unsigned int *)(*(_QWORD *)&v4 + 268LL);
        v30 = v37;
        std::ostream::_M_insert<unsigned long>();
      }
      sub_180B150(v30, v31);
      std::__ostream_insert<char,std::char_traits<char>>();
      v32 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v32, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v33 = "%";
      v34 = std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( *(_DWORD *)(*(_QWORD *)&v4 + 264LL) )
      {
        sub_180B150(v34, "%");
        std::__ostream_insert<char,std::char_traits<char>>();
        v38 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v33 = (const char *)*(unsigned int *)(*(_QWORD *)&v4 + 268LL);
        v34 = v38;
        std::ostream::_M_insert<unsigned long>();
      }
      sub_180B150(v34, v33);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 && *(_DWORD *)(v8 - 4) )
  {
    v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 56) + 72LL))(*(_QWORD *)(a2 + 56));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 56) + 24LL))(*(_QWORD *)(a2 + 56));
    if ( &_pthread_key_create )
    {
      v9 = pthread_mutex_lock(v2);
      if ( v9 )
        std::__throw_system_error(v9);
    }
    if ( !*(_QWORD *)(*(_QWORD *)&v4 + 32LL) )
    {
      v35 = sub_186B270(0x3D0u);
      sub_15DD980(v35);
      v36 = *(void **)(*(_QWORD *)&v4 + 32LL);
      if ( (void *)v35 != v36 )
      {
        if ( v36 )
        {
          sub_15D95C0(*(_QWORD *)(*(_QWORD *)&v4 + 32LL));
          sub_186B220(v36);
        }
        *(_QWORD *)(*(_QWORD *)&v4 + 32LL) = v35;
      }
    }
    v10 = *(__int64 **)(*(_QWORD *)&v4 + 56LL);
    if ( v10 )
    {
      v11 = (__int64 *)v10[1];
      if ( v11 )
      {
        v12 = &v11[*((unsigned int *)v11 - 1)];
        if ( v11 >= v12 )
          goto LABEL_24;
        do
        {
          while ( 1 )
          {
            v13 = *v11;
            if ( *v11 )
            {
              v14 = *v10;
              v15 = (*(_DWORD *)(v13 + 8))-- == 1;
              if ( v15 )
                break;
            }
            if ( ++v11 >= v12 )
              goto LABEL_23;
          }
          sub_15D7BC0(v14, v13);
          ++v11;
        }
        while ( v11 < v12 );
LABEL_23:
        v11 = (__int64 *)v10[1];
        if ( v11 )
LABEL_24:
          sub_186B220(v11 - 1);
      }
      sub_186B220(v10);
      *(_QWORD *)(*(_QWORD *)&v4 + 56LL) = 0;
    }
    v16 = (unsigned __int64 *)sub_186B270(0x10u);
    v17 = *(_QWORD *)(*(_QWORD *)&v4 + 32LL);
    v18 = *(unsigned __int64 **)(*(_QWORD *)&v4 + 56LL);
    v16[1] = 0;
    v19 = v16;
    *v16 = v17;
    if ( v16 != v18 )
    {
      if ( v18 )
      {
        v20 = (__int64 *)v18[1];
        if ( v20 )
        {
          if ( v20 >= &v20[*((unsigned int *)v20 - 1)] )
            goto LABEL_36;
          v40 = v4;
          v21 = v18;
          v22 = &v20[*((unsigned int *)v20 - 1)];
          do
          {
            while ( 1 )
            {
              v23 = *v20;
              if ( *v20 )
              {
                v24 = *v21;
                v15 = (*(_DWORD *)(v23 + 8))-- == 1;
                if ( v15 )
                  break;
              }
              if ( ++v20 >= v22 )
                goto LABEL_35;
            }
            sub_15D7BC0(v24, v23);
            ++v20;
          }
          while ( v20 < v22 );
LABEL_35:
          v18 = v21;
          v4 = v40;
          v20 = (__int64 *)v18[1];
          if ( v20 )
LABEL_36:
            sub_186B220(v20 - 1);
        }
        sub_186B220(v18);
        v17 = *(_QWORD *)(*(_QWORD *)&v4 + 32LL);
      }
      *(_QWORD *)(*(_QWORD *)&v4 + 56LL) = v19;
    }
    v43 = 0;
    v42[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)v17);
    v42[1] = 0;
    v25 = (_OWORD *)sub_186B270(0x80u);
    ptr = v25;
    *v25 = 0;
    v25[1] = 0;
    v25[2] = 0;
    v25[3] = 0;
    v25[4] = 0;
    v25[5] = 0;
    v25[6] = 0;
    v25[7] = 0;
    v45 = 8;
    v46 = 0;
    v48 = 0;
    v47 = 0;
    if ( v17 != v41 )
    {
      sub_15DA640(DWORD2(v42[0]), v42[0], v26, v27, v28, v29, LODWORD(v40));
      sub_15D2280(*((_QWORD *)&v42[0] + 1), *(_QWORD *)&v42[0]);
    }
    LODWORD(v8) = sub_15CE760(v42);
    if ( &_pthread_key_create )
      LODWORD(v8) = pthread_mutex_unlock(v2);
  }
  return v8;
}

