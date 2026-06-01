void __fastcall sub_1714C50(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  char v7; // dl
  unsigned __int64 *v8; // rcx
  __int64 v9; // r8
  unsigned __int64 *v10; // rsi
  unsigned __int64 *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __m128i *v15; // rsi
  _QWORD *v16; // rdi
  __m128i v17; // xmm1
  __int64 v18; // rax
  char **v19; // rdi
  unsigned int *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm0
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // r14
  __int64 v35; // r13
  double v36[2]; // [rsp+0h] [rbp-198h] BYREF
  __m128 v37; // [rsp+10h] [rbp-188h] BYREF
  __int64 v38; // [rsp+20h] [rbp-178h]
  int v39; // [rsp+28h] [rbp-170h]
  int v40; // [rsp+30h] [rbp-168h]
  __int128 v41; // [rsp+38h] [rbp-160h] BYREF
  __int64 v42; // [rsp+48h] [rbp-150h]
  char v43; // [rsp+50h] [rbp-148h]
  __int64 v44; // [rsp+58h] [rbp-140h]
  __int64 v45; // [rsp+60h] [rbp-138h]
  __int64 v46; // [rsp+68h] [rbp-130h]
  const void **v47[4]; // [rsp+70h] [rbp-128h] BYREF
  __int16 v48; // [rsp+90h] [rbp-108h]
  __int64 v49; // [rsp+98h] [rbp-100h] BYREF
  __m128i v50; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-B8h]
  __int64 v52; // [rsp+E8h] [rbp-B0h]
  __int64 v53; // [rsp+F0h] [rbp-A8h]
  __int64 v54; // [rsp+F8h] [rbp-A0h]
  _QWORD *v55; // [rsp+100h] [rbp-98h]
  __int64 v56; // [rsp+108h] [rbp-90h]
  _QWORD v57[10]; // [rsp+110h] [rbp-88h] BYREF
  __int64 v58; // [rsp+160h] [rbp-38h] BYREF

  v50.m128i_i64[0] = *(_QWORD *)(a2 + 40);
  v4 = sub_FDE960(v50.m128i_i64, 0);
  if ( !v4 )
    return;
  v5 = *a1;
  v6 = v4;
  v7 = *(_BYTE *)(*a1 + 20LL);
  if ( !v7 )
    goto LABEL_9;
  v8 = *(unsigned __int64 **)v5;
  v9 = *(unsigned int *)(v5 + 12);
  v10 = (unsigned __int64 *)(*(_QWORD *)v5 + 8 * v9);
  if ( *(unsigned __int64 **)v5 != v10 )
  {
    v11 = *(unsigned __int64 **)v5;
    if ( v6 == *v8 )
    {
LABEL_21:
      v7 = 0;
LABEL_22:
      v12 = (__int64)&v8[*(unsigned int *)(v5 + 12)];
      goto LABEL_11;
    }
    while ( v10 != ++v11 )
    {
      if ( v6 == *v11 )
        goto LABEL_21;
    }
  }
  if ( (unsigned int)v9 >= *(_DWORD *)(v5 + 8) )
  {
LABEL_9:
    v11 = (unsigned __int64 *)sub_2236760(*a1, v6);
    v8 = *(unsigned __int64 **)v5;
    if ( !*(_BYTE *)(v5 + 20) )
    {
      v12 = (__int64)&v8[*(unsigned int *)(v5 + 8)];
      goto LABEL_11;
    }
    goto LABEL_22;
  }
  *(_DWORD *)(v5 + 12) = v9 + 1;
  *v10 = v6;
  v11 = (unsigned __int64 *)(*(_QWORD *)v5 + 8 * v9);
  v12 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 12);
LABEL_11:
  if ( v11 != (unsigned __int64 *)v12 && *v11 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v13 = v11 + 1;
    do
    {
      v14 = v13;
      if ( v13 == (_QWORD *)v12 )
        break;
      ++v13;
    }
    while ( *v14 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v7 )
  {
    v15 = (__m128i *)a1[3];
    v16 = (_QWORD *)a1[2];
    v17 = _mm_loadu_si128((const __m128i *)(a1[1] + 184LL));
    v51 = 0;
    v55 = v57;
    v56 = 0x400000000LL;
    v57[8] = &v58;
    v57[9] = 0x200000000LL;
    v18 = a1[4];
    v50 = v17;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    sub_1702F80(v16, v15, a2, *(_QWORD *)(v18 + 16), (char ***)&v50);
    v19 = *(char ***)(a1[1] + 184LL);
    v20 = *(unsigned int **)(v6 + 16);
    v21 = *v20;
    v48 = 261;
    v47[0] = (const void **)(v20 + 4);
    v47[1] = (const void **)v21;
    v24 = sub_15A4EB0(v19, v47, v21, 261, v22, v23);
    sub_15A2F70((__int64)&v50, (__int64)v24);
    *(_QWORD *)&v36[1] = a2;
    *(_QWORD *)&v36[0] = sub_15A5CA0((__int64)&v50, (__int64)v24, v25, v26, v27, v28);
    v38 = 37;
    v39 = 3;
    v29 = _mm_loadh_ps(v36);
    v40 = 0;
    v37 = v29;
    v43 = v43 & 0x80 | 0x40;
    v41 = 0;
    v42 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_15A3440((unsigned int *)&v37, 1, v30, v31, v32, v33);
    if ( !*(_BYTE *)a1[5] )
    {
      LODWORD(v38) = v38 + 2;
      v43 |= 2u;
    }
    v34 = (_QWORD *)a1[1];
    v35 = *(_QWORD *)a1[6];
    sub_17048E0((__int64)v47, (__int64)&v37);
    sub_17143A0(v34, v47, v35);
    sub_1705410((__int64)&v49);
    sub_1705410((__int64)&v41);
    sub_1704B40(&v50);
  }
}
