void __fastcall sub_1A27710(
        unsigned int *a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int *a9)
{
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rbp
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r12
  unsigned int v25; // eax
  _WORD *v26; // rax
  unsigned int v27; // r12d
  unsigned __int64 v28; // rbp
  __int64 *v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  __int64 v35; // rdi
  int v36; // eax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // r13
  __int64 v43; // r13
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // r13
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rax
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v65; // r13
  unsigned int v66; // eax
  __int64 v67; // r13
  int v68; // eax
  __int64 v69; // r12
  size_t v70; // rax
  __int64 v71; // r13
  int v72; // eax
  int v73; // eax
  unsigned int v74; // [rsp+18h] [rbp-170h]
  size_t v75; // [rsp+20h] [rbp-168h]
  __int64 v76; // [rsp+20h] [rbp-168h]
  __int64 v77; // [rsp+28h] [rbp-160h] BYREF
  int v78; // [rsp+34h] [rbp-154h] BYREF
  __int64 v79; // [rsp+38h] [rbp-150h] BYREF
  _DWORD v80[6]; // [rsp+40h] [rbp-148h] BYREF
  void *v81; // [rsp+58h] [rbp-130h]
  __int64 v82; // [rsp+68h] [rbp-120h] BYREF
  __int64 v83[3]; // [rsp+80h] [rbp-108h] BYREF
  void *v84; // [rsp+98h] [rbp-F0h]
  __int64 v85; // [rsp+A8h] [rbp-E0h] BYREF
  _BYTE v86[200]; // [rsp+C0h] [rbp-C8h] BYREF

  v77 = a4;
  v15 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v17 = (unsigned int)(v16 - 2);
  if ( (unsigned __int8)(v16 - 2) > 4u )
  {
    if ( (_BYTE)v16 == 48 )
    {
      LODWORD(v19) = sub_1A0DD40(a4, a4, v16, v17, (__int64)a5, a6);
    }
    else
    {
      v54 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 57;
      if ( (unsigned int)v54 > 1 )
        v15 = sub_F63050(v15, a4, v54, v17);
      LODWORD(v19) = *(_DWORD *)(v15 + 20);
    }
  }
  else
  {
    v18 = sub_A72040(*(_QWORD **)(*(_QWORD *)a1 + 248LL), a4);
    if ( !v18 || (unsigned int)*(unsigned __int8 *)(v18 + 16) - 2 > 1 )
      goto LABEL_12;
    v19 = *(_QWORD **)(v18 + 40);
    if ( (*(_BYTE *)(v18 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v19 + 2) <= 0x40u )
        v19 = (_QWORD *)*v19;
      else
        v19 = *(_QWORD **)*v19;
    }
  }
  if ( !(_DWORD)v19 )
  {
    v20 = (unsigned int)*a5;
    if ( !*((_BYTE *)a1 + 9) )
    {
      v21 = (__int64 *)(*(_QWORD *)a1 + 8LL);
      v22 = sub_EEB7E0(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 8 * v20), a4, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)v86, v21, v22, 0xF68u, 0);
      sub_15F7200(v86);
      LODWORD(v20) = *a5;
    }
    *a5 = v20 + 1;
    *((_BYTE *)a1 + 8) = 1;
    return;
  }
LABEL_12:
  v23 = sub_EEC8C0(a3, a4, *(double *)a7.m128_u64);
  v74 = *a5;
  v24 = HIDWORD(v23) << 32;
  v25 = sub_EEB7E0(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * (unsigned int)*a5), a4, *(double *)a7.m128_u64);
  v26 = sub_1A116B0(a1, a3, v74, v77, a6, *a9, *(double *)a7.m128_u64, v24 | v25);
  v27 = *a5;
  v28 = (unsigned __int64)v26;
  v29 = a2;
  v78 = 0;
  sub_1A1BB30(a1, (void **)a2, a3, &v77, 0, a5, a7, a8, v26, &v78, 0);
  if ( !v28 )
    return;
  *(_QWORD *)(v28 + 8) = v77;
  if ( *a5 != v27 )
    v27 = *a5 - 1;
  v32 = *(_QWORD *)(a3 + 16);
  v33 = (*(_QWORD *)(a3 + 24) - v32) >> 3;
  if ( v27 < (unsigned int)v33 )
  {
    v34 = *(_QWORD *)(v32 + 8LL * v27);
    if ( v34 )
      *(_DWORD *)(v28 + 44) = (unsigned __int64)sub_EEC8C0(v34, (__int64)a2, *(double *)a7.m128_u64) >> 32;
  }
  v35 = *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *((_BYTE *)a1 + 9) )
    goto LABEL_23;
  v36 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v33 = (unsigned int)(v36 - 2);
  if ( (unsigned __int8)(v36 - 2) > 4u && (_BYTE)v36 != 48 )
    goto LABEL_23;
  v29 = *(__int64 **)(*(_QWORD *)a1 + 232LL);
  if ( !sub_BFB050(a3, (__int64)v29) )
  {
    v46 = a2[1];
    if ( v46 )
    {
      v47 = *(unsigned int *)a2;
      if ( (_DWORD)v47 == 10 )
      {
        v55 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
                (__int64)v29,
                v47,
                v32,
                v30,
                v31);
        v29 = (__int64 *)v55[13];
        v56 = (__int64)v55;
        sub_7052B0(v29 + 12, (__int64)v29, v57, v58, v59, v60);
        if ( *(_DWORD *)(*(_QWORD *)(v56 + 128) + 16LL) == 1 && !sub_B7E900(v56, (__int64)v29, v61, v62, v63, v64) )
          goto LABEL_22;
      }
      else if ( (_DWORD)v47 == 6 )
      {
        v52 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
                (__int64)v29,
                v47,
                v32,
                v30,
                v31);
        if ( (*((_BYTE *)v52 + 28) & 0x7Fu) - 59 > 2
          || (v29 = (__int64 *)v52[13],
              sub_7052B0(v29 + 12, (__int64)v29, v48, v49, v50, v51),
              !*(_DWORD *)(v52[16] + 16LL)) )
        {
          v33 = *(_QWORD *)(sub_B7E900((__int64)v52, (__int64)v29, v48, v49, v50, v51) + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v33 )
            goto LABEL_22;
          if ( (*(_BYTE *)(v33 + 28) & 0x7Fu) - 49 > 2 )
          {
            do
            {
              v53 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v33 = v53;
              if ( !v53 )
                goto LABEL_22;
            }
            while ( (*(_BYTE *)(v53 + 28) & 0x7Fu) - 49 > 2 );
          }
        }
      }
    }
    v65 = (__int64 *)(*(_QWORD *)a1 + 8LL);
    v66 = sub_BFB1C0(v28);
    sub_168B9F0((__int64)v86, v65, v66, 0x1BBDu, 0);
    v79 = sub_EEC8C0(v28, (__int64)v65, *(double *)a7.m128_u64);
    v67 = sub_1587DB0((__int64)v86, &v79);
    v75 = j__strlen("{");
    v68 = sub_BFB1C0(v28);
    sub_9EC740((__int64)v80, v68, "{", v75, 0);
    v69 = sub_1589170(v67, v80);
    v70 = j__strlen("}");
    v71 = *(_QWORD *)a1;
    v76 = v70;
    v72 = sub_BFB220(v28);
    v73 = sub_15F0EF0(v71, v72, 0, (__m128i)a7, *(double *)a8.m128_u64);
    sub_9EC740((__int64)v83, v73, "}", v76, 0);
    v29 = v83;
    sub_1589170(v69, v83);
    if ( v84 != &v85 )
      operator delete(v84);
    if ( v81 != &v82 )
      operator delete(v81);
    sub_15F7200(v86);
  }
LABEL_22:
  v35 = *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_23:
  v37 = sub_F63270(v35, (__int64)v29, v33, v32, v30, v31);
  v42 = v37;
  if ( *((_BYTE *)a1 + 9) != 1 )
  {
    if ( v37 )
    {
      sub_7052B0((__int64 *)(v37[13] + 96LL), v37[13], v38, v39, v40, v41);
      if ( (*(_BYTE *)v42[16] & 1) != 0 )
      {
        v43 = *(_QWORD *)a1;
        v44 = sub_BFB1C0(v28);
        sub_168B9F0((__int64)v86, (__int64 *)(v43 + 8), v44, 0x1A5Du, 0);
        v83[0] = sub_EEC8C0(v28, v43 + 8, *(double *)a7.m128_u64);
        v45 = sub_1587DB0((__int64)v86, v83);
        sub_1605D30(v45, &v77);
        sub_15F7200(v86);
      }
    }
  }
}
