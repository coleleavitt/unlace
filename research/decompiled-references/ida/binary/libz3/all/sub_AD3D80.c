__int64 __fastcall sub_AD3D80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r12
  _DWORD *v9; // rax
  __int64 v10; // rbp
  _DWORD *v11; // rax
  char v12; // al
  __int64 *v13; // r8
  int v14; // r9d
  _QWORD *v15; // rbx
  char v16; // r15
  _QWORD *v17; // r12
  __int64 v18; // rax
  __m128 v19; // xmm0
  _DWORD *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r13
  int v24; // edi
  __int64 v25; // rax
  __int64 *v26; // rcx
  unsigned int v27; // edx
  __int64 *v28; // rsi
  __int64 v29; // rdx
  __int64 *i; // rax
  __int64 v31; // rdx
  _DWORD *v32; // rax
  void *v33; // rdi
  _QWORD *v34; // rax
  __int64 result; // rax
  _QWORD *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v40; // rax
  __int64 *v41; // [rsp+0h] [rbp-1C8h]
  __int64 v42; // [rsp+8h] [rbp-1C0h]
  __int64 *v43; // [rsp+10h] [rbp-1B8h]
  __int64 *v44; // [rsp+18h] [rbp-1B0h]
  _DWORD *v45; // [rsp+20h] [rbp-1A8h]
  _BYTE *v46; // [rsp+28h] [rbp-1A0h]
  __m128 *v47; // [rsp+30h] [rbp-198h]
  int v48; // [rsp+38h] [rbp-190h]
  int v49; // [rsp+3Ch] [rbp-18Ch]
  __int64 v50; // [rsp+40h] [rbp-188h] BYREF
  __int64 v51; // [rsp+48h] [rbp-180h]
  __m128 v52; // [rsp+50h] [rbp-178h] BYREF
  int v53[4]; // [rsp+60h] [rbp-168h] BYREF
  _DWORD *v54; // [rsp+70h] [rbp-158h] BYREF
  int v55; // [rsp+78h] [rbp-150h]
  __int64 v56; // [rsp+90h] [rbp-138h] BYREF
  char v57[16]; // [rsp+98h] [rbp-130h] BYREF
  void *v58; // [rsp+A8h] [rbp-120h]
  __int16 v59; // [rsp+B0h] [rbp-118h]
  char v60; // [rsp+B2h] [rbp-116h]
  __int64 v61; // [rsp+B8h] [rbp-110h]
  void *v62; // [rsp+C0h] [rbp-108h]
  __int64 v63; // [rsp+C8h] [rbp-100h]
  int v64; // [rsp+D0h] [rbp-F8h]
  char v65; // [rsp+E0h] [rbp-E8h]
  __int64 v66; // [rsp+F0h] [rbp-D8h] BYREF
  _BYTE v67[24]; // [rsp+F8h] [rbp-D0h] BYREF
  __int64 v68; // [rsp+110h] [rbp-B8h]
  __int64 v69; // [rsp+118h] [rbp-B0h]
  __int64 v70; // [rsp+120h] [rbp-A8h]
  void *ptr; // [rsp+128h] [rbp-A0h]
  __int64 v72; // [rsp+130h] [rbp-98h]
  int v73; // [rsp+138h] [rbp-90h]
  char v74; // [rsp+148h] [rbp-80h]
  _BYTE v75[32]; // [rsp+150h] [rbp-78h] BYREF
  _BYTE v76[88]; // [rsp+170h] [rbp-58h] BYREF

  v3 = a2;
  v42 = a3;
  do
  {
    v6 = v3;
    v3 = *(_QWORD *)(v3 + 8);
  }
  while ( v3 );
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(v6 + 56);
  v66 = 0;
  v56 = v7;
  sub_16669D0(v57, v7);
  v58 = nullptr;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v9 = (_DWORD *)sub_186B270(0x80u);
  *(_QWORD *)v9 = 0;
  v9[2] = 0;
  *((_QWORD *)v9 + 2) = 0;
  v9[6] = 0;
  *((_QWORD *)v9 + 4) = 0;
  v9[10] = 0;
  *((_QWORD *)v9 + 6) = 0;
  v9[14] = 0;
  *((_QWORD *)v9 + 8) = 0;
  v9[18] = 0;
  *((_QWORD *)v9 + 10) = 0;
  v9[22] = 0;
  *((_QWORD *)v9 + 12) = 0;
  v9[26] = 0;
  *((_QWORD *)v9 + 14) = 0;
  v9[30] = 0;
  v62 = v9;
  v63 = 8;
  v64 = 0;
  v65 = 0;
  v41 = &v66;
  v44 = &v56;
  sub_15079C0(&v56, &v66);
  sub_14ECFD0(&v56, &v66);
  sub_18572D0(&v66);
  v10 = *(_QWORD *)(a1 + 40);
  v54 = nullptr;
  v66 = v10;
  sub_16744A0(v67, v10);
  v68 = 0;
  v69 = v10;
  v70 = 0;
  v11 = (_DWORD *)sub_186B270(0x80u);
  *(_QWORD *)v11 = 0;
  v11[2] = 0;
  *((_QWORD *)v11 + 2) = 0;
  v11[6] = 0;
  *((_QWORD *)v11 + 4) = 0;
  v11[10] = 0;
  *((_QWORD *)v11 + 6) = 0;
  v11[14] = 0;
  *((_QWORD *)v11 + 8) = 0;
  v11[18] = 0;
  *((_QWORD *)v11 + 10) = 0;
  v11[22] = 0;
  *((_QWORD *)v11 + 12) = 0;
  v11[26] = 0;
  *((_QWORD *)v11 + 14) = 0;
  v11[30] = 0;
  ptr = v11;
  v72 = 8;
  v73 = 0;
  v74 = 0;
  v45 = &v54;
  sub_1427860(&v66, &v54);
  v46 = v75;
  sub_157EB00(v75, v67);
  sub_16669D0(v76, v10);
  v76[28] = 0;
  sub_1409FB0(&v66, &v54);
  sub_18572D0(&v54);
  sub_16744A0(&v54, *(_QWORD *)(a1 + 40));
  v12 = sub_1673B10(&v54, *(_QWORD *)(a2 + 24));
  v15 = *(_QWORD **)(v8 + 8);
  v16 = v12;
  v17 = &v15[2 * *(unsigned int *)(v8 + 16)];
  if ( v15 != v17 )
  {
    while ( *v15 <= 1u )
    {
      v15 += 2;
      if ( v17 == v15 )
        goto LABEL_33;
    }
    if ( v17 != v15 )
    {
      v43 = &v50;
      v47 = &v52;
      while ( 1 )
      {
        v18 = *(_QWORD *)(a1 + 40);
        v50 = 0;
        v19 = _mm_loadh_ps((const double *)(a1 + 32));
        v51 = v18;
        if ( v16 )
        {
          *(__m128 *)v53 = v19;
          sub_1429740(
            (int)v41,
            2,
            (int)v53,
            (int)v43,
            (int)v13,
            v14,
            (int)v41,
            v42,
            (int)v43,
            (int)v44,
            (int)v45,
            (int)v46,
            v47,
            v48,
            v50);
        }
        else
        {
          v52 = v19;
          sub_150B360((int)v44, (int)v41, v42, (int)v43, (int)v44, (int)v45, (int)v46, v47, v48, v50);
        }
        v20 = (_DWORD *)v50;
        v21 = v42;
        do
        {
          v22 = v21;
          v21 = *(_QWORD *)(v21 + 8);
        }
        while ( v21 );
        v23 = *(_QWORD *)(v22 + 56);
        v24 = *(_DWORD *)(v50 + 12);
        v25 = *(unsigned int *)(v23 + 16);
        v26 = *(__int64 **)(v23 + 8);
        v27 = v25 - 1;
        v25 *= 16;
        v28 = (__int64 *)((char *)v26 + v25);
        v29 = 16LL * (v24 & v27);
        v13 = &v26[(unsigned __int64)v29 / 8];
        if ( v29 != v25 )
        {
          for ( i = &v26[(unsigned __int64)v29 / 8]; v28 != i; i += 2 )
          {
            v31 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v31 + 12) == v24 && v50 == v31 )
                goto LABEL_43;
            }
            else if ( !v31 )
            {
              goto LABEL_20;
            }
          }
        }
        for ( ; v13 != v26; v26 += 2 )
        {
          v40 = *v26;
          if ( (unsigned __int64)*v26 > 1 )
          {
            if ( *(_DWORD *)(v40 + 12) == v24 && v50 == v40 )
              goto LABEL_43;
          }
          else if ( !v40 )
          {
            break;
          }
        }
LABEL_20:
        v49 = *((_DWORD *)v15 + 2);
        if ( *(_WORD *)(v50 + 4) )
          goto LABEL_24;
        v32 = *(_DWORD **)(*(_QWORD *)(v50 + 16) + 24LL);
        if ( !v32 || *v32 != 3 || v32[1] )
          break;
LABEL_43:
        v38 = v51;
        if ( v20[2]-- == 1 )
          sub_15D7BC0(v38, v20);
LABEL_28:
        v34 = v15 + 2;
        if ( v17 != v15 + 2 )
        {
          while ( 1 )
          {
            v15 = v34;
            if ( *v34 > 1u )
              break;
            v34 += 2;
            if ( v17 == v34 )
              goto LABEL_33;
          }
          if ( v17 != v34 )
            continue;
        }
        goto LABEL_33;
      }
      if ( *(_DWORD *)(v50 + 24) )
      {
LABEL_24:
        v33 = *(void **)(v23 + 72);
        if ( v33 )
          memset(v33, 0, 4LL * *(unsigned int *)(v23 + 68));
        *(_DWORD *)(v23 + 64) = 0;
        sub_AC7030(v23 + 56, v20);
      }
      ++v20[2];
      v54 = v20;
      v55 = v49;
      sub_A3A380(v23 + 8, v45);
      v20 = (_DWORD *)v50;
      if ( !v50 )
        goto LABEL_28;
      goto LABEL_43;
    }
  }
LABEL_33:
  sub_157EB20(v46);
  if ( ptr )
    sub_186B220(ptr);
  result = sub_AC6F60(v68, v69);
  if ( v62 )
    result = sub_186B220(v62);
  v36 = v58;
  if ( v58 )
  {
    sub_2334C0((__int64 *)v58 + 11);
    v37 = v36[10];
    if ( v37 )
      sub_186B220((void *)(v37 - 8));
    return sub_186B220(v36);
  }
  return result;
}

