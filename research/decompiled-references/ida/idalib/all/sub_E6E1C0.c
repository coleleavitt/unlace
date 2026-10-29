void __fastcall sub_E6E1C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  size_t v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r14
  unsigned __int64 *v22; // rax
  unsigned __int64 *v23; // rbx
  unsigned __int64 v24; // rax
  char *v25; // rbx
  size_t v26; // rax
  char *v27; // rbp
  char *v28; // rdi
  void **v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  _QWORD *v36; // rdi
  __int64 v37; // rcx
  void **v38; // [rsp+8h] [rbp-B0h] BYREF
  void *v39[2]; // [rsp+10h] [rbp-A8h] BYREF
  void *v40; // [rsp+20h] [rbp-98h]
  __m128 v41; // [rsp+30h] [rbp-88h] BYREF
  int v42; // [rsp+40h] [rbp-78h]
  unsigned __int64 v43; // [rsp+50h] [rbp-68h] BYREF
  __m128 v44; // [rsp+58h] [rbp-60h]
  void *v45; // [rsp+68h] [rbp-50h]

  v3 = a1 + 1048;
  sub_E5B230(a1, a2);
  v8 = sub_BAB630(a2, a2, v4, v5, v6, v7);
  sub_E673B0((__int64)&v41, a1, v8);
  LOWORD(v43) = 7;
  v44 = v41;
  v41 = 0u;
  LODWORD(v45) = v42;
  v42 = 0;
  v9 = j__strlen("super");
  sub_222AB70(a1 + 1048, "super", v9);
  sub_222CAC0(a1 + 1048, &v43);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v43);
  sub_E5D2E0((__int64 *)&v41);
  v14 = sub_BAC6C0(a2, (__int64)&v43, v10, v11, v12, v13);
  sub_E673B0((__int64)&v41, a1, v14);
  LOWORD(v43) = 7;
  v15 = v41.m128_u64[1];
  v44.m128_u64[0] = v41.m128_u64[0];
  v41 = 0u;
  v44.m128_u64[1] = v15;
  LODWORD(v15) = v42;
  v42 = 0;
  LODWORD(v45) = v15;
  v16 = j__strlen("implementation");
  sub_222AB70(a1 + 1048, "implementation", v16);
  sub_222CAC0(a1 + 1048, &v43);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v43);
  sub_E5D2E0((__int64 *)&v41);
  v19 = *(_QWORD *)(a2 + 120);
  v40 = nullptr;
  *(_OWORD *)v39 = 0;
  if ( v19 )
  {
LABEL_2:
    v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (*(_BYTE *)(v20 + 72) & 1) == 0 )
      {
        v21 = *(_QWORD *)(v20 + 16) + 8LL * *(unsigned int *)(v20 + 24);
LABEL_5:
        if ( (*(_BYTE *)(v20 + 72) & 1) != 0 )
        {
          sub_BA8900(a2);
          v20 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v22 = *(unsigned __int64 **)(v20 + 16);
        goto LABEL_8;
      }
      sub_BA8900(a2);
      v20 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      v21 = *(_QWORD *)(v20 + 16) + 8LL * *(unsigned int *)(v20 + 24);
      if ( *(_QWORD *)(a2 + 120) )
        goto LABEL_27;
    }
    else
    {
      if ( v19 )
        goto LABEL_15;
      v21 = 0;
    }
    v29 = *(void ***)(a2 + 96);
    v34 = (unsigned __int64)v29[11];
    v35 = v34 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v34 & 1) == 0 )
      goto LABEL_31;
    goto LABEL_26;
  }
  v29 = *(void ***)(a2 + 96);
  v30 = (unsigned __int64)v29[11];
  v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v30 & 1) != 0 || (v32 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL), (v30 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
LABEL_30:
    v43 = v31;
    sub_B7BB70(&v43);
    v19 = *(_QWORD *)(a2 + 120);
    goto LABEL_2;
  }
  v21 = 0;
  v33 = v30 & 2;
  if ( (_DWORD)v33 )
  {
    v38 = *(void ***)(a2 + 96);
    v31 = sub_6E2500(v32, (__int64)v38, (__int64)v29, v33, v17, v18) & 0xFFFFFFFFFFFFFFFELL;
    v38[11] = (void *)(v31 | 1);
    goto LABEL_30;
  }
  v34 = (unsigned __int64)v29[11];
  v35 = v34 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v34 & 1) == 0 )
  {
LABEL_31:
    v36 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v34 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v22 = nullptr;
      v37 = v34 & 2;
      if ( !(_DWORD)v37 )
        goto LABEL_8;
      v38 = v29;
      v35 = sub_6E2500(v36, (__int64)v29, (__int64)v29, v37, v17, v18) & 0xFFFFFFFFFFFFFFFELL;
      v38[11] = (void *)(v35 | 1);
    }
  }
LABEL_26:
  v43 = v35;
  sub_B7BB70(&v43);
  v20 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_27:
  if ( v20 )
    goto LABEL_5;
  v22 = nullptr;
LABEL_8:
  v23 = v22;
  v38 = v39;
  while ( (unsigned __int64 *)v21 != v23 )
  {
    sub_E673B0((__int64)&v41, a1, *v23);
    LOWORD(v43) = 7;
    v24 = v41.m128_u64[1];
    v44.m128_u64[0] = v41.m128_u64[0];
    v41 = 0u;
    v44.m128_u64[1] = v24;
    LODWORD(v24) = v42;
    v42 = 0;
    LODWORD(v45) = v24;
    if ( v39[1] == v40 )
    {
      sub_E5DF50((__int64)v38, (char *)v39[1], (__int64)&v43);
    }
    else
    {
      sub_2229580(v39[1], &v43);
      v39[1] = (char *)v39[1] + 40;
    }
    ++v23;
    sub_222B2A0(&v43);
    sub_E5D2E0((__int64 *)&v41);
  }
LABEL_15:
  v25 = (char *)v39[0];
  if ( v39[1] != v39[0] )
  {
    v38 = (void **)v39[1];
    LOWORD(v43) = 8;
    v45 = v40;
    v40 = nullptr;
    v44 = _mm_loadh_ps((const double *)&v38);
    *(_OWORD *)v39 = 0;
    v26 = j__strlen("protocols");
    v41.m128_u64[0] = (unsigned __int64)&v43;
    v41.m128_u64[1] = v3;
    sub_E585D0(v3, (__int64)"protocols", v26, (__int64)sub_E58580, &v41);
    sub_222B2A0(&v43);
    v27 = (char *)v39[1];
    v25 = (char *)v39[0];
    if ( v39[1] != v39[0] )
    {
      do
      {
        v28 = v25;
        v25 += 40;
        sub_222B2A0(v28);
      }
      while ( v27 != v25 );
      v25 = (char *)v39[0];
    }
  }
  if ( v25 )
    operator delete(v25);
}
