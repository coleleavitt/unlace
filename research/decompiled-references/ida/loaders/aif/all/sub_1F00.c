unsigned __int64 __fastcall sub_1F00(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  __int64 v10; // r12
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r12
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // edx
  int v19; // esi
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rsi
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r15
  unsigned int v28; // r14d
  char v29; // dl
  unsigned __int32 v30; // eax
  __int64 v31; // rbp
  char v32; // dl
  unsigned int v33; // eax
  unsigned __int8 v34; // al
  char v35; // al
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned int *v38; // r15
  int v39; // r14d
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r13
  __int64 v42; // rax
  char v43; // dl
  unsigned int v44; // eax
  unsigned int v45; // edx
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // r14
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // edx
  unsigned int v51; // ecx
  __m128i v52; // xmm0
  unsigned int v53; // edx
  unsigned __int64 v54; // rdx
  int *v55; // r9
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rbx
  bool v59; // zf
  bool v60; // sf
  bool v61; // of
  int v62; // ebp
  unsigned __int64 v63; // rbx
  int *v64; // r13
  int v65; // r12d
  unsigned __int64 v66; // r10
  char *v67; // r15
  char *v68; // rax
  const char **v69; // r14
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __m128 v73; // xmm4
  __m128 v74; // xmm5
  __int64 v75; // rdx
  __int64 v76; // r9
  _BOOL8 v77; // rcx
  bool v78; // al
  char v79; // [rsp+0h] [rbp-148h]
  int v80; // [rsp+Ch] [rbp-13Ch]
  bool v81; // [rsp+Ch] [rbp-13Ch]
  int v82; // [rsp+10h] [rbp-138h]
  unsigned __int64 v83; // [rsp+10h] [rbp-138h]
  unsigned __int64 v84; // [rsp+18h] [rbp-130h]
  unsigned __int64 v85; // [rsp+18h] [rbp-130h]
  unsigned __int64 v86; // [rsp+20h] [rbp-128h]
  unsigned __int64 v87; // [rsp+20h] [rbp-128h]
  int *v88; // [rsp+28h] [rbp-120h]
  unsigned __int64 v89; // [rsp+28h] [rbp-120h]
  __int64 v90; // [rsp+30h] [rbp-118h]
  __int64 v91; // [rsp+38h] [rbp-110h]
  _DWORD v92[3]; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v93; // [rsp+4Ch] [rbp-FCh]
  unsigned int v94; // [rsp+54h] [rbp-F4h]
  unsigned int v95; // [rsp+58h] [rbp-F0h]
  unsigned int v96; // [rsp+5Ch] [rbp-ECh]
  unsigned int v97; // [rsp+60h] [rbp-E8h]
  unsigned int v98; // [rsp+68h] [rbp-E0h]
  char v99; // [rsp+70h] [rbp-D8h]
  char v100; // [rsp+71h] [rbp-D7h]
  unsigned int v101; // [rsp+74h] [rbp-D4h]
  char v102[72]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned __int64 v103; // [rsp+108h] [rbp-40h]

  v103 = __readfsqword(0x28u);
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  set_processor_type("arm", 1);
  lread(a1, v92, 128);
  v9 = sub_1310((__int64)v92);
  setinf_flag(3, 32, v9 != 1);
  if ( v99 != 32 )
  {
    if ( v99 )
      sub_1CE0((__int64)"26-bit modules are not supported");
    sub_1B30((__int64)"Old AIF format file...");
  }
  if ( v92[0] != -509607936 )
    sub_1CE0((__int64)"Compressed modules are not supported");
  if ( v92[1] != -509607936 )
    sub_1CE0((__int64)"Self-relocating modules are not supported");
  setinf(12, 0);
  v10 = v98;
  v11 = v93 & 0xFF000000;
  if ( (v93 & 0xFF000000) == 0xEB000000 )
  {
    v94 -= 128;
    v10 = v98 + 128LL;
  }
  v12 = qlsize(a1);
  if ( v12 - 128 < (unsigned __int64)v94 )
    goto LABEL_136;
  v13 = v10 + v94;
  file2base(a1, 128, v10, v13, 1);
  sub_1D90(1u, v10, v13, (__int64)".text", (__int64)"CODE");
  v14 = v94 + 128LL;
  if ( !v95 )
    goto LABEL_10;
  v21 = qlsize(a1);
  if ( v21 - v14 < (unsigned __int64)v95 )
LABEL_136:
    sub_1CE0((__int64)"Corrupted file");
  if ( (v100 & 1) != 0 )
    v13 = v101;
  v22 = v13 + v95;
  file2base(a1, v14, v13, v22, 1);
  v23 = v13;
  v13 = v22;
  sub_1D90(2u, v23, v22, (__int64)".data", (__int64)"DATA");
  v14 += v95;
LABEL_10:
  if ( v97 )
    sub_1D90(3u, v13, v13 + v97, (__int64)".bss", (__int64)"BSS");
  create_filename_cmt();
  if ( v11 == -352321536 )
    v93 = ((4 * v93) & 0x3FFFFFC) + v98 + 20;
  setinf(14, 1);
  setinf(15, v93);
  setinf(16, v93);
  v15 = v96;
  v16 = qlsize(a1) - v14;
  if ( v16 >= 0 )
  {
    v19 = v96;
    if ( v16 >= (unsigned __int64)v96 )
      goto LABEL_18;
    v18 = v16;
    v17 = v16;
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  v96 = v18;
  if ( (unsigned int)sub_1C00(
                       1u,
                       (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       "Size of debug info",
                       v15,
                       v17,
                       ". Do you want to continue with the new value?") != 1 )
    sub_1CE0(0);
  v19 = v96;
LABEL_18:
  if ( v19 )
  {
    sub_1B30((__int64)"Debugging information is present (%u bytes at file offset 0x%llX)...\n", v19, v14);
    v24 = qcalloc(v96, 1);
    if ( !v24 )
      sub_1A70((__int64)"AIF debugging info");
    qlseek(a1, v14, 0);
    v25 = v24;
    lread(a1, v24, v96);
    v26 = v24 + v96;
    if ( v24 < v26 )
    {
      while ( 1 )
      {
        v27 = v26 - v25;
        if ( v26 - v25 <= 3 )
          break;
        v28 = *(_DWORD *)v25;
        v29 = getinf_flag(3, 32);
        v30 = _byteswap_ulong(v28);
        if ( v29 )
          v28 = v30;
        v31 = HIWORD(v28);
        if ( v31 - 1 >= v27 )
          break;
        switch ( (__int16)v28 )
        {
          case 1:
            if ( v27 <= 0x23 )
              goto LABEL_29;
            v32 = getinf_flag(3, 32);
            v33 = *(_DWORD *)(v25 + 28);
            if ( v32 )
            {
              v50 = *(_DWORD *)(v25 + 8);
              v51 = *(_DWORD *)(v25 + 12);
              v33 = _byteswap_ulong(v33);
              *(_DWORD *)(v25 + 28) = v33;
              a5 = (__m128)_mm_cvtsi32_si128(_byteswap_ulong(v51));
              a4 = (__m128)_mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v25 + 20)));
              v52 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v50)), (__m128i)a5);
              a3 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v25 + 16))), (__m128i)a4);
              *(_DWORD *)(v25 + 24) = _byteswap_ulong(*(_DWORD *)(v25 + 24));
              v53 = *(_DWORD *)(v25 + 32);
              a2 = (__m128)_mm_unpacklo_epi64(v52, (__m128i)a3);
              *(__m128 *)(v25 + 8) = a2;
              *(_DWORD *)(v25 + 32) = _byteswap_ulong(v53);
            }
            if ( v33 )
            {
              v31 = v33;
              if ( v27 < v33 )
                goto LABEL_29;
            }
            v34 = *(_BYTE *)(v25 + 4);
            if ( v34 == 3 )
            {
              sub_1740(*(unsigned int *)(v25 + 8), 1u, (__int64)"Fortran-77 source level debugging data is present");
              v35 = *(_BYTE *)(v25 + 4);
            }
            else if ( v34 > 3u )
            {
              if ( v34 != 4 )
                goto LABEL_99;
              sub_1740(*(unsigned int *)(v25 + 8), 1u, (__int64)"ARM assembler line number data is present");
              v35 = *(_BYTE *)(v25 + 4);
            }
            else if ( v34 == 1 )
            {
              sub_1740(*(unsigned int *)(v25 + 8), 1u, (__int64)"C source level debugging data is present");
              v35 = *(_BYTE *)(v25 + 4);
            }
            else
            {
              if ( v34 != 2 )
                goto LABEL_73;
              sub_1740(*(unsigned int *)(v25 + 8), 1u, (__int64)"Pascal source level debugging data is present");
              v35 = *(_BYTE *)(v25 + 4);
            }
            if ( !v35 )
            {
LABEL_73:
              v36 = v25 + 36;
              v37 = v25 + 36 + 8LL * *(unsigned int *)(v25 + 32);
              if ( v37 >= v26 )
                goto LABEL_29;
              if ( *(_DWORD *)(v25 + 32) )
              {
                v84 = v25;
                v38 = (unsigned int *)(v25 + 36);
                v39 = 0;
                v86 = v24;
                v40 = *(unsigned int *)(v25 + 32);
                v41 = v37;
                v82 = 0;
                v88 = (int *)v36;
                v90 = v31;
                v80 = 0;
                do
                {
                  v43 = getinf_flag(3, 32);
                  v44 = *v38;
                  if ( v43 )
                  {
                    v45 = v38[1];
                    v44 = _byteswap_ulong(v44);
                    *v38 = v44;
                    v38[1] = _byteswap_ulong(v45);
                  }
                  if ( (v44 & 0x10000000) == 0 )
                  {
                    v42 = v44 & 0xFFFFFF;
                    if ( v41 + v42 < v26 )
                    {
                      if ( *(char *)(v41 + v42) == strlen((const char *)(v41 + v42)) - 1 )
                        ++v82;
                      else
                        ++v80;
                    }
                  }
                  ++v39;
                  v38 += 2;
                }
                while ( v39 < v40 );
                v54 = v41;
                v55 = v88;
                v56 = v86;
                v57 = v40;
                v58 = v84;
                v85 = v54;
                v61 = __OFSUB__(v82, v80);
                v59 = v82 == v80;
                v60 = v82 - v80 < 0;
                v83 = v26;
                v81 = !(v60 ^ v61 | v59);
                v87 = v58;
                v62 = 0;
                v63 = v57;
                v89 = v56;
                v64 = v55;
                while ( 1 )
                {
                  v65 = *v64;
                  if ( (*v64 & 0x10000000) == 0 )
                  {
                    v66 = v81 + (unsigned __int64)(v65 & 0xFFFFFF);
                    v67 = (char *)(v66 + v85);
                    if ( !__CFADD__(v66, v85) && (unsigned __int64)v67 < v83 )
                    {
                      if ( *v67 )
                      {
                        if ( *v67 != 36 )
                        {
                          v68 = strchr((const char *)(v66 + v85), 36);
                          if ( !v68 || v68[1] != 36 )
                          {
                            v69 = (const char **)off_4D20;
                            do
                            {
                              if ( !strcmp(*v69, v67) )
                                goto LABEL_124;
                              ++v69;
                            }
                            while ( &stru_4D40 != (Elf64_Dyn *)v69 );
                            if ( strncmp(v67, "x$constdata", 0xBu) && strncmp(v67, "x$litpool", 9u) )
                            {
                              v75 = (unsigned int)v64[1];
                              if ( v65 )
                              {
                                if ( (unsigned __int8)is_mapped((unsigned int)v75) )
                                {
                                  v76 = (unsigned int)v64[1];
                                  if ( (*v64 & 0x1000000) != 0 )
                                  {
                                    v77 = 0;
                                    if ( (*v64 & 0x6000000) == 0x2000000 )
                                    {
                                      v91 = (unsigned int)v64[1];
                                      v78 = sub_15D0(v67);
                                      v76 = v91;
                                      v77 = v78;
                                    }
                                    add_entry(v76, v76, v67, v77, 1);
                                  }
                                  else
                                  {
                                    set_name((unsigned int)v64[1], v67, 7168);
                                    if ( (*v64 & 0x6000000) == 0x2000000 && sub_15D0(v67) )
                                      auto_mark_range((unsigned int)v64[1], (unsigned int)v64[1] + 1LL, 20);
                                  }
                                }
                              }
                              else
                              {
                                sub_1800(
                                  (__int64)"%s = 0x%X",
                                  (__int64)v67,
                                  v75,
                                  v70,
                                  v71,
                                  v72,
                                  a2,
                                  a3,
                                  a4,
                                  a5,
                                  v73,
                                  v74,
                                  a8,
                                  a9,
                                  v79);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_124:
                  ++v62;
                  v64 += 2;
                  if ( v62 >= v63 )
                  {
                    v26 = v83;
                    v25 = v87;
                    v24 = v89;
                    v31 = v90;
                    goto LABEL_36;
                  }
                }
              }
              goto LABEL_36;
            }
LABEL_99:
            v46 = v27 - 33;
            v47 = *(unsigned __int8 *)(v25 + 32);
            if ( v46 > 0x3F )
              v46 = 63;
            if ( v46 < v47 )
              goto LABEL_29;
            qstrncpy(v102, v25 + 33, 64);
            v102[v47] = 0;
            v48 = *(_DWORD *)(v25 + 8);
            if ( v48 )
              sub_1740(v48, 1u, (__int64)"Section \"%s\", size 0x%X", v102, *(_DWORD *)(v25 + 16));
            v49 = *(_DWORD *)(v25 + 12);
            if ( v49 )
              sub_1740(v49, 1u, (__int64)"Section \"%s\", size 0x%X", v102, *(_DWORD *)(v25 + 20));
LABEL_36:
            v25 += v31;
            if ( v25 >= v26 )
              goto LABEL_30;
            break;
          case 2:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"procedure/function definition\n");
            goto LABEL_36;
          case 3:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"endproc\n");
            goto LABEL_36;
          case 4:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"variable\n");
            goto LABEL_36;
          case 5:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"type\n");
            goto LABEL_36;
          case 6:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"struct\n");
            goto LABEL_36;
          case 7:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"array\n");
            goto LABEL_36;
          case 8:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"subrange\n");
            goto LABEL_36;
          case 9:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"set\n");
            goto LABEL_36;
          case 10:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"fileinfo\n");
            goto LABEL_36;
          case 11:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"contiguous enumeration\n");
            goto LABEL_36;
          case 12:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"discontiguous enumeration\n");
            goto LABEL_36;
          case 13:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"procedure/function declaration\n");
            goto LABEL_36;
          case 14:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"begin naming scope\n");
            goto LABEL_36;
          case 15:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"end naming scope\n");
            goto LABEL_36;
          case 16:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"bitfield\n");
            goto LABEL_36;
          case 17:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"macro definition\n");
            goto LABEL_36;
          case 18:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"macro undefinition\n");
            goto LABEL_36;
          case 19:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"class\n");
            goto LABEL_36;
          case 20:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"union\n");
            goto LABEL_36;
          case 32:
            if ( (debug & 0x10) != 0 )
              sub_18D0((__int64)"FP map fragment\n");
            goto LABEL_36;
          default:
            sub_1B30((__int64)"unknown (0x%u.)!!!\n", (unsigned __int16)v28);
            goto LABEL_36;
        }
      }
LABEL_29:
      sub_19A0((__int64)"Corrupted debug info");
    }
LABEL_30:
    qfree(v24);
  }
  return v103 - __readfsqword(0x28u);
}

