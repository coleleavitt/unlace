void __fastcall sub_1109D20(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  const char *v8; // r13
  size_t v9; // rdx
  unsigned int v10; // r15d
  unsigned int *v11; // r13
  int v12; // eax
  const char **v13; // rax
  __int64 v14; // r14
  size_t v15; // rcx
  size_t v16; // rdx
  size_t v17; // rax
  const char *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r15d
  __int64 *v22; // rax
  int *v23; // r13
  unsigned __int64 v24; // rcx
  const char *v25; // rdx
  size_t v26; // rax
  __int64 v27; // rax
  size_t v28; // rax
  int v29; // edx
  const char *v30; // r13
  const char *v31; // rax
  int v32; // r8d
  int v33; // ecx
  int v34; // eax
  __int64 v35; // r13
  __int64 v36; // rax
  size_t v37; // r15
  const char *v38; // r13
  __int64 v39; // r12
  _QWORD *v40; // rdx
  _QWORD *v41; // rbx
  _QWORD *v42; // rcx
  _DWORD *v43; // rax
  const char *v44; // rdi
  const char *v45; // rdi
  __int64 v46; // rax
  void *v47; // rbx
  void *v48; // rdi
  __int64 v49; // rbp
  __int64 v50; // r12
  __int16 v51; // ax
  int v52; // r12d
  const char **v53; // [rsp+8h] [rbp-150h]
  __int64 *v54; // [rsp+10h] [rbp-148h]
  __int64 v55; // [rsp+18h] [rbp-140h]
  const char *v56; // [rsp+18h] [rbp-140h]
  int v57; // [rsp+18h] [rbp-140h]
  __int64 v58; // [rsp+18h] [rbp-140h]
  __int64 v59; // [rsp+18h] [rbp-140h]
  size_t v60; // [rsp+20h] [rbp-138h]
  unsigned __int64 v61; // [rsp+20h] [rbp-138h]
  int v62; // [rsp+20h] [rbp-138h]
  int v63; // [rsp+28h] [rbp-130h]
  __int64 *v65; // [rsp+48h] [rbp-110h]
  const char **v66; // [rsp+50h] [rbp-108h]
  unsigned int v67; // [rsp+64h] [rbp-F4h] BYREF
  void *v68; // [rsp+68h] [rbp-F0h] BYREF
  __m128i v69; // [rsp+70h] [rbp-E8h] BYREF
  __int16 v70; // [rsp+90h] [rbp-C8h]
  __m128i v71; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i v72; // [rsp+B0h] [rbp-A8h] BYREF
  __int16 v73; // [rsp+C0h] [rbp-98h]
  __m128i v74; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-78h]
  _OWORD v76[7]; // [rsp+E8h] [rbp-70h] BYREF

  v54 = sub_10E2140();
  if ( (unsigned __int8)sub_2195AD0(*a3, 3484) || (unsigned __int8)sub_2195AD0(*a3, 3485) )
    v7 = 0;
  else
    v7 = 8;
  v55 = *(_QWORD *)(a2 + 176);
  v8 = *(const char **)(*(_QWORD *)(*a3 + 48) + v7);
  v9 = 0;
  if ( v8 )
    v9 = j__strlen(v8);
  v10 = sub_2192BD0(v55, v8, v9);
  v67 = v10;
  sub_21989F0(&v68, v54, a2, &v67, 1);
  v11 = (unsigned int *)v68;
  if ( !v68 || v10 + 1 < v67 )
  {
    sub_FA3370((__int64)&v74, **(_QWORD **)(a1 + 8), 0, 369);
    sub_21922B0(&v71, *a3, a2);
    sub_AC84E0((unsigned __int8 **)&v74, v71.m128i_i64[0], v71.m128i_i64[1]);
    v48 = (void *)v71.m128i_i64[0];
    if ( (__m128i *)v71.m128i_i64[0] == &v72 )
    {
LABEL_56:
      sub_AC6300((__int64)&v74);
      goto LABEL_51;
    }
LABEL_55:
    operator delete(v48);
    goto LABEL_56;
  }
  v12 = *(_DWORD *)(*(_QWORD *)v68 + 48LL);
  if ( (v12 & 0x10) != 0 )
  {
    v49 = **(_QWORD **)(a1 + 8);
    v50 = *(_QWORD *)(v49 + 32);
    v71.m128i_i64[0] = (__int64)&v72;
    sub_1107830(
      &v71,
      "invalid Xarch argument: '%0', not all driver options can be forwared via Xarch argument",
      (__int64)"");
    v74.m128i_i32[1] = 0;
    HIBYTE(v51) = v74.m128i_i8[1] & 0xFE;
    LOBYTE(v51) = -20;
    v74.m128i_i16[0] = v51;
    v74.m128i_i64[1] = (__int64)v76;
    if ( (__m128i *)v71.m128i_i64[0] == &v72 )
    {
      v76[0] = _mm_load_si128(&v72);
    }
    else
    {
      v74.m128i_i64[1] = v71.m128i_i64[0];
      *(_QWORD *)&v76[0] = v72.m128i_i64[0];
    }
    v75 = v71.m128i_i64[1];
    v52 = sub_FB1C40(v50, (__int64)&v74);
    if ( (_OWORD *)v74.m128i_i64[1] != v76 )
      operator delete((void *)v74.m128i_i64[1]);
    sub_FA3370((__int64)&v74, v49, 0, v52);
    sub_21922B0(&v71, *a3, a2);
    sub_AC84E0((unsigned __int8 **)&v74, v71.m128i_i64[0], v71.m128i_i64[1]);
    v48 = (void *)v71.m128i_i64[0];
    if ( (__m128i *)v71.m128i_i64[0] == &v72 )
      goto LABEL_56;
    goto LABEL_55;
  }
  v68 = nullptr;
  *((_QWORD *)v11 + 2) = *a3;
  *a3 = (__int64)v11;
  if ( (v12 & 0x20) == 0 )
    goto LABEL_47;
  v13 = *((const char ***)v11 + 6);
  v66 = &v13[v11[14]];
  if ( v13 == v66 )
    goto LABEL_47;
  v53 = *((const char ***)v11 + 6);
  v65 = a3;
  v14 = v55;
  do
  {
    v37 = 0;
    v38 = *v53;
    v39 = sub_2197640(v54, 3556);
    v41 = v40;
    if ( v38 )
      v37 = j__strlen(v38);
    v42 = (_QWORD *)v41[1];
    v43 = (_DWORD *)(v41[4] + 80LL * (unsigned int)(*(_DWORD *)(v39 + 40) - 1));
    v18 = (const char *)(*v42 + (unsigned int)v43[1]);
    if ( !*v43 )
    {
      v15 = 0;
      v16 = 0;
      if ( !v18 )
        goto LABEL_14;
      goto LABEL_12;
    }
    v44 = (const char *)(*(unsigned int *)(v41[2] + 4LL * (unsigned int)(*v43 + 1)) + *v42);
    if ( v44 )
    {
      v15 = (unsigned int)j__strlen(v44);
      v17 = 0;
      if ( !v18 )
      {
        if ( v15 )
        {
LABEL_13:
          v18 += v17;
          v16 = 0;
          goto LABEL_14;
        }
        goto LABEL_33;
      }
LABEL_12:
      v60 = v15;
      v17 = j__strlen(v18);
      v15 = v60;
      if ( v17 < v60 )
        goto LABEL_13;
LABEL_33:
      v18 += v15;
      v16 = v17 - v15;
      goto LABEL_14;
    }
    v15 = 0;
    if ( v18 )
      goto LABEL_12;
    v18 = nullptr;
    v16 = 0;
LABEL_14:
    v21 = sub_2192DA0(v14, v18, v16, v38, v37);
    v22 = (__int64 *)v41[1];
    v23 = (int *)(v41[4] + 80LL * (unsigned int)(*(_DWORD *)(v39 + 40) - 1));
    if ( !*v23 )
    {
      v24 = 0;
      v25 = (const char *)(*v22 + (unsigned int)v23[1]);
      if ( !v25 )
      {
        v27 = 0;
        goto LABEL_19;
      }
LABEL_16:
      v61 = v24;
      v56 = v25;
      v26 = j__strlen(v25);
      v24 = v61;
      v25 = v56;
      goto LABEL_17;
    }
    v45 = (const char *)(*v22 + *(unsigned int *)(v41[2] + 4LL * (unsigned int)(*v23 + 1)));
    if ( !v45 )
    {
      v24 = 0;
      v25 = (const char *)((unsigned int)v23[1] + *v22);
      if ( !v25 )
      {
        v24 = 0;
        v26 = 0;
LABEL_38:
        v27 = v26 - v24;
        v25 += v24;
        goto LABEL_19;
      }
      goto LABEL_16;
    }
    v59 = *v22;
    v24 = (unsigned int)j__strlen(v45);
    v26 = 0;
    v25 = (const char *)((unsigned int)v23[1] + v59);
    if ( v25 )
      goto LABEL_16;
LABEL_17:
    if ( v26 >= v24 )
      goto LABEL_38;
    v25 += v26;
    v27 = 0;
LABEL_19:
    v71.m128i_i64[1] = v27;
    v28 = 0;
    v71.m128i_i64[0] = (__int64)v25;
    v29 = *v23;
    v30 = nullptr;
    v73 = 261;
    if ( v29 )
    {
      v30 = (const char *)(*(_QWORD *)v41[1] + *(unsigned int *)(v41[2] + 4LL * (unsigned int)(v29 + 1)));
      if ( v30 )
        v28 = j__strlen(v30);
    }
    v69.m128i_i64[0] = (__int64)v30;
    v69.m128i_i64[1] = v28;
    v70 = 261;
    sub_A1D840(&v74, &v69, &v71, 261, v19, v20);
    v31 = (const char *)sub_10B6980(v14, (__int64)&v74);
    v32 = 0;
    v33 = (int)v31;
    if ( v31 )
    {
      v57 = (int)v31;
      v34 = j__strlen(v31);
      v33 = v57;
      v32 = v34;
    }
    v63 = v33;
    v62 = v32;
    v58 = *(_QWORD *)(*(_QWORD *)(v14 + 176) + 8LL * (unsigned int)(v21 + 1));
    v35 = operator new(0x58u);
    sub_2191BD0(v35, v39, (_DWORD)v41, v63, v62, v21, v58, *v65);
    sub_21943B0(a4, v35);
    if ( a5 )
    {
      v36 = *(unsigned int *)(a5 + 8);
      if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        sub_22134E0(a5, a5 + 16, v36 + 1, 8);
        v36 = *(unsigned int *)(a5 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a5 + 8 * v36) = v35;
      ++*(_DWORD *)(a5 + 8);
    }
    else
    {
      sub_2195260(a4, v35);
    }
    ++v53;
  }
  while ( v66 != v53 );
  v11 = (unsigned int *)*v65;
LABEL_47:
  if ( a5 )
  {
    v46 = *(unsigned int *)(a5 + 8);
    if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
    {
      sub_22134E0(a5, a5 + 16, v46 + 1, 8);
      v46 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v46) = v11;
    ++*(_DWORD *)(a5 + 8);
  }
  else
  {
    sub_2195260(a4, v11);
  }
LABEL_51:
  v47 = v68;
  if ( v68 )
  {
    sub_2191C80(v68);
    operator delete(v47, 0x58u);
  }
}

