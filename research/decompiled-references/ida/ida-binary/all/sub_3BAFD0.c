__int64 __fastcall sub_3BAFD0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  unsigned int v11; // r13d
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  const char *v25; // rsi
  const char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // r12
  _QWORD *v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // rbp
  _QWORD *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rdi
  char v39; // [rsp+0h] [rbp-D8h]
  __int64 v40; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v46; // [rsp+48h] [rbp-90h] BYREF
  __int64 v47; // [rsp+58h] [rbp-80h] BYREF
  __int128 v48; // [rsp+60h] [rbp-78h]
  __int64 v49; // [rsp+70h] [rbp-68h] BYREF
  __int128 v50; // [rsp+78h] [rbp-60h]
  char v51; // [rsp+88h] [rbp-50h]
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  v9 = *(_DWORD *)(a1 + 8);
  v52 = __readfsqword(0x28u);
  if ( v9 == 58 || (v11 = 0, v9 == 25) )
  {
    if ( !*(_QWORD *)a1 )
      return 0;
    v13 = *(_QWORD *)(a1 + 208);
    v11 = 0;
    if ( *(_BYTE *)(v13 + 31) == 12 )
    {
      v41 = -1;
      v43 = 0;
      if ( (unsigned __int8)sub_3BA410((__int64 *)a1, &v41, &v42, nullptr) )
      {
        v15 = *(_QWORD *)(v13 + 296);
        if ( v15 )
        {
          copy_tinfo_t(&v43, v15 + 64, v14);
          goto LABEL_9;
        }
      }
      if ( *(_QWORD *)(v13 + 16) == -2 )
      {
        v44 = 0;
        v26 = byte_9 + 3;
        v46 = 0u;
        v47 = 0;
        v49 = 0;
        v51 = 16;
        v45 = 0;
        v48 = 0;
        v50 = 0;
        if ( (unsigned __int8)get_tinfo_details(*(_QWORD *)(v13 + 8), 12, &v44) && (_QWORD)v45 )
        {
          v26 = (const char *)(v44 + 64);
          copy_tinfo_t(&v43, v44 + 64, v27);
        }
        else if ( !(unsigned __int8)sub_333FD0(&v43) )
        {
          if ( v49 )
          {
            *(_QWORD *)&v50 = 0;
            qfree(v49, &byte_9[3]);
          }
          cleanup_argloc(&v47);
          clear_tinfo_t((char *)&v46 + 8);
          v33 = v44;
          if ( v44 )
          {
            v34 = v45;
            v35 = 0;
            if ( (_QWORD)v45 )
            {
              do
              {
                v36 = (_QWORD *)(v33 + 80 * v35);
                clear_tinfo_t(v36 + 8);
                v37 = v36[5];
                if ( v37 )
                {
                  v36[6] = 0;
                  qfree(v37, &byte_9[3]);
                }
                v38 = v36[2];
                if ( v38 )
                {
                  v36[3] = 0;
                  qfree(v38, &byte_9[3]);
                }
                ++v35;
                cleanup_argloc(v36);
                v33 = v44;
              }
              while ( v34 != v35 );
            }
            *(_QWORD *)&v45 = 0;
            qfree(v33, &byte_9[3]);
          }
          goto LABEL_20;
        }
        v41 = 0;
        if ( v49 )
        {
          *(_QWORD *)&v50 = 0;
          qfree(v49, v26);
        }
        cleanup_argloc(&v47);
        clear_tinfo_t((char *)&v46 + 8);
        v28 = v44;
        if ( v44 )
        {
          v40 = v45;
          if ( (_QWORD)v45 )
          {
            v29 = 0;
            do
            {
              v30 = (_QWORD *)(v28 + 80 * v29);
              clear_tinfo_t(v30 + 8);
              v31 = v30[5];
              if ( v31 )
              {
                v30[6] = 0;
                qfree(v31, v26);
              }
              v32 = v30[2];
              if ( v32 )
              {
                v30[3] = 0;
                qfree(v32, v26);
              }
              ++v29;
              cleanup_argloc(v30);
              v28 = v44;
            }
            while ( v40 != v29 );
          }
          *(_QWORD *)&v45 = 0;
          qfree(v28, v26);
        }
      }
      else if ( !(unsigned __int8)sub_333FD0(&v43) )
      {
LABEL_20:
        v11 = 0;
LABEL_16:
        clear_tinfo_t(&v43);
        return v11;
      }
LABEL_9:
      LODWORD(v44) = 0;
      v46 = 0;
      v45 = 0u;
      v47 = 0;
      v49 = 0;
      LODWORD(v50) = 0;
      v48 = 0;
      copy_tinfo_t(&v49, &v43, v16);
      v17 = v41;
      v18 = v13 + 8;
      while ( 1 )
      {
        v20 = set_tinfo_property4(v18, 34, &v44, v17, 0, 64);
        if ( v20 != -21 )
          break;
        if ( !(unsigned __int8)sub_3AB6E0(
                                 (int)&v45 + 8,
                                 (int)"Please enter a unique argument name",
                                 v19,
                                 4294967275LL,
                                 v21,
                                 v22,
                                 (__m128)0LL,
                                 a3,
                                 a4,
                                 a5,
                                 v23,
                                 v24,
                                 a8,
                                 a9,
                                 v39) )
        {
          v20 = -21;
          break;
        }
      }
      v25 = (const char *)v20;
      v11 = (unsigned __int8)sub_3AC490(
                               (__int64 *)a1,
                               v20,
                               (__int64)"Failed to change type",
                               (__m128)0LL,
                               a3,
                               a4,
                               a5,
                               *(double *)v23.m128_u64,
                               *(double *)v24.m128_u64,
                               a8,
                               a9);
      clear_tinfo_t(&v49);
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47, v25);
      }
      if ( *((_QWORD *)&v45 + 1) )
      {
        *(_QWORD *)&v46 = 0;
        qfree(*((_QWORD *)&v45 + 1), v25);
      }
      cleanup_argloc(&v44);
      goto LABEL_16;
    }
  }
  return v11;
}
