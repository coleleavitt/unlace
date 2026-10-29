__int64 __fastcall sub_1541780(__int64 a1, __int64 a2, char a3, __m128i a4, __m128 a5)
{
  int *v6; // r13
  unsigned int v8; // ebp
  __int16 v9; // ax
  __int64 v10; // r12
  __int64 *v11; // rdi
  __int16 v12; // ax
  unsigned int v13; // r13d
  __int64 v14; // rsi
  __int64 v15; // rax
  _WORD *v16; // r9
  char *v17; // rax
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v23; // rax
  void *v24; // rax
  unsigned int v25; // eax
  char *v26; // r14
  unsigned __int64 v27; // rcx
  signed __int64 v28; // r10
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  signed __int64 v33; // r11
  char *v34; // r8
  __int64 v35; // rcx
  unsigned int v36; // r9d
  __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  char *v42; // rsi
  char *v43; // rdx
  char *v44; // rdi
  size_t v45; // rax
  char *v46; // r9
  __int64 v47; // r11
  unsigned __int64 v48; // rdx
  __int64 i; // rax
  __int64 v50; // [rsp+0h] [rbp-208h]
  __int16 v51; // [rsp+8h] [rbp-200h]
  _WORD *v52; // [rsp+8h] [rbp-200h]
  unsigned int v53; // [rsp+10h] [rbp-1F8h]
  _WORD *v54; // [rsp+10h] [rbp-1F8h]
  unsigned int v55; // [rsp+18h] [rbp-1F0h]
  __int64 v56; // [rsp+18h] [rbp-1F0h]
  void *destb; // [rsp+20h] [rbp-1E8h]
  void *destc; // [rsp+20h] [rbp-1E8h]
  char *dest; // [rsp+20h] [rbp-1E8h]
  void *desta; // [rsp+20h] [rbp-1E8h]
  int deste; // [rsp+20h] [rbp-1E8h]
  char *destf; // [rsp+20h] [rbp-1E8h]
  char *destg; // [rsp+20h] [rbp-1E8h]
  void *destd; // [rsp+20h] [rbp-1E8h]
  __int64 v65; // [rsp+28h] [rbp-1E0h]
  char *v66; // [rsp+28h] [rbp-1E0h]
  size_t na; // [rsp+30h] [rbp-1D8h]
  size_t nb; // [rsp+30h] [rbp-1D8h]
  size_t n; // [rsp+30h] [rbp-1D8h]
  size_t nc; // [rsp+30h] [rbp-1D8h]
  signed __int64 v71; // [rsp+38h] [rbp-1D0h]
  __int64 v72; // [rsp+38h] [rbp-1D0h]
  char *v73; // [rsp+38h] [rbp-1D0h]
  signed __int64 v74; // [rsp+38h] [rbp-1D0h]
  char *v75; // [rsp+38h] [rbp-1D0h]
  __int64 v76; // [rsp+40h] [rbp-1C8h]
  signed __int64 v77; // [rsp+40h] [rbp-1C8h]
  signed __int64 v78; // [rsp+40h] [rbp-1C8h]
  int v79; // [rsp+48h] [rbp-1C0h]
  char *v80; // [rsp+48h] [rbp-1C0h]
  size_t v81; // [rsp+50h] [rbp-1B8h]
  __int64 v82; // [rsp+58h] [rbp-1B0h]
  __int64 v83; // [rsp+60h] [rbp-1A8h] BYREF
  void *src; // [rsp+68h] [rbp-1A0h]
  __int64 v85; // [rsp+70h] [rbp-198h]
  _BYTE v86[16]; // [rsp+78h] [rbp-190h] BYREF
  __int64 v87; // [rsp+88h] [rbp-180h] BYREF
  void *v88; // [rsp+90h] [rbp-178h]
  __int64 v89; // [rsp+98h] [rbp-170h]
  _BYTE v90[16]; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v91; // [rsp+B0h] [rbp-158h] BYREF
  void *v92; // [rsp+B8h] [rbp-150h]
  __int64 v93; // [rsp+C0h] [rbp-148h]
  _BYTE v94[16]; // [rsp+C8h] [rbp-140h] BYREF
  __int64 v95; // [rsp+D8h] [rbp-130h] BYREF
  void *ptr; // [rsp+E0h] [rbp-128h]
  __int64 v97; // [rsp+E8h] [rbp-120h]
  _BYTE v98[16]; // [rsp+F0h] [rbp-118h] BYREF
  void *v99[2]; // [rsp+100h] [rbp-108h] BYREF
  _BYTE v100[248]; // [rsp+110h] [rbp-F8h] BYREF

  v6 = (int *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_WORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 24);
  v53 = a3 & 5;
  *(_DWORD *)(a1 + 40) = v8;
  v51 = v9;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v11 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v11, v6);
  v12 = *(_WORD *)(a1 + 32);
  v13 = *(_DWORD *)(a1 + 40);
  v50 = a2 + 40;
  if ( v12 == 189 )
  {
    src = v86;
    v88 = v90;
    v83 = 0;
    v85 = 0x200000000LL;
    v87 = a1 + 504;
    v89 = 0x200000000LL;
    sub_1490230((const __m128i *)a1, (__int64)&v83, 0, 0, a4, a5);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) == 0 || *(_WORD *)(a1 + 32) == 63 )
    {
      v26 = (char *)src;
      v27 = *(unsigned int *)(a2 + 20);
      v28 = 8LL * (unsigned int)v85;
      v66 = (char *)src + v28;
      v29 = v28 >> 3;
      v30 = *(unsigned int *)(a2 + 16);
      v31 = v30;
      v32 = v30 + (v28 >> 3);
      v33 = 8 * v30;
      if ( 8 * v30 )
      {
        if ( v27 < v32 )
        {
          v72 = (8LL * (unsigned int)v85) >> 3;
          nb = 8LL * (unsigned int)v85;
          sub_2237220(a2 + 8, a2 + 24, v32, 8);
          v31 = *(unsigned int *)(a2 + 16);
          v34 = *(char **)(a2 + 8);
          v29 = v72;
          v28 = nb;
          v33 = 8 * v31;
          dest = &v34[8 * v31];
        }
        else
        {
          v34 = *(char **)(a2 + 8);
          dest = &v34[v33];
        }
        v35 = v33 >> 3;
        if ( v33 >> 3 >= v29 )
        {
          v44 = dest;
          v45 = v28;
          n = v33 - v28;
          v46 = &v34[v33 - v28];
          v47 = v28 >> 3;
          v48 = (v28 >> 3) + v31;
          if ( v48 > *(unsigned int *)(a2 + 20) )
          {
            v82 = v28 >> 3;
            v81 = v28;
            v80 = v46;
            v78 = v28;
            v75 = v34;
            sub_2237220(a2 + 8, a2 + 24, v48, 8);
            v31 = *(unsigned int *)(a2 + 16);
            LODWORD(v47) = v82;
            v45 = v81;
            v44 = (char *)(*(_QWORD *)(a2 + 8) + 8 * v31);
            v46 = v80;
            v28 = v78;
            v34 = v75;
          }
          if ( v46 != dest )
          {
            v79 = v47;
            v77 = v28;
            v73 = v34;
            destf = v46;
            memmove(v44, v46, v45);
            LODWORD(v31) = *(_DWORD *)(a2 + 16);
            LODWORD(v47) = v79;
            v28 = v77;
            v34 = v73;
            v46 = destf;
          }
          *(_DWORD *)(a2 + 16) = v47 + v31;
          if ( v34 != v46 )
          {
            v74 = v28;
            destg = v34;
            memmove(&v34[v28], v34, n);
            v28 = v74;
            v34 = destg;
          }
          if ( v26 != v66 )
            memmove(v34, v26, v28);
        }
        else
        {
          v36 = v31 + v29;
          *(_DWORD *)(a2 + 16) = v36;
          if ( v34 != dest )
          {
            v76 = v33 >> 3;
            v71 = v33;
            na = (size_t)v34;
            memcpy(&v34[8 * v36 - v33], v34, v33);
            v35 = v76;
            v33 = v71;
            v34 = (char *)na;
          }
          if ( v35 )
          {
            if ( (v26 >= v34 + 16 || v34 >= v26 + 16) && (unsigned __int64)(v35 - 1) > 3 )
            {
              v37 = 0;
              v38 = 0;
              v39 = ((unsigned __int64)(v35 - 2) >> 1) + 1;
              do
              {
                a4 = _mm_loadu_si128((const __m128i *)&v26[v37]);
                ++v38;
                *(__m128i *)&v34[v37] = a4;
                v37 += 16;
              }
              while ( v38 < v39 );
              v40 = 2 * v39;
              v41 = 16 * v39;
              v42 = &v26[v41];
              v43 = &v34[v41];
              if ( v35 != v40 )
                *(_QWORD *)v43 = *(_QWORD *)v42;
            }
            else
            {
              for ( i = 0; i != v35; ++i )
                *(_QWORD *)&v34[8 * i] = *(_QWORD *)&v26[8 * i];
            }
            v26 += v33;
          }
          if ( v66 != v26 )
            memcpy(dest, v26, v66 - v26);
        }
      }
      else
      {
        if ( v27 < v32 )
        {
          nc = (8LL * (unsigned int)v85) >> 3;
          destd = (void *)(8LL * (unsigned int)v85);
          sub_2237220(a2 + 8, a2 + 24, v32, 8);
          v30 = *(unsigned int *)(a2 + 16);
          LODWORD(v29) = nc;
          v28 = (signed __int64)destd;
        }
        if ( v26 != v66 )
        {
          deste = v29;
          memcpy((void *)(*(_QWORD *)(a2 + 8) + 8 * v30), v26, v28);
          LODWORD(v30) = *(_DWORD *)(a2 + 16);
          LODWORD(v29) = deste;
        }
        *(_DWORD *)(a2 + 16) = v29 + v30;
      }
      LODWORD(v85) = 0;
      sub_15D8C50(v50, &v87);
      v24 = nullptr;
      LODWORD(v89) = 0;
    }
    else
    {
      v99[0] = v100;
      v92 = v94;
      ptr = v98;
      v99[1] = (void *)0x1800000000LL;
      v95 = a1 + 504;
      v91 = 0;
      v93 = 0x200000000LL;
      v97 = 0x200000000LL;
      v23 = sub_153A000(
              (const __m128i *)a1,
              (__int64 (__fastcall ***)())v99,
              v53,
              nullptr,
              (__int64)&v91,
              (__int64)&v83,
              a4,
              a5);
      if ( (_DWORD)v85 && v23 != 1 )
        v23 = sub_1C49890(*(_QWORD *)(a1 + 96), &v83, v23 & 0xFFFFFFFFFFFFFFFELL);
      v65 = v23;
      sub_15DCED0(v95, &v95);
      v24 = (void *)v65;
      if ( ptr != v98 )
      {
        free(ptr);
        v24 = (void *)v65;
      }
      if ( v92 != v94 )
      {
        destb = v24;
        free(v92);
        v24 = destb;
      }
      if ( v99[0] != v100 )
      {
        destc = v24;
        free(v99[0]);
        v24 = destc;
      }
    }
    desta = v24;
    v14 = (__int64)&v87;
    sub_15DCED0(v87, &v87);
    v15 = (__int64)desta;
    if ( v88 != v90 )
    {
      free(v88);
      v15 = (__int64)desta;
    }
    if ( src != v86 )
    {
      v56 = v15;
      free(src);
      v15 = v56;
    }
    if ( v15 )
    {
LABEL_6:
      if ( v15 != 1 )
        goto LABEL_7;
      goto LABEL_4;
    }
    v12 = *(_WORD *)(a1 + 32);
  }
  if ( v12 == 25 )
  {
    sub_15341A0(a1);
    v14 = v13;
    v15 = sub_1C36210(*(_QWORD *)(a1 + 96), v13, 0);
    if ( v15 )
      goto LABEL_6;
  }
  v14 = 0;
  v15 = sub_153D810(a1, nullptr, v53, a4, a5);
  if ( v15 == 1 )
  {
LABEL_4:
    v14 = v13;
    v15 = sub_1C36210(*(_QWORD *)(a1 + 96), v13, 0);
  }
LABEL_7:
  v16 = (_WORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
  v17 = *(char **)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (v17[1] & 8) == 0 )
  {
    v18 = *v17;
    if ( v18 >= 0 && (*v16 & 0x1FF) == 0xF5 )
    {
      v54 = v16;
      v55 = (v18 & 8) == 0 ? 1953 : 2073;
      v25 = sub_EEB7E0((unsigned __int64)v16, v14, *(double *)a4.m128i_i64);
      sub_1564820(v99, a1, v25, v55);
      sub_AEA040((__int64)v99);
      v16 = v54;
    }
  }
  if ( (unsigned __int16)(v51 - 7) <= 0xCu )
  {
    v10 = 0;
  }
  else if ( v51 == 1 )
  {
    v10 = 0;
  }
  v52 = v16;
  v19 = sub_1A5C7E0(*(_QWORD *)(a1 + 96), v10, v8, 0);
  v20 = *(_QWORD *)(a1 + 96);
  v21 = v19;
  LOWORD(v99[0]) = 1;
  sub_1836B60(v20, *(_QWORD *)(v20 + 608), v19, a2, v99);
  *(_DWORD *)(a2 + 16) = 0;
  sub_15DCED0(*(_QWORD *)(a2 + 40), v50);
  *(_DWORD *)(a2 + 56) = 0;
  *(_QWORD *)a2 = 0;
  return sub_1C3E300(*(_QWORD *)(a1 + 96), v8, v21, v13, v52);
}
