__int64 __fastcall sub_2171D0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  _QWORD *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 *func; // rax
  __int64 v18; // r10
  __int64 *v19; // rcx
  __int64 *v20; // rax
  _QWORD *v21; // rbp
  __int64 *v22; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __m128 v33; // xmm1
  __m128 v34; // xmm0
  __int64 v35; // rax
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 *v42; // rax
  __int64 *v43; // r12
  int v44; // r13d
  __int64 v45; // rax
  unsigned __int64 *v46; // rax
  unsigned __int64 *v47; // r12
  unsigned __int64 *v48; // r12
  __int64 v49; // r14
  unsigned __int64 *v50; // r13
  char v51; // r13
  double v52; // xmm0_8
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // r12
  unsigned __int64 *v56; // rdx
  unsigned __int64 *v57; // rax
  __int64 v58; // [rsp+0h] [rbp-F8h]
  __int64 v59; // [rsp+8h] [rbp-F0h]
  __int64 v60; // [rsp+18h] [rbp-E0h] BYREF
  __int64 *v61; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v62; // [rsp+28h] [rbp-D0h]
  __int64 *v63; // [rsp+40h] [rbp-B8h] BYREF
  int v64; // [rsp+48h] [rbp-B0h]
  __int64 v65; // [rsp+50h] [rbp-A8h]
  unsigned __int64 *v66; // [rsp+60h] [rbp-98h] BYREF
  __int128 v67; // [rsp+68h] [rbp-90h]
  __m128i v68; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v69; // [rsp+90h] [rbp-68h]
  __int64 v70; // [rsp+98h] [rbp-60h]
  int v71; // [rsp+A0h] [rbp-58h]
  __int64 **v72; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v73; // [rsp+B8h] [rbp-40h]

  v10 = &unk_8CB760;
  v11 = qword_8CB7C0;
  v12 = qword_8CB7A0;
  v73 = __readfsqword(0x28u);
  v62 = 0;
  v61 = nullptr;
  if ( qword_8CB7C0 == qword_8CB7A0 )
  {
    v11 = qword_8CBB00;
    v12 = qword_8CBAE0;
    v10 = qword_8CBAA0;
  }
  v13 = 16 * ((v10[15] == 0) + ((__int64)(v10[15] - v10[11]) >> 3) - 1)
      + ((v10[10] - v12) >> 5)
      + ((v11 - v10[13]) >> 5);
  if ( v13 <= 0x2710 )
  {
    if ( !v13 )
    {
      LODWORD(v13) = 0;
      return (unsigned int)v13;
    }
    goto LABEL_5;
  }
  a10 = (unsigned __int64)"HIDECANCEL\n"
                          "There are %zu elements in the trace, it is going to take long time.\n"
                          "Do you want to continue?";
  if ( (int)sub_1698A0(
              0,
              (int)"HIDECANCEL\n"
                   "There are %zu elements in the trace, it is going to take long time.\n"
                   "Do you want to continue?",
              v13) > 0 )
  {
    sub_1C76F0((int)"Creating graph...");
    if ( v13 + 1 <= 1 )
    {
      if ( (_QWORD)v62 )
      {
        a10 = 0;
        v58 = -1;
        v21 = (_QWORD *)sub_2E1080(0, 0);
        if ( v21 )
          goto LABEL_41;
        v21 = nullptr;
      }
      else
      {
        v21 = nullptr;
      }
LABEL_39:
      sub_1C78D0();
LABEL_25:
      v22 = v61;
      LOBYTE(v13) = v21 != nullptr;
      goto LABEL_26;
    }
LABEL_5:
    v58 = -1;
    v14 = 1;
    do
    {
      if ( v13 > 0x2710
        && __ROR8__(0x8F5C28F5C28F5C29LL * v14, 2) <= 0x28F5C28F5C28F5CuLL
        && (unsigned __int8)sub_541EF0() )
      {
        sub_1C78D0();
        sub_169700((int)"Cancelled\n", a10, v24, v25, v26, v27, (__m128)0LL, a2, a3, a4, v28, v29, a7, a8, v58);
        goto LABEL_31;
      }
      v15 = (__int64)(v10 + 18);
      a10 = (unsigned int)(v13 - v14);
      if ( a10 < 16 * ((unsigned __int64)(v10[15] == 0) + ((__int64)(v10[15] - v10[11]) >> 3) - 1)
               + ((__int64)(v10[10] - v10[8]) >> 5)
               + ((__int64)(v10[12] - v10[13]) >> 5) )
      {
        v15 = sub_20EF70((__int64)v10, a10);
        if ( !v15 )
          v15 = (__int64)(v10 + 18);
      }
      v16 = *(_QWORD *)(v15 + 16);
      if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( (unsigned __int8)is_mapped(v16) )
        {
          func = (__int64 *)get_func(*(_QWORD *)(v15 + 16));
          if ( func )
          {
            if ( v58 == -1 )
              v58 = *func;
            a10 = (unsigned __int64)v61;
            v18 = *func;
            v19 = &v61[v62];
            if ( v61 == v19 )
              goto LABEL_32;
            v20 = v61;
            while ( v18 != *v20 )
            {
              if ( v19 == ++v20 )
                goto LABEL_32;
            }
            if ( v20 == v19 )
            {
LABEL_32:
              if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
              {
                v59 = v18;
                v40 = qvector_reserve(&v61, v61, v62 + 1, 8);
                v18 = v59;
                v61 = (__int64 *)v40;
                v19 = (__int64 *)(v40 + 8 * v62);
              }
              *v19 = v18;
              *(_QWORD *)&v62 = v62 + 1;
            }
          }
        }
      }
      ++v14;
    }
    while ( v14 < v13 + 1 );
    if ( !(_QWORD)v62 || (a10 = 0, (v21 = (_QWORD *)sub_2E1080(0, 0)) == nullptr) )
    {
      v21 = nullptr;
      goto LABEL_24;
    }
LABEL_41:
    v64 = -1;
    v63 = &idaplace_t___vtable;
    v65 = v58;
    v32 = sub_1EA680((__int64)(v21 + 48), 0, v30, v31, 0.0);
    v33 = *(__m128 *)v32;
    v34 = (__m128)*(unsigned __int64 *)(v32 + 16);
    v35 = *(_QWORD *)(v32 + 24);
    v72 = &v63;
    v71 = 3;
    v70 = v35;
    v68 = (__m128i)v33;
    v69 = v34.m128_u64[0];
    a10 = (unsigned __int64)&v68;
    v72 = (__int64 **)idaplace_t__clone(&v63);
    sub_1FF700((__int64)(v21 + 48), &v68, v34, v33, a3, a4, v36, v37, a7, a8);
    if ( (unsigned int)sub_1EB590((__int64)v21, (__int64)&v68, v38, v39, *(double *)v34.m128_u64) == 3 && v21[113] )
    {
      v41 = sub_2B70C0();
      v66 = nullptr;
      v67 = 0;
      v42 = (__int64 *)get_func(v58);
      v43 = v42;
      if ( v42 )
      {
        a10 = *v42;
        if ( !sub_370670(v41 + 272, *v42) )
        {
          a10 = (unsigned __int64)&v60;
          v60 = *v43;
          sub_216980((__int64 *)&v66, &v60);
        }
        if ( (_QWORD)v62 )
        {
          v44 = 0;
          v45 = 0;
          do
          {
            v46 = (unsigned __int64 *)get_func(v61[v45]);
            v47 = v46;
            if ( v46 )
            {
              a10 = *v46;
              if ( !sub_370670(v41 + 272, *v46) )
              {
                a10 = (unsigned __int64)v66;
                v55 = *v47;
                v56 = &v66[v67];
                if ( v66 == v56 )
                  goto LABEL_71;
                v57 = v66;
                while ( v55 != *v57 )
                {
                  if ( v56 == ++v57 )
                    goto LABEL_71;
                }
                if ( v56 == v57 )
                {
LABEL_71:
                  if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
                  {
                    v66 = (unsigned __int64 *)qvector_reserve(&v66, v66, v67 + 1, 8);
                    v56 = &v66[v67];
                  }
                  *v56 = v55;
                  *(_QWORD *)&v67 = v67 + 1;
                }
              }
            }
            v45 = ++v44;
          }
          while ( v44 < (unsigned __int64)v62 );
        }
      }
      if ( (_QWORD)v67 )
      {
        v48 = v66;
        v49 = v41 + 272;
        v50 = &v66[v67];
        if ( v66 != v50 )
        {
          do
          {
            a10 = *v48;
            sub_370AA0(v49, *v48++, 0);
          }
          while ( v50 != v48 );
        }
        sub_370D50(v49);
        sub_3723D0(v49);
      }
      v51 = byte_8CCA9E;
      if ( byte_8CCA9E )
        byte_8CCA9E = 0;
      v52 = (*(double (__fastcall **)(_QWORD *))(*v21 + 664LL))(v21);
      sub_1EB330((__int64)v21, a10, v53, v54, v52);
      if ( v51 )
        byte_8CCA9E = 1;
      if ( v66 )
      {
        *(_QWORD *)&v67 = 0;
        qfree(v66, (const char *)a10);
      }
    }
    if ( v72 )
      qfree(v72, (const char *)a10);
LABEL_24:
    if ( v13 <= 0x2710 )
      goto LABEL_25;
    goto LABEL_39;
  }
LABEL_31:
  v22 = v61;
  LODWORD(v13) = 0;
LABEL_26:
  if ( v22 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v22, (const char *)a10);
  }
  return (unsigned int)v13;
}
