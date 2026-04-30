__int64 __fastcall sub_3779C0(
        _QWORD *a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  int v14; // ebp
  int *v15; // rdi
  __int64 (__fastcall *v16)(__int64, int); // rax
  __int64 v17; // r12
  int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebp
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64, int); // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  __m128i *v28; // r15
  __int64 v29; // rdi
  __m128 v30; // xmm0
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  char *v41; // rcx
  __int64 v42; // rdi
  __int64 *v43; // rsi
  __int64 v44; // r12
  __int64 *v45; // r13
  _QWORD *v46; // r9
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  int v49; // ebp
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r9
  const char *v57; // rsi
  const __m128i *v58; // rdi
  __int64 v59; // rdx
  __m128i v60; // xmm0
  __int64 v62; // rax
  __int64 v63; // [rsp+8h] [rbp-170h]
  char v64; // [rsp+1Fh] [rbp-159h] BYREF
  int *v65; // [rsp+20h] [rbp-158h] BYREF
  __int128 v66; // [rsp+28h] [rbp-150h]
  __int64 *v67; // [rsp+40h] [rbp-138h] BYREF
  __int128 v68; // [rsp+48h] [rbp-130h]
  __int64 (__fastcall **v69)(); // [rsp+60h] [rbp-118h] BYREF
  __int64 v70; // [rsp+68h] [rbp-110h]
  __int128 v71; // [rsp+70h] [rbp-108h]
  __int64 v72; // [rsp+80h] [rbp-F8h]
  const char *v73; // [rsp+88h] [rbp-F0h]
  int v74; // [rsp+90h] [rbp-E8h]
  __m128i v75; // [rsp+98h] [rbp-E0h] BYREF
  int v76; // [rsp+A8h] [rbp-D0h]
  char v77; // [rsp+B0h] [rbp-C8h] BYREF
  char v78; // [rsp+F8h] [rbp-80h] BYREF
  int v79; // [rsp+110h] [rbp-68h] BYREF
  __int64 v80; // [rsp+118h] [rbp-60h] BYREF
  __int128 v81; // [rsp+120h] [rbp-58h]
  unsigned __int64 v82; // [rsp+138h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v65 = nullptr;
  v10 = (_QWORD *)sub_2B70C0((__int64)a1);
  v66 = 0;
  v11 = a1[24];
  v12 = v11 + 20LL * a1[25];
  if ( 20LL * a1[25] )
  {
    while ( !*(_BYTE *)v11 )
    {
      v11 += 20;
      if ( v11 == v12 )
        return 1;
    }
    v13 = 0;
    v14 = *(_DWORD *)(v11 + 4);
    v65 = (int *)qvector_reserve(&v65, 0, 1, 4);
    v65[(_QWORD)v66] = v14;
    v15 = v65;
    *(_QWORD *)&v66 = v66 + 1;
    if ( (_QWORD)v66 )
    {
      v13 = *v65;
      v16 = *(__int64 (__fastcall **)(__int64, int))(*v10 + 296LL);
      if ( v16 == proxim_graph_t__::vfunc_37 )
      {
        v17 = -1;
        if ( v13 < v10[35] )
          v17 = *(_QWORD *)(v10[34] + 40 * v13);
      }
      else
      {
        v17 = v16((__int64)v10, v13);
      }
      if ( (unsigned __int8)is_mapped(v17) )
      {
        v72 = 0;
        v69 = (__int64 (__fastcall **)())&stru_86F6A0;
        v70 = 0x3FF000004LL;
        v73 = "Find path";
        v71 = -1;
        v74 = 1;
        v76 = -1;
        v19 = (int *)&v77;
        v75 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_867910), (__m128i)(unsigned __int64)&off_8678F0);
        do
        {
          *(_QWORD *)v19 = 0;
          v19 += 6;
          *((_OWORD *)v19 - 1) = 0;
        }
        while ( &v79 != v19 );
        v79 = 0;
        v20 = HIDWORD(v70);
        v21 = ((HIDWORD(v70) >> 19) & 0x3F) - 1;
        if ( ((HIDWORD(v70) >> 19) & 0x3F) != 0 )
        {
          if ( BYTE3(v70) != 0xFF )
          {
            if ( !under_debugger )
              interr(3449, v13, HIDWORD(v70), v21, 0.0);
            BUG();
          }
          v20 = HIDWORD(v70) & 0xFE07FFFF;
          BYTE3(v70) = ((HIDWORD(v70) >> 19) & 0x3F) - 1;
          HIDWORD(v70) &= 0xFE07FFFF;
        }
        v22 = 0;
        v80 = 0;
        v69 = findpath_chooser_t___vtable;
        v76 = 41;
        v81 = 0;
        while ( v22 < (*(int (__fastcall **)(_QWORD *, unsigned __int64, __int64, __int64))(*v10 + 64LL))(
                        v10,
                        v13,
                        v20,
                        v21) )
        {
          v25 = *(__int64 (__fastcall **)(__int64, int))(*v10 + 296LL);
          if ( v25 == proxim_graph_t__::vfunc_37 )
          {
            v23 = -1;
            if ( (unsigned __int64)v22 < v10[35] )
            {
              v13 = v10[34];
              v23 = *(_QWORD *)(v13 + 40LL * v22);
            }
          }
          else
          {
            v13 = (unsigned int)v22;
            v23 = v25((__int64)v10, v22);
          }
          if ( v17 != v23 && get_func(v23) )
          {
            v24 = v81;
            v13 = v80;
            v20 = v81 + 1;
            if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
            {
              v80 = qvector_reserve(&v80, v80, v20, 8);
              v13 = v80;
              v24 = v81;
            }
            *(_QWORD *)(v13 + 8 * v24) = v23;
            *(_QWORD *)&v81 = v81 + 1;
          }
          ++v22;
        }
        v67 = nullptr;
        v13 = (unsigned __int64)&v67;
        v26 = sub_4AED50(&v69, &v67, v20, v21);
        v27 = -1;
        if ( v26 >= 0 && v26 < (unsigned __int64)v81 )
          v27 = *(_QWORD *)(v80 + 8 * v26);
        v69 = findpath_chooser_t___vtable;
        if ( v80 )
        {
          *(_QWORD *)&v81 = 0;
          qfree(v80, (const char *)&v67);
        }
        v28 = (__m128i *)&v78;
        v69 = (__int64 (__fastcall **)())&stru_86F6A0;
        do
        {
          v29 = v28->m128i_i64[0];
          if ( v28->m128i_i64[0] )
          {
            v28->m128i_i64[1] = 0;
            qfree(v29, (const char *)&v67);
          }
          v28 = (__m128i *)((char *)v28 - 24);
        }
        while ( &v75 != v28 );
        if ( v27 != -1 )
        {
          sub_376610((__int64)&v64, (int)"Finding path between %a and %a", v17, v27);
          v30 = 0;
          v31 = v17;
          v68 = 0;
          v67 = nullptr;
          if ( (unsigned __int8)sub_373BF0((__int64)v10, (const char *)v17, v27, &v67) )
            goto LABEL_42;
          if ( (unsigned __int8)sub_541EF0(v10, v17, v32) )
            goto LABEL_71;
          if ( v67 )
          {
            *(_QWORD *)&v68 = 0;
            *(double *)v30.m128_u64 = qfree(v67, (const char *)v17);
            v67 = nullptr;
            *((_QWORD *)&v68 + 1) = 0;
          }
          v31 = v27;
          if ( (unsigned __int8)sub_373BF0((__int64)v10, (const char *)v27, v17, &v67) )
          {
LABEL_42:
            v38 = a1[55];
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 8);
              if ( v39 )
                sub_3723E0(
                  v39 + 272,
                  v31,
                  v30,
                  (__m128)(unsigned __int64)&off_8678F0,
                  a4,
                  a5,
                  v36,
                  v37,
                  a8,
                  a9,
                  v32,
                  v33,
                  v34,
                  v35);
            }
            v40 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
            v42 = v68;
            v43 = v67;
            v44 = v40;
            v45 = v67;
            if ( 8LL * (_QWORD)v68 )
            {
              do
              {
                v46 = (_QWORD *)v10[34];
                v47 = &v46[5 * v10[35]];
                if ( v46 == v47 )
                {
LABEL_63:
                  v49 = -1;
                }
                else
                {
                  v48 = (_QWORD *)v10[34];
                  while ( *v45 != *v48 )
                  {
                    v48 += 5;
                    if ( v47 == v48 )
                      goto LABEL_63;
                  }
                  v49 = -858993459 * (v48 - v46);
                }
                v50 = *(_QWORD *)(v44 + 32);
                v51 = *(_QWORD *)(v44 + 24);
                v41 = (char *)(v51 + 20 * v50);
                if ( (char *)v51 == v41 )
                  goto LABEL_64;
                while ( !*(_BYTE *)v51 || v49 != *(_DWORD *)(v51 + 4) )
                {
                  v51 += 20;
                  if ( v41 == (char *)v51 )
                    goto LABEL_64;
                }
                if ( v41 == (char *)v51 )
                {
LABEL_64:
                  v52 = *(_QWORD *)(v44 + 40);
                  v53 = v50 + 1;
                  if ( v52 < v53 )
                  {
                    v54 = qvector_reserve(v44 + 24, 0, v53, 20);
                    v55 = *(_QWORD *)(v44 + 32);
                    v56 = *(_QWORD *)(v44 + 40);
                    v57 = (const char *)v54;
                    *(_QWORD *)(v44 + 40) = v52;
                    v58 = *(const __m128i **)(v44 + 24);
                    v59 = v55 - 1;
                    if ( v59 >= 0 )
                    {
                      do
                      {
                        v60 = _mm_loadu_si128(v58);
                        v54 += 20;
                        v58 = (const __m128i *)((char *)v58 + 20);
                        *(__m128i *)(v54 - 20) = v60;
                        *(_DWORD *)(v54 - 4) = v58[-1].m128i_i32[3];
                      }
                      while ( v59-- != 0 );
                      v58 = *(const __m128i **)(v44 + 24);
                    }
                    v63 = v56;
                    qfree(v58, v57);
                    v62 = 5LL * *(_QWORD *)(v44 + 32);
                    *(_QWORD *)(v44 + 24) = v57;
                    *(_QWORD *)(v44 + 40) = v63;
                    v41 = (char *)&v57[4 * v62];
                  }
                  *v41 = 1;
                  *((_DWORD *)v41 + 1) = v49;
                  *((_QWORD *)v41 + 1) = -1;
                  *((_DWORD *)v41 + 4) = -1;
                  ++*(_QWORD *)(v44 + 32);
                  v43 = v67;
                  v42 = v68;
                }
                ++v45;
              }
              while ( v45 != &v43[v42] );
            }
            *(_BYTE *)(v44 + 48) = 1;
            v13 = v44;
            (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, char *, unsigned __int64))(*a1 + 152LL))(
              a1,
              v44,
              0,
              v41,
              0xCCCCCCCCCCCCCCCDLL);
          }
          else
          {
LABEL_71:
            v13 = v17;
            sub_169700(
              (int)"No path between %a and %a found\n",
              v17,
              v27,
              v33,
              v34,
              v35,
              v30,
              (__m128)(unsigned __int64)&off_8678F0,
              a4,
              a5,
              v36,
              v37,
              a8,
              a9,
              (char)&v69);
          }
          if ( v67 )
          {
            *(_QWORD *)&v68 = 0;
            qfree(v67, (const char *)v13);
          }
          sub_541CC0(QT::QCoreApplication::self + 2);
        }
      }
      v15 = v65;
    }
    if ( v15 )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v15, (const char *)v13);
    }
  }
  return 1;
}
