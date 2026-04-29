__int64 __fastcall sub_3A9740(__int64 *a1, __int64 a2)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  double v8; // xmm0_8
  __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rdx
  char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v29; // rax
  const char *v30; // rdx
  const char *v31; // rdi
  __int64 v32; // rbp
  unsigned __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rdi
  const char *v36; // rdx
  const char *v37; // r13
  const char *v38; // r14
  const char *v39; // rdx
  const char *v40; // rdx
  const char *v41; // rdx
  __m128i v42; // xmm1
  __m128i v43; // [rsp+0h] [rbp-D8h]
  __int64 v44; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v45; // [rsp+28h] [rbp-B0h]
  const char *v46; // [rsp+40h] [rbp-98h] BYREF
  __int64 v47; // [rsp+48h] [rbp-90h]
  const char *v48; // [rsp+60h] [rbp-78h] BYREF
  __int64 v49; // [rsp+68h] [rbp-70h]
  const char *v50; // [rsp+80h] [rbp-58h] BYREF
  __m128i v51; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 64 && *(_QWORD *)(a2 + 24) == a1[9] )
  {
    v5 = a1[11];
    v6 = a1[12];
    if ( v6 < v5 + 1 )
    {
      v19 = qvector_reserve(a1 + 10, 0, v5 + 1, 48);
      v20 = a1[11];
      v7 = v19;
      v21 = a1[12];
      a1[12] = v6;
      v22 = a1[10];
      v43.m128i_i64[0] = v21;
      v23 = v20 - 1;
      if ( v23 >= 0 )
      {
        v24 = v7;
        do
        {
          *(__m128i *)v24 = _mm_loadu_si128((const __m128i *)v22);
          v25 = *(_QWORD *)(v22 + 16);
          v26 = _mm_loadu_si128((const __m128i *)(v22 + 24));
          *(_QWORD *)(v22 + 16) = 0;
          *(_QWORD *)(v24 + 16) = v25;
          *(__m128i *)(v24 + 24) = v26;
          LODWORD(v25) = *(_DWORD *)(v22 + 40);
          *(_QWORD *)(v22 + 32) = 0;
          *(_DWORD *)(v24 + 40) = v25;
          v27 = *(_QWORD *)(v22 + 16);
          if ( v27 )
          {
            *(_QWORD *)(v22 + 24) = 0;
            qfree(v27);
          }
          v22 += 48;
          v24 += 48;
        }
        while ( v23-- != 0 );
        v22 = a1[10];
      }
      qfree(v22);
      v29 = v43.m128i_i64[0];
      a1[10] = v7;
      a1[12] = v29;
      v5 = a1[11];
    }
    else
    {
      v7 = a1[10];
    }
    v8 = 0.0;
    v9 = v7 + 48 * v5;
    *(_QWORD *)(v9 + 16) = 0;
    *(_OWORD *)(v9 + 24) = 0;
    v10 = (_QWORD *)a1[8];
    ++a1[11];
    *(_QWORD *)v9 = *v10;
    v11 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == -1 )
    {
      v12 = a1[3];
      while ( v12 )
      {
        --v12;
        v13 = *(__int64 **)(a1[2] + 8 * v12);
        if ( v13 )
        {
          v14 = *v13;
          if ( v14 != -1 )
          {
            v11 = v14;
            break;
          }
        }
      }
    }
    *(_QWORD *)(v9 + 8) = v11;
    v15 = (char *)a2;
    *(_DWORD *)(v9 + 40) = sub_3A6970(a1 + 2, a2, 0);
    v16 = a1[3];
    do
    {
      if ( !v16 )
      {
        v33 = *(_QWORD *)(v9 + 24);
        goto LABEL_32;
      }
      --v16;
      v17 = *(_QWORD *)(a1[2] + 8 * v16);
      if ( !v17 )
      {
        if ( !under_debugger )
          sub_37DDE0(0xCEB5u, (__int64)v15, 0.0);
LABEL_64:
        BUG();
      }
    }
    while ( *(int *)(v17 + 8) <= 69 );
    v18 = a1[8];
    v44 = 0;
    v45 = 0;
    switch ( *(_DWORD *)(v17 + 8) )
    {
      case 'I':
        sub_3A4220((__int64)&v50, *(_QWORD *)(v17 + 24), v18);
        v41 = s1;
        if ( v51.m128i_i64[0] )
          v41 = v50;
        v15 = "if ( %s )";
        sub_674F0(&v44, (__int64)"if ( %s )", v41);
        v31 = v50;
        if ( !v50 )
          goto LABEL_28;
        goto LABEL_27;
      case 'J':
        sub_3A4220((__int64)&v50, *(_QWORD *)(v17 + 24) + 136LL, v18);
        v37 = s1;
        if ( v51.m128i_i64[0] )
          v37 = v50;
        sub_3A4220((__int64)&v48, *(_QWORD *)(v17 + 24), v18);
        v38 = s1;
        if ( v49 )
          v38 = v48;
        sub_3A4220((__int64)&v46, *(_QWORD *)(v17 + 24) + 72LL, v18);
        v39 = s1;
        if ( v47 )
          v39 = v46;
        v15 = "for ( %s; %s; %s )";
        sub_674F0(&v44, (__int64)"for ( %s; %s; %s )", v39, v38, v37);
        if ( v46 )
        {
          v47 = 0;
          qfree(v46);
        }
        if ( v48 )
        {
          v49 = 0;
          qfree(v48);
        }
        v31 = v50;
        if ( v50 )
          goto LABEL_27;
        goto LABEL_28;
      case 'K':
        sub_3A4220((__int64)&v50, *(_QWORD *)(v17 + 24), v18);
        v36 = s1;
        if ( v51.m128i_i64[0] )
          v36 = v50;
        v15 = "while ( %s )";
        sub_674F0(&v44, (__int64)"while ( %s )", v36);
        v31 = v50;
        if ( v50 )
          goto LABEL_27;
        goto LABEL_28;
      case 'L':
        sub_3A4220((__int64)&v50, *(_QWORD *)(v17 + 24), v18);
        v30 = s1;
        if ( v51.m128i_i64[0] )
          v30 = v50;
        v15 = "do { ... } while ( %s )";
        sub_674F0(&v44, (__int64)"do { ... } while ( %s )", v30);
        v31 = v50;
        if ( v50 )
          goto LABEL_27;
        goto LABEL_28;
      case 'M':
        sub_3A4220((__int64)&v50, *(_QWORD *)(v17 + 24), v18);
        v40 = s1;
        if ( v51.m128i_i64[0] )
          v40 = v50;
        v15 = "switch ( %s )";
        sub_674F0(&v44, (__int64)"switch ( %s )", v40);
        v31 = v50;
        if ( v50 )
        {
LABEL_27:
          v51.m128i_i64[0] = 0;
          qfree(v31);
        }
LABEL_28:
        v32 = v44;
        v8 = *((double *)&v45 + 1);
        v33 = v45;
        break;
      default:
        v15 = (char *)v17;
        sub_3A4220((__int64)&v50, v17, v18);
        v42 = _mm_loadu_si128(&v51);
        v32 = (__int64)v50;
        v51 = 0;
        v33 = v42.m128i_i64[0];
        v43 = v42;
        v50 = nullptr;
        *(_QWORD *)&v8 = _mm_srli_si128(v42, 8).m128i_u64[0];
        break;
    }
    v44 = 0;
    v45 = 0;
    v34 = *(_QWORD *)(v9 + 16);
    if ( v34 )
    {
      *(_QWORD *)(v9 + 24) = 0;
      *(double *)v43.m128i_i64 = v8;
      qfree(v34);
      v8 = *(double *)v43.m128i_i64;
      v35 = v44;
      *(_QWORD *)(v9 + 16) = v32;
      *(_QWORD *)(v9 + 24) = v33;
      *(double *)(v9 + 32) = v8;
      if ( v35 )
      {
        *(_QWORD *)&v45 = 0;
        qfree(v35);
        v33 = *(_QWORD *)(v9 + 24);
      }
    }
    else
    {
      *(_QWORD *)(v9 + 16) = v32;
      *(_QWORD *)(v9 + 24) = v33;
      *(double *)(v9 + 32) = v8;
    }
LABEL_32:
    if ( v33 <= 1 )
    {
      if ( !under_debugger )
        sub_37DDE0(0xCEB6u, (__int64)v15, v8);
      goto LABEL_64;
    }
  }
  return 0;
}
