void __fastcall sub_14368B0(
        __int64 a1,
        char *a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  int v8; // eax
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  unsigned int v12; // eax
  __int64 *v13; // rax
  __int64 v14; // r12
  char *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  void *v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  __int64 v27; // r15
  __int64 v28; // rax
  signed __int64 v29; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  size_t v34; // rcx
  char *v35; // r13
  char *v36; // r10
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // r12
  unsigned int v39; // r14d
  __int64 v40; // rax
  char *v41; // rsi
  size_t v42; // rax
  int v43; // eax
  __int64 v44; // r14
  char *v45; // r12
  unsigned __int64 v46; // r11
  void *v47; // rdi
  __int64 v48; // [rsp-8h] [rbp-70h]
  unsigned int v49; // [rsp+0h] [rbp-68h]
  unsigned int v50; // [rsp+0h] [rbp-68h]
  char *v51; // [rsp+0h] [rbp-68h]
  unsigned __int8 v52; // [rsp+0h] [rbp-68h]
  unsigned __int8 v53; // [rsp+0h] [rbp-68h]
  unsigned __int8 v54; // [rsp+0h] [rbp-68h]
  unsigned __int8 na; // [rsp+8h] [rbp-60h]
  size_t nc; // [rsp+8h] [rbp-60h]
  unsigned __int8 nb; // [rsp+8h] [rbp-60h]
  size_t n; // [rsp+8h] [rbp-60h]
  unsigned __int8 ne; // [rsp+8h] [rbp-60h]
  unsigned __int8 nd; // [rsp+8h] [rbp-60h]
  unsigned __int8 v61; // [rsp+10h] [rbp-58h]
  char *v62; // [rsp+10h] [rbp-58h]
  signed __int64 v63; // [rsp+10h] [rbp-58h]
  char *v64; // [rsp+10h] [rbp-58h]
  signed __int64 v65; // [rsp+10h] [rbp-58h]
  signed __int64 v66; // [rsp+10h] [rbp-58h]
  char *v67; // [rsp+10h] [rbp-58h]
  unsigned __int8 v68; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int8 v69; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int8 v70; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int8 v71; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int64 v72; // [rsp+20h] [rbp-48h]
  signed __int64 v73; // [rsp+20h] [rbp-48h]
  signed __int64 v74; // [rsp+20h] [rbp-48h]
  int v75; // [rsp+28h] [rbp-40h]
  unsigned __int64 v76; // [rsp+28h] [rbp-40h]

  if ( *(__int64 (__fastcall **)(__int64, __m128i *))(a1 + 1152) != sub_1418450 )
  {
    v8 = *(_DWORD *)(a1 + 2404);
    v9 = a6;
    v10 = a5;
    v11 = a4;
    if ( v8 )
    {
      v12 = v8 - 1;
      *(_DWORD *)(a1 + 2404) = v12;
      v13 = (__int64 *)(a1 + 8LL * v12 + 2408);
      v14 = *v13;
      *v13 = 0;
      sub_1466480(v14, a2, a3, a4, a5, a6);
      v15 = *(char **)(a1 + 1176);
      if ( v15 != *(char **)(a1 + 1184) )
      {
LABEL_4:
        v16 = *(_QWORD *)(a1 + 1120);
        v15 += 56;
        v17 = *(_QWORD *)(a1 + 1152);
        v18 = *(_QWORD *)(a1 + 1128);
        v19 = *(_QWORD *)(a1 + 1136);
        *((_QWORD *)v15 - 6) = *(_QWORD *)(a1 + 1160);
        *((_QWORD *)v15 - 7) = v17;
        v20 = *(_QWORD *)(a1 + 1112);
        *(_QWORD *)(a1 + 1112) = 0;
        *((_QWORD *)v15 - 4) = v16;
        v21 = *(_QWORD *)(a1 + 1144);
        *((_QWORD *)v15 - 5) = v20;
        *(_QWORD *)(a1 + 1144) = 0;
        *((_QWORD *)v15 - 3) = v21;
        *((_QWORD *)v15 - 2) = v18;
        *((_QWORD *)v15 - 1) = v19;
        *(_QWORD *)(a1 + 1176) = v15;
LABEL_5:
        v22 = *(void **)(a1 + 1144);
        *(_QWORD *)(a1 + 1136) = 0;
        *(_OWORD *)(a1 + 1120) = 0;
        *(_QWORD *)(a1 + 1144) = v14;
        if ( v22 )
        {
          sub_1466570(v22, v15, v18);
          operator delete(v22, 0x48u);
        }
        if ( *(__int64 (__fastcall **)())(a1 + 1152) != sub_1436080 )
          *(_QWORD *)(a1 + 1152) = sub_1436090;
        return;
      }
    }
    else
    {
      v49 = a3;
      v23 = operator new(0x48u);
      *(_BYTE *)(v23 + 64) &= ~8u;
      *(_QWORD *)(v23 + 16) = a1;
      v14 = v23;
      *(_QWORD *)(v23 + 40) = 0;
      *(_DWORD *)(v23 + 48) = 0;
      *(_DWORD *)(v23 + 56) = 0;
      *(_OWORD *)v23 = 0;
      sub_1466480(v23, a2, v49, v11, v10, v9);
      v15 = *(char **)(a1 + 1176);
      if ( v15 != *(char **)(a1 + 1184) )
        goto LABEL_4;
    }
    sub_1417C50(
      a1 + 1168,
      v15,
      (_QWORD *)(a1 + 1152),
      (_QWORD *)(a1 + 1160),
      (_QWORD *)(a1 + 1112),
      (_QWORD *)(a1 + 1120),
      (__int64 *)(a1 + 1144),
      (__int64 *)(a1 + 1128));
    v18 = v48;
    goto LABEL_5;
  }
  v24 = *(_QWORD *)(a1 + 2944);
  v25 = *(unsigned int *)(a1 + 2912);
  v26 = v25;
  if ( v24 < v25 )
  {
    v27 = 24 * v24;
    v28 = 24 * v25;
    v29 = 24LL * (unsigned int)a3;
    v51 = &a2[v29];
    v30 = *(unsigned int *)(a1 + 2916);
    v31 = 0xAAAAAAAAAAAAAAABLL * (v29 >> 3);
    v32 = v31 + v25;
    if ( v27 == 24 * v25 )
    {
      if ( v30 < v32 )
      {
        v66 = v29;
        nd = a5;
        sub_2237220(a1 + 2904, a1 + 2920, v32, 24);
        v25 = *(unsigned int *)(a1 + 2912);
        v29 = v66;
        a5 = nd;
      }
      v43 = v25;
      if ( v51 != a2 )
      {
        v53 = a5;
        memcpy((void *)(*(_QWORD *)(a1 + 2904) + 24 * v25), a2, v29);
        v43 = *(_DWORD *)(a1 + 2912);
        a5 = v53;
      }
      *(_DWORD *)(a1 + 2912) = v43 + v31;
    }
    else
    {
      if ( v30 < v32 )
      {
        v63 = v29;
        nb = a5;
        sub_2237220(a1 + 2904, a1 + 2920, v32, 24);
        v26 = *(unsigned int *)(a1 + 2912);
        v29 = v63;
        a5 = nb;
        v28 = 24 * v26;
      }
      v33 = *(_QWORD *)(a1 + 2904);
      v34 = v28 - v27;
      v35 = (char *)(v33 + v27);
      v36 = (char *)(v33 + v28);
      v37 = 0xAAAAAAAAAAAAAAABLL * ((v28 - v27) >> 3);
      v38 = v37;
      if ( v31 <= v37 )
      {
        v44 = v28 - v29;
        v45 = (char *)(v33 + v28 - v29);
        n = v29;
        v46 = 0xAAAAAAAAAAAAAAABLL * (v29 >> 3);
        v47 = (void *)(v33 + v28);
        if ( v26 - 0x5555555555555555LL * (v29 >> 3) > *(unsigned int *)(a1 + 2916) )
        {
          v76 = 0xAAAAAAAAAAAAAAABLL * (v29 >> 3);
          v74 = v29;
          v71 = a5;
          v67 = (char *)(v33 + v28);
          sub_2237220(a1 + 2904, a1 + 2920, v26 - 0x5555555555555555LL * (v29 >> 3), 24);
          v26 = *(unsigned int *)(a1 + 2912);
          LODWORD(v46) = v76;
          v29 = v74;
          a5 = v71;
          v36 = v67;
          v47 = (void *)(*(_QWORD *)(a1 + 2904) + 24 * v26);
        }
        if ( v36 != v45 )
        {
          v75 = v46;
          v73 = v29;
          v70 = a5;
          v64 = v36;
          memmove(v47, v45, n);
          LODWORD(v26) = *(_DWORD *)(a1 + 2912);
          LODWORD(v46) = v75;
          v29 = v73;
          a5 = v70;
          v36 = v64;
        }
        *(_DWORD *)(a1 + 2912) = v46 + v26;
        if ( v35 != v45 )
        {
          v65 = v29;
          ne = a5;
          memmove(&v36[-(v44 - v27)], v35, v44 - v27);
          v29 = v65;
          a5 = ne;
        }
        if ( v51 != a2 )
        {
          v54 = a5;
          memmove(v35, a2, v29);
          a5 = v54;
        }
      }
      else
      {
        v39 = v26 + v31;
        *(_DWORD *)(a1 + 2912) = v39;
        if ( v35 != v36 )
        {
          v72 = 0xAAAAAAAAAAAAAAABLL * ((v28 - v27) >> 3);
          v69 = a5;
          v62 = (char *)(v33 + v28);
          nc = v28 - v27;
          memcpy((void *)(v33 + 24LL * v39 - v34), (const void *)(v33 + v27), v34);
          v37 = v72;
          a5 = v69;
          v36 = v62;
          v34 = nc;
        }
        if ( v37 )
        {
          v40 = 0;
          do
          {
            *(__m128i *)&v35[v40] = _mm_loadu_si128((const __m128i *)&a2[v40]);
            *(_DWORD *)&v35[v40 + 16] = *(_DWORD *)&a2[v40 + 16];
            v40 += 24;
            --v38;
          }
          while ( v38 );
          v41 = &a2[v34];
        }
        else
        {
          v41 = a2;
        }
        if ( v51 != v41 )
        {
          v42 = v51 - v41;
          v52 = a5;
          memcpy(v36, v41, v42);
          a5 = v52;
        }
      }
    }
    if ( a2 && a5 )
      operator delete[](a2);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 1120) && !*(_QWORD *)(a1 + 1144) && *(_QWORD *)(a1 + 1176) != *(_QWORD *)(a1 + 1168) )
    {
      v68 = a6;
      v61 = a5;
      na = a4;
      v50 = a3;
      sub_1436710(a1, v25, a3);
      a6 = v68;
      a5 = v61;
      a4 = na;
      a3 = v50;
    }
    sub_14368B0(a1, a2, a3, a4, a5, a6);
    sub_1417F90((_QWORD *)a1);
  }
}
