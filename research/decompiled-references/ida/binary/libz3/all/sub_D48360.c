__int64 __fastcall sub_D48360(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, __int64 a6)
{
  _DWORD *v6; // rax
  unsigned int v8; // edi
  _QWORD *v10; // r12
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // rbp
  _QWORD *v16; // rax
  char v17; // al
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  void *v22; // rdi
  __int64 v23; // rsi
  void *v24; // rdi
  __int64 v25; // rsi
  void *v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r13
  unsigned int v30; // eax
  __m128 v31; // xmm0
  __m128 *v32; // rcx
  unsigned int v33; // r8d
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 *v36; // rsi
  int v37; // r8d
  _DWORD *v38; // r10
  __int64 *v39; // r9
  __int64 *v40; // r14
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 *v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 *v48; // rbx
  _DWORD *v49; // r14
  __int64 *v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdi
  _QWORD *v55; // rcx
  void (__fastcall ***v56)(void *); // r14
  __int64 v57; // rax
  __int64 v58; // r13
  _QWORD *v59; // rax
  int v60; // edx
  __m128 *v61; // rax
  unsigned __int64 v62; // rcx
  __m128 v63; // xmm0
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  char **exception; // r14
  int v68; // [rsp-8h] [rbp-B8h]
  int v69[2]; // [rsp+0h] [rbp-B0h] BYREF
  __int64 *v70; // [rsp+8h] [rbp-A8h]
  __int64 *v71; // [rsp+10h] [rbp-A0h]
  _DWORD *v72; // [rsp+18h] [rbp-98h]
  _QWORD *v73; // [rsp+20h] [rbp-90h]
  __int64 v74; // [rsp+28h] [rbp-88h] BYREF
  void *v75; // [rsp+30h] [rbp-80h]
  __int64 v76; // [rsp+38h] [rbp-78h] BYREF
  void *v77; // [rsp+40h] [rbp-70h]
  __int64 v78; // [rsp+48h] [rbp-68h] BYREF
  void *v79; // [rsp+50h] [rbp-60h]
  __int64 v80[11]; // [rsp+58h] [rbp-58h] BYREF

  v6 = *(_DWORD **)(a2 + 24);
  if ( v6 )
  {
    v8 = 5;
    if ( *v6 )
      return v8;
    if ( v6[1] != 4 )
      return v8;
    v10 = *(_QWORD **)a1;
    v11 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)v69 = a6;
    if ( v10[105] == v11 )
      return v8;
    v12 = a5;
    v13 = sub_15DC610(
            (int)v10,
            a2,
            a3,
            a4,
            (int)a5,
            a6,
            v68,
            v69[0],
            (int)v70,
            (int)v71,
            (int)v72,
            (char)v73,
            v74,
            (int)v75,
            v76,
            v77);
    v14 = *(_QWORD *)v69;
    v15 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v16 = *(_QWORD **)a1;
    v74 = 0;
    v75 = v16;
    v76 = 0;
    v77 = v16;
    v78 = 0;
    v79 = v16;
    v17 = sub_13A3F70(a1 + 8, v15, &v74, &v76, &v78, v14);
    v18 = v78;
    if ( !v17 )
    {
LABEL_9:
      if ( !v18 )
      {
        v19 = *v12;
        if ( !*v12 || (v20 = v12[1], v21 = *(_DWORD *)(v19 + 8) == 1, --*(_DWORD *)(v19 + 8), !v21) )
        {
          *v12 = 0;
          goto LABEL_15;
        }
LABEL_30:
        sub_15D7BC0(v20, v19);
        *v12 = v18;
        v18 = v78;
        if ( v78 )
        {
LABEL_13:
          v22 = v79;
          v21 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v22, v18);
        }
LABEL_15:
        v23 = v76;
        if ( v76 )
        {
          v24 = v77;
          v21 = (*(_DWORD *)(v76 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v24, v23);
        }
        v25 = v74;
        if ( v74 )
        {
          v26 = v75;
          v21 = (*(_DWORD *)(v74 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v26, v25);
        }
        if ( v15 )
        {
          v21 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v10, v15);
        }
        return 4;
      }
LABEL_10:
      v19 = *v12;
      ++*(_DWORD *)(v18 + 8);
      if ( !v19 || (v20 = v12[1], v21 = *(_DWORD *)(v19 + 8) == 1, --*(_DWORD *)(v19 + 8), !v21) )
      {
        *v12 = v18;
        goto LABEL_13;
      }
      goto LABEL_30;
    }
    sub_EDB570(*(_QWORD *)(a1 + 32), v74, v76, 0);
    ++*(_DWORD *)(a1 + 52);
    if ( !*(_BYTE *)(a1 + 48) )
    {
      v18 = v78;
      goto LABEL_9;
    }
    v27 = *(_QWORD *)(a1 + 24);
    if ( v27 )
    {
      v28 = *(_QWORD *)(v27 + 72);
      *(_QWORD *)v69 = *(_QWORD *)(v27 + 32);
    }
    else
    {
      v27 = sub_186B270(0x50u);
      v55 = *(_QWORD **)a1;
      v56 = *(void (__fastcall ****)(void *))(a1 + 24);
      *(_BYTE *)(v27 + 24) = 1;
      *(_QWORD *)(v27 + 16) = 0;
      *(_QWORD *)v69 = v55;
      strcpy((char *)(v27 + 56), "elim_term_ite");
      *(_QWORD *)v27 = &off_1C60CE8;
      *(_QWORD *)(v27 + 48) = 13;
      *(_QWORD *)(v27 + 72) = 0;
      *(_DWORD *)(v27 + 8) = 1;
      *(__m128i *)(v27 + 32) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v55, (__m128i)(unsigned __int64)(v27 + 56));
      if ( !v56 || (v21 = *((_DWORD *)v56 + 2) == 1, --*((_DWORD *)v56 + 2), !v21) )
      {
        v57 = v78;
        *(_QWORD *)(a1 + 24) = v27;
        v58 = *(_QWORD *)(v57 + 16);
        if ( v58 )
          ++*(_DWORD *)(v58 + 8);
        goto LABEL_60;
      }
      (**v56)(v56);
      sub_186B220(v56);
      v66 = *(_QWORD *)(v27 + 32);
      v28 = *(_QWORD *)(v27 + 72);
      *(_QWORD *)(a1 + 24) = v27;
      *(_QWORD *)v69 = v66;
    }
    v18 = v78;
    v29 = *(_QWORD *)(v78 + 16);
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    if ( v28 )
    {
      v30 = *(_DWORD *)(v28 - 4);
      if ( v30 != *(_DWORD *)(v28 - 8) )
      {
        v31 = _mm_loadh_ps((const double *)v69);
        v32 = (__m128 *)(v28 + 40LL * v30);
        v32[1].m128_u64[1] = *(_QWORD *)v69;
        v32[1].m128_u64[0] = 0;
        v32[2].m128_i32[0] = 0;
        *v32 = v31;
        *(_DWORD *)(v28 - 4) = v30 + 1;
        goto LABEL_10;
      }
      v33 = (3 * v30 + 1) >> 1;
      v34 = 40 * v33 + 8;
      if ( 40 * v30 + 8 >= v34 || v30 >= v33 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D47290(v80, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v80);
        sub_233E40((__int64)v80);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v70) = (3 * v30 + 1) >> 1;
      v35 = sub_186B270(v34);
      v36 = *(__int64 **)(v27 + 72);
      v37 = (int)v70;
      v38 = (_DWORD *)v35;
      v39 = (__int64 *)(v35 + 8);
      v40 = v36;
      if ( v36 )
      {
        v41 = *((unsigned int *)v36 - 1);
        v42 = v35 + 8;
        *(_DWORD *)(v35 + 4) = v41;
        v43 = &v36[5 * v41];
        v44 = v36;
        if ( v36 != v43 )
        {
          v70 = v36;
          do
          {
            v45 = v44[1];
            v44 += 5;
            v42 += 40;
            *(_QWORD *)(v42 - 32) = v45;
            v46 = *(v44 - 5);
            *(v44 - 5) = 0;
            *(_QWORD *)(v42 - 40) = v46;
            *(_QWORD *)(v42 - 16) = *(v44 - 2);
            v47 = *(v44 - 3);
            *(v44 - 3) = 0;
            *(_QWORD *)(v42 - 24) = v47;
            *(_DWORD *)(v42 - 8) = *((_DWORD *)v44 - 2);
          }
          while ( v43 != v44 );
          v36 = v70;
        }
        if ( (_DWORD)v41 )
        {
          v70 = (__int64 *)v15;
          v73 = v12;
          v48 = v40;
          v49 = v38;
          v71 = v39;
          v50 = &v36[5 * v41];
          LODWORD(v72) = v37;
          do
          {
            v53 = v48[2];
            if ( v53 )
            {
              v54 = v48[3];
              v21 = (*(_DWORD *)(v53 + 8))-- == 1;
              if ( v21 )
                sub_15D7BC0(v54, v53);
            }
            v51 = *v48;
            if ( *v48 )
            {
              v52 = v48[1];
              v21 = (*(_DWORD *)(v51 + 8))-- == 1;
              if ( v21 )
                sub_15D7BC0(v52, v51);
            }
            v48 += 5;
          }
          while ( v48 != v50 );
          v15 = (__int64)v70;
          v39 = v71;
          v38 = v49;
          v37 = (int)v72;
          v12 = v73;
          v36 = *(__int64 **)(v27 + 72);
        }
        v72 = v38;
        LODWORD(v71) = v37;
        v70 = v39;
        sub_186B220(v36 - 1);
        v38 = v72;
        v39 = v70;
        v37 = (int)v71;
        v64 = (unsigned int)v72[1];
        v65 = 5 * v64;
      }
      else
      {
        LODWORD(v64) = 0;
        *(_DWORD *)(v35 + 4) = 0;
        v65 = 0;
      }
      *(_QWORD *)(v27 + 72) = v39;
      v18 = v78;
      v61 = (__m128 *)&v39[v65];
      v60 = v64 + 1;
      *v38 = v37;
      goto LABEL_61;
    }
LABEL_60:
    v59 = (_QWORD *)sub_186B270(0x58u);
    v18 = v78;
    v60 = 1;
    *v59 = 2;
    v39 = v59 + 1;
    *(_QWORD *)(v27 + 72) = v59 + 1;
    v61 = (__m128 *)(v59 + 1);
LABEL_61:
    v62 = *(_QWORD *)v69;
    v61[1].m128_u64[0] = 0;
    v63 = _mm_loadh_ps((const double *)v69);
    v61[2].m128_i32[0] = 0;
    v61[1].m128_u64[1] = v62;
    *v61 = v63;
    *((_DWORD *)v39 - 1) = v60;
    goto LABEL_9;
  }
  return 5;
}

