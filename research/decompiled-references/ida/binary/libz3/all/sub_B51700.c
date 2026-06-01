__int64 __fastcall sub_B51700(__int64 a1, std::ostream *a2)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  char v6; // r14
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r13
  _BYTE *v10; // r14
  char v11; // si
  std::ostream *v12; // rax
  _BYTE *v13; // rbx
  char v14; // si
  std::ostream *v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // r13
  __int64 *v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r15
  _BYTE *v21; // rbx
  char v22; // si
  std::ostream *v23; // rax
  __int64 *v24; // rcx
  __int64 *v25; // r13
  __int64 *v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r15
  unsigned __int64 *v29; // rcx
  unsigned __int64 *v30; // r14
  unsigned __int64 v31; // rbx
  __int64 v32; // r15
  __int64 (__fastcall *v33)(__int64, unsigned int); // rax
  __int64 (__fastcall *v34)(__int64, unsigned int); // rax
  __int64 (__fastcall *v35)(__int64, unsigned int); // rax
  __int64 *v36; // [rsp+8h] [rbp-50h]
  unsigned __int64 *v37; // [rsp+8h] [rbp-50h]
  _OWORD v38[4]; // [rsp+10h] [rbp-48h] BYREF

  result = *(_QWORD *)(a1 + 16);
  v3 = *(__int64 **)(result + 8664);
  if ( v3 )
  {
    result = (__int64)&v3[*((unsigned int *)v3 - 1)];
    v36 = (__int64 *)result;
    if ( (__int64 *)result != v3 )
    {
      v6 = 1;
      do
      {
        v9 = *v3;
        result = sub_B39350(*v3, *(_DWORD *)(a1 + 8));
        if ( (_DWORD)result != -1 )
        {
          if ( v6 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v10 = *(_BYTE **)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 240);
            if ( !v10 )
              goto LABEL_42;
            if ( v10[56] )
            {
              v11 = v10[67];
            }
            else
            {
              std::ctype<char>::_M_widen_init();
              v11 = 10;
              v33 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v10 + 48LL);
              if ( v33 != sub_26BE90 )
                v11 = v33((__int64)v10, 10u);
            }
            v12 = (std::ostream *)std::ostream::put(a2, v11);
            std::ostream::flush(v12);
          }
          v7 = std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          v8 = v7;
          v6 = 0;
          v38[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 16)), (__m128i)(unsigned __int64)v9);
          sub_AA7260(v8, v38);
          result = std::__ostream_insert<char,std::char_traits<char>>();
        }
        ++v3;
      }
      while ( v36 != v3 );
      if ( !v6 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v13 = *(_BYTE **)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 240);
        if ( !v13 )
          goto LABEL_42;
        if ( v13[56] )
        {
          v14 = v13[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v14 = 10;
          v35 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13 + 48LL);
          if ( v35 != sub_26BE90 )
            v14 = v35((__int64)v13, 10u);
        }
        v15 = (std::ostream *)std::ostream::put(a2, v14);
        std::ostream::flush(v15);
        v16 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 8664LL);
        if ( v16 )
        {
          v17 = &v16[*((unsigned int *)v16 - 1)];
          if ( v17 != v16 )
          {
            v18 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 8664LL);
            do
            {
              v19 = *v18;
              if ( (unsigned int)sub_B39350(*v18, **(_DWORD **)(a1 + 1392)) != -1 )
              {
                v20 = std::ostream::operator<<();
                std::__ostream_insert<char,std::char_traits<char>>();
                v38[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 16)), (__m128i)(unsigned __int64)v19);
                sub_AA7260(v20, v38);
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              ++v18;
            }
            while ( v17 != v18 );
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v21 = *(_BYTE **)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 240);
        if ( !v21 )
LABEL_42:
          std::__throw_bad_cast();
        if ( v21[56] )
        {
          v22 = v21[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v22 = 10;
          v34 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v21 + 48LL);
          if ( v34 != sub_26BE90 )
            v22 = v34((__int64)v21, 10u);
        }
        v23 = (std::ostream *)std::ostream::put(a2, v22);
        std::ostream::flush(v23);
        v24 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 8664LL);
        if ( v24 )
        {
          v25 = &v24[*((unsigned int *)v24 - 1)];
          if ( v25 != v24 )
          {
            v26 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 8664LL);
            do
            {
              v27 = *v26;
              if ( (unsigned int)sub_B39350(*v26, 5) != -1 )
              {
                v28 = std::ostream::operator<<();
                std::__ostream_insert<char,std::char_traits<char>>();
                v38[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 16)), (__m128i)(unsigned __int64)v27);
                sub_AA7260(v28, v38);
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              ++v26;
            }
            while ( v25 != v26 );
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        result = *(_QWORD *)(a1 + 16);
        v29 = *(unsigned __int64 **)(result + 8664);
        if ( v29 )
        {
          result = (__int64)&v29[*((unsigned int *)v29 - 1)];
          v37 = (unsigned __int64 *)result;
          if ( (unsigned __int64 *)result != v29 )
          {
            v30 = v29;
            do
            {
              v31 = *v30++;
              v32 = std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v38[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 16)), (__m128i)v31);
              sub_AA7260(v32, v38);
              result = std::__ostream_insert<char,std::char_traits<char>>();
            }
            while ( v37 != v30 );
          }
        }
      }
    }
  }
  return result;
}

