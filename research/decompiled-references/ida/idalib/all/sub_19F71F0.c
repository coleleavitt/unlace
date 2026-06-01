__int64 __fastcall sub_19F71F0(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rcx
  char v13; // r15
  _QWORD *v14; // rbx
  unsigned int v15; // r12d
  unsigned int v16; // eax
  __int64 v17; // r8
  const char *v18; // rax
  const char *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned int *v22; // rax
  size_t v23; // r10
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  const char *v26; // rax
  bool v27; // zf
  __int64 v28; // r15
  __int64 v29; // rax
  __m128 v30; // xmm0
  __int64 v31; // rdi
  void *v33; // rsi
  __int64 v34; // rax
  __int64 *v35; // rdx
  const char *v36; // rax
  __int64 v37; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+10h] [rbp-98h] BYREF
  const char *v40; // [rsp+18h] [rbp-90h]
  __int64 v41; // [rsp+20h] [rbp-88h] BYREF
  size_t v42; // [rsp+28h] [rbp-80h]
  void **v43; // [rsp+30h] [rbp-78h]
  __int64 v44; // [rsp+38h] [rbp-70h]
  void *v45[2]; // [rsp+40h] [rbp-68h] BYREF
  __m128 v46; // [rsp+50h] [rbp-58h]
  const char *v47; // [rsp+60h] [rbp-48h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_6;
  v9 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v10 = (_QWORD *)*v9;
  v11 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( (unsigned __int64)v10 >= v11 )
  {
    if ( v10 != (_QWORD *)v11 )
    {
      while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 226 )
      {
        v11 += 8LL;
        if ( v10 == (_QWORD *)v11 )
          goto LABEL_6;
      }
      goto LABEL_42;
    }
LABEL_6:
    v37 = 0;
    v13 = 0;
    LODWORD(v38) = 0;
    goto LABEL_7;
  }
  v12 = v10;
  while ( *(_WORD *)(*v12 + 36LL) != 226 )
  {
    if ( (_QWORD *)v11 == ++v12 )
      goto LABEL_6;
  }
  if ( (_QWORD *)v11 == v12 )
    goto LABEL_6;
LABEL_42:
  v34 = *v10;
  if ( *(_WORD *)(*v10 + 36LL) != 226 )
  {
    v35 = v10 + 1;
    do
      v34 = *v35++;
    while ( *(_WORD *)(v34 + 36) != 226 );
  }
  v13 = *(_BYTE *)(v34 + 80);
  LODWORD(v38) = 0;
  if ( v13 )
    LODWORD(v38) = *(_DWORD *)(v34 + 76);
  v37 = *(unsigned int *)(v34 + 84);
LABEL_7:
  v14 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  v15 = sub_A97D20((__int64)v14, *(_QWORD *)(v14[2346] & 0xFFFFFFFFFFFFFFF0LL));
  v16 = sub_A97D20((__int64)v14, *(_QWORD *)(v14[2340] & 0xFFFFFFFFFFFFFFF0LL));
  v17 = v14[2340];
  LODWORD(v45[1]) = v16;
  if ( v16 > 0x40 )
  {
    v39 = v17;
    sub_2205470(v45, 1, 0);
    v17 = v39;
  }
  else
  {
    v45[0] = &dword_0 + 1;
  }
  v39 = sub_C0C5D0(v14, (__int64)v45, v17, 0);
  if ( LODWORD(v45[1]) > 0x40 && v45[0] )
    operator delete[](v45[0]);
  v18 = (const char *)v14[2346];
  LODWORD(v45[1]) = v15;
  if ( v15 > 0x40 )
  {
    v40 = v18;
    sub_2205470(v45, 0, 0);
    v41 = sub_C0C5D0(v14, (__int64)v45, (__int64)v40, 0);
    if ( LODWORD(v45[1]) > 0x40 && v45[0] )
      operator delete[](v45[0]);
    v36 = (const char *)v14[2346];
    LODWORD(v45[1]) = v15;
    v40 = v36;
    sub_2205470(v45, v37, 0);
    v19 = v40;
  }
  else
  {
    v45[0] = nullptr;
    v41 = sub_C0C5D0(v14, (__int64)v45, (__int64)v18, 0);
    if ( LODWORD(v45[1]) > 0x40 && v45[0] )
      operator delete[](v45[0]);
    v19 = (const char *)v14[2346];
    LODWORD(v45[1]) = v15;
    v45[0] = (void *)v37;
  }
  v37 = sub_C0C5D0(v14, (__int64)v45, (__int64)v19, 0);
  if ( LODWORD(v45[1]) > 0x40 && v45[0] )
    operator delete[](v45[0]);
  v20 = *(_QWORD *)(a2 + 40);
  if ( (v20 & 7) != 0 || (v21 = v20 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v23 = j__strlen(&byte_22F0C30);
    v40 = &byte_22F0C30;
  }
  else
  {
    v22 = *(unsigned int **)(v21 + 16);
    v23 = *v22;
    v40 = (const char *)(v22 + 4);
  }
  LODWORD(v45[0]) = 0;
  v24 = v14[2331];
  v42 = v23;
  v44 = 1;
  v43 = v45;
  v25 = sub_A71230((__int64)v14, v24 | 1, v23);
  v26 = (const char *)sub_C09810(v14, v40, v42, 0, 0, v25, (__int64)v45, 1);
  v27 = v13 == 0;
  v28 = v14[2346];
  v40 = v26;
  if ( v27 )
  {
    v33 = (void *)a1[58];
    LODWORD(v45[1]) = v15;
    a1[58] = (_DWORD)v33 + 1;
    if ( v15 > 0x40 )
      sub_2205470(v45, v33, 0);
    else
      v45[0] = v33;
    v38 = sub_C0C5D0(v14, (__int64)v45, v28, 0);
    if ( LODWORD(v45[1]) > 0x40 && v45[0] )
      operator delete[](v45[0]);
    *(__m128 *)v45 = _mm_loadh_ps((const double *)&v39);
    v30 = _mm_loadh_ps((const double *)&v38);
  }
  else
  {
    LODWORD(v45[1]) = v15;
    if ( v15 > 0x40 )
      sub_2205470(v45, (unsigned int)v38, 0);
    else
      v45[0] = (void *)(unsigned int)v38;
    v29 = sub_C0C5D0(v14, (__int64)v45, v28, 0);
    if ( LODWORD(v45[1]) > 0x40 && v45[0] )
    {
      v38 = v29;
      operator delete[](v45[0]);
      v29 = v38;
    }
    v38 = v29;
    *(__m128 *)v45 = _mm_loadh_ps((const double *)&v37);
    v30 = _mm_loadh_ps((const double *)&v41);
  }
  v31 = *(_QWORD *)a1;
  v46 = v30;
  v47 = v40;
  return sub_19F5CF0(v31, a2, (int)v45, 5, *(double *)v30.m128_u64, a8);
}
