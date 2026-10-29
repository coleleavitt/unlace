__int64 __fastcall sub_B59DA0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // esi
  __int64 *v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rdi
  __int64 *i; // rax
  __int64 v18; // r12
  void *v19; // r13
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // r13
  __m128 v27; // kr00_16
  unsigned int *v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // r15d
  bool v33; // zf
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // r14d
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // r14d
  __int64 v42; // rax
  unsigned int *v43; // rsi
  __int64 v44; // rdi
  __int64 result; // rax
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // [rsp+10h] [rbp-A0h]
  __int64 v52; // [rsp+18h] [rbp-98h]
  __int64 v53; // [rsp+20h] [rbp-90h]
  __int64 v54; // [rsp+28h] [rbp-88h]
  __int64 v55; // [rsp+28h] [rbp-88h]
  __int64 v56; // [rsp+28h] [rbp-88h]
  __int64 v57; // [rsp+30h] [rbp-80h]
  __int64 v58; // [rsp+30h] [rbp-80h]
  int v59; // [rsp+30h] [rbp-80h]
  unsigned int v60; // [rsp+30h] [rbp-80h]
  unsigned int *v61; // [rsp+38h] [rbp-78h]
  unsigned int v62[4]; // [rsp+40h] [rbp-70h] BYREF
  __m128 v63; // [rsp+50h] [rbp-60h] BYREF
  __int64 v64; // [rsp+60h] [rbp-50h]
  _QWORD v65[9]; // [rsp+68h] [rbp-48h] BYREF

  v53 = *(_QWORD *)a1;
  v7 = sub_15E1B70(*(_QWORD *)(a1 + 40));
  v61 = (unsigned int *)v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = *(_QWORD *)a1;
  v9 = *(_DWORD *)(a2 + 12);
  v63 = (__m128)(unsigned __int64)a2;
  v10 = *(__int64 **)(a1 + 192);
  v52 = v8;
  v11 = *(unsigned int *)(a1 + 200);
  v64 = 0;
  v12 = v11 - 1;
  v65[0] = 1;
  v11 *= 40;
  v65[1] = 0;
  v13 = 5LL * (v9 & v12);
  v14 = (__int64 *)((char *)v10 + v11);
  v15 = 8 * v13;
  v16 = &v10[(unsigned __int64)v15 / 8];
  if ( v15 != v11 )
  {
    for ( i = &v10[(unsigned __int64)v15 / 8]; v14 != i; i += 5 )
    {
      v18 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v9 && a2 == v18 )
        {
          LODWORD(v18) = (_DWORD)i;
          goto LABEL_10;
        }
      }
      else if ( !v18 )
      {
        goto LABEL_10;
      }
    }
  }
  if ( v10 == v16 )
  {
LABEL_51:
    LODWORD(v18) = 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = *v10;
        if ( (unsigned __int64)*v10 > 1 )
          break;
        if ( !v18 )
          goto LABEL_10;
        v10 += 5;
        if ( v16 == v10 )
          goto LABEL_51;
      }
      if ( *(_DWORD *)(v18 + 12) == v9 && a2 == v18 )
        break;
      v10 += 5;
      if ( v16 == v10 )
        goto LABEL_51;
    }
    LODWORD(v18) = (_DWORD)v10;
  }
LABEL_10:
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v63.m128_u16[4]);
  sub_182CBA0(v19, v65);
  v23 = *(_QWORD *)(a1 + 24);
  v24 = v18 + 8;
  if ( !v23 )
  {
    sub_16669E0(a1 + 16);
    v23 = *(_QWORD *)(a1 + 24);
    v24 = v18 + 8;
  }
  v25 = sub_166A700(v23, v24, 1, v20, v21, v22);
  v26 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  sub_B595A0(&v63, (__int64 *)a1, a2, a3);
  v27 = v63;
  v28 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 16));
  v54 = *(_QWORD *)a1;
  if ( v28 )
    ++v28[2];
  v29 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v30 = *(_QWORD *)(v29 + 8656);
  if ( !v30 || (v31 = *v28, (unsigned int)v31 >= *(_DWORD *)(v30 - 4)) || !*(_QWORD *)(v30 + 8 * v31) )
  {
    sub_B6F780(v29);
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  }
  v32 = sub_B645B0(v29, v28);
  v57 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v57 + 7488) + 48LL))(
    *(_QWORD *)(v57 + 7488),
    *(_QWORD *)(*(_QWORD *)(v57 + 8840) + 8LL * (v32 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v57 + 7488) + 64LL))(*(_QWORD *)(v57 + 7488));
  v33 = v28[2]-- == 1;
  if ( v33 )
    sub_15D7BC0(v54, v28);
  v55 = *(_QWORD *)a1;
  if ( v27.m128_u64[0] )
    ++*(_DWORD *)(v27.m128_u64[0] + 8);
  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v35 = *(_QWORD *)(v34 + 8656);
  if ( !v35
    || (v36 = *(unsigned int *)v27.m128_u64[0], (unsigned int)v36 >= *(_DWORD *)(v35 - 4))
    || !*(_QWORD *)(v35 + 8 * v36) )
  {
    sub_B6F780(v34);
    v34 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  }
  v37 = sub_B645B0(v34, v27.m128_u64[0]);
  v58 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v58 + 7488) + 48LL))(
    *(_QWORD *)(v58 + 7488),
    *(_QWORD *)(*(_QWORD *)(v58 + 8840) + 8LL * (v37 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v58 + 7488) + 64LL))(*(_QWORD *)(v58 + 7488));
  v33 = (*(_DWORD *)(v27.m128_u64[0] + 8))-- == 1;
  if ( v33 )
    sub_15D7BC0(v55, v27.m128_u64[0]);
  v59 = v37 ^ 1;
  v51 = *(_QWORD *)a1;
  if ( v61 )
    ++v61[2];
  v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v39 = *(_QWORD *)(v38 + 8656);
  if ( !v39 || (v40 = *v61, (unsigned int)v40 >= *(_DWORD *)(v39 - 4)) || !*(_QWORD *)(v39 + 8 * v40) )
  {
    sub_B6F780(v38);
    v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  }
  v41 = sub_B645B0(v38, v61);
  v42 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v56 = v42;
  v43 = *(unsigned int **)(*(_QWORD *)(v42 + 8840) + 8LL * (v41 >> 1));
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v42 + 7488) + 48LL))(*(_QWORD *)(v42 + 7488), v43);
  v44 = *(_QWORD *)(v56 + 7488);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 64LL))(v44);
  LODWORD(v56) = v61[2];
  v61[2] = v56 - 1;
  if ( (_DWORD)v56 == 1 )
  {
    v44 = v51;
    v43 = v61;
    sub_15D7BC0(v51, v61);
  }
  v62[2] = v32;
  v62[0] = v41 ^ 1;
  v62[1] = v59;
  if ( (unsigned int)sub_180B130(v44) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v46 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v47 = sub_180B150(v44, v43);
      v48 = sub_AA55A0(v46, v47, 3, v62);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v48, "\n");
    }
    else
    {
      v49 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v50 = sub_180B150(v44, v43);
      sub_AA55A0(v49, v50, 3, v62);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_B69FE0(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
    3,
    (unsigned int)v62,
    0,
    0,
    1);
  v33 = (*(_DWORD *)(v27.m128_u64[0] + 8))-- == 1;
  if ( v33 )
    sub_15D7BC0(v27.m128_u64[1], v27.m128_u64[0]);
  if ( v26 )
  {
    v33 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v52, v26);
  }
  v60 = v61[2];
  result = v60 - 1;
  v61[2] = result;
  if ( v60 == 1 )
    return sub_15D7BC0(v53, v61);
  return result;
}

