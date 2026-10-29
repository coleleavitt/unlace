__int64 __fastcall sub_5702D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  char *v5; // rax
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // r15d
  __int64 v9; // rdx
  unsigned __int64 *v10; // r11
  __int64 v11; // rdx
  char *v12; // rsi
  __m128i *v13; // rbx
  char *v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // edi
  unsigned int v17; // esi
  unsigned int v18; // edi
  __m128i *v19; // rsi
  __int64 v20; // r13
  unsigned int v21; // edx
  unsigned __int32 v22; // r8d
  unsigned int v23; // r14d
  unsigned int v24; // r12d
  unsigned int v25; // ecx
  unsigned int v26; // ebp
  unsigned int v27; // edi
  int v28; // r9d
  __m128i v29; // xmm1
  unsigned __int64 v30; // rbp
  __int64 v31; // r14
  unsigned int v32; // esi
  unsigned int v33; // edi
  unsigned int i; // eax
  unsigned __int64 v35; // rbx
  __int64 v36; // r8
  int v37; // r9d
  int v38; // ecx
  unsigned int v39; // ebp
  unsigned int v40; // r9d
  int v41; // edx
  unsigned int v42; // r8d
  __int32 v43; // r11d
  unsigned int v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // r10d
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned int v49; // r13d
  char *v50; // rax
  __int64 v51; // rax
  char *v52; // rax
  __int32 v53; // esi
  int v54; // esi
  __int64 v55; // rdx
  __int64 v56; // r12
  unsigned __int64 v57; // rdx
  int v58; // r10d
  char *v59; // rax
  unsigned int v60; // eax
  unsigned int v61; // esi
  unsigned __int32 v62; // ecx
  int v63; // eax
  __int64 v64; // rcx
  unsigned int v65; // eax
  char *v66; // rax
  int v67; // edx
  unsigned int v69; // ecx
  unsigned int v70; // eax
  char *v71; // rax
  int v72; // eax
  unsigned int v73; // [rsp+Ch] [rbp-CCh]
  unsigned int v74; // [rsp+10h] [rbp-C8h]
  unsigned int v75; // [rsp+14h] [rbp-C4h]
  char *v76; // [rsp+18h] [rbp-C0h]
  unsigned int v77; // [rsp+20h] [rbp-B8h]
  int v78; // [rsp+24h] [rbp-B4h]
  unsigned int v79; // [rsp+24h] [rbp-B4h]
  int v80; // [rsp+24h] [rbp-B4h]
  unsigned __int32 v81; // [rsp+28h] [rbp-B0h]
  unsigned int v82; // [rsp+28h] [rbp-B0h]
  unsigned __int32 v83; // [rsp+28h] [rbp-B0h]
  unsigned int v84; // [rsp+2Ch] [rbp-ACh]
  unsigned int v85; // [rsp+2Ch] [rbp-ACh]
  unsigned int v86; // [rsp+2Ch] [rbp-ACh]
  __m128i v87; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 *v88; // [rsp+40h] [rbp-98h]
  unsigned __int64 *v89; // [rsp+48h] [rbp-90h]
  __int64 v90; // [rsp+50h] [rbp-88h]
  unsigned int v91; // [rsp+58h] [rbp-80h]
  unsigned int v92; // [rsp+5Ch] [rbp-7Ch]
  unsigned int v93; // [rsp+60h] [rbp-78h]
  unsigned int v94; // [rsp+64h] [rbp-74h]
  unsigned int v95; // [rsp+68h] [rbp-70h]
  unsigned int v96; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v97; // [rsp+70h] [rbp-68h]
  char v98; // [rsp+76h] [rbp-62h]
  bool v99; // [rsp+77h] [rbp-61h]
  __int64 *v100; // [rsp+78h] [rbp-60h]
  unsigned int v101; // [rsp+80h] [rbp-58h]
  unsigned int v102; // [rsp+84h] [rbp-54h]
  unsigned int v103; // [rsp+88h] [rbp-50h]
  __int32 v104; // [rsp+8Ch] [rbp-4Ch]
  unsigned int v105; // [rsp+90h] [rbp-48h]
  unsigned int v106; // [rsp+94h] [rbp-44h]
  _QWORD v107[8]; // [rsp+98h] [rbp-40h] BYREF

  v3 = 0;
  v107[0] = a1;
  v100 = (__int64 *)a3;
  v5 = (char *)off_8C52B8(0x180u);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(a2 + 8);
  v96 = 8;
  v8 = *(_DWORD *)a2;
  v76 = v5;
  v77 = v7;
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(a2 + 12);
  v9 = *(_QWORD *)(a2 + 20);
  v10 = v107;
  *(_QWORD *)v5 = v107;
  *((_QWORD *)v5 + 3) = v9;
  v11 = *(_QWORD *)(a2 + 28);
  *((_DWORD *)v5 + 2) = v8;
  *((_DWORD *)v5 + 8) = v7;
  *(_QWORD *)(v5 + 36) = v11;
  v74 = v6;
  *((_DWORD *)v5 + 5) = v6;
  v12 = v5;
  while ( 1 )
  {
    v13 = (__m128i *)*v10;
    v98 = 0;
    v73 = v3;
    v14 = &v12[48 * v3];
    v15 = *((_DWORD *)v14 + 4);
    v92 = *((_DWORD *)v14 + 3);
    v16 = *((_DWORD *)v14 + 6);
    v93 = v15;
    v17 = *((_DWORD *)v14 + 7);
    v94 = v16;
    v18 = *((_DWORD *)v14 + 9);
    LODWORD(v14) = *((_DWORD *)v14 + 10);
    v95 = v17;
    v91 = v18;
    v97 = (unsigned int)v14;
    if ( ((unsigned __int8)v13 & 1) == 0 )
      v98 = v13[2].m128i_i8[13] & 1;
    v19 = (__m128i *)*v10;
    v20 = *((unsigned __int8 *)v10 + 7);
    if ( (*v10 & 1) != 0 )
    {
      v21 = *((unsigned __int8 *)v10 + 7);
      v22 = 0;
    }
    else
    {
      v20 = v13[1].m128i_u32[0];
      v22 = v13[1].m128i_u32[1];
      v21 = v13[1].m128i_u32[2];
    }
    v23 = *((unsigned __int8 *)v10 + 4);
    v24 = *((unsigned __int8 *)v10 + 6);
    if ( ((unsigned __int8)v19 & 1) != 0 )
    {
      v25 = v20 + v24;
      v75 = *((_BYTE *)v10 + 5) & 0xF;
      if ( v22 )
        goto LABEL_8;
    }
    else
    {
      v24 = v13->m128i_u32[1];
      v23 = v13->m128i_u32[3];
      v75 = v13->m128i_u32[2];
      v25 = v20 + v24;
      if ( v22 )
      {
LABEL_8:
        v26 = v21;
        v27 = v22 + v75;
        goto LABEL_9;
      }
    }
    v27 = v75;
    v26 = v21 + v23;
LABEL_9:
    v28 = *((_BYTE *)v10 + 5) >> 4;
    if ( ((unsigned __int8)v19 & 1) == 0 )
      v28 = v13[1].m128i_i32[3];
    if ( v28 + v25 < v8 )
      goto LABEL_71;
    v99 = v74 == v8;
    if ( v77 == v8 && v74 == v8 && v28 + v25 == v8 )
      goto LABEL_71;
    if ( v24 >= v74 )
    {
      v24 += v77 - v74;
      if ( v94 >= v75 )
      {
        v70 = v23 + v97 - v95;
        if ( v23 < v95 )
          v70 = v97;
        v23 = v70;
        v75 = v91;
      }
      else
      {
        v75 += v91 - v94;
      }
      goto LABEL_17;
    }
    if ( v8 < v24 )
    {
      v60 = v74 - v24;
      if ( v75 < v94 )
      {
        v62 = v94 - v75;
        v61 = v95;
        if ( v60 < (unsigned int)v20 )
          goto LABEL_92;
      }
      else
      {
        if ( v95 < v23 )
          v61 = 0;
        else
          v61 = v95 - v23;
        v62 = 0;
        if ( v60 < (unsigned int)v20 )
        {
LABEL_92:
          v20 = v24 + (_DWORD)v20 - v74;
          if ( v62 >= v22 )
          {
            if ( v21 < v61 )
              v21 = 0;
            else
              v21 -= v61;
            v22 = 0;
          }
          else
          {
            v22 -= v62;
          }
          goto LABEL_94;
        }
      }
      v21 = 0;
      v22 = 0;
      v20 = 0;
LABEL_94:
      v23 = v97;
      v24 = v77;
      v75 = v91;
      goto LABEL_17;
    }
    if ( v8 >= v25 )
    {
      if ( v25 != v8 || !v99 )
        goto LABEL_17;
    }
    else if ( v74 < v25 )
    {
      v20 = v25 - v74;
      if ( v94 < v27 )
      {
        v21 = v26;
        v69 = v27 - v94;
      }
      else if ( v26 < v95 )
      {
        v21 = 0;
        v69 = 0;
      }
      else
      {
        v69 = 0;
        v21 = v26 - v95;
      }
      goto LABEL_122;
    }
    v21 = 0;
    v69 = 0;
    v20 = 0;
LABEL_122:
    if ( v77 >= v24 )
      v20 = (unsigned int)v20 + v77 - v24;
    if ( v75 >= v91 )
    {
      v72 = v97 < v23 ? 0 : v97 - v23;
      v22 = 0;
    }
    else
    {
      v22 = v91 - v75;
      v72 = v97;
    }
    if ( v69 )
      v22 += v69;
    else
      v21 += v72;
LABEL_17:
    v29 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(v75)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v20)));
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      v30 = (unsigned __int64)v13;
    }
    else
    {
      v78 = v28;
      if ( v13->m128i_i32[0] == 1 )
      {
        v30 = (unsigned __int64)v13;
LABEL_20:
        v13[1].m128i_i32[1] = v22;
        v13[1].m128i_i32[2] = v21;
        *(__m128i *)((char *)v13 + 4) = v29;
        goto LABEL_21;
      }
      v88 = v10;
      v84 = v21;
      v81 = v22;
      v87 = v29;
      v30 = (unsigned __int64)sub_56B9A0(v13);
      sub_56C9A0((__int64)v100, v13->m128i_i32);
      v21 = v84;
      v13 = (__m128i *)v30;
      v22 = v81;
      v29 = _mm_load_si128(&v87);
      v10 = v88;
      v28 = v78;
      if ( (v30 & 1) == 0 )
        goto LABEL_20;
    }
    if ( v21 <= 0xFE && v22 == 0 && (unsigned int)v20 <= 0xFE && v24 <= 0xFE && v23 <= 0xFE && (v28 | v75) <= 0xF )
    {
      v30 = ((unsigned __int64)(unsigned __int8)v23 << 32) & 0xFFFFFFFFFFFFFFLL
          | ((unsigned __int64)(v75 & 0xF) << 40) & 0xFFFFFFFFFFFFFFLL
          | ((unsigned __int64)(unsigned __int8)v24 << 48) & 0xFFFFFFFFFFFFFFLL
          | v30 & 0xF000FFFFFFFFLL
          | (v20 << 56);
LABEL_101:
      v30 |= 0x10u;
      goto LABEL_22;
    }
    v63 = *((_DWORD *)v100 + 2);
    if ( v63 )
    {
      v64 = *v100;
      v65 = v63 - 1;
      *((_DWORD *)v100 + 2) = v65;
      v66 = *(char **)(v64 + 8LL * v65);
    }
    else
    {
      v88 = v10;
      v86 = v21;
      v83 = v22;
      v80 = v28;
      v87 = v29;
      v66 = (char *)off_8C52B8(0x50u);
      v10 = v88;
      v29 = _mm_load_si128(&v87);
      v21 = v86;
      v22 = v83;
      v28 = v80;
    }
    *((_DWORD *)v66 + 6) = v21;
    *(_DWORD *)v66 = 1;
    *((_WORD *)v66 + 20) = (unsigned __int16)v13 >> 8;
    *((_DWORD *)v66 + 5) = v22;
    *((_DWORD *)v66 + 7) = v28;
    *((_QWORD *)v66 + 4) = 0;
    *((_WORD *)v66 + 21) = WORD1(v13);
    *(__m128i *)(v66 + 4) = v29;
    v67 = (((v30 >> 6) & 1) << 10)
        | (4 * ((v30 >> 3) & 1))
        | (v30 >> 1) & 1
        | (2 * ((v30 >> 2) & 1))
        | (((v30 >> 5) & 1) << 9);
    v30 = (unsigned __int64)v66;
    *((_WORD *)v66 + 22) = *((_WORD *)v66 + 22) & 0xF880 | v67;
    if ( ((unsigned __int8)v66 & 1) != 0 )
      goto LABEL_101;
    v13 = (__m128i *)v66;
LABEL_21:
    v13[2].m128i_i8[12] |= 0x20u;
LABEL_22:
    *v10 = v30;
    if ( (v30 & 1) == 0 && *(_DWORD *)(v30 + 36) )
    {
      v90 = *(unsigned int *)(v30 + 36);
      v31 = 0;
      v32 = 0;
      v89 = v10;
      v33 = 0;
      v101 = v97;
      for ( i = 0; ; i = v39 )
      {
        v55 = 0;
        if ( (*(_BYTE *)v89 & 1) == 0 )
          v55 = *v89 - 8LL * *(unsigned int *)(*v89 + 36);
        v56 = v55 + 8 * v31;
        v57 = *(_QWORD *)v56;
        if ( (*(_QWORD *)v56 & 1) != 0 )
        {
          v35 = HIBYTE(v57);
          v36 = (v57 >> 40) & 0xF;
          v37 = BYTE4(v57);
          v38 = HIBYTE(v57) + BYTE6(v57);
        }
        else
        {
          v58 = *(_DWORD *)(v57 + 20);
          LODWORD(v35) = *(_DWORD *)(v57 + 24);
          LODWORD(v36) = *(_DWORD *)(v57 + 8);
          v37 = *(_DWORD *)(v57 + 12);
          v38 = *(_DWORD *)(v57 + 16) + *(_DWORD *)(v57 + 4);
          if ( v58 )
          {
            LODWORD(v36) = v58 + v36;
            goto LABEL_27;
          }
        }
        LODWORD(v35) = v37 + v35;
LABEL_27:
        v39 = i + v38;
        v40 = v32 + v36;
        if ( !(_DWORD)v36 )
        {
          LODWORD(v35) = v33 + v35;
          v40 = v32;
        }
        if ( (v57 & 1) != 0 )
          v41 = (v57 >> 44) & 0xF;
        else
          v41 = *(_DWORD *)(v57 + 28);
        if ( v39 + v41 >= v8 )
        {
          if ( (v74 < i || (_DWORD)v31 != 0 && i == v74 && v38)
            && (v75 < v32 || !v98)
            && ((*(_QWORD *)v56 & 1) != 0 || v95 == v97 || v94 < v32 || (*(_BYTE *)(*(_QWORD *)v56 + 45LL) & 1) == 0) )
          {
            break;
          }
          if ( i >= v8 )
          {
            v45 = v74;
            v44 = 0;
            v43 = 0;
            v42 = 0;
            if ( i < v74 )
              goto LABEL_39;
          }
          else
          {
            v42 = v8 - i;
            if ( v32 >= v92 )
            {
              if ( v93 < v33 )
                v44 = 0;
              else
                v44 = v93 - v33;
              v43 = 0;
            }
            else
            {
              v43 = v92 - v32;
              v44 = v93;
            }
            v45 = v74;
            if ( i < v74 )
            {
LABEL_39:
              v79 = v45 - i;
              if ( v32 >= v94 )
              {
                v87.m128i_i32[0] = 0;
                if ( v95 < v33 )
                  v46 = 0;
                else
                  v46 = v95 - v33;
              }
              else
              {
                v46 = v95;
                v87.m128i_i32[0] = v94 - v32;
              }
              v47 = v77;
              if ( i < v77 )
              {
LABEL_42:
                v82 = v47 - i;
                if ( v32 >= v91 )
                {
                  if ( v101 < v33 )
                  {
                    v85 = 0;
                    LODWORD(v88) = 0;
                  }
                  else
                  {
                    LODWORD(v88) = 0;
                    v85 = v101 - v33;
                  }
                }
                else
                {
                  LODWORD(v88) = v91 - v32;
                  v85 = v101;
                }
                goto LABEL_44;
              }
LABEL_76:
              v85 = 0;
              LODWORD(v88) = 0;
              v82 = 0;
LABEL_44:
              if ( v8 < v39 || v39 == v8 && v99 )
              {
                v77 = v8;
                v101 = v93;
                v91 = v92;
              }
              else
              {
                v85 = v44;
                v46 = v44;
                LODWORD(v88) = v43;
                v82 = v42;
                v87.m128i_i32[0] = v43;
                v79 = v42;
              }
              v48 = v73 + 1;
              if ( v96 < v73 + 1 )
              {
                v49 = 2 * v96;
                if ( 2 * v96 < v48 )
                  v49 = v73 + 1;
                if ( v49 < 8 )
                  v49 = 8;
                if ( v96 < v49 )
                {
                  v106 = v73 + 1;
                  v105 = v44;
                  v104 = v43;
                  v103 = v42;
                  v102 = v40;
                  v96 = v46;
                  if ( v76 )
                  {
                    v50 = (char *)off_8C52A8(v76, 48LL * v49);
                    v46 = v96;
                    v40 = v102;
                    v76 = v50;
                    v42 = v103;
                    v43 = v104;
                    v44 = v105;
                    v48 = v106;
                  }
                  else
                  {
                    v71 = (char *)off_8C52B8(48LL * v49);
                    v48 = v106;
                    v46 = v96;
                    v76 = v71;
                    v44 = v105;
                    v43 = v104;
                    v42 = v103;
                    v40 = v102;
                  }
                  v96 = v49;
                }
              }
              v51 = v73;
              v73 = v48;
              v52 = &v76[48 * v51];
              v53 = v87.m128i_i32[0];
              *((_DWORD *)v52 + 5) = v79;
              *((_DWORD *)v52 + 6) = v53;
              v54 = (int)v88;
              *((_DWORD *)v52 + 8) = v82;
              *(_QWORD *)v52 = v56;
              *((_DWORD *)v52 + 2) = v42;
              *((_DWORD *)v52 + 3) = v43;
              *((_DWORD *)v52 + 4) = v44;
              *((_DWORD *)v52 + 7) = v46;
              *((_DWORD *)v52 + 9) = v54;
              *((_DWORD *)v52 + 10) = v85;
              goto LABEL_58;
            }
          }
          v47 = v77;
          v87.m128i_i32[0] = 0;
          v46 = 0;
          v79 = 0;
          if ( i < v77 )
            goto LABEL_42;
          goto LABEL_76;
        }
LABEL_58:
        if ( v90 == ++v31 )
          break;
        v32 = v40;
        v33 = v35;
      }
    }
LABEL_71:
    if ( !v73 )
      break;
    v12 = v76;
    v3 = v73 - 1;
    v59 = &v76[48 * v73 - 48];
    v10 = *(unsigned __int64 **)v59;
    v8 = *((_DWORD *)v59 + 2);
    v74 = *((_DWORD *)v59 + 5);
    v77 = *((_DWORD *)v59 + 8);
  }
  if ( v76 )
    off_8C52A0(v76);
  return v107[0];
}
