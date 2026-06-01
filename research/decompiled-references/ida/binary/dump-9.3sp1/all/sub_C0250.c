unsigned __int64 __fastcall sub_C0250(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rbx
  unsigned int v13; // r13d
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  int *v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 i; // r12
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  const char *v38; // rcx
  __int64 v40; // rsi
  _DWORD *v41; // rax
  _DWORD *v42; // rsi
  _QWORD *v43; // r13
  _QWORD *v44; // rbp
  __int64 (__fastcall *v45)(_QWORD *); // rax
  _QWORD *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rdi
  _QWORD *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rbx
  int v53; // r13d
  __int64 v54; // r14
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rsi
  _QWORD *v62; // rbx
  _QWORD *v63; // r14
  _QWORD *v64; // r13
  unsigned int v65; // edx
  unsigned int v66; // eax
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  int v69; // eax
  const char *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // [rsp+8h] [rbp-90h]
  __int64 v73; // [rsp+8h] [rbp-90h]
  unsigned __int64 v74; // [rsp+10h] [rbp-88h]
  unsigned __int64 v75; // [rsp+18h] [rbp-80h]
  int v76; // [rsp+24h] [rbp-74h]
  unsigned __int64 v77; // [rsp+28h] [rbp-70h]
  __int64 v78; // [rsp+30h] [rbp-68h]
  __int64 v79; // [rsp+38h] [rbp-60h]
  int v80; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v81; // [rsp+44h] [rbp-54h]
  unsigned __int64 v82; // [rsp+58h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 328);
  v82 = __readfsqword(0x28u);
  v3 = *(unsigned int **)(a1 + 16);
  v4 = *(_DWORD *)(v1 + 64);
  v5 = *v3;
  if ( (unsigned int)v5 >= v4 )
    goto LABEL_87;
  v6 = *(_QWORD *)(v1 + 528);
  v78 = *(_QWORD *)(v6 + 8 * v5);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 320) + 1512LL) & 1) == 0 )
  {
    v7 = *(int *)(a1 + 224);
    v8 = v3[v7];
    if ( (unsigned int)v8 < v4 )
    {
      v72 = 0;
      v79 = *(_QWORD *)(v6 + 8 * v8);
      if ( *(_DWORD *)(a1 + 416) )
        v72 = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v8) + 48LL);
      v77 = *(_QWORD *)(a1 + 48);
      if ( v77 )
      {
        v75 = 0;
        v9 = 0;
        v10 = 0;
        v77 = 0;
        LODWORD(v6) = 0;
        v74 = -1;
        while ( 1 )
        {
          v11 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * v10);
          if ( !v11[1] )
            goto LABEL_30;
          v76 = v6;
          v12 = 8 * v10;
          v13 = 0;
          v14 = 0;
          do
          {
            v17 = *(_DWORD *)(sub_330E60(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + v12), v13) + 4);
            if ( (v17 & 2) != 0 )
              goto LABEL_23;
            v18 = *(_QWORD *)(*v11 + 8 * v14);
            if ( v18 )
            {
              if ( v72 == v18 )
                goto LABEL_23;
              if ( *(_DWORD *)v18 == 55 && *(_BYTE *)(v18 + 32) == 7 )
              {
                v40 = *(int *)(a1 + 224);
                if ( (int)v40 <= 0 )
                  goto LABEL_23;
                v41 = *(_DWORD **)(a1 + 16);
                v42 = &v41[v40];
                while ( *(_DWORD *)(v18 + 40) != *v41 )
                {
                  if ( ++v41 == v42 )
                    goto LABEL_23;
                }
              }
              if ( sub_C0160(a1, v18) )
              {
                v15 = *(_QWORD *)(v18 + 24);
                v16 = v74;
                if ( v15 < v74 )
                {
                  if ( v76 )
                  {
                    v74 = *(_QWORD *)(v18 + 24);
                  }
                  else
                  {
                    if ( v15 >= *(_QWORD *)(*(_QWORD *)(v78 + 56) + 24LL) )
                      v16 = *(_QWORD *)(v18 + 24);
                    v74 = v16;
                  }
                }
                if ( v75 < v15 )
                {
                  v77 = v75;
                  v75 = *(_QWORD *)(v18 + 24);
                }
              }
              sub_11D5A0(v18);
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 320) + 64LL) == 1 )
                v9 = v18;
            }
            else if ( (v17 & 1) == 0 )
            {
              if ( !under_debugger )
                sub_383060(50056);
              goto LABEL_88;
            }
LABEL_23:
            v14 = (int)++v13;
          }
          while ( (unsigned __int64)(int)v13 < v11[1] );
          LODWORD(v6) = v76;
LABEL_30:
          v6 = (unsigned int)(v6 + 1);
          v10 = (int)v6;
          if ( (unsigned __int64)(int)v6 >= *(_QWORD *)(a1 + 48) )
          {
            v7 = *(int *)(a1 + 224);
            goto LABEL_32;
          }
        }
      }
      v74 = -1;
      v9 = 0;
LABEL_32:
      if ( (int)v7 <= 0 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL);
        if ( !*(_QWORD *)(*(_QWORD *)(v27 + 8 * v7) + 48LL) )
        {
LABEL_50:
          if ( v72 )
          {
            sub_BFFA0(a1, v79, v72, v6);
          }
          else
          {
            v49 = (_QWORD *)sub_BFEB0(a1, v78, v27, v6);
            sub_B9850(v78, v49, v9, v74);
            if ( *(_QWORD *)(a1 + 280) )
            {
              v52 = v77;
              if ( v74 >= v77 )
                v52 = v74;
              v53 = 0;
              v54 = 0;
              v73 = v52;
              do
              {
                v55 = j__qalloc_or_throw(80, (__int64)v49, v50, v51);
                v56 = *(_QWORD *)(a1 + 272);
                *(_QWORD *)(v55 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v55 + 40) = 0;
                *(_QWORD *)(v55 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v55 + 56) = 0;
                *(_QWORD *)(v55 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v55 + 72) = 0;
                *(_OWORD *)(v55 + 8) = 0;
                sub_1253A0(v55, v56 + 88 * v54 + 8);
                v49 = (_QWORD *)v55;
                ++v53;
                sub_B9850(v78, (_QWORD *)v55, v9, v73);
                v54 = v53;
              }
              while ( (unsigned __int64)v53 < *(_QWORD *)(a1 + 280) );
              v49 = nullptr;
              sub_1D51C0(v78, 0);
            }
            if ( *(_DWORD *)(a1 + 420) != -1 )
            {
              v57 = sub_1229A0(*(_QWORD *)(v79 + 48));
              v60 = (_QWORD *)j__qalloc_or_throw(80, (__int64)v49, v58, v59);
              v61 = *(_QWORD *)(v57 + 24);
              v62 = v60;
              v63 = v60 + 4;
              v64 = v60 + 8;
              v60[4] = 0xFFFFFFFF00000000LL;
              v60[5] = 0;
              v60[6] = 0xFFFFFFFF00000000LL;
              v60[7] = 0;
              v60[8] = 0xFFFFFFFF00000000LL;
              v60[9] = 0;
              sub_330970(v60, v61);
              *(_DWORD *)v62 = 4;
              v65 = *(_DWORD *)(a1 + 228);
              v66 = *(_DWORD *)(a1 + 424);
              v80 = 1;
              v81 = __PAIR64__(v66, v65);
              sub_125180(v63);
              sub_11CDA0(&v80);
              v67 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 228));
              v68 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 420));
              v80 = 1;
              v81 = _mm_unpacklo_epi32(v67, v68).m128i_u64[0];
              sub_125180(v64);
              sub_11CDA0(&v80);
              sub_A3160(v79, v62, *(_QWORD *)(v57 + 16));
            }
          }
          sub_1D4FD0(*(_QWORD *)(a1 + 328));
          **(_DWORD **)(a1 + 328) |= 0x400u;
          *(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL) &= ~8u;
          sub_2169A0(*(_QWORD *)(a1 + 328), a1 + 392);
          v37 = *(_QWORD *)(a1 + 320);
          if ( *(_DWORD *)(v37 + 64) != 1 )
          {
            v43 = *(_QWORD **)(a1 + 328);
            v44 = (_QWORD *)v43[98];
            if ( v44 )
            {
              v45 = *(__int64 (__fastcall **)(_QWORD *))(*v44 + 8LL);
              if ( v45 == sub_66F30 )
              {
                v46 = v44 + 27;
                *v44 = off_4EC750;
                do
                {
                  v47 = (__int64)v46;
                  v46 -= 4;
                  sub_66C80(v47);
                }
                while ( v46 != v44 + 3 );
                v48 = v44[1];
                *v44 = &unk_4EC808;
                if ( v48 )
                {
                  v44[2] = 0;
                  qfree(v48);
                }
                j__qfree((__int64)v44);
              }
              else
              {
                v45((_QWORD *)v43[98]);
              }
            }
            v43[98] = 0;
            sub_670E0(v43, a1 + 392, v35, v36);
            v37 = *(_QWORD *)(a1 + 320);
          }
          v38 = s1;
          if ( *(_QWORD *)(v37 + 416) )
            v38 = *(const char **)(v37 + 408);
          return sub_66FA0(*(_QWORD *)(a1 + 328), 1u, (__int64)"pattern '%s' has been applied", v38);
        }
      }
      else
      {
        v19 = 0;
        do
        {
          v20 = *(_QWORD *)(a1 + 328);
          v21 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * v19);
          if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 64) )
            goto LABEL_85;
          v22 = *(_QWORD *)(*(_QWORD *)(v20 + 528) + 8 * v21);
          v23 = *(int **)(v22 + 56);
          if ( !v23 || (v24 = *v23, v24 != 55) && v24 != 62 )
            sub_1D51C0(v22, 0);
          v25 = *(_DWORD *)(v22 + 24);
          ++v19;
          BYTE1(v25) &= ~2u;
          LOBYTE(v25) = v25 | 0x80;
          *(_DWORD *)(v22 + 24) = v25;
          v26 = *(_DWORD *)(a1 + 224);
        }
        while ( v26 > (int)v19 );
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL);
        v27 = *(_QWORD *)(v6 + 8LL * v26);
        if ( !*(_QWORD *)(v27 + 48) )
        {
LABEL_42:
          if ( v26 > 0 )
          {
            v29 = 1;
            while ( 1 )
            {
              v6 = *(_QWORD *)(a1 + 16);
              v30 = *(_QWORD *)(a1 + 328);
              v31 = *(unsigned int *)(v6 + 4LL * v29);
              if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 64) )
                break;
              v27 = *(_QWORD *)(v30 + 528);
              v32 = *(_QWORD *)(v27 + 8 * v31);
              for ( i = *(_QWORD *)(v32 + 48); i; i = *(_QWORD *)(i + 8) )
              {
                if ( *(char *)(i + 4) >= 0 )
                  break;
                sub_11D5A0(i);
                v34 = *(_DWORD *)(v32 + 24);
                BYTE1(v34) &= ~2u;
                LOBYTE(v34) = v34 | 0x80;
                *(_DWORD *)(v32 + 24) = v34;
              }
              if ( *(_DWORD *)(a1 + 224) < ++v29 )
                goto LABEL_50;
            }
LABEL_85:
            if ( !under_debugger )
              sub_383060(52719);
LABEL_88:
            BUG();
          }
          goto LABEL_50;
        }
      }
      v28 = *(_DWORD *)(v79 + 24);
      BYTE1(v28) &= ~2u;
      LOBYTE(v28) = v28 | 0x80;
      *(_DWORD *)(v79 + 24) = v28;
      v26 = *(_DWORD *)(a1 + 224);
      goto LABEL_42;
    }
LABEL_87:
    sub_B7BA0(v3);
  }
  sub_BFFA0(a1, v78, ***(_QWORD ***)(a1 + 40), v6);
  v69 = *(_DWORD *)(v78 + 24);
  v70 = s1;
  BYTE1(v69) &= ~2u;
  LOBYTE(v69) = v69 | 0x80;
  *(_DWORD *)(v78 + 24) = v69;
  v71 = *(_QWORD *)(a1 + 320);
  if ( *(_QWORD *)(v71 + 416) )
    v70 = *(const char **)(v71 + 408);
  return sub_66FA0(*(_QWORD *)(a1 + 328), 1u, (__int64)"recursive pattern '%s' has been applied", v70);
}
