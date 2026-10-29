__int64 __fastcall sub_BAF2C0(__int64 a1, __int64 a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 v5; // r12
  __int64 v7; // r13
  __int64 result; // rax
  _DWORD *v9; // rdx
  size_t v10; // r13
  int v11; // r9d
  int v12; // r15d
  char v13; // al
  int v14; // r9d
  __int64 v15; // rcx
  void *v16; // rdi
  void *v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int *v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rcx
  void *v30; // rdi
  void *v31; // r13
  __int64 v32; // [rsp-10h] [rbp-A0h]
  __int64 v33; // [rsp-10h] [rbp-A0h]
  __int64 v34; // [rsp-10h] [rbp-A0h]
  int v35; // [rsp-8h] [rbp-98h]
  int v36; // [rsp+0h] [rbp-90h]
  __int64 v37; // [rsp+0h] [rbp-90h]
  __int64 v38; // [rsp+0h] [rbp-90h]
  int v39; // [rsp+8h] [rbp-88h]
  int v40; // [rsp+8h] [rbp-88h]
  int v41; // [rsp+8h] [rbp-88h]
  int v42; // [rsp+10h] [rbp-80h]
  int v43; // [rsp+10h] [rbp-80h]
  __int64 v44; // [rsp+18h] [rbp-78h]
  __int64 *v45; // [rsp+18h] [rbp-78h]
  void *v46; // [rsp+18h] [rbp-78h]
  unsigned int *v47; // [rsp+18h] [rbp-78h]
  __int64 v48; // [rsp+18h] [rbp-78h]
  void *v49; // [rsp+18h] [rbp-78h]
  void *v50; // [rsp+18h] [rbp-78h]
  int v51[2]; // [rsp+20h] [rbp-70h] BYREF
  int v52[2]; // [rsp+28h] [rbp-68h] BYREF
  unsigned __int64 v53; // [rsp+30h] [rbp-60h] BYREF
  __int64 v54; // [rsp+38h] [rbp-58h] BYREF
  __int64 v55; // [rsp+40h] [rbp-50h] BYREF
  void *v56; // [rsp+48h] [rbp-48h]
  __int64 v57; // [rsp+50h] [rbp-40h] BYREF
  __int64 v58; // [rsp+58h] [rbp-38h]

  v5 = a1 + 56;
  v7 = sub_15D1F10(a2);
  result = sub_1625010(a1 + 56);
  v9 = *(_DWORD **)(v7 + 24);
  if ( !v9 )
    return result;
  if ( (_DWORD)result != *v9 )
    return result;
  if ( v9[1] != 1 )
    return result;
  v10 = sub_15D1F10(a2);
  result = sub_BAE160(a1, v10, (double *)v51, (double *)v52);
  if ( *(_QWORD *)v52 == *(_QWORD *)(a2 + 16) )
    return result;
  v12 = sub_15DC610(
          *(_QWORD *)(a1 + 24),
          v51[0],
          1,
          (int)&v55,
          v52[0],
          v11,
          v36,
          v39,
          v52[0],
          a2,
          v51[0],
          v52[0],
          v53,
          v54,
          a2,
          v56);
  v13 = sub_1625190(v5, v44, &v53);
  v15 = *(_QWORD *)(a1 + 24);
  v40 = v15;
  if ( v13 )
  {
    v55 = 0;
    v56 = nullptr;
    v57 = 1;
    v16 = qword_1C7F2C0;
    v58 = 0;
    if ( v53 > 0x7FFFFFFE )
    {
      v49 = qword_1C7F2C0;
      sub_182C550(qword_1C7F2C0, &v55);
      v16 = v49;
    }
    else
    {
      LODWORD(v55) = v53;
    }
    v45 = &v57;
    sub_182CBA0(v16, &v57);
    BYTE4(v57) &= ~1u;
    LODWORD(v57) = 1;
    sub_1674520(a1 + 88, &v55, 64);
    v17 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v55);
    sub_182CBA0(v17, &v57);
    v21 = (unsigned int *)sub_15E1B70(v40);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
      goto LABEL_12;
    v55 = 0;
    sub_966750(a1, (int)v21, -1, 0, 0, -1, (__int64 ***)&v55, v35, v37, v40, v42, &v57);
    if ( !v55 )
      goto LABEL_12;
  }
  else
  {
    sub_15DC610(v15, v42, 1, (int)&v55, v42, v14, v37, v15, v42, v44, v51[0], v52[0], v53, v54, v12, v56);
    v46 = (void *)sub_15E1B70(v41);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
    {
      v55 = 0;
      sub_966750(a1, (int)v46, -1, 0, 0, -1, (__int64 ***)&v55, v35, v38, v41, v43, v46);
      v27 = v33;
      if ( v55 )
        sub_186B220((void *)(v55 - 8));
    }
    sub_B6F780(
      *(_QWORD **)(a1 + 16),
      (__int64)v46,
      0,
      a3,
      a4,
      a5,
      v25,
      v26,
      v27,
      v38,
      v41,
      v43,
      (__int64)v46,
      *(__int64 *)v51,
      *(__int64 *)v52,
      v53);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
      std::__ostream_insert<char,std::char_traits<char>>();
    v28 = sub_B645B0(*(_QWORD *)(a1 + 16), v47);
    v29 = *(_QWORD *)(a1 + 16);
    LODWORD(v55) = v28;
    v48 = v29;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v29 + 7488) + 48LL))(
      *(_QWORD *)(v29 + 7488),
      *(_QWORD *)(*(_QWORD *)(v29 + 8840) + 8LL * (v28 >> 1)));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v48 + 7488) + 64LL))(*(_QWORD *)(v48 + 7488));
    sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int *)&v55, 0, 0, 1u);
    if ( !(unsigned __int8)sub_16256D0(v5, v10, &v54) )
    {
      sub_1872CE0("");
      sub_1873130(114, 244);
    }
    v55 = 0;
    v56 = nullptr;
    v57 = 1;
    v30 = qword_1C7F2C0;
    v58 = 0;
    if ( (unsigned __int64)(v54 - 1) > 0x7FFFFFFE )
    {
      v50 = qword_1C7F2C0;
      sub_182C550(qword_1C7F2C0, &v55);
      v30 = v50;
    }
    else
    {
      LODWORD(v55) = v54 - 1;
    }
    v45 = &v57;
    sub_182CBA0(v30, &v57);
    BYTE4(v57) &= ~1u;
    LODWORD(v57) = 1;
    sub_1674520(a1 + 88, &v55, 64);
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v55);
    sub_182CBA0(v31, &v57);
    v21 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 96));
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
      goto LABEL_12;
    v55 = 0;
    sub_966750(a1, (int)v21, -1, 0, 0, -1, (__int64 ***)&v55, v35, v37, v40, v42, &v57);
    v18 = v34;
    if ( !v55 )
      goto LABEL_12;
  }
  sub_186B220((void *)(v55 - 8));
LABEL_12:
  sub_B6F780(
    *(_QWORD **)(a1 + 16),
    (__int64)v21,
    0,
    a3,
    a4,
    a5,
    v18,
    v19,
    v20,
    v37,
    v40,
    v42,
    (__int64)v45,
    *(__int64 *)v51,
    *(__int64 *)v52,
    v53);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
    std::__ostream_insert<char,std::char_traits<char>>();
  v22 = sub_B645B0(*(_QWORD *)(a1 + 16), v21);
  v23 = *(_QWORD *)(a1 + 16);
  LODWORD(v55) = v22;
  v24 = v23;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 7488) + 48LL))(
    *(_QWORD *)(v23 + 7488),
    *(_QWORD *)(*(_QWORD *)(v23 + 8840) + 8LL * (v22 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v24 + 7488) + 64LL))(*(_QWORD *)(v24 + 7488));
  sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int *)&v55, 0, 0, 1u);
  return v32;
}

