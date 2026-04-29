__int64 __fastcall sub_2838E0(_QWORD *a1, __int64 a2)
{
  __int64 **v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r15
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 **v15; // rbp
  __int64 v16; // rax
  __int64 *i; // r13
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned int v23; // r14d
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // ecx
  int v34; // edx
  int v35; // ecx
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __m128i v42; // xmm1
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __m128i v48; // xmm0
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 **k; // rbx
  __int64 *v52; // rbp
  __int64 *v53; // r13
  __int64 *v54; // rax
  __int64 v55; // rsi
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rbx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 *j; // r13
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 **v68; // [rsp+0h] [rbp-100h]
  _QWORD *v69; // [rsp+10h] [rbp-F0h]
  int v70; // [rsp+18h] [rbp-E8h]
  int v71; // [rsp+1Ch] [rbp-E4h]
  __int64 v72; // [rsp+20h] [rbp-E0h]
  __int64 **v73; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v76; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v77; // [rsp+50h] [rbp-B0h]
  __int128 v78; // [rsp+58h] [rbp-A8h]
  __int64 v79; // [rsp+68h] [rbp-98h]
  __int128 v80; // [rsp+70h] [rbp-90h]
  __int128 v81; // [rsp+80h] [rbp-80h]
  __int128 v82; // [rsp+90h] [rbp-70h]
  __int128 v83; // [rsp+A0h] [rbp-60h]
  __int64 v84; // [rsp+B0h] [rbp-50h]
  char v85; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v86; // [rsp+C0h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v76 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v85 = 0;
  v84 = -1;
  v78 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  sub_27F000(&v73, a1, a2);
  v72 = a1[8];
  v68 = v73;
  v69 = v74;
  v2 = (__int64 **)v74;
  while ( 1 )
  {
    v3 = sub_283100(&v75, (__int64)(v2 + 2), 0);
    if ( v3 == 4 )
    {
      if ( !under_debugger )
        sub_37DDE0(51644);
      BUG();
    }
    if ( v3 > 4 )
      break;
    if ( !v3 )
    {
      v2 = (__int64 **)*v2;
      if ( v68 != v2 )
        continue;
    }
    goto LABEL_6;
  }
  if ( v3 - 5 <= 1 )
  {
LABEL_18:
    v23 = 0;
    goto LABEL_19;
  }
LABEL_6:
  if ( v76.m128i_i64[0] <= 2uLL )
    goto LABEL_18;
  v70 = 0;
  v4 = 0;
  v71 = 0;
  do
  {
    v14 = *(_QWORD *)(v77 + 8 * v4);
    if ( v14 )
    {
      v5 = (_QWORD *)j__qalloc_or_throw(32);
      *v5 = -1;
      v8 = v5;
      v5[1] = -4294967226LL;
      v5[3] = 0;
      v5[2] = 0xFFFFFFFFLL;
      *v5 = *(_QWORD *)v14;
      v9 = *(_DWORD *)(v14 + 8);
      *(_QWORD *)v14 = -1;
      LODWORD(v5) = *((_DWORD *)v5 + 2);
      *((_DWORD *)v8 + 2) = v9;
      v10 = *(_DWORD *)(v14 + 12);
      *(_DWORD *)(v14 + 8) = (_DWORD)v5;
      LODWORD(v5) = *((_DWORD *)v8 + 3);
      *((_DWORD *)v8 + 3) = v10;
      v11 = *(_QWORD *)(v14 + 24);
      *(_DWORD *)(v14 + 12) = (_DWORD)v5;
      v12 = v8[3];
      v8[3] = v11;
      *(_QWORD *)(v14 + 24) = v12;
    }
    else
    {
      v15 = (__int64 **)(v79 + 24LL * v71);
      v8 = sub_23C730();
      if ( (_QWORD)v83 == *((_QWORD *)&v83 + 1) )
      {
        v16 = *v8;
      }
      else
      {
        v16 = *(_QWORD *)(v83 + 16);
        *v8 = v16;
      }
      if ( v16 == -1 )
      {
        v54 = v15[2];
        *v8 = v54;
        if ( v54 == (__int64 *)-1LL )
          sub_27A1C0();
      }
      for ( i = *v15; i != v15[1]; i = (__int64 *)*i )
      {
        v18 = v8[3];
        v19 = qalloc_or_throw(48);
        *(_QWORD *)(v19 + 24) = -4294967226LL;
        *(_QWORD *)(v19 + 16) = -1;
        *(_QWORD *)(v19 + 40) = 0;
        *(_QWORD *)(v19 + 32) = 0xFFFFFFFFLL;
        *(_QWORD *)v19 = v18;
        v20 = *(__int64 **)(v18 + 8);
        *(_QWORD *)(v19 + 8) = v20;
        *v20 = v19;
        *(_QWORD *)(v18 + 8) = v19;
        ++*(_QWORD *)(v18 + 16);
        v21 = *(_QWORD *)(v19 + 16);
        *(_QWORD *)(v19 + 16) = i[2];
        LODWORD(v20) = *((_DWORD *)i + 6);
        i[2] = v21;
        LODWORD(v21) = *(_DWORD *)(v19 + 24);
        *(_DWORD *)(v19 + 24) = (_DWORD)v20;
        LODWORD(v20) = *((_DWORD *)i + 7);
        *((_DWORD *)i + 6) = v21;
        LODWORD(v21) = *(_DWORD *)(v19 + 28);
        *(_DWORD *)(v19 + 28) = (_DWORD)v20;
        v22 = i[5];
        *((_DWORD *)i + 7) = v21;
        v6 = *(_QWORD *)(v19 + 40);
        *(_QWORD *)(v19 + 40) = v22;
        i[5] = v6;
      }
      ++v71;
    }
    sub_251F30(v75 + 56 * v4, (__int64)v8, v75, v6, v7);
    ++v70;
    v13 = v76.m128i_i64[0];
    v4 = v70;
  }
  while ( (unsigned __int64)v70 < v76.m128i_i64[0] );
  if ( v85 )
  {
    v55 = v75;
    if ( v76.m128i_i64[1] < (unsigned __int64)(v76.m128i_i64[0] + 1) )
    {
      v75 = qvector_reserve(&v75, v75, v76.m128i_i64[0] + 1, 56);
      v13 = v76.m128i_i64[0];
      v55 = v75;
    }
    v56 = v55 + 56 * v13;
    *(_QWORD *)v56 = -1;
    *(_QWORD *)(v56 + 12) = -1;
    *(_DWORD *)(v56 + 8) = 70;
    *(_OWORD *)(v56 + 24) = 0;
    *(_OWORD *)(v56 + 40) = 0;
    ++v76.m128i_i64[0];
    v59 = sub_23C730();
    if ( (_QWORD)v83 == *((_QWORD *)&v83 + 1) )
    {
      if ( *v59 != -1 )
      {
LABEL_49:
        sub_251F30(v56, (__int64)v59, v57, v58, v60);
        goto LABEL_32;
      }
    }
    else
    {
      v61 = *(_QWORD *)(v83 + 16);
      *v59 = v61;
      if ( v61 != -1 )
      {
LABEL_47:
        for ( j = (__int64 *)v83; j != *((__int64 **)&v83 + 1); j = (__int64 *)*j )
        {
          v63 = v59[3];
          v64 = qalloc_or_throw(48);
          *(_QWORD *)(v64 + 24) = -4294967226LL;
          *(_QWORD *)(v64 + 16) = -1;
          *(_QWORD *)(v64 + 40) = 0;
          *(_QWORD *)(v64 + 32) = 0xFFFFFFFFLL;
          *(_QWORD *)v64 = v63;
          v65 = *(__int64 **)(v63 + 8);
          *(_QWORD *)(v64 + 8) = v65;
          *v65 = v64;
          *(_QWORD *)(v63 + 8) = v64;
          ++*(_QWORD *)(v63 + 16);
          v66 = *(_QWORD *)(v64 + 16);
          *(_QWORD *)(v64 + 16) = j[2];
          LODWORD(v65) = *((_DWORD *)j + 6);
          j[2] = v66;
          LODWORD(v66) = *(_DWORD *)(v64 + 24);
          *(_DWORD *)(v64 + 24) = (_DWORD)v65;
          LODWORD(v65) = *((_DWORD *)j + 7);
          *((_DWORD *)j + 6) = v66;
          LODWORD(v66) = *(_DWORD *)(v64 + 28);
          *(_DWORD *)(v64 + 28) = (_DWORD)v65;
          v58 = j[5];
          *((_DWORD *)j + 7) = v66;
          v57 = *(_QWORD *)(v64 + 40);
          *(_QWORD *)(v64 + 40) = v58;
          j[5] = v57;
        }
        goto LABEL_49;
      }
    }
    v67 = v84;
    *v59 = v84;
    if ( v67 == -1 )
      sub_27A1C0();
    goto LABEL_47;
  }
LABEL_32:
  if ( (_QWORD)v81 )
    *((_QWORD *)&v81 + 1) = v81;
  v31 = j__qalloc_or_throw(136);
  *(_QWORD *)v31 = -1;
  *(_QWORD *)(v31 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v31 + 24) = 0;
  *(_QWORD *)(v31 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v31 + 40) = 0;
  *(_QWORD *)(v31 + 48) = 0;
  *(_DWORD *)(v31 + 56) = 0;
  *(_QWORD *)(v31 + 64) = 0;
  *(_QWORD *)(v31 + 72) = 0;
  *(_QWORD *)(v31 + 80) = 0;
  v32 = *((_QWORD *)&v81 + 1);
  *(_OWORD *)(v31 + 88) = 0;
  *(_OWORD *)(v31 + 120) = 0;
  *(_QWORD *)(v31 + 104) = 0;
  *(_QWORD *)(v31 + 112) = 0;
  *(_QWORD *)v31 = *(_QWORD *)v32;
  v33 = *(_DWORD *)(v32 + 8);
  *(_QWORD *)v32 = -1;
  v34 = *(_DWORD *)(v31 + 8);
  *(_DWORD *)(v31 + 8) = v33;
  v35 = *(_DWORD *)(v32 + 12);
  *(_DWORD *)(v32 + 8) = v34;
  v36 = *(_DWORD *)(v31 + 12);
  *(_DWORD *)(v31 + 12) = v35;
  v37 = *(_QWORD *)(v32 + 24);
  *(_DWORD *)(v32 + 12) = v36;
  v38 = *(_QWORD *)(v31 + 24);
  *(_QWORD *)(v31 + 24) = v37;
  v39 = *(_QWORD *)(v32 + 32);
  *(_QWORD *)(v32 + 24) = v38;
  v40 = *(_QWORD *)(v31 + 32);
  *(_QWORD *)(v31 + 32) = v39;
  v41 = *(_QWORD *)(v32 + 40);
  v42 = _mm_loadu_si128(&v76);
  *(_QWORD *)(v32 + 32) = v40;
  v43 = *(_QWORD *)(v31 + 40);
  *(_QWORD *)(v31 + 40) = v41;
  v44 = *(_QWORD *)(v32 + 48);
  *(_QWORD *)(v32 + 40) = v43;
  v45 = *(_QWORD *)(v31 + 48);
  *(_QWORD *)(v31 + 48) = v44;
  LODWORD(v44) = *(_DWORD *)(v32 + 56);
  *(_QWORD *)(v32 + 48) = v45;
  LODWORD(v45) = *(_DWORD *)(v31 + 56);
  *(_DWORD *)(v31 + 56) = v44;
  *(_DWORD *)(v32 + 56) = v45;
  v46 = *(_QWORD *)(v31 + 112);
  v47 = v75;
  v48 = _mm_loadu_si128((const __m128i *)(v31 + 120));
  *(__m128i *)(v31 + 120) = v42;
  v75 = v46;
  v49 = v82;
  *(_QWORD *)(v31 + 112) = v47;
  v50 = *(_QWORD *)(v49 + 24);
  v76 = v48;
  sub_23D4C0(v31, v72, v69[2], v50 + 8);
  sub_250450((__int64)(v69 + 2));
  *((_DWORD *)v69 + 6) = 77;
  v69[5] = v31;
  if ( *((_QWORD *)&v82 + 1) )
  {
    for ( k = (__int64 **)*v69; k != v68; k = (__int64 **)v52 )
    {
      v52 = *k;
      v53 = *((__int64 **)&v82 + 1);
      *k[1] = (__int64)*k;
      v52[1] = (__int64)k[1];
      sub_250450((__int64)(k + 2));
      qfree(k);
      v68[2] = (__int64 *)((char *)v68[2] - 1);
      if ( k + 2 == (__int64 **)v53 )
        break;
    }
  }
  v23 = 1;
LABEL_19:
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
  v24 = v75;
  if ( v75 )
  {
    v25 = v76.m128i_i64[0];
    if ( v76.m128i_i64[0] )
    {
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = v24 + v26;
        v29 = *(_QWORD *)(v24 + v26 + 32);
        if ( v29 )
        {
          *(_QWORD *)(v28 + 40) = 0;
          qfree(v29);
        }
        ++v27;
        v26 += 56;
        sub_250450(v28);
        v24 = v75;
      }
      while ( v25 != v27 );
    }
    v76.m128i_i64[0] = 0;
    qfree(v24);
  }
  return v23;
}
