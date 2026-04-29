unsigned __int64 __fastcall sub_BC050(__int64 a1)
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
  int v11; // ecx
  _QWORD *v12; // r12
  __int64 v13; // rbx
  unsigned int v14; // r13d
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  int *v24; // rax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 i; // r12
  int v34; // eax
  __int64 v35; // rax
  const char *v36; // rcx
  __int64 v38; // rsi
  _DWORD *v39; // rax
  _DWORD *v40; // rsi
  _QWORD *v41; // r13
  __int64 *v42; // rbp
  __int64 (__fastcall *v43)(_QWORD *); // rax
  __int64 *v44; // rbx
  __int64 *v45; // rdi
  __int64 v46; // rdi
  _QWORD *v47; // rax
  unsigned __int64 v48; // rbx
  int v49; // r13d
  __int64 v50; // r14
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // r12
  _QWORD *v54; // rax
  __int64 v55; // rsi
  _QWORD *v56; // rbx
  _QWORD *v57; // r14
  _QWORD *v58; // r13
  unsigned int v59; // edx
  unsigned int v60; // eax
  __m128i v61; // xmm0
  __m128i v62; // xmm1
  int v63; // eax
  const char *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // [rsp+8h] [rbp-90h]
  __int64 v67; // [rsp+8h] [rbp-90h]
  unsigned __int64 v68; // [rsp+10h] [rbp-88h]
  unsigned __int64 v69; // [rsp+18h] [rbp-80h]
  int v70; // [rsp+24h] [rbp-74h]
  unsigned __int64 v71; // [rsp+28h] [rbp-70h]
  __int64 v72; // [rsp+30h] [rbp-68h]
  __int64 v73; // [rsp+38h] [rbp-60h]
  int v74; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v75; // [rsp+44h] [rbp-54h]
  unsigned __int64 v76; // [rsp+58h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 328);
  v76 = __readfsqword(0x28u);
  v3 = *(unsigned int **)(a1 + 16);
  v4 = *(_DWORD *)(v1 + 64);
  v5 = *v3;
  if ( (unsigned int)v5 >= v4 )
    goto LABEL_87;
  v6 = *(_QWORD *)(v1 + 528);
  v72 = *(_QWORD *)(v6 + 8 * v5);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 320) + 1512LL) & 1) == 0 )
  {
    v7 = *(int *)(a1 + 224);
    v8 = v3[v7];
    if ( (unsigned int)v8 < v4 )
    {
      v66 = 0;
      v73 = *(_QWORD *)(v6 + 8 * v8);
      if ( *(_DWORD *)(a1 + 416) )
        v66 = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v8) + 48LL);
      v71 = *(_QWORD *)(a1 + 48);
      if ( v71 )
      {
        v69 = 0;
        v9 = 0;
        v10 = 0;
        v71 = 0;
        v11 = 0;
        v68 = -1;
        while ( 1 )
        {
          v12 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * v10);
          if ( !v12[1] )
            goto LABEL_30;
          v70 = v11;
          v13 = 8 * v10;
          v14 = 0;
          v15 = 0;
          do
          {
            v18 = *(_DWORD *)(sub_32BE00(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + v13), v14) + 4);
            if ( (v18 & 2) != 0 )
              goto LABEL_23;
            v19 = *(_QWORD *)(*v12 + 8 * v15);
            if ( v19 )
            {
              if ( v66 == v19 )
                goto LABEL_23;
              if ( *(_DWORD *)v19 == 55 && *(_BYTE *)(v19 + 32) == 7 )
              {
                v38 = *(int *)(a1 + 224);
                if ( (int)v38 <= 0 )
                  goto LABEL_23;
                v39 = *(_DWORD **)(a1 + 16);
                v40 = &v39[v38];
                while ( *(_DWORD *)(v19 + 40) != *v39 )
                {
                  if ( ++v39 == v40 )
                    goto LABEL_23;
                }
              }
              if ( sub_BBF60(a1, v19) )
              {
                v16 = *(_QWORD *)(v19 + 24);
                v17 = v68;
                if ( v16 < v68 )
                {
                  if ( v70 )
                  {
                    v68 = *(_QWORD *)(v19 + 24);
                  }
                  else
                  {
                    if ( v16 >= *(_QWORD *)(*(_QWORD *)(v72 + 56) + 24LL) )
                      v17 = *(_QWORD *)(v19 + 24);
                    v68 = v17;
                  }
                }
                if ( v69 < v16 )
                {
                  v71 = v69;
                  v69 = *(_QWORD *)(v19 + 24);
                }
              }
              sub_1193A0(v19);
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 320) + 64LL) == 1 )
                v9 = v19;
            }
            else if ( (v18 & 1) == 0 )
            {
              if ( !under_debugger )
                sub_37E160(50056);
              goto LABEL_88;
            }
LABEL_23:
            v15 = (int)++v14;
          }
          while ( (unsigned __int64)(int)v14 < v12[1] );
          v11 = v70;
LABEL_30:
          v10 = ++v11;
          if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 48) )
          {
            v7 = *(int *)(a1 + 224);
            goto LABEL_32;
          }
        }
      }
      v68 = -1;
      v9 = 0;
LABEL_32:
      if ( (int)v7 <= 0 )
      {
        if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + 8 * v7) + 48LL) )
        {
LABEL_50:
          if ( v66 )
          {
            sub_BBDA0(a1, v73, v66);
          }
          else
          {
            v47 = (_QWORD *)sub_BBCB0(a1, v72);
            sub_B5650(v72, v47, v9, v68);
            if ( *(_QWORD *)(a1 + 280) )
            {
              v48 = v71;
              if ( v68 >= v71 )
                v48 = v68;
              v49 = 0;
              v50 = 0;
              v67 = v48;
              do
              {
                v51 = j__qalloc_or_throw(80);
                v52 = *(_QWORD *)(a1 + 272);
                *(_QWORD *)(v51 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v51 + 40) = 0;
                *(_QWORD *)(v51 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v51 + 56) = 0;
                *(_QWORD *)(v51 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v51 + 72) = 0;
                *(_OWORD *)(v51 + 8) = 0;
                sub_1211A0(v51, v52 + 88 * v50 + 8);
                ++v49;
                sub_B5650(v72, (_QWORD *)v51, v9, v67);
                v50 = v49;
              }
              while ( (unsigned __int64)v49 < *(_QWORD *)(a1 + 280) );
              sub_1D0E40(v72, 0);
            }
            if ( *(_DWORD *)(a1 + 420) != -1 )
            {
              v53 = sub_11E7A0(*(_QWORD *)(v73 + 48));
              v54 = (_QWORD *)j__qalloc_or_throw(80);
              v55 = *(_QWORD *)(v53 + 24);
              v56 = v54;
              v57 = v54 + 4;
              v58 = v54 + 8;
              v54[4] = 0xFFFFFFFF00000000LL;
              v54[5] = 0;
              v54[6] = 0xFFFFFFFF00000000LL;
              v54[7] = 0;
              v54[8] = 0xFFFFFFFF00000000LL;
              v54[9] = 0;
              sub_32B920(v54, v55);
              *(_DWORD *)v56 = 4;
              v59 = *(_DWORD *)(a1 + 228);
              v60 = *(_DWORD *)(a1 + 424);
              v74 = 1;
              v75 = __PAIR64__(v60, v59);
              sub_120F80(v57);
              sub_118BA0(&v74);
              v61 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 228));
              v62 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 420));
              v74 = 1;
              v75 = _mm_unpacklo_epi32(v61, v62).m128i_u64[0];
              sub_120F80(v58);
              sub_118BA0(&v74);
              sub_9EF60(v73, v56, *(_QWORD *)(v53 + 16));
            }
          }
          sub_1D0C50(*(_QWORD *)(a1 + 328));
          **(_DWORD **)(a1 + 328) |= 0x400u;
          *(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL) &= ~8u;
          sub_212120(*(_QWORD *)(a1 + 328), a1 + 392);
          v35 = *(_QWORD *)(a1 + 320);
          if ( *(_DWORD *)(v35 + 64) != 1 )
          {
            v41 = *(_QWORD **)(a1 + 328);
            v42 = (__int64 *)v41[98];
            if ( v42 )
            {
              v43 = *(__int64 (__fastcall **)(_QWORD *))(*v42 + 8);
              if ( v43 == sub_62D30 )
              {
                v44 = v42 + 27;
                *v42 = (__int64)off_4CC628;
                do
                {
                  v45 = v44;
                  v44 -= 4;
                  sub_62A80(v45);
                }
                while ( v44 != v42 + 3 );
                v46 = v42[1];
                *v42 = (__int64)&unk_4CC6E0;
                if ( v46 )
                {
                  v42[2] = 0;
                  qfree(v46);
                }
                j__qfree(v42);
              }
              else
              {
                v43((_QWORD *)v41[98]);
              }
            }
            v41[98] = 0;
            sub_62EE0(v41);
            v35 = *(_QWORD *)(a1 + 320);
          }
          v36 = s1;
          if ( *(_QWORD *)(v35 + 416) )
            v36 = *(const char **)(v35 + 408);
          return sub_62DA0(*(_QWORD *)(a1 + 328), 1u, (__int64)"pattern '%s' has been applied", v36);
        }
      }
      else
      {
        v20 = 0;
        do
        {
          v21 = *(_QWORD *)(a1 + 328);
          v22 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * v20);
          if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 64) )
            goto LABEL_85;
          v23 = *(_QWORD *)(*(_QWORD *)(v21 + 528) + 8 * v22);
          v24 = *(int **)(v23 + 56);
          if ( !v24 || (v25 = *v24, v25 != 55) && v25 != 62 )
            sub_1D0E40(v23, 0);
          v26 = *(_DWORD *)(v23 + 24);
          ++v20;
          BYTE1(v26) &= ~2u;
          LOBYTE(v26) = v26 | 0x80;
          *(_DWORD *)(v23 + 24) = v26;
          v27 = *(_DWORD *)(a1 + 224);
        }
        while ( v27 > (int)v20 );
        if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + 8LL * v27) + 48LL) )
        {
LABEL_42:
          if ( v27 > 0 )
          {
            v29 = 1;
            while ( 1 )
            {
              v30 = *(_QWORD *)(a1 + 328);
              v31 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * v29);
              if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 64) )
                break;
              v32 = *(_QWORD *)(*(_QWORD *)(v30 + 528) + 8 * v31);
              for ( i = *(_QWORD *)(v32 + 48); i; i = *(_QWORD *)(i + 8) )
              {
                if ( *(char *)(i + 4) >= 0 )
                  break;
                sub_1193A0(i);
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
              sub_37E160(52719);
LABEL_88:
            BUG();
          }
          goto LABEL_50;
        }
      }
      v28 = *(_DWORD *)(v73 + 24);
      BYTE1(v28) &= ~2u;
      LOBYTE(v28) = v28 | 0x80;
      *(_DWORD *)(v73 + 24) = v28;
      v27 = *(_DWORD *)(a1 + 224);
      goto LABEL_42;
    }
LABEL_87:
    sub_B39A0(v3);
  }
  sub_BBDA0(a1, v72, ***(_QWORD ***)(a1 + 40));
  v63 = *(_DWORD *)(v72 + 24);
  v64 = s1;
  BYTE1(v63) &= ~2u;
  LOBYTE(v63) = v63 | 0x80;
  *(_DWORD *)(v72 + 24) = v63;
  v65 = *(_QWORD *)(a1 + 320);
  if ( *(_QWORD *)(v65 + 416) )
    v64 = *(const char **)(v65 + 408);
  return sub_62DA0(*(_QWORD *)(a1 + 328), 1u, (__int64)"recursive pattern '%s' has been applied", v64);
}
