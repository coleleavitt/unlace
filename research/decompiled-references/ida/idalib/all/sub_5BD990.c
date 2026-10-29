__int64 __fastcall sub_5BD990(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        const void *a4,
        _QWORD *a5,
        const __m128i *a6,
        __int64 a7,
        char a8)
{
  __int64 tinfo_size; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  __int64 v17; // rsi
  unsigned int tinfo_property; // r15d
  __int64 v19; // rax
  bool v20; // al
  __m128i v21; // xmm0
  size_t v22; // rax
  size_t v23; // r8
  int v24; // eax
  __m128i v25; // xmm0
  __int64 v26; // rdi
  void *v27; // rdi
  size_t v28; // r14
  int tinfo_udt_member; // [rsp+18h] [rbp-230h]
  size_t v31; // [rsp+18h] [rbp-230h]
  size_t v32; // [rsp+18h] [rbp-230h]
  unsigned int v33; // [rsp+24h] [rbp-224h]
  __int64 v34; // [rsp+38h] [rbp-210h]
  unsigned __int64 v35; // [rsp+48h] [rbp-200h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-1F8h] BYREF
  void *v37; // [rsp+60h] [rbp-1E8h]
  __int128 v38; // [rsp+68h] [rbp-1E0h]
  void *v39; // [rsp+78h] [rbp-1D0h]
  __int128 v40; // [rsp+80h] [rbp-1C8h]
  __int128 v41[3]; // [rsp+90h] [rbp-1B8h] BYREF
  char *v42; // [rsp+C0h] [rbp-188h]
  int v43; // [rsp+C8h] [rbp-180h]
  __int64 v44; // [rsp+D0h] [rbp-178h]
  char v45; // [rsp+D8h] [rbp-170h]
  __m128i v46; // [rsp+E0h] [rbp-168h] BYREF
  void *dest; // [rsp+F0h] [rbp-158h] BYREF
  __int128 v48; // [rsp+F8h] [rbp-150h]
  void *ptr; // [rsp+108h] [rbp-140h]
  __int128 v50; // [rsp+110h] [rbp-138h]
  _QWORD v51[5]; // [rsp+120h] [rbp-128h] BYREF
  __m128i v52; // [rsp+148h] [rbp-100h]
  int v53; // [rsp+158h] [rbp-F0h]
  __int64 v54; // [rsp+160h] [rbp-E8h]
  char v55; // [rsp+168h] [rbp-E0h]
  __int128 v56; // [rsp+170h] [rbp-D8h] BYREF
  void *v57; // [rsp+180h] [rbp-C8h]
  __int128 v58; // [rsp+188h] [rbp-C0h]
  void *v59; // [rsp+198h] [rbp-B0h]
  __int128 v60; // [rsp+1A0h] [rbp-A8h]
  __int128 v61[3]; // [rsp+1B0h] [rbp-98h] BYREF
  char *v62; // [rsp+1E0h] [rbp-68h]
  int v63; // [rsp+1E8h] [rbp-60h]
  __int64 v64; // [rsp+1F0h] [rbp-58h]
  char v65; // [rsp+1F8h] [rbp-50h]
  unsigned __int64 v66; // [rsp+208h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( !(_BYTE)a7 )
  {
    tinfo_size = get_tinfo_size(0, *a5, 0);
    a3 = sub_5BD780(a1, (__int64)a2, a3, tinfo_size);
    if ( a3 == -1 )
      return -1;
  }
  v35 = 0;
  if ( a2 )
  {
    v14 = sub_3BDD60(a1, *a2);
    if ( v14 != -1 )
    {
      if ( (unsigned __int8)sub_54BE00(a1, &v35, v14) )
      {
        v36[1] = 0;
        v42 = (char *)&dword_0 + 1;
        v36[0] = 8 * a3;
        v37 = nullptr;
        v39 = nullptr;
        v43 = -1;
        v44 = 0;
        v45 = 0;
        v38 = 0;
        v40 = 0;
        v41[0] = 0;
        tinfo_udt_member = find_tinfo_udt_member((int)v36);
        if ( tinfo_udt_member == -1 )
        {
          v33 = 0;
          goto LABEL_13;
        }
        if ( (v44 & 0x100000000000LL) != 0 )
        {
          v15 = -1;
        }
        else
        {
          v33 = WORD2(v44) & 0x2000;
          if ( (v44 & 0x200000000000LL) != 0 )
          {
            tinfo_udt_member = -1;
            v33 = 4;
            goto LABEL_13;
          }
          if ( (v44 & 0x40000000000LL) != 0 )
          {
            tinfo_udt_member = -1;
            goto LABEL_13;
          }
          v33 = 256;
          if ( !a8 )
          {
LABEL_13:
            v17 = *a2;
            dest = nullptr;
            ptr = nullptr;
            v52.m128i_i64[1] = (__int64)&dword_0 + 1;
            v55 = 0;
            v53 = -1;
            v54 = 0;
            *(_QWORD *)&v56 = 0;
            v46 = 0;
            v48 = 0;
            v50 = 0;
            *(_OWORD *)v51 = 0;
            if ( !(unsigned __int8)get_tinfo(&v56, v17)
              || (tinfo_property = get_tinfo_property(v56, 20), tinfo_property <= 0x10) )
            {
              tinfo_property = getinf(99);
            }
            clear_tinfo_t(&v56);
            if ( tinfo_property == 176
              || tinfo_property == 256
              || ((v19 = a1[2], v56 = 0, v34 = v19, get_frame_part(&v56, a2, 0), *(char *)(v34 + 9) >= 0)
                ? (v20 = a3 >= (unsigned __int64)v56)
                : (v20 = a3 < *((_QWORD *)&v56 + 1)),
                  !v20) )
            {
              *(_QWORD *)&v56 = 0;
              copy_tinfo_t(&v56);
            }
            else
            {
              v26 = *a5;
              *(_QWORD *)&v56 = 0;
              *(_QWORD *)&v56 = get_tinfo_property(v26, 289);
            }
            copy_tinfo_t(v51);
            clear_tinfo_t(&v56);
            sub_5B8400(*a1, v51);
            if ( a6 && !a6->m128i_i64[0] )
              a6 = nullptr;
            if ( tinfo_udt_member == -1 )
            {
              if ( a4 && (v22 = strlen((const char *)a4), (v23 = v22) != 0) )
              {
                v27 = dest;
                v28 = v22 + 1;
                if ( *((_QWORD *)&v48 + 1) < v22 + 1 )
                {
                  v32 = v22;
                  dest = (void *)qvector_reserve(&dest, dest, v22 + 1, 1);
                  v23 = v32;
                  v27 = dest;
                }
                v31 = v23;
                *(_QWORD *)&v48 = v28;
                memmove(v27, a4, v23);
                *((_BYTE *)dest + v31) = 0;
              }
              else
              {
                *(_QWORD *)&v48 = 0;
              }
              v46.m128i_i64[0] = 8 * a3;
              v46.m128i_i64[1] = 8 * get_tinfo_size(0, v51[0], 0);
              if ( a6 )
              {
                v24 = a6[3].m128i_i32[0];
                *(__m128i *)&v51[1] = _mm_loadu_si128(a6);
                v25 = _mm_loadu_si128(a6 + 1);
                v53 = v24;
                *(__m128i *)&v51[3] = v25;
                v52 = _mm_loadu_si128(a6 + 2);
              }
              if ( !(unsigned int)set_tinfo_property4(&v35, 9, &v46, 1, -1, v33) )
              {
                v57 = nullptr;
                v62 = (char *)&dword_0 + 1;
                v59 = nullptr;
                v63 = -1;
                v64 = 0;
                v65 = 0;
                v56 = 8 * a3;
                v58 = 0;
                v60 = 0;
                v61[0] = 0;
                tinfo_udt_member = find_tinfo_udt_member((int)&v56);
                clear_tinfo_t(v61);
                if ( v59 )
                {
                  *(_QWORD *)&v60 = 0;
                  qfree(v59);
                }
                if ( v57 )
                {
                  *(_QWORD *)&v58 = 0;
                  qfree(v57);
                }
                if ( tinfo_udt_member != -1 )
                  goto LABEL_28;
              }
            }
            else if ( (!a4 || !(unsigned int)set_tinfo_property4(&v35, 11, tinfo_udt_member, a4, 0, 0))
                   && !(unsigned int)set_tinfo_property4(&v35, 12, tinfo_udt_member, v51, a6, v33) )
            {
LABEL_28:
              if ( (get_tinfo_property(v51[0], 2) & 0x2F) == 0xD )
              {
                v21 = _mm_load_si128(&v46);
                sub_5B8340(
                  a1,
                  (unsigned __int64 *)a2,
                  (unsigned __int64)v21.m128i_i64[0] >> 3,
                  _mm_add_epi64(_mm_srli_si128(v21, 8), v21).m128i_u64[0] >> 3);
              }
              if ( qword_2CCB548 )
                qword_2CCB548(*a2, a2[1] - *a2);
              v15 = tinfo_udt_member;
              goto LABEL_33;
            }
            v15 = -1;
LABEL_33:
            clear_tinfo_t(v51);
            if ( ptr )
            {
              *(_QWORD *)&v50 = 0;
              qfree(ptr);
            }
            if ( dest )
            {
              *(_QWORD *)&v48 = 0;
              qfree(dest);
            }
            goto LABEL_37;
          }
          v15 = tinfo_udt_member;
        }
LABEL_37:
        clear_tinfo_t(v41);
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
        goto LABEL_6;
      }
    }
  }
  v15 = -1;
LABEL_6:
  clear_tinfo_t(&v35);
  return v15;
}
