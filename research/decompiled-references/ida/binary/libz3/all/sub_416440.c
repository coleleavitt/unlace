__int64 __fastcall sub_416440(__int64 *a1, char *a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned int i; // r12d
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  _BOOL8 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rsi
  int v34; // edx
  __int16 v35; // ax
  bool v36; // zf
  __int16 v37; // dx
  __int64 v38; // rdi
  __int64 v39; // r13
  __int64 v40; // rdi
  __int64 v41; // rsi
  std::ostream *v42; // rdi
  __int64 v43; // r13
  __int64 v44; // rdi
  __int64 v45; // rsi
  std::ostream *v46; // rax
  void *v47; // [rsp+0h] [rbp-C8h]
  _BYTE v49[8]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v50; // [rsp+40h] [rbp-88h] BYREF
  __int64 v51; // [rsp+48h] [rbp-80h] BYREF
  __int64 v52; // [rsp+50h] [rbp-78h] BYREF
  __int64 v53; // [rsp+58h] [rbp-70h] BYREF
  int v54[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v55; // [rsp+68h] [rbp-60h]
  int v56[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v57; // [rsp+78h] [rbp-50h]
  __int64 v58; // [rsp+80h] [rbp-48h] BYREF
  __int64 v59; // [rsp+88h] [rbp-40h]

  v4 = sub_180B150(a1, a2);
  sub_1841000(v49, 0, "spacer::derivation::create_next_child", v4);
  v5 = *a1;
  v6 = a1[2];
  v53 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL);
  v55 = 0;
  v52 = v7;
  *(_QWORD *)v54 = v7;
  if ( !v6 )
    goto LABEL_8;
  v8 = *((_DWORD *)a1 + 6);
  while ( v8 < *(_DWORD *)(v6 - 4) )
  {
    v9 = v6 + 56LL * v8;
    if ( !*(_BYTE *)(v9 + 32) )
      break;
    v10 = *(_QWORD *)(v9 + 16);
    v50 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    sub_407600((unsigned int **)&v53, &v50);
    sub_3EE030((__int64)v54, a1[2] + 56LL * *((unsigned int *)a1 + 6) + 40);
    v6 = a1[2];
    v8 = *((_DWORD *)a1 + 6) + 1;
    *((_DWORD *)a1 + 6) = v8;
    if ( !v6 )
      goto LABEL_8;
  }
  if ( v8 >= *(_DWORD *)(v6 - 4) )
    goto LABEL_8;
  v13 = a1[4];
  v51 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_407600((unsigned int **)&v53, &v51);
  sub_41C800(&v58, &v52);
  v14 = a1[4];
  v15 = v59;
  a1[4] = v58;
  sub_3FCDF0(v14, v15);
  sub_2FCDE0(&v52);
  if ( v55 && *(_DWORD *)(v55 - 4) )
  {
    v16 = sub_180B150(&v52, v15);
    sub_1841000(&v58, 0, "create_next_child::qproject1", v16);
    sub_3EE030((__int64)v54, (__int64)(a1 + 6));
    sub_41D160(a1 + 6);
    sub_3FF2A0(
      *(_QWORD *)(*a1 + 16),
      (__int64 *)v54,
      a1 + 4,
      a2,
      1u,
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 16LL) + 662LL));
    sub_3EE030((__int64)(a1 + 6), (__int64)v54);
    sub_41D160(v54);
    sub_18410E0(&v58);
  }
  v17 = *(_QWORD *)(a1[2] + 56LL * *((unsigned int *)a1 + 6) + 16);
  if ( !(unsigned __int8)sub_1374270(a2, v17) )
  {
    if ( (unsigned int)sub_180B130(a2) )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v31 = sub_180B150(a2, v17);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v31, "Summary unexpectendly not true\n");
      }
      else
      {
        sub_180B150(a2, v17);
        std::operator<<<std::char_traits<char>>();
      }
    }
LABEL_8:
    v11 = 0;
    goto LABEL_9;
  }
  v18 = a1[2];
  for ( i = *((_DWORD *)a1 + 6) + 1; v18; ++i )
  {
    if ( i >= *(_DWORD *)(v18 - 4) )
      break;
    v20 = 56LL * i;
    v21 = *(_QWORD *)(v18 + v20 + 16);
    *(_QWORD *)v56 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    sub_407600((unsigned int **)&v53, v56);
    sub_3EE030((__int64)v54, v20 + a1[2] + 40);
    v18 = a1[2];
  }
  v22 = a1[4];
  v58 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  sub_407600((unsigned int **)&v53, &v58);
  v57 = v7;
  *(_QWORD *)v56 = 0;
  sub_41C800(&v58, &v52);
  v23 = *(_QWORD *)v56;
  *(_QWORD *)v56 = v58;
  sub_3FCDF0(v23, v59);
  sub_2FCDE0(&v52);
  if ( v55 && (v24 = *(unsigned int *)(v55 - 4), (_DWORD)v24) )
  {
    v25 = sub_180B150(&v52, v24);
    sub_1841000(&v58, 0, "create_next_child::qproject2", v25);
    sub_3EE030((__int64)v54, (__int64)(a1 + 6));
    sub_3FF2A0(
      *(_QWORD *)(*a1 + 16),
      (__int64 *)v54,
      (__int64 *)v56,
      a2,
      1u,
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 16LL) + 662LL));
    sub_18410E0(&v58);
    v28 = v55;
    if ( !v55 )
    {
LABEL_27:
      v29 = 1;
      v30 = **(_QWORD **)(*a1 + 16);
      goto LABEL_36;
    }
  }
  else
  {
    sub_3EE030((__int64)v54, (__int64)(a1 + 6));
    v28 = v55;
    if ( !v55 )
      goto LABEL_27;
  }
  v32 = *(_DWORD *)(v28 - 4);
  if ( v32 )
  {
    sub_415F80((int)a1, v56[0], (int)v54, (int)v56, v26, v27, v47, (__int64)&v53);
    v30 = **(_QWORD **)(*a1 + 16);
    if ( !v55 )
    {
      v29 = 1;
      goto LABEL_36;
    }
    v32 = *(_DWORD *)(v55 - 4);
  }
  else
  {
    v30 = **(_QWORD **)(*a1 + 16);
  }
  v29 = v32 == 0;
LABEL_36:
  sub_43D1D0(
    v30 + 8,
    *(_QWORD *)v56,
    (unsigned int)(*(_DWORD *)(a1[2] + 56LL * *((unsigned int *)a1 + 6) + 8) + 1),
    0,
    v56,
    v29);
  v33 = *a1;
  v34 = *(unsigned __int16 *)(*a1 + 72);
  v35 = (v34 == 0) + *(_WORD *)(*a1 + 72) - 1;
  v36 = v34 == 0xFFFF;
  v37 = -1;
  if ( !v36 )
    v37 = v35;
  v38 = *(_QWORD *)(a1[2] + 56LL * *((unsigned int *)a1 + 6)) + 136LL;
  v11 = sub_405720(v38, v33, v37, *(_WORD *)(*a1 + 74), *(__int64 *)v56, (__int64)v54);
  if ( (unsigned int)sub_180B130(v38) )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v39 = sub_180B150(v38, v33);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v39, *(const char **)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 24LL) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v40 = std::operator<<<std::char_traits<char>>();
      v41 = **(unsigned int **)(v11 + 24);
      std::ostream::_M_insert<unsigned long>();
      v42 = (std::ostream *)sub_180B150(v40, v41);
      std::ostream::flush(v42);
      sub_186A500(v42, v41);
    }
    else
    {
      v43 = sub_180B150(v38, v33);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v43, *(const char **)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 24LL) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v44 = std::operator<<<std::char_traits<char>>();
      v45 = **(unsigned int **)(v11 + 24);
      std::ostream::_M_insert<unsigned long>();
      v46 = (std::ostream *)sub_180B150(v44, v45);
      std::ostream::flush(v46);
    }
  }
  sub_3FCDF0(*(__int64 *)v56, v57);
LABEL_9:
  sub_2B4F40((__int64 *)v54);
  sub_2334C0(&v52);
  sub_18410E0(v49);
  return v11;
}

