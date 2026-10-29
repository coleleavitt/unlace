__int64 __fastcall sub_99C220(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  void *v4; // r13
  void *v5; // r15
  _DWORD *v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  bool v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rdi
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  void *v26; // rbx
  void *v27; // rbx
  __int64 v29; // rbx
  int v30; // [rsp-8h] [rbp-E8h]
  int v31; // [rsp+0h] [rbp-E0h]
  int v32; // [rsp+8h] [rbp-D8h]
  int v33; // [rsp+Ch] [rbp-D4h]
  __int64 *v34; // [rsp+10h] [rbp-D0h]
  __int64 v35; // [rsp+10h] [rbp-D0h]
  int *v36; // [rsp+18h] [rbp-C8h]
  int v37[2]; // [rsp+28h] [rbp-B8h]
  int v38[2]; // [rsp+28h] [rbp-B8h]
  __int64 v39; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+48h] [rbp-98h]
  int v42; // [rsp+50h] [rbp-90h] BYREF
  char v43; // [rsp+54h] [rbp-8Ch]
  __int64 v44; // [rsp+58h] [rbp-88h]
  int v45; // [rsp+60h] [rbp-80h] BYREF
  char v46; // [rsp+64h] [rbp-7Ch]
  __int64 v47; // [rsp+68h] [rbp-78h]
  int v48; // [rsp+70h] [rbp-70h] BYREF
  char v49; // [rsp+74h] [rbp-6Ch]
  __int64 v50; // [rsp+78h] [rbp-68h]
  int v51; // [rsp+80h] [rbp-60h] BYREF
  char v52; // [rsp+84h] [rbp-5Ch]
  __int64 v53; // [rsp+88h] [rbp-58h]
  _QWORD v54[2]; // [rsp+90h] [rbp-50h] BYREF
  __m128i v55; // [rsp+A0h] [rbp-40h]

  ++*(_DWORD *)(a1 + 212);
  *(_QWORD *)v37 = *(_QWORD *)(a1 + 24);
  v3 = sub_999800(a1, a2);
  v46 &= 0xFCu;
  v43 &= 0xFCu;
  v4 = qword_1C7F2C0;
  v42 = 0;
  v44 = 0;
  v45 = 1;
  v47 = 0;
  sub_1849700(qword_1C7F2C0, v3, &v42);
  v36 = &v45;
  sub_182CBA0(v4, &v45);
  v46 &= ~1u;
  v5 = qword_1C7F2C0;
  v49 &= 0xFCu;
  v52 &= 0xFCu;
  v45 = 1;
  v48 = 0;
  v50 = 0;
  v51 = 1;
  v53 = 0;
  if ( (v43 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v48, &v42);
  else
    v48 = v42;
  if ( (v46 & 1) != 0 )
  {
    sub_182C690(v5, &v51, &v45);
  }
  else
  {
    v52 &= ~1u;
    v51 = v45;
  }
  v40 = 0;
  v41 = *(_QWORD *)v37;
  v6 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2)) + 24);
  v10 = 0;
  if ( v6 && *v6 == 5 )
    v10 = v6[1] == 1;
  v11 = *(_QWORD *)(a1 + 352);
  if ( !v11 )
  {
    sub_16669E0(a1 + 344);
    v11 = *(_QWORD *)(a1 + 352);
  }
  sub_166A700(v11, (unsigned int)&v48, v10, v7, v8, v9);
  v12 = sub_15E1B70(*(_QWORD *)(a1 + 344));
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v14 = v40;
  if ( v40 )
  {
    v15 = v41;
    v16 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v16 )
    {
      v35 = v12;
      sub_15D7BC0(v15, v14);
      v13 = v35;
    }
  }
  v17 = *(_QWORD *)(a1 + 24);
  v18 = *(_QWORD *)(a1 + 16);
  v40 = v13;
  v34 = &v40;
  v19 = *(_QWORD *)v37;
  v54[1] = &v40;
  v16 = *(_QWORD *)(v17 + 912) == 0;
  v54[0] = *(_QWORD *)v37;
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C564F8), (__m128i)(unsigned __int64)sub_98E080);
  v55 = v20;
  if ( !v16 )
  {
    sub_15E1A70(v37[0]);
    v21 = sub_15E1B70(v37[0]);
    *(_QWORD *)v38 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v14 = v21;
    v39 = 0;
    sub_966750(a1, v21, -1, 0, 0, -1, (__int64 ***)&v39, v30, v31, v32, (int)&v40, &v45);
    v19 = v39;
    if ( v39 )
    {
      v19 = v39 - 8;
      sub_186B220((void *)(v39 - 8));
    }
    if ( *(_QWORD *)v38 )
    {
      v33 = *(_DWORD *)(*(_QWORD *)v38 + 8LL);
      *(_DWORD *)(*(_QWORD *)v38 + 8LL) = v33 - 1;
      if ( v33 == 1 )
      {
        v14 = *(_QWORD *)v38;
        v19 = v17;
        sub_15D7BC0(v17, *(_QWORD *)v38);
      }
    }
  }
  if ( (unsigned int)sub_180B130(v19) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)v20.m128i_i64) )
    {
      sub_186A4C0(*(double *)v20.m128i_i64);
      v22 = sub_180B150(v19, v14);
      std::__ostream_insert<char,std::char_traits<char>>();
      v23 = sub_160EBE0(v22, v34);
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v23, "\n");
    }
    else
    {
      v29 = sub_180B150(v19, v14);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160EBE0(v29, v34);
      std::operator<<<std::char_traits<char>>();
    }
  }
  sub_B6F780(v18);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v18 + 7488) + 48LL))(*(_QWORD *)(v18 + 7488), v40);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 7488) + 64LL))(*(_QWORD *)(v18 + 7488));
  if ( *(_QWORD *)(v17 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  if ( v55.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v55.m128i_i64[0])(v54, v54, 3);
  v24 = v40;
  if ( v40 )
  {
    v25 = v41;
    v16 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v25, v24);
  }
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v48);
  sub_182CBA0(v26, &v51);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v42);
  return sub_182CBA0(v27, v36);
}

