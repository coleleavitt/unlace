char __fastcall sub_E0D200(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  char **exception; // rbp
  unsigned int v11; // r12d
  char result; // al
  unsigned int v15; // esi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rsi
  unsigned int v20; // ebx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rsi
  unsigned __int64 *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 *v25; // rdx
  int v26; // ecx
  unsigned int v27; // esi
  unsigned int v28; // eax
  unsigned __int64 *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 *v31; // rdx
  int v32; // ecx
  unsigned __int64 v33; // rax
  unsigned __int64 *v34; // rcx
  unsigned __int64 *v35; // rax
  unsigned __int64 *v36; // rcx
  unsigned __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v42; // [rsp+10h] [rbp-208h]
  __int64 v43; // [rsp+18h] [rbp-200h]
  __int64 v44; // [rsp+28h] [rbp-1F0h]
  _QWORD v45[2]; // [rsp+30h] [rbp-1E8h] BYREF
  _BYTE v46[32]; // [rsp+40h] [rbp-1D8h] BYREF
  _OWORD v47[4]; // [rsp+60h] [rbp-1B8h] BYREF
  char v48[8]; // [rsp+A0h] [rbp-178h] BYREF
  int v49; // [rsp+A8h] [rbp-170h]
  char *v50; // [rsp+B0h] [rbp-168h]
  __int64 v51; // [rsp+B8h] [rbp-160h]
  char v52; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v53[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v54; // [rsp+1B0h] [rbp-68h]
  __int128 v55; // [rsp+1B8h] [rbp-60h]
  __int128 v56; // [rsp+1C8h] [rbp-50h]

  v11 = a5;
  result = sub_E08F70(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( !result )
  {
    result = sub_E0D000(a1, (unsigned __int64 *)a2, a3, a4, v11, a6, a7, a8);
    if ( !result )
    {
      result = sub_DFC1F0(a1, (unsigned __int64 *)a2, a3, a4, v11, a6, a7, a8);
      if ( !result && (a7 || (result = sub_DFC440(a1, (__int64)a2, a3, a4, v11, a6, a8)) == 0) )
      {
        v15 = *(_DWORD *)(a1 + 632);
        v16 = *(_QWORD *)(a1 + 624);
        *(_QWORD *)&v47[0] = a2->m128i_i64[0];
        v17 = sub_DF6190(v16, v15, (unsigned __int64 *)v47);
        v42 = v17;
        if ( v17 )
          v42 = *(_QWORD *)(v17 + 16);
        std::ios_base::ios_base((std::ios_base *)v53);
        v53[27] = 0;
        v55 = 0;
        v56 = 0;
        v53[0] = (char *)&`vtable for'std::ios + 16;
        v54 = 0;
        v18 = `VTT for'std::ostringstream[2];
        v19 = *(_QWORD *)(`VTT for'std::ostringstream[1] - 24LL);
        *(_QWORD *)&v47[0] = `VTT for'std::ostringstream[1];
        *(_QWORD *)((char *)v47 + v19) = v18;
        std::ios::init();
        v53[0] = (char *)&`vtable for'std::ostringstream + 64;
        v47[0] = _mm_unpacklo_epi64(
                   (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                   (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
        memset(&v47[1], 0, 48);
        std::locale::locale((std::locale *)v48);
        v49 = 16;
        v51 = 0;
        v52 = 0;
        *((_QWORD *)&v47[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
        v50 = &v52;
        std::ios::init();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_39A600((__int64)v47, (const char *)a2->m128i_i64[0]);
        if ( a3 )
        {
          std::operator<<<std::char_traits<char>>();
          v38 = a3;
          v39 = 0;
          v43 = v38;
          do
          {
            if ( a4[v39] )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_DFBCB0(a1);
              v44 = *(_QWORD *)(a1 + 296);
              v40 = sub_15D1F10(a4[v39]);
              sub_1606360(v45, v40, v44, 0, 0, 0);
              sub_160E8B0(v47, v45);
              sub_18572D0(v46);
            }
            ++v39;
          }
          while ( v43 != v39 );
          std::operator<<<std::char_traits<char>>();
        }
        if ( a7 )
        {
          sub_DFBCB0(a1);
          sub_1606360(v45, a7, *(_QWORD *)(a1 + 296), 0, 0, 0);
          sub_160E8B0(v47, v45);
          std::operator<<<std::char_traits<char>>();
          sub_18572D0(v46);
        }
        if ( !v42 )
        {
LABEL_58:
          exception = (char **)__cxa_allocate_exception(0x30u);
          std::stringbuf::str(v45, (char *)v47 + 8);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v45);
          exception[5] = (char *)-1LL;
          *exception = (char *)off_1C64218;
          sub_233E40((__int64)v45);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        v20 = 0;
        v21 = v42 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v42 & 7) != 0 )
          goto LABEL_27;
        while ( 1 )
        {
          if ( v20 )
            goto LABEL_58;
LABEL_14:
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_DFBCB0(a1);
          v22 = v42 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v42 & 7) != 0 )
          {
            v23 = *(unsigned __int64 **)v21;
            v24 = 8LL * *(unsigned int *)(v21 + 8);
            v25 = (unsigned __int64 *)(*(_QWORD *)v21 + v24);
            if ( *(_DWORD *)(v21 + 12) <= 1u )
            {
              v36 = *(unsigned __int64 **)v21;
              if ( v23 != v25 )
              {
                do
                {
                  v22 = *v36;
                  v37 = v36;
                  if ( *v36 > 1 )
                    goto LABEL_26;
                  ++v36;
                }
                while ( v25 != v36 );
                v22 = v37[1];
                goto LABEL_26;
              }
            }
            else
            {
              if ( v24 )
              {
                do
                {
                  if ( *v23 > 1 )
                    break;
                  ++v23;
                }
                while ( v25 != v23 );
              }
              else
              {
                v23 = *(unsigned __int64 **)v21;
              }
              v26 = 0;
              if ( v20 )
              {
                do
                {
                  do
                    ++v23;
                  while ( v25 != v23 && *v23 <= 1 );
                  ++v26;
                }
                while ( v20 != v26 );
              }
            }
            v22 = *v23;
          }
LABEL_26:
          sub_1606360(v45, v22, *(_QWORD *)(a1 + 296), 0, 0, 0);
          sub_160E8B0(v47, v45);
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v20;
          sub_18572D0(v46);
          if ( (v42 & 7) != 0 )
          {
            while ( 1 )
            {
LABEL_27:
              v27 = *(_DWORD *)(v21 + 12);
              v28 = 1;
              if ( v27 )
                v28 = *(_DWORD *)(v21 + 12);
              if ( v20 >= v28 )
                goto LABEL_58;
              v29 = *(unsigned __int64 **)v21;
              v30 = 8LL * *(unsigned int *)(v21 + 8);
              v31 = (unsigned __int64 *)(*(_QWORD *)v21 + v30);
              if ( v27 > 1 )
                break;
              v34 = *(unsigned __int64 **)v21;
              if ( v29 == v31 )
                goto LABEL_40;
              do
              {
                v35 = v34;
                if ( *v34 > 1 )
                  goto LABEL_14;
                ++v34;
              }
              while ( v31 != v34 );
              v33 = v35[1];
LABEL_41:
              if ( v33 )
                goto LABEL_14;
              ++v20;
            }
            if ( v30 )
            {
              do
              {
                if ( *v29 > 1 )
                  break;
                ++v29;
              }
              while ( v31 != v29 );
            }
            else
            {
              v29 = *(unsigned __int64 **)v21;
            }
            v32 = 0;
            if ( v20 )
            {
              do
              {
                do
                  ++v29;
                while ( v31 != v29 && *v29 <= 1 );
                ++v32;
              }
              while ( v20 != v32 );
            }
LABEL_40:
            v33 = *v29;
            goto LABEL_41;
          }
        }
      }
    }
  }
  return result;
}

