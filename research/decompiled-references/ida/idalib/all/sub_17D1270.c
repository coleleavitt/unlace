__int64 __fastcall sub_17D1270(
        __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 *a9,
        char a10)
{
  unsigned int v12; // r13d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 i; // r14
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  __int64 *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  int v41; // r15d
  __int64 v42; // rax
  size_t v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbx
  unsigned int v46; // r12d
  __int64 v47; // rax
  __int64 v49; // r14
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 *v60; // r8
  const __m128i *v61; // r10
  __int64 v62; // rax
  unsigned __int64 v63; // r9
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rax
  int v66; // eax
  __int64 *v67; // rdi
  __int64 *v68; // rsi
  __int64 v69; // rax
  __int64 *v70; // [rsp+0h] [rbp-138h]
  __int64 v71; // [rsp+0h] [rbp-138h]
  __int64 *v72; // [rsp+8h] [rbp-130h]
  __int64 v73; // [rsp+10h] [rbp-128h]
  __int64 v74[2]; // [rsp+18h] [rbp-120h] BYREF
  __int64 v75; // [rsp+28h] [rbp-110h] BYREF
  __int64 v76[3]; // [rsp+30h] [rbp-108h] BYREF
  void *v77; // [rsp+48h] [rbp-F0h]
  __int64 v78; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v79; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+78h] [rbp-C0h]
  __int64 v81; // [rsp+80h] [rbp-B8h]

  v12 = a4;
  v15 = a1[29];
  v74[0] = a6;
  if ( (*(_BYTE *)(v15 + 107) & 4) != 0 )
  {
    v16 = *(_QWORD *)&byte_8[v74[0] & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v16 & 8) == 0 || (v16 &= 0xFFFFFFFFFFFFFFF0LL, (*(_WORD *)(v16 + 24) & 0x1C0) == 0) )
    {
      if ( sub_F6ACC0(*(_QWORD *)(v74[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v16, a4, a5) )
      {
        v17 = *(_QWORD *)(v74[0] & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        {
          v66 = sub_F68130(v17);
          v18 = a1[31];
          v20 = v66 << 6;
          v19 = v74[0];
          if ( !v20 )
          {
LABEL_10:
            v74[0] = v19;
            goto LABEL_13;
          }
        }
        else
        {
          if ( (v74[0] & 1) == 0 && (byte_8[v74[0] & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
          {
            v60 = (__int64 *)a1[64];
            if ( v60 )
            {
              HIDWORD(v79) = v12;
              v61 = (const __m128i *)&v79;
              v81 = v74[0];
              LOWORD(v79) = 2;
              v80 = 3012;
              v62 = *((unsigned int *)v60 + 4);
              v63 = v60[1];
              v64 = v62 + 1;
              v65 = v63 + 80 * v62;
              if ( v64 > *((unsigned int *)v60 + 5) )
              {
                v67 = v60 + 1;
                v68 = v60 + 3;
                if ( v63 > (unsigned __int64)&v79 || v65 <= (unsigned __int64)&v79 )
                {
                  v72 = &v79;
                  v70 = v60;
                  sub_2237220(v67, v68, v64, 80);
                  v60 = v70;
                  v61 = (const __m128i *)&v79;
                  v65 = v70[1] + 80LL * *((unsigned int *)v70 + 4);
                }
                else
                {
                  v73 = v60[1];
                  v72 = &v79;
                  v70 = v60;
                  sub_2237220(v67, v68, v64, 80);
                  v60 = v70;
                  v69 = v70[1];
                  v61 = (const __m128i *)((char *)&v79 + v69 - v73);
                  v65 = 80LL * *((unsigned int *)v70 + 4) + v69;
                }
              }
              a7 = (__m128)_mm_loadu_si128(v61);
              *(__m128 *)v65 = a7;
              a8 = (__m128)_mm_loadu_si128(v61 + 1);
              *(__m128 *)(v65 + 16) = a8;
              *(__m128i *)(v65 + 32) = _mm_loadu_si128(v61 + 2);
              *(__m128i *)(v65 + 48) = _mm_loadu_si128(v61 + 3);
              *(__m128i *)(v65 + 64) = _mm_loadu_si128(v61 + 4);
              ++*((_DWORD *)v60 + 4);
            }
            else
            {
              v70 = &v79;
              sub_168B9F0((__int64)&v79, a1 + 1, v12, 0xBC4u, 0);
              v76[0] = *a9;
              v76[1] = (__int64)(a9 + 1);
              LODWORD(v72) = sub_F6CE20(v76);
              LODWORD(v75) = sub_F6CCB0(v76, a7);
              HIDWORD(v75) = (_DWORD)v72;
              sub_1587DB0((__int64)&v79, &v75);
              sub_15F7200(&v79);
            }
          }
          v18 = a1[31];
          v19 = v74[0];
          v20 = 64;
        }
        v21 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
        v22 = v19 & 7 | v20;
        if ( (v19 & 8) != 0 )
        {
          v22 |= *(__int64 *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL));
          v21 = (_QWORD *)*v21;
        }
        v19 = sub_A70C40(v18, (__int64)v21, v22);
        v18 = a1[31];
        goto LABEL_10;
      }
    }
  }
  v18 = a1[31];
LABEL_13:
  v23 = sub_A75DA0(v18, v74[0]);
  v24 = a2;
  v25 = sub_B74530(a1[31], a2, a3, v12, a5, v23, (__int64)a9, a10, 0);
  if ( sub_B799A0(v25) )
  {
    v59 = sub_15F25A0((__int64)a1, v24, v26, v27, v28, v29);
    if ( v59 )
    {
      v27 = *(unsigned int *)(v59 + 1488);
      v24 = *(unsigned int *)(v59 + 1492);
      if ( v27 + 1 > v24 )
      {
        v24 = v59 + 1496;
        v70 = (__int64 *)v59;
        sub_2237220(v59 + 1480, v59 + 1496, v27 + 1, 8);
        v59 = (__int64)v70;
        v27 = *((unsigned int *)v70 + 372);
      }
      v26 = *(_QWORD *)(v59 + 1480);
      *(_QWORD *)(v26 + 8 * v27) = v25;
      ++*(_DWORD *)(v59 + 1488);
    }
  }
  for ( i = *(_QWORD *)(*(_QWORD *)(v25 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        ;
        i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v31 = sub_F63050(i, v24, v26, v27);
    if ( !v31 )
      break;
    i = v31;
  }
  v32 = sub_F63240(i, v24, v26, v27, v28, v29);
  if ( v32 && (unsigned __int8)sub_F58560((__int64)v32) )
    goto LABEL_21;
  v49 = *(_QWORD *)(*(_QWORD *)(v25 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  while ( 2 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v49 + 16) - 2) <= 4u )
    {
LABEL_32:
      v49 = *(_QWORD *)(*(_QWORD *)(v49 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      continue;
    }
    break;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v50 = sub_F63050(v49, v24, v33, v34);
    if ( v50 )
    {
      v49 = v50;
      goto LABEL_32;
    }
  }
  v51 = sub_F63240(v49, v24, v33, v34, v35, v36);
  if ( v51 && sub_F58570((__int64)v51) )
LABEL_21:
    sub_17D0CF0((__int64)a1, *(_QWORD *)(v25 + 48), *(unsigned int *)(v25 + 24), 0, 6, v36, (__int64)v70, (int)v72);
  LOBYTE(v37) = v74[0];
  v38 = (__int64 *)(v74[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v74[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 35 <= 1 )
  {
    v39 = *a9;
    v80 = (__int64)(a9 + 1);
    v79 = v39;
    v40 = sub_F6CE20(&v79);
    v41 = sub_15F0EF0((__int64)a1, v40, 0, (__m128i)a7, *(double *)a8.m128_u64);
    sub_168B9F0((__int64)&v79, a1 + 1, v12, 0x113Fu, 0);
    LODWORD(v75) = 1;
    v42 = sub_1587D10((__int64)&v79, (int *)&v75);
    v71 = sub_1605D30(v42, v74);
    v43 = j__strlen("*");
    sub_9EC740((__int64)v76, v41, "*", v43, 0);
    sub_1589170(v71, v76);
    if ( v77 != &v78 )
      operator delete(v77);
    sub_15F7200(&v79);
    v37 = sub_A74EC0(a1[31], v74[0]);
    v74[0] = v37;
    *(_QWORD *)(v25 + 48) = v37;
    v38 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v44 = v38[1];
  if ( (v44 & 8) != 0 )
  {
    v52 = *(unsigned int *)((char *)&qword_18 + (v44 & 0xFFFFFFFFFFFFFFF0LL) + 4);
    if ( !(_DWORD)v52
      || (sub_168B9F0((__int64)&v79, a1 + 1, v12, 0x130Cu, 0),
          v53 = sub_1605D30((__int64)&v79, v74),
          LODWORD(v76[0]) = 1,
          sub_1587D10(v53, (int *)v76),
          sub_15F7200(&v79),
          v52 = 1,
          sub_B88650(v25, 1),
          LOBYTE(v37) = v74[0],
          v38 = (__int64 *)(v74[0] & 0xFFFFFFFFFFFFFFF0LL),
          v44 = *(_QWORD *)&byte_8[v74[0] & 0xFFFFFFFFFFFFFFF0LL],
          (v44 & 8) != 0) )
    {
      v54 = v44 & 0xFFFFFFFFFFFFFFF0LL;
      v55 = (*(_DWORD *)(v54 + 24) | v37 & 7) >> 9;
      if ( v55 )
      {
        v56 = *v38;
        v57 = a1[29];
        if ( (*(_BYTE *)(v57 + 47) & 0x20) == 0
          || (v57 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 2,
              (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u)
          && v55 != 4 )
        {
          if ( *(_BYTE *)(v56 + 16) != 42
            && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
             || (v56 = sub_F63050(v56, v52, v57, v54)) == 0)
            || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 32)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 25 > 1
            || (v58 = *(_QWORD *)&byte_8[v74[0] & 0xFFFFFFFFFFFFFFF0LL], (v58 & 8) == 0)
            || (*(_DWORD *)((char *)&qword_18 + (v58 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v58 & 7)) >> 9 != 24 )
          {
            sub_168B9F0((__int64)&v79, a1 + 1, v12, 0xBEDu, 0);
            sub_15F7200(&v79);
            sub_B88650(v25, 1);
          }
        }
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 248LL) - 23) <= 1 )
  {
    v45 = a1[96];
    v46 = *(_DWORD *)(v25 + 24);
    v47 = sub_B74600(v25);
    if ( (unsigned __int8)sub_1C0D9F0(v45, v47, v46) )
      sub_B88650(v25, 1);
  }
  return v25;
}
