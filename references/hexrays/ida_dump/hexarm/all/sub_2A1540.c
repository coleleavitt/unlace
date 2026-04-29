unsigned __int64 __fastcall sub_2A1540(__int64 a1, const __m128i **a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // r14
  const __m128i **v8; // rbp
  __int64 v9; // rbx
  char v10; // r12
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  const __m128i *v14; // rsi
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rbp
  int v19; // edx
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v23; // r14
  __int64 v24; // rsi
  const __m128i *v25; // rcx
  const __m128i *v26; // rax
  const __m128i *v27; // r14
  __int64 v28; // rcx
  const __m128i *v29; // r12
  __int64 v30; // rbp
  __m128i *v31; // r13
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r15
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r14
  bool v40; // cf
  char v41; // al
  __int64 v42; // rbp
  unsigned __int64 v43; // r12
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r15
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // rbp
  __int64 v51; // rdi
  char v53; // [rsp+8h] [rbp-E0h]
  const __m128i *v54; // [rsp+18h] [rbp-D0h]
  char v55; // [rsp+20h] [rbp-C8h]
  __int64 v56; // [rsp+20h] [rbp-C8h]
  const __m128i **v57; // [rsp+30h] [rbp-B8h]
  __int64 v58; // [rsp+38h] [rbp-B0h]
  __int64 v59; // [rsp+38h] [rbp-B0h]
  __int64 v60; // [rsp+40h] [rbp-A8h]
  __int64 v61; // [rsp+50h] [rbp-98h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-90h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-88h] BYREF
  char v64; // [rsp+64h] [rbp-84h]
  __int64 v65; // [rsp+70h] [rbp-78h] BYREF
  __int64 v66; // [rsp+78h] [rbp-70h]
  unsigned int v67[4]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v68; // [rsp+90h] [rbp-58h] BYREF
  __int64 v69; // [rsp+98h] [rbp-50h]
  unsigned __int64 v70; // [rsp+A8h] [rbp-40h]

  v7 = a6;
  v8 = a2;
  v9 = a4;
  v70 = __readfsqword(0x28u);
  sub_29FC40(a4, *(_QWORD *)(a1 + 1504));
  v61 = 0;
  v10 = sub_29B780(v9, a1, &v61);
  if ( v10 && (_BYTE)v61 && ((v61 & 0xE) != 0 || (v61 & 0x30) == 0) )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(v61, 9);
    v53 = get_tinfo_property(tinfo_property, 2);
    clear_tinfo_t(&tinfo_property);
    if ( (v53 & 0x3F) != 0x30 )
    {
      if ( (_DWORD)v7 == -1 || get_tinfo_size(0, v61, 0) == v7 )
      {
        if ( *(_DWORD *)v9 != 2 )
          goto LABEL_5;
      }
      else
      {
        v41 = sub_29D040(&v61);
        if ( *(_DWORD *)v9 != 2 )
        {
          if ( v41 )
            goto LABEL_5;
          goto LABEL_3;
        }
        v10 = v41;
      }
LABEL_34:
      if ( !**(_DWORD **)(v9 + 8) )
        *(_DWORD *)(v9 + 4) |= 0x20u;
      goto LABEL_5;
    }
  }
  v10 = 0;
  if ( *(_DWORD *)v9 == 2 )
    goto LABEL_34;
LABEL_3:
  if ( !*(_DWORD *)(v9 + 4) )
    goto LABEL_21;
  v10 = 0;
LABEL_5:
  v63 = 0;
  sub_29FB30((__int64)&v63, (unsigned int *)v9);
  v65 = 0;
  copy_tinfo_t(&v65, &v61);
  LODWORD(v66) = a5;
  v11 = sub_32E660(&v61);
  v12 = (unsigned __int64)a2[1];
  if ( (v64 & 4) != 0 )
    ++v11;
  v13 = 1;
  HIDWORD(v66) = v11;
  if ( v12 )
  {
    v14 = *a2;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      v17 = (unsigned __int64)&v14[3 * v16];
      if ( a3 == *(_QWORD *)v17 )
        break;
      v16 = ++v15;
      if ( v15 >= v12 )
      {
        v13 = v12 + 1;
        goto LABEL_23;
      }
    }
  }
  else
  {
LABEL_23:
    v23 = (unsigned __int64)v8[2];
    if ( v23 < v13 )
    {
      v24 = qvector_reserve(v8, 0, v13, 48);
      v25 = v8[1];
      v26 = v8[2];
      v8[2] = (const __m128i *)v23;
      v27 = *v8;
      v54 = v26;
      v28 = (__int64)&v25[-1].m128i_i64[1] + 7;
      if ( v28 >= 0 )
      {
        v58 = a3;
        v60 = v9;
        v55 = v10;
        v29 = *v8;
        v57 = v8;
        v30 = v28;
        v31 = (__m128i *)v24;
        do
        {
          v31->m128i_i64[0] = v29->m128i_i64[0];
          v32 = v29->m128i_i64[1];
          v29->m128i_i64[1] = 0;
          v33 = _mm_loadu_si128(v29 + 1);
          v31->m128i_i64[1] = v32;
          v31[1] = v33;
          v34 = v29[2].m128i_i64[0];
          v29[1] = 0;
          v31[2].m128i_i64[0] = v34;
          v31[2].m128i_i32[2] = v29[2].m128i_i32[2];
          v35 = v29->m128i_i64[1];
          if ( v35 )
          {
            v36 = v29[1].m128i_i64[0];
            if ( v36 )
            {
              v37 = 0;
              do
              {
                v38 = v37++;
                v39 = v35 + 32 * v38;
                clear_tinfo_t(v39 + 16);
                sub_29EFF0(v39);
                v35 = v29->m128i_i64[1];
              }
              while ( v36 != v37 );
            }
            v29[1].m128i_i64[0] = 0;
            qfree(v35);
          }
          v29 += 3;
          v31 += 3;
          v40 = v30-- == 0;
        }
        while ( !v40 );
        v8 = v57;
        v10 = v55;
        a3 = v58;
        v9 = v60;
        v27 = *v57;
      }
      qfree(v27);
      v12 = (unsigned __int64)v8[1];
      *v8 = (const __m128i *)v24;
      v8[2] = v54;
    }
    else
    {
      v24 = (__int64)*v8;
    }
    v17 = v24 + 48 * v12;
    *(_OWORD *)v17 = 0;
    *(_QWORD *)(v17 + 32) = 0;
    *(_DWORD *)(v17 + 40) = 0;
    *(_OWORD *)(v17 + 16) = 0;
    v8[1] = (const __m128i *)((char *)v8[1] + 1);
    *(_QWORD *)v17 = a3;
  }
  if ( v10 )
  {
    v18 = *(_QWORD *)(v17 + 8);
    if ( !(32LL * *(_QWORD *)(v17 + 16)) )
      goto LABEL_50;
    while ( 1 )
    {
      v19 = sub_29EAB0(v9, v18);
      v20 = *(_QWORD *)(v17 + 8) + 32LL * *(_QWORD *)(v17 + 16);
      if ( !v19 )
        break;
      v18 += 32;
      if ( v18 == v20 )
        goto LABEL_50;
    }
    if ( v18 == v20 )
    {
LABEL_50:
      v67[0] = 0;
      sub_29FB30((__int64)v67, &v63);
      v68 = 0;
      copy_tinfo_t(&v68, &v65);
      v69 = v66;
      v42 = *(_QWORD *)(v17 + 16);
      v43 = *(_QWORD *)(v17 + 24);
      if ( v43 < v42 + 1 )
      {
        v45 = qvector_reserve(v17 + 8, 0, v42 + 1, 32);
        v46 = *(_QWORD *)(v17 + 24);
        v47 = *(_QWORD *)(v17 + 16);
        *(_QWORD *)(v17 + 24) = v43;
        v56 = v45;
        v48 = *(_QWORD *)(v17 + 8);
        v59 = v46;
        v49 = v47 - 1;
        if ( v49 >= 0 )
        {
          v50 = v45;
          do
          {
            *(_DWORD *)v50 = 0;
            sub_29FB30(v50, (unsigned int *)v48);
            *(_QWORD *)(v50 + 16) = 0;
            copy_tinfo_t(v50 + 16, v48 + 16);
            v50 += 32;
            *(_QWORD *)(v50 - 8) = *(_QWORD *)(v48 + 24);
            clear_tinfo_t(v48 + 16);
            v51 = v48;
            v48 += 32;
            sub_29EFF0(v51);
            v40 = v49-- == 0;
          }
          while ( !v40 );
          v48 = *(_QWORD *)(v17 + 8);
        }
        qfree(v48);
        v42 = *(_QWORD *)(v17 + 16);
        *(_QWORD *)(v17 + 8) = v56;
        *(_QWORD *)(v17 + 24) = v59;
      }
      else
      {
        v56 = *(_QWORD *)(v17 + 8);
      }
      *(_DWORD *)(32 * v42 + v56) = 0;
      v44 = 32 * v42 + v56;
      sub_29FB30(v44, v67);
      *(_QWORD *)(v44 + 16) = 0;
      copy_tinfo_t(v44 + 16, &v68);
      *(_QWORD *)(v44 + 24) = v69;
      ++*(_QWORD *)(v17 + 16);
      clear_tinfo_t(&v68);
      sub_29EFF0((__int64)v67);
    }
    else
    {
      ++*(_DWORD *)(v18 + 24);
    }
  }
  v21 = *(_DWORD *)(v9 + 4);
  if ( (v21 & 2) != 0 )
  {
    *(_DWORD *)(v17 + 32) += a5;
    v21 = *(_DWORD *)(v9 + 4);
  }
  else if ( (v21 & 1) != 0 )
  {
    *(_DWORD *)(v17 + 36) += a5;
    v21 = *(_DWORD *)(v9 + 4);
  }
  *(_DWORD *)(v17 + 40) |= v21;
  clear_tinfo_t(&v65);
  sub_29EFF0((__int64)&v63);
LABEL_21:
  clear_tinfo_t(&v61);
  return v70 - __readfsqword(0x28u);
}
