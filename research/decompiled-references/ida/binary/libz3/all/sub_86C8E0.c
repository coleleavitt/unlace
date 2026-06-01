void __fastcall sub_86C8E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned int v8; // eax
  bool v9; // zf
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int *v15; // rax
  unsigned int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int v26; // [rsp+8h] [rbp-C0h]
  unsigned int v27; // [rsp+18h] [rbp-B0h]
  void *v28; // [rsp+20h] [rbp-A8h]
  __int64 v29; // [rsp+28h] [rbp-A0h]
  __int64 v30; // [rsp+30h] [rbp-98h] BYREF
  __int64 v31; // [rsp+38h] [rbp-90h] BYREF
  __int64 v32; // [rsp+40h] [rbp-88h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h] BYREF
  __int64 v34; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-70h] BYREF
  __int64 v36; // [rsp+60h] [rbp-68h]
  _BYTE v37[8]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v39[9]; // [rsp+80h] [rbp-48h] BYREF

  v36 = a1[3] + 3904LL;
  sub_17F9A60(v37, "rewriter");
  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 40);
  v8 = sub_7E5090((__int64)a1, (unsigned int *)a2);
  sub_86BD80(a1, v8);
  if ( (unsigned __int8)sub_1859630(v36, "hi_div0", v37, 1) )
  {
    v9 = *(_QWORD *)(a3 + 16) == 0;
    v30 = v6;
    v31 = v7;
    if ( v9 )
      std::__throw_bad_function_call();
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(a3 + 24))(a3, &v30, &v31);
    v11 = sub_7E58D0((__int64)a1, a2, v10);
    sub_7E5160((__int64)a1, v11, nullptr, v12, v13, v14);
  }
  else
  {
    v15 = *(int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
    if ( *((_BYTE *)v15 + 8) )
      sub_DBF6E(0);
    v16 = *v15;
    v38[0] = 0;
    v38[1] = 0;
    v17 = a1[9];
    v39[0] = 1;
    v29 = v17;
    v39[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v39);
    BYTE4(v39[0]) &= ~1u;
    LODWORD(v39[0]) = 1;
    v18 = sub_1674520(a1 + 16, v38, v16);
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v38);
    sub_182CBA0(v28, v39);
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    v27 = sub_7E58D0((__int64)a1, v7, v18);
    v32 = v6;
    if ( !*(_QWORD *)(a4 + 16) )
      std::__throw_bad_function_call();
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(a4 + 24))(a4, &v32);
    v20 = sub_7E58C0((__int64)a1, v19);
    v9 = *(_QWORD *)(a3 + 16) == 0;
    v26 = v20;
    v33 = v6;
    v34 = v7;
    if ( v9 )
      std::__throw_bad_function_call();
    v21 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(a3 + 24))(a3, &v33, &v34);
    v22 = sub_7E58C0((__int64)a1, v21);
    sub_7E5400((__int64)a1, v27 ^ 1, v26, nullptr);
    sub_7E5400((__int64)a1, v27, v22, nullptr);
    v23 = a1[10] + 160LL;
    v35 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27 ^ 1), _mm_cvtsi32_si128(v26)).m128i_u64[0];
    sub_7F3170(v23, 2u, (unsigned int *)&v35);
    v24 = a1[10] + 160LL;
    v38[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v22)).m128i_u64[0];
    sub_7F3170(v24, 2u, (unsigned int *)v38);
    if ( v18 )
    {
      v9 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v9 )
        sub_15D7BC0(v29, v18);
    }
  }
  sub_18572D0(v37);
}

