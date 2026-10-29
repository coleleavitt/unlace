void __fastcall sub_2082C10(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // r8
  int v16; // r14d
  int v17; // eax
  unsigned int v18; // eax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // r12
  size_t v22; // r15
  int v23; // r14d
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // r10d
  __int64 *v28; // r13
  __int64 v29; // rax
  int v30; // edx
  _QWORD *v31; // r13
  __int64 v32; // r9
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  _QWORD *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // r9
  __int64 *v40; // rax
  _QWORD *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  bool v46; // zf
  __int64 v47; // rdx
  int i; // r11d
  __int64 *v49; // rax
  __int64 v50; // rcx
  int v51; // esi
  int v52; // eax
  __int64 v53; // [rsp+8h] [rbp-80h]
  __int64 v54; // [rsp+8h] [rbp-80h]
  __int64 v55; // [rsp+8h] [rbp-80h]
  __int64 v56; // [rsp+8h] [rbp-80h]
  unsigned int v57; // [rsp+8h] [rbp-80h]
  __int64 v58; // [rsp+10h] [rbp-78h]
  __int64 v59; // [rsp+10h] [rbp-78h]
  int v60; // [rsp+10h] [rbp-78h]
  __int64 v61; // [rsp+18h] [rbp-70h]
  __int64 v62; // [rsp+18h] [rbp-70h]
  __int64 v63; // [rsp+20h] [rbp-68h]
  __int64 v64; // [rsp+28h] [rbp-60h]
  _QWORD *v65; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v66; // [rsp+38h] [rbp-50h] BYREF
  __m128 v67[4]; // [rsp+40h] [rbp-48h] BYREF

  v5 = a3;
  v8 = (__int64 *)a1[16];
  v9 = (__int64)&v8[*((unsigned int *)a1 + 34)];
  if ( v8 == (__int64 *)v9 )
  {
    v40 = (__int64 *)a1[1];
    v13 = *v40;
    v14 = *(unsigned int *)(*v40 + 560);
    v15 = *(_QWORD *)(*v40 + 544);
    if ( !(_DWORD)v14 )
    {
      v21 = v13 + 544;
LABEL_40:
      v56 = v13;
      sub_2081950(v67, (_QWORD *)(v15 + 8 * v14), (_QWORD *)(v15 + 8 * v14), v21, 1);
      v31 = (_QWORD *)v67[0].m128_u64[0];
      v32 = v56;
      goto LABEL_24;
    }
LABEL_7:
    v10 = v9;
    v58 = v15;
    v16 = v14 - 1;
    v53 = v13;
    v17 = sub_207A820(v8, v9);
    a5 = v58;
    v13 = v53;
    v18 = v16 & v17;
    a3 = v58 + 8LL * v18;
    if ( a1 != *(_QWORD **)a3 )
    {
      if ( *(_QWORD *)a3 == -4096 )
        goto LABEL_9;
      LODWORD(a3) = 1;
      while ( 1 )
      {
        v10 = (unsigned int)(a3 + 1);
        v18 = v16 & (a3 + v18);
        a3 = v58 + 8LL * v18;
        v50 = *(_QWORD *)a3;
        if ( a1 == *(_QWORD **)a3 )
          break;
        a3 = (unsigned int)v10;
        if ( v50 == -4096 )
          goto LABEL_9;
      }
    }
    *(_QWORD *)a3 = -8192;
    --*(_DWORD *)(v53 + 552);
    ++*(_DWORD *)(v53 + 556);
LABEL_9:
    v8 = (__int64 *)a1[16];
    v12 = *((unsigned int *)a1 + 34);
    v9 = (__int64)&v8[v12];
    goto LABEL_10;
  }
  do
  {
    v10 = *v8;
    if ( *v8 )
      sub_20A0850(v8);
    ++v8;
  }
  while ( (__int64 *)v9 != v8 );
  v11 = (__int64 *)a1[1];
  v8 = (__int64 *)a1[16];
  v12 = *((unsigned int *)a1 + 34);
  v13 = *v11;
  v9 = (__int64)&v8[v12];
  LODWORD(v14) = *(_DWORD *)(*v11 + 560);
  if ( (_DWORD)v14 )
  {
    v15 = *(_QWORD *)(v13 + 544);
    goto LABEL_7;
  }
LABEL_10:
  if ( v8 == (__int64 *)v9 )
  {
    v49 = (__int64 *)a1[1];
    v13 = *v49;
    v15 = *(_QWORD *)(*v49 + 544);
    v14 = *(unsigned int *)(*v49 + 560);
  }
  else
  {
    v19 = v8;
    if ( v5 )
    {
      do
      {
        while ( a2 != v19 )
        {
          if ( (__int64 *)v9 == ++v19 )
            goto LABEL_16;
        }
        ++v19;
        *a2 = v5;
      }
      while ( (__int64 *)v9 != v19 );
    }
    else
    {
      do
      {
        while ( v8 == a2 )
        {
          v36 = *v8++;
          v37 = sub_2058290(*(_QWORD **)(*(_QWORD *)(v36 + 128) + 8LL), v10, a3, v12, a5, v13);
          *(v8 - 1) = sub_20AFB20(v37);
          if ( (__int64 *)v9 == v8 )
            goto LABEL_34;
        }
        ++v8;
      }
      while ( (__int64 *)v9 != v8 );
LABEL_34:
      v12 = *((unsigned int *)a1 + 34);
    }
LABEL_16:
    v20 = (__int64 *)a1[1];
    v8 = (__int64 *)a1[16];
    v13 = *v20;
    v15 = *(_QWORD *)(*v20 + 544);
    v14 = *(unsigned int *)(*v20 + 560);
  }
  v21 = v13 + 544;
  if ( !(_DWORD)v14 )
    goto LABEL_40;
  v22 = 8 * v12;
  v61 = v15;
  v23 = v14 - 1;
  v59 = v13;
  v54 = v12;
  v24 = sub_207A820(v8, (__int64)&v8[v12]);
  v25 = v61;
  v26 = v54;
  v13 = v59;
  v27 = v23 & v24;
  v28 = (__int64 *)(v61 + 8LL * (v23 & v24));
  v29 = *v28;
  if ( *v28 == -4096 )
  {
LABEL_51:
    v15 = *(_QWORD *)(v13 + 544);
    v14 = *(unsigned int *)(v13 + 560);
    goto LABEL_40;
  }
  if ( v22 )
  {
    for ( i = 1; ; ++i )
    {
      if ( v29 != -8192 && v26 == *(_DWORD *)(v29 + 136) )
      {
        v64 = v26;
        v63 = v25;
        v62 = v13;
        v60 = i;
        v57 = v27;
        v52 = memcmp(v8, *(const void **)(v29 + 128), v22);
        v27 = v57;
        i = v60;
        v13 = v62;
        v25 = v63;
        v26 = v64;
        if ( !v52 )
          break;
      }
      v28 = (__int64 *)(v25 + 8LL * (v23 & (v27 + i)));
      v27 = v23 & (v27 + i);
      v29 = *v28;
      if ( *v28 == -4096 )
        goto LABEL_51;
    }
  }
  else
  {
    v30 = 1;
    while ( v29 == -8192 || v54 != *(_DWORD *)(v29 + 136) )
    {
      v27 = v23 & (v30 + v27);
      v28 = (__int64 *)(v61 + 8LL * v27);
      v29 = *v28;
      if ( *v28 == -4096 )
        goto LABEL_51;
      ++v30;
    }
  }
  v55 = v13;
  sub_2081950(v67, v28, (_QWORD *)(*(_QWORD *)(v13 + 544) + 8LL * *(unsigned int *)(v13 + 560)), v21, 1);
  v31 = (_QWORD *)v67[0].m128_u64[0];
  v32 = v55;
LABEL_24:
  v33 = (_QWORD *)(*(_QWORD *)(v32 + 544) + 8LL * *(unsigned int *)(v32 + 560));
  sub_2081950(v67, v33, v33, v21, 1);
  if ( (_QWORD *)v67[0].m128_u64[0] == v31 || !*v31 )
  {
    v38 = *(_QWORD *)a1[1];
    v65 = a1;
    if ( (unsigned __int8)sub_207A8F0((__int64 *)(v38 + 544), (__int64 *)&v65, &v66) )
    {
      sub_2081950(v67, v66, (_QWORD *)(*(_QWORD *)(v38 + 544) + 8LL * *(unsigned int *)(v38 + 560)), v38 + 544, 1);
LABEL_37:
      sub_206DFE0((__int64)a1);
      return;
    }
    v41 = v66;
    v42 = (unsigned int)(*(_DWORD *)(v38 + 552) + 1);
    v43 = *(unsigned int *)(v38 + 560);
    v67[0].m128_u64[0] = (unsigned __int64)v66;
    v44 = (unsigned int)(4 * v42);
    v45 = (unsigned int)(2 * v43);
    if ( (unsigned int)v44 >= 3 * (int)v43 )
    {
      v51 = 2 * v43;
    }
    else
    {
      v45 = (unsigned int)(v43 - *(_DWORD *)(v38 + 556) - v42);
      if ( (unsigned int)v45 > (unsigned int)v43 >> 3 )
      {
LABEL_43:
        v46 = *v41 == -4096;
        *(_DWORD *)(v38 + 552) = v42;
        if ( !v46 )
          --*(_DWORD *)(v38 + 556);
        *v41 = v65;
        v47 = *(_QWORD *)(v38 + 544);
        v66 = v41;
        sub_2081950(v67, v41, (_QWORD *)(v47 + 8 * v43), v38 + 544, 1);
        goto LABEL_37;
      }
      v51 = v43;
    }
    sub_2082A30(v38 + 544, v51, v42, v45, v44, v39);
    sub_207A8F0((__int64 *)(v38 + 544), (__int64 *)&v65, v67);
    v41 = (_QWORD *)v67[0].m128_u64[0];
    v43 = *(unsigned int *)(v38 + 560);
    LODWORD(v42) = *(_DWORD *)(v38 + 552) + 1;
    goto LABEL_43;
  }
  sub_20BD280(a1 + 1, *v31, v34);
  v35 = (_QWORD *)a1[16];
  *((_DWORD *)a1 + 34) = 0;
  if ( v35 != a1 + 18 )
    free(v35);
  if ( (a1[3] & 1) == 0 )
    operator delete(a1[4], 24LL * *((unsigned int *)a1 + 10), 8);
  operator delete(a1, 0xB0u);
}
