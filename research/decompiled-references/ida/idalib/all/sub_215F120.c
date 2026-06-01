_QWORD *__fastcall sub_215F120(_QWORD *a1, void **a2, unsigned int a3, __int64 (__fastcall **a4)(), __int64 a5)
{
  void **v5; // r15
  __int64 (__fastcall **v9)(void **); // rax
  char *v10; // rcx
  __int64 v11; // r13
  void ***v12; // rdx
  void ***v13; // r12
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rax
  void **v16; // rdx
  const char *v17; // rax
  __m128i v18; // xmm1
  void ***v19; // rdi
  __int64 v20; // rsi
  unsigned int v21; // r8d
  void (__fastcall *v22)(__int64, void **); // r8
  __int64 v23; // rbp
  __int64 *v24; // rdi
  __int64 v26; // r12
  void **v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-D0h]
  __int64 v38; // [rsp+8h] [rbp-D0h]
  const char *v39; // [rsp+10h] [rbp-C8h] BYREF
  __int64 (__fastcall **v40)(); // [rsp+18h] [rbp-C0h]
  void *v41[2]; // [rsp+20h] [rbp-B8h] BYREF
  _DWORD v42[4]; // [rsp+30h] [rbp-A8h] BYREF
  void *v43[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v44; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-80h]
  __m128i v46; // [rsp+60h] [rbp-78h] BYREF
  __int128 v47; // [rsp+70h] [rbp-68h]
  __int64 v48; // [rsp+80h] [rbp-58h]
  char v49; // [rsp+88h] [rbp-50h]
  int v50; // [rsp+8Ch] [rbp-4Ch]
  void **v51; // [rsp+90h] [rbp-48h]

  v5 = a2;
  v9 = (__int64 (__fastcall **)(void **))*a2;
  v40 = a4;
  v11 = v9[45](a2);
  v13 = v12;
  v14 = *((__int64 (__fastcall **)(__int64))*a2 + 44);
  if ( v14 == sub_215DFD0 )
  {
    v15 = (__int64)a2[11];
  }
  else
  {
    v15 = v14((__int64)a2);
    a2 = v27;
  }
  v46.m128i_i64[0] = v15;
  v16 = v43;
  v17 = (const char *)v11;
  v46.m128i_i64[1] = (__int64)a2;
  v18 = _mm_load_si128(&v46);
  *((_QWORD *)&v47 + 1) = v13;
  *(__m128i *)v43 = v18;
  v19 = (void ***)v18.m128i_i64[1];
  *(_QWORD *)&v47 = v11;
LABEL_4:
  if ( v19 == v13 )
    goto LABEL_9;
  do
  {
    do
    {
      v20 = *((unsigned int *)v43[0] + 3);
      v21 = *((_DWORD *)v43[0] + 2);
      if ( v21 + (unsigned int)v20 > a3 && (unsigned int)v20 <= a3 )
      {
        v28 = *((_DWORD *)v43[0] + 4);
        if ( v21 > v28 && (unsigned int)v20 + v28 <= a3 )
        {
          v29 = operator new((unsigned __int64)&qword_18);
          *(_DWORD *)(v29 + 8) = 0;
          v30 = v29;
          *(_QWORD *)(v29 + 16) = std::_V2::system_category((std::_V2 *)&qword_18);
          *(_QWORD *)v30 = off_2BE9688;
          v33 = sub_2195B10(&qword_18, v20, v31, v32);
          *(_DWORD *)(v30 + 8) = 3;
          *(_QWORD *)(v30 + 16) = v33;
          *(_QWORD *)v30 = off_2C738A0;
          v36 = sub_2195B10(&qword_18, v20, v34, v35);
          *(_DWORD *)(v30 + 8) = 9;
          *(_QWORD *)(v30 + 16) = v36;
          *a1 = v30;
        }
        else
        {
          *v40 = (__int64 (__fastcall *)())((char *)v5[2] + a3 - (unsigned int)v20 + *((unsigned int *)v43[0] + 5));
          *a1 = 0;
        }
        return a1;
      }
      a2 = *v19;
      v22 = (void (__fastcall *)(__int64, void **))(*v19)[17];
      if ( (char *)v22 != (char *)sub_215DF60 )
      {
        v39 = v17;
        a2 = v43;
        v22((__int64)v19, v43);
        v19 = (void ***)v43[1];
        v17 = v39;
        goto LABEL_4;
      }
      v10 = (char *)v43[0] + 40;
      v43[0] = (char *)v43[0] + 40;
    }
    while ( v19 != v13 );
LABEL_9:
    ;
  }
  while ( v43[0] != v17 );
  if ( a5 )
  {
    v37 = sub_2195B10(v19, a2, v16, v10);
    v47 = 0;
    v41[0] = v42;
    v46.m128i_i64[0] = (__int64)&off_2BEBE68;
    v40 = &off_2BEBE68;
    v41[1] = nullptr;
    LOBYTE(v42[0]) = 0;
    v46.m128i_i32[2] = 0;
    v49 = 0;
    v50 = 1;
    v48 = 0;
    v51 = v41;
    sub_227B8B0(&v46, 0, 0, 0);
    v44 = a5;
    v45 = a3;
    v39 = "RVA 0x%x for %s not found";
    *(__m128 *)v43 = _mm_loadh_ps((const double *)&v39);
    sub_227C560(&v46, v43);
    v46.m128i_i64[0] = (__int64)v40;
    sub_227B7A0(&v46);
    v46.m128i_i64[0] = (__int64)v41;
    LOWORD(v48) = 260;
    v23 = operator new(0x40u);
    sub_2220590(v23, &v46, 3, v37);
    v24 = (__int64 *)v41[0];
    *a1 = v23;
    if ( v24 != (__int64 *)v42 )
      goto LABEL_12;
  }
  else
  {
    v38 = sub_2195B10(v19, a2, v16, v10);
    v47 = 0;
    v43[0] = &v44;
    v51 = v43;
    v43[1] = nullptr;
    LOBYTE(v44) = 0;
    v46.m128i_i32[2] = 0;
    v49 = 0;
    v50 = 1;
    v48 = 0;
    v46.m128i_i64[0] = (__int64)&off_2BEBE68;
    sub_227B8B0(&v46, 0, 0, 0);
    v42[0] = a3;
    v39 = "RVA 0x%x not found";
    *(__m128 *)v41 = _mm_loadh_ps((const double *)&v39);
    sub_227C560(&v46, v41);
    v46.m128i_i64[0] = (__int64)&off_2BEBE68;
    sub_227B7A0(&v46);
    v46.m128i_i64[0] = (__int64)v43;
    LOWORD(v48) = 260;
    v26 = operator new(0x40u);
    sub_2220590(v26, &v46, 3, v38);
    v24 = (__int64 *)v43[0];
    *a1 = v26;
    if ( v24 != &v44 )
LABEL_12:
      operator delete(v24);
  }
  return a1;
}
