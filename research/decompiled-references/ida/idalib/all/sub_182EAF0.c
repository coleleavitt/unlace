void __fastcall sub_182EAF0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // r12
  size_t v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r15d
  __int64 *v14; // r13
  __int64 *v15; // rax
  size_t v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r15d
  __int64 *v23; // r13
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rbp
  int v30; // r12d
  __int64 *v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // r8
  const char *v34; // rbx
  size_t v35; // r13
  unsigned int *v36; // rbx
  unsigned int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // r15d
  __int64 *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  int *v47; // rax
  unsigned int v48; // ebp
  __int64 v49; // rbx
  __int64 v50; // rdi
  unsigned int v51; // r13d
  unsigned __int64 v52; // r15
  __int64 v53; // rax
  int v54; // r8d
  unsigned __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rbx
  __int64 v72; // rdx
  unsigned __int32 v73; // ebp
  void *v74; // rbx
  __m128i *v75; // r13
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  void *v80; // rdi
  __int64 v81; // rbp
  int v82; // eax
  __int64 v83; // rbp
  int v84; // eax
  unsigned __int64 v85; // r15
  unsigned int *v86; // r8
  unsigned int v87; // eax
  int v88; // eax
  __int64 v90; // rax
  __int64 v91; // rbx
  const __m128i *v92; // r15
  unsigned int v93; // ecx
  unsigned int v94; // edx
  __int64 *v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 *v101; // rax
  __int64 *v102; // rdx
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rax
  __int64 *v105; // rcx
  __int64 v106; // rax
  int v107; // [rsp+10h] [rbp-178h]
  __int64 v108; // [rsp+10h] [rbp-178h]
  int v109; // [rsp+10h] [rbp-178h]
  __int64 v110; // [rsp+20h] [rbp-168h]
  __int64 *v111; // [rsp+20h] [rbp-168h]
  __int64 v114; // [rsp+38h] [rbp-150h]
  unsigned int *v115; // [rsp+38h] [rbp-150h]
  bool v117; // [rsp+4Bh] [rbp-13Dh]
  int v118; // [rsp+4Ch] [rbp-13Ch]
  int v119; // [rsp+58h] [rbp-130h] BYREF
  int v120; // [rsp+5Ch] [rbp-12Ch] BYREF
  __int64 v121; // [rsp+60h] [rbp-128h] BYREF
  unsigned __int64 v122; // [rsp+68h] [rbp-120h] BYREF
  __int64 *v123; // [rsp+70h] [rbp-118h] BYREF
  __m128i v124; // [rsp+78h] [rbp-110h]
  void *ptr; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v126; // [rsp+98h] [rbp-F0h]
  _BYTE v127[32]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 *v128[25]; // [rsp+C0h] [rbp-C8h] BYREF

  if ( a3[3].m128i_i16[4] )
  {
    v117 = 0;
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
      v117 = !sub_B979F0((_QWORD *)a2);
    v3 = sub_B8DC30(a2, 1);
    if ( v3 )
    {
      v118 = *(unsigned __int16 *)(v3 + 22);
    }
    else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
    {
      v118 = *(_DWORD *)(a2 + 80);
    }
    else
    {
      v118 = *(_DWORD *)(a2 + 104);
    }
    v4 = sub_B8BF30(a2);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
    v123 = nullptr;
    v6 = v4;
    v124 = si128;
    v7 = j__strlen("__");
    v8 = sub_2244B30("__", v7);
    v9 = sub_2244CB0(&v123, "__", v7, v8);
    v13 = v9;
    v14 = &v123[v9];
    if ( *v14 )
    {
      if ( *v14 != -8 )
      {
        sub_111A3D0(v128, v14, 0);
        v15 = v128[0];
        goto LABEL_9;
      }
      --v124.m128i_i32[2];
    }
    v81 = sub_22300B0(v7 + 17, 8, v9, v10, v11, v12);
    if ( v7 )
      memcpy((void *)(v81 + 16), "__", v7);
    *(_BYTE *)(v81 + v7 + 16) = 0;
    *(_QWORD *)v81 = v7;
    *(_DWORD *)(v81 + 8) = 0;
    *v14 = v81;
    ++v124.m128i_i32[1];
    v82 = sub_22450D0(&v123, v13);
    sub_111A3D0(v128, &v123[v82], 0);
    v15 = v128[0];
LABEL_9:
    *(_DWORD *)(*v15 + 8) = -1;
    v16 = j__strlen("this");
    v17 = sub_2244B30("this", v16);
    v18 = sub_2244CB0(&v123, "this", v16, v17);
    v22 = v18;
    v23 = &v123[v18];
    if ( *v23 )
    {
      if ( *v23 != -8 )
      {
        v24 = &v123[v18];
        sub_111A3D0(v128, v23, 0);
        v27 = v128[0];
        goto LABEL_12;
      }
      --v124.m128i_i32[2];
    }
    v83 = sub_22300B0(v16 + 17, 8, v18, v19, v20, v21);
    if ( v16 )
      memcpy((void *)(v83 + 16), "this", v16);
    *(_BYTE *)(v83 + v16 + 16) = 0;
    *(_QWORD *)v83 = v16;
    *(_DWORD *)(v83 + 8) = 0;
    *v23 = v83;
    ++v124.m128i_i32[1];
    v84 = sub_22450D0(&v123, v22);
    v24 = &v123[v84];
    sub_111A3D0(v128, v24, 0);
    v27 = v128[0];
LABEL_12:
    v28 = v6;
    *(_DWORD *)(*v27 + 8) = 0;
    v29 = *(_QWORD *)(v6 + 120);
    v30 = 1;
    v110 = v29 + 8LL * (unsigned int)sub_B76070(v28, (__int64)v24, v25, v26);
    if ( v29 != v110 )
    {
      while ( 1 )
      {
        v32 = *(_QWORD *)(*(_QWORD *)v29 + 40LL);
        if ( (v32 & 7) != 0 )
        {
          v35 = 0;
          v34 = &byte_22F0C30;
        }
        else
        {
          v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
          v34 = &byte_22F0C30;
          v35 = v33;
          if ( v33 )
          {
            v36 = *(unsigned int **)(v33 + 16);
            v35 = *v36;
            v34 = (const char *)(v36 + 4);
          }
        }
        v37 = sub_2244B30(v34, v35);
        v38 = sub_2244CB0(&v123, v34, v35, v37);
        v42 = v38;
        v43 = &v123[v38];
        if ( !*v43 )
          goto LABEL_22;
        if ( *v43 == -8 )
          break;
        sub_111A3D0(v128, v43, 0);
        v31 = v128[0];
LABEL_15:
        v29 += 8;
        *(_DWORD *)(*v31 + 8) = v30++;
        if ( v110 == v29 )
          goto LABEL_26;
      }
      --v124.m128i_i32[2];
LABEL_22:
      v44 = sub_22300B0(v35 + 17, 8, v38, v39, v40, v41);
      v45 = v44;
      if ( v35 )
      {
        v114 = v44;
        memcpy((void *)(v44 + 16), v34, v35);
        v45 = v114;
      }
      *(_BYTE *)(v45 + v35 + 16) = 0;
      *(_QWORD *)v45 = v35;
      *(_DWORD *)(v45 + 8) = 0;
      *v43 = v45;
      ++v124.m128i_i32[1];
      v46 = sub_22450D0(&v123, v42);
      sub_111A3D0(v128, &v123[v46], 0);
      v31 = v128[0];
      goto LABEL_15;
    }
LABEL_26:
    sub_111A3D0(v128, &v123[v124.m128i_u32[0]], 1);
    v126 = 0x800000000LL;
    v111 = v128[0];
    v47 = (int *)v127;
    v48 = a3[3].m128i_u16[4];
    ptr = v127;
    if ( v48 )
    {
      v49 = 0;
      while ( 1 )
      {
        v121 = 0;
        v50 = a3[5].m128i_i64[v49];
        if ( (v50 & 2) != 0 )
        {
          v85 = v50 & 0xFFFFFFFFFFFFFFFCLL;
          v86 = *(unsigned int **)(*(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
          v115 = v86 + 4;
          v108 = *v86;
          v87 = sub_2244B30(v86 + 4, v108);
          v88 = sub_2244E60(&v123, v115, v108, v87);
          if ( v88 == -1 )
            sub_111A3D0(v128, &v123[v124.m128i_u32[0]], 1);
          else
            sub_111A3D0(v128, &v123[v88], 1);
          if ( v111 == v128[0] )
          {
            sub_168B9F0((__int64)v128, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xD36u, 0);
            v122 = *(_QWORD *)(v85 + 8);
            v97 = sub_18175F0((__int64)v128, (__int64 *)&v122);
            v120 = *(_DWORD *)v85;
            sub_180D980(v97, &v120);
            sub_15F7200(v128);
            goto LABEL_71;
          }
          v51 = v49 + 1;
          v54 = *(_DWORD *)(*v128[0] + 8);
          LODWORD(v121) = *(_DWORD *)v85;
          HIDWORD(v121) = v121;
          v119 = v54;
        }
        else
        {
          v51 = v49 + 1;
          v52 = v50 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !(unsigned __int8)sub_16211A0(a1, a3, v50 & 0xFFFFFFFFFFFFFFFCLL, &v119, (unsigned int)(v49 + 1), 0)
            || v119 > v118
            || v119 < -1 )
          {
            sub_168B9F0((__int64)v128, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC54u, 0);
            v90 = sub_15DD120((__int64)v128, (__int64)a3);
            v120 = v49 + 1;
            v91 = sub_16CF160(v90, (unsigned int *)&v120);
            v122 = sub_EEC8C0(v52, (__int64)&v120, *(double *)si128.m128i_i64);
            sub_1587DB0(v91, (__int64 *)&v122);
            sub_15F7200(v128);
            goto LABEL_71;
          }
          v107 = v119;
          v53 = sub_EEC8C0(v52, (__int64)a3, *(double *)si128.m128i_i64);
          v54 = v107;
          v121 = v53;
        }
        if ( v54 )
        {
          if ( !v117 && v54 > 0 )
            v119 = --v54;
        }
        else if ( !v117 )
        {
          sub_168B9F0((__int64)v128, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xD3Cu, 0);
          LODWORD(v122) = v51;
          v96 = sub_16CF160((__int64)v128, (unsigned int *)&v122);
          sub_15884C0(v96, &v121);
          sub_15F7200(v128);
          goto LABEL_71;
        }
        v55 = (unsigned int)v126 + 1LL;
        if ( v55 > HIDWORD(v126) )
        {
          ++v49;
          v109 = v54;
          sub_2237220(&ptr, v127, v55, 4);
          *((_DWORD *)ptr + (unsigned int)v126) = v109;
          LODWORD(v126) = v126 + 1;
          if ( v48 <= v51 )
          {
LABEL_37:
            v47 = (int *)ptr;
            break;
          }
        }
        else
        {
          ++v49;
          *((_DWORD *)ptr + (unsigned int)v126) = v54;
          LODWORD(v126) = v126 + 1;
          if ( v48 <= v51 )
            goto LABEL_37;
        }
      }
    }
    if ( v117 > *v47 )
    {
      v92 = a3;
      v93 = 3383;
      v94 = a3[1].m128i_u32[2];
      v95 = (__int64 *)(a1 + 8);
    }
    else
    {
      v56 = *v47 - (unsigned int)v117;
      v57 = (__int64 *)(sub_18064C0(a2, v56) & 0xFFFFFFFFFFFFFFF0LL);
      v60 = *v57;
      if ( *v57
        && sub_C1BF80(*v57, v56, v58, v59)
        && (v64 = sub_F68450(v60, v56, v61, v62, v63),
            v67 = sub_F63050(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL), v56, v65, v66),
            v71 = v67,
            *(_BYTE *)(v67 + 16) == 26) )
      {
        v72 = *(unsigned __int16 *)(v67 + 22);
        v73 = v126;
        if ( v72 != (unsigned int)v126 - 1LL )
        {
          sub_168B9F0((__int64)v128, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCA7u, 0);
          v98 = sub_15DD120((__int64)v128, (__int64)a3);
          v122 = v71 & 0xFFFFFFFFFFFFFFF0LL;
          v99 = sub_162B6D0(v98, (__int64 *)&v122);
          v120 = *(unsigned __int16 *)(v71 + 22);
          v100 = sub_16CF160(v99, (unsigned int *)&v120);
          LODWORD(v121) = v126 - 1;
          sub_16CF160(v100, (unsigned int *)&v121);
          sub_15F7200(v128);
LABEL_71:
          v80 = ptr;
          if ( ptr == v127 )
            goto LABEL_47;
          goto LABEL_46;
        }
        if ( *(char *)(v67 + 19) >= 0 )
        {
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            goto LABEL_45;
          v101 = sub_B8C3D0(a2, v56, v72, v68, v69, v70);
          v102 = (__int64 *)*v101;
          v103 = *v101 + 8LL * *((unsigned int *)v101 + 2);
          if ( *v101 >= v103 )
          {
            if ( v102 != (__int64 *)v103 )
            {
              if ( *(_WORD *)(*(_QWORD *)v103 + 36LL) == 171 )
              {
LABEL_92:
                v92 = a3;
                v93 = 3384;
                v94 = a3[1].m128i_u32[2];
                v95 = (__int64 *)(a1 + 8);
                goto LABEL_74;
              }
              v105 = (__int64 *)(v103 + 8);
              while ( v102 != v105 )
              {
                v106 = *v105++;
                if ( *(_WORD *)(v106 + 36) == 171 )
                  goto LABEL_92;
              }
            }
          }
          else
          {
            v104 = *v101;
            while ( *(_WORD *)(*(_QWORD *)v104 + 36LL) != 171 )
            {
              v104 += 8LL;
              if ( v103 == v104 )
                goto LABEL_83;
            }
            if ( v103 != v104 )
              goto LABEL_92;
          }
LABEL_83:
          v73 = v126;
LABEL_45:
          v74 = ptr;
          v75 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
          sub_B2E180(v75, *(_QWORD *)(a1 + 248), a3, v74, v73);
          sub_B8CC60(a2, (__int64)v75, v76, v77, v78, v79);
          v80 = ptr;
          if ( ptr == v127 )
          {
LABEL_47:
            sub_1806E60((void **)&v123);
            return;
          }
LABEL_46:
          free(v80);
          goto LABEL_47;
        }
        v92 = a3;
        v93 = 3386;
        v94 = a3[1].m128i_u32[2];
        v95 = (__int64 *)(a1 + 8);
      }
      else
      {
        v92 = a3;
        v93 = 3387;
        v94 = a3[1].m128i_u32[2];
        v95 = (__int64 *)(a1 + 8);
      }
    }
LABEL_74:
    sub_168B9F0((__int64)v128, v95, v94, v93, 0);
    v122 = v92[1].m128i_u64[1];
    sub_1587DB0((__int64)v128, (__int64 *)&v122);
    sub_15F7200(v128);
    goto LABEL_71;
  }
  sub_168B9F0((__int64)v128, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xD39u, 0);
  ptr = (void *)a3[1].m128i_i64[1];
  sub_1587DB0((__int64)v128, (__int64 *)&ptr);
  sub_15F7200(v128);
}
