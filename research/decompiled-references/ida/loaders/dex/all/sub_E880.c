__int64 __fastcall sub_E880(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  unsigned int v6; // r14d
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // r15
  char v16; // al
  char *v17; // r13
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r15
  char *v29; // rdi
  __int64 i; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r8
  __int64 v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 *v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r15
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r15
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rsi
  __m128i v55; // xmm0
  __int64 v56; // rsi
  __int64 v57; // rdi
  unsigned __int64 v58; // [rsp+8h] [rbp-A0h]
  bool v59; // [rsp+17h] [rbp-91h]
  unsigned __int64 v60; // [rsp+18h] [rbp-90h]
  __int64 v61; // [rsp+18h] [rbp-90h]
  __int64 *v62; // [rsp+18h] [rbp-90h]
  __int64 v63; // [rsp+18h] [rbp-90h]
  __int64 *v64; // [rsp+18h] [rbp-90h]
  __int64 v65; // [rsp+20h] [rbp-88h]
  __int64 v66; // [rsp+20h] [rbp-88h]
  __int64 v67; // [rsp+28h] [rbp-80h]
  __int64 v68; // [rsp+28h] [rbp-80h]
  char *s1; // [rsp+30h] [rbp-78h] BYREF
  __int128 v70; // [rsp+38h] [rbp-70h]
  char v71; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v72; // [rsp+68h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 472);
  v72 = __readfsqword(0x28u);
  v5 = qlseek(v3, 0, 1);
  v6 = *(unsigned __int8 *)(a2 + 616);
  if ( (_BYTE)v6 )
    goto LABEL_4;
  if ( *(_WORD *)(a2 + 520) != 3 )
    goto LABEL_3;
  v8 = *(unsigned __int16 *)(a2 + 522);
  if ( (unsigned __int16)v8 > 0x3Eu )
  {
    if ( (_WORD)v8 != 183 )
      goto LABEL_3;
  }
  else
  {
    if ( (unsigned __int16)v8 <= 2u )
      goto LABEL_3;
    v9 = 0x4000010000000108LL;
    if ( !_bittest64(&v9, v8) )
      goto LABEL_3;
  }
  v58 = *(_QWORD *)(a2 + 528);
  if ( v58 )
    goto LABEL_3;
  if ( !*(_QWORD *)(a2 + 536) )
    goto LABEL_3;
  if ( !*(_QWORD *)(a2 + 544) )
    goto LABEL_3;
  if ( !*(_WORD *)(a2 + 556) )
    goto LABEL_3;
  if ( !*(_WORD *)(a2 + 558) )
    goto LABEL_3;
  if ( !*(_WORD *)(a2 + 560) )
    goto LABEL_3;
  if ( !*(_WORD *)(a2 + 562) )
    goto LABEL_3;
  v10 = *(_WORD *)(a2 + 564);
  if ( v10 <= 1u )
    goto LABEL_3;
  v59 = *(_WORD *)(a2 + 566) < v10 && *(_WORD *)(a2 + 566) != 0;
  if ( !v59 )
  {
LABEL_4:
    v6 = 0;
    goto LABEL_3;
  }
  v11 = v5 - *(_QWORD *)(a2 + 480);
  *(_QWORD *)(a1 + 8) = 0;
  v12 = *(_QWORD *)(a2 + 120);
  v13 = *(_QWORD *)(a2 + 112);
  v14 = v11;
  v15 = v13;
  if ( !(v12 << 6) )
  {
LABEL_84:
    v5 = *(_QWORD *)(a2 + 480) + v11;
    goto LABEL_3;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v15 + 4) == 1 && *(_QWORD *)(v15 + 8) == 2 )
    {
      s1 = nullptr;
      v70 = 0;
      if ( v15 )
      {
        if ( *(__int64 *)(a2 + 256) > 0 && *(_QWORD *)(a2 + 272) )
          break;
      }
    }
LABEL_19:
    v15 += 64;
    if ( v15 == v13 + (v12 << 6) )
    {
      v18 = *(_QWORD *)(a1 + 8);
      goto LABEL_33;
    }
  }
  v16 = sub_E7D0(*(_QWORD *)(a2 + 240), (__int64 *)&s1, (__int64 *)(a2 + 256), *(_DWORD *)v15);
  v17 = s1;
  if ( !v16 || !(_QWORD)v70 || strcmp(s1, ".rodata") )
  {
    if ( v17 )
    {
      *(_QWORD *)&v70 = 0;
      qfree(v17);
    }
    v13 = *(_QWORD *)(a2 + 112);
    v12 = *(_QWORD *)(a2 + 120);
    goto LABEL_19;
  }
  v18 = *(_QWORD *)(v15 + 24);
  *(_QWORD *)(a1 + 8) = v18;
  *(_QWORD *)(a1 + 16) = v18 + *(_QWORD *)(v15 + 32);
  if ( v17 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v17);
    v18 = *(_QWORD *)(a1 + 8);
  }
LABEL_33:
  v19 = *(_QWORD *)(a2 + 480);
  if ( !v18
    || (v20 = *(_QWORD *)(a1 + 16), v20 < v18)
    || (v21 = qlseek(*(_QWORD *)(a2 + 472), v20 + v19, 0), v19 = *(_QWORD *)(a2 + 480), v21 == -1) )
  {
    v5 = v14 + v19;
  }
  else
  {
    if ( qlseek(*(_QWORD *)(a2 + 472), *(_QWORD *)(a1 + 8) + v19, 0) == -1 )
      goto LABEL_83;
    if ( qlread(*(_QWORD *)(a2 + 472), a1 + 24, 4) != 4 )
      goto LABEL_83;
    if ( *(_DWORD *)(a1 + 24) != 175399279 )
      goto LABEL_83;
    if ( qlread(*(_QWORD *)(a2 + 472), a1 + 28, 4) != 4 )
      goto LABEL_83;
    v22 = *(unsigned __int8 *)(a1 + 28);
    if ( (unsigned int)(v22 - 48) > 9 )
      goto LABEL_83;
    v23 = *(unsigned __int8 *)(a1 + 29);
    if ( (unsigned int)(v23 - 48) > 9 )
      goto LABEL_83;
    v24 = *(unsigned __int8 *)(a1 + 30);
    if ( (unsigned int)(v24 - 48) > 9 || *(_BYTE *)(a1 + 31) )
      goto LABEL_83;
    v25 = v24 + 100 * v22 + 10 * v23;
    *(_DWORD *)a1 = v25 - 5328;
    if ( (unsigned int)(v25 - 5367) > 0x65 )
    {
      sub_5860((__int64)"OAT version %s is not supported\n", (const char *)(a1 + 28));
      goto LABEL_83;
    }
    if ( (int)sub_B290(a2, a1 + 32, 4, 1) < 0
      || (int)sub_B290(a2, a1 + 36, 4, 1) < 0
      || (int)sub_B290(a2, a1 + 40, 4, 1) < 0
      || (int)sub_B290(a2, a1 + 44, 4, 1) < 0 )
    {
      goto LABEL_83;
    }
    if ( *(int *)a1 <= 126 )
    {
      *(_DWORD *)(a1 + 48) = 0;
      goto LABEL_51;
    }
    if ( (int)sub_B290(a2, a1 + 48, 4, 1) < 0 )
    {
LABEL_83:
      v11 = v14;
      goto LABEL_84;
    }
LABEL_51:
    if ( (int)sub_B290(a2, a1 + 52, 4, 1) < 0
      || (int)sub_B290(a2, a1 + 56, 4, 1) < 0
      || (int)sub_B290(a2, a1 + 60, 4, 1) < 0
      || (int)sub_B290(a2, a1 + 64, 4, 1) < 0
      || *(int *)a1 <= 51
      && ((int)sub_B290(a2, a1 + 68, 4, 1) < 0
       || (int)sub_B290(a2, a1 + 72, 4, 1) < 0
       || (int)sub_B290(a2, a1 + 76, 4, 1) < 0) )
    {
      goto LABEL_83;
    }
    if ( (int)sub_B290(a2, a1 + 80, 4, 1) < 0 )
      goto LABEL_83;
    if ( (int)sub_B290(a2, a1 + 84, 4, 1) < 0 )
      goto LABEL_83;
    if ( (int)sub_B290(a2, a1 + 88, 4, 1) < 0 )
      goto LABEL_83;
    if ( (int)sub_B290(a2, a1 + 92, 4, 1) < 0 )
      goto LABEL_83;
    if ( (int)sub_B290(a2, a1 + 96, 4, 1) < 0 )
      goto LABEL_83;
    if ( (int)sub_B290(a2, a1 + 100, 4, 1) < 0 )
      goto LABEL_83;
    if ( (int)sub_B290(a2, a1 + 104, 4, 1) < 0 )
      goto LABEL_83;
    if ( (int)sub_B290(a2, a1 + 108, 4, 1) < 0 )
      goto LABEL_83;
    v26 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    if ( (*(_WORD *)(a1 + 52) & 0xFFF) != 0
      || (*(_WORD *)(a1 + 96) & 0xFFF) != 0
      || qlseek(*(_QWORD *)(a2 + 472), v26 + *(unsigned int *)(a1 + 108), 0) == -1 )
    {
      goto LABEL_83;
    }
    v27 = *(unsigned int *)(a1 + 44);
    v28 = *(_QWORD *)(a1 + 120);
    if ( v27 != v28 )
    {
      v29 = &v71;
      for ( i = 6; i; --i )
      {
        *(_DWORD *)v29 = 0;
        v29 += 4;
      }
      s1 = nullptr;
      v70 = 0;
      if ( v27 < v28 )
      {
        v35 = v27;
        do
        {
          v36 = (__int64 *)(*(_QWORD *)(a1 + 112) + 48 * v35);
          v37 = *v36;
          if ( *v36 )
          {
            v60 = v35;
            v36[1] = 0;
            qfree(v37);
            v35 = v60;
          }
          ++v35;
        }
        while ( v28 != v35 );
      }
      else
      {
        v31 = *(_QWORD *)(a1 + 112);
        v32 = *(_QWORD *)(a1 + 128);
        v33 = a1 + 112;
        if ( (unsigned __int64)&s1 < v31 || (unsigned __int64)&s1 >= 48 * v32 + v31 )
        {
          if ( v32 < v27 )
          {
            v63 = *(_QWORD *)(a1 + 128);
            v48 = qvector_reserve(v33, 0, v27, 48);
            v49 = *(_QWORD *)(a1 + 128);
            v50 = v48;
            v51 = *(_QWORD *)(a1 + 120);
            v52 = *(__int64 **)(a1 + 112);
            v53 = v50;
            *(_QWORD *)(a1 + 128) = v63;
            while ( --v51 >= 0 )
            {
              v54 = *v52;
              v55 = _mm_loadu_si128((const __m128i *)(v52 + 1));
              *v52 = 0;
              *(_QWORD *)v53 = v54;
              *(__m128i *)(v53 + 8) = v55;
              v56 = v52[3];
              v52[2] = 0;
              *(_QWORD *)(v53 + 24) = v56;
              *(_QWORD *)(v53 + 32) = v52[4];
              *(_DWORD *)(v53 + 40) = *((_DWORD *)v52 + 10);
              v57 = *v52;
              if ( *v52 )
              {
                v68 = v51;
                v52[1] = 0;
                v66 = v53;
                v64 = v52;
                qfree(v57);
                v51 = v68;
                v53 = v66;
                v52 = v64;
              }
              v52 += 6;
              v53 += 48;
            }
            qfree(*(_QWORD *)(a1 + 112));
            *(_QWORD *)(a1 + 112) = v50;
            v28 = *(_QWORD *)(a1 + 120);
            *(_QWORD *)(a1 + 128) = v49;
          }
          while ( v28 < v27 )
          {
            v47 = *(_QWORD *)(a1 + 112) + 48 * v28;
            *(_QWORD *)v47 = 0;
            ++v28;
            *(_QWORD *)(v47 + 24) = 0;
            *(_QWORD *)(v47 + 32) = 0;
            *(_DWORD *)(v47 + 40) = 0;
            *(_OWORD *)(v47 + 8) = 0;
          }
        }
        else
        {
          if ( v32 < v27 )
          {
            v61 = *(_QWORD *)(a1 + 128);
            v38 = qvector_reserve(v33, 0, v27, 48);
            v39 = *(_QWORD *)(a1 + 128);
            v40 = v38;
            v41 = *(_QWORD *)(a1 + 120);
            v42 = *(__int64 **)(a1 + 112);
            v43 = v40;
            *(_QWORD *)(a1 + 128) = v61;
            while ( --v41 >= 0 )
            {
              v44 = *v42;
              v45 = _mm_loadu_si128((const __m128i *)(v42 + 1));
              v42[2] = 0;
              *(_QWORD *)v43 = v44;
              *v42 = 0;
              *(__m128i *)(v43 + 8) = v45;
              *(_QWORD *)(v43 + 24) = v42[3];
              *(_QWORD *)(v43 + 32) = v42[4];
              *(_DWORD *)(v43 + 40) = *((_DWORD *)v42 + 10);
              v46 = *v42;
              if ( *v42 )
              {
                v67 = v41;
                v42[1] = 0;
                v65 = v43;
                v62 = v42;
                qfree(v46);
                v41 = v67;
                v43 = v65;
                v42 = v62;
              }
              v42 += 6;
              v43 += 48;
            }
            qfree(*(_QWORD *)(a1 + 112));
            *(_QWORD *)(a1 + 112) = v40;
            v28 = *(_QWORD *)(a1 + 120);
            *(_QWORD *)(a1 + 128) = v39;
          }
          while ( v28 < v27 )
          {
            v34 = *(_QWORD *)(a1 + 112) + 48 * v28;
            *(_QWORD *)v34 = 0;
            ++v28;
            *(_QWORD *)(v34 + 24) = 0;
            *(_QWORD *)(v34 + 32) = 0;
            *(_DWORD *)(v34 + 40) = 0;
            *(_OWORD *)(v34 + 8) = 0;
          }
        }
      }
      *(_QWORD *)(a1 + 120) = v27;
      v27 = *(unsigned int *)(a1 + 44);
    }
    while ( v58 < v27 )
    {
      v6 = sub_D200(a1, (__int64 *)(48 * v58 + *(_QWORD *)(a1 + 112)), a2);
      if ( !(_BYTE)v6 )
        goto LABEL_83;
      if ( v58 )
        *(_DWORD *)(*(_QWORD *)(a1 + 112) + 48 * v58 - 48 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 48 * v58 + 32)
                                                                - *(_DWORD *)(*(_QWORD *)(a1 + 112) + 48 * v58 - 48 + 32);
      ++v58;
      v27 = *(unsigned int *)(a1 + 44);
    }
    v6 = v59;
    v5 = v14 + *(_QWORD *)(a2 + 480);
  }
LABEL_3:
  qlseek(*(_QWORD *)(a2 + 472), v5, 0);
  return v6;
}

