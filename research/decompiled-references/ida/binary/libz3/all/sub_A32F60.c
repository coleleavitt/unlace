__int64 __fastcall sub_A32F60(__int64 a1, unsigned int a2, __int64 a3, int a4, __int64 a5)
{
  char v7; // bl
  __int64 v8; // r14
  char v9; // al
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int32 v20; // ebx
  _DWORD *v21; // rax
  int v22; // ecx
  _DWORD *v23; // r8
  __int64 v24; // rcx
  _DWORD *v25; // rsi
  _DWORD *i; // rcx
  int v27; // edx
  __int64 v28; // rcx
  _DWORD *(__fastcall *v29)(__int64, int); // rax
  unsigned __int32 *v30; // rdx
  __int64 v31; // rax
  unsigned __int32 *v32; // rax
  int v33; // edx
  unsigned __int32 *v34; // rdx
  __int64 v35; // rax
  unsigned __int32 *v36; // rax
  __int64 v37; // r12
  unsigned int v38; // eax
  __int64 v39; // r15
  __int64 v40; // rbx
  const __m128i *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r10
  int v46; // edi
  int v47; // edx
  int v48; // ecx
  __int64 v49; // r11
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rdx
  unsigned __int64 v55; // r11
  __int64 (__fastcall *v56)(__int64, const __m128i *); // rax
  __m128i *v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rsi
  int v60; // eax
  __m128i *v61; // rsi
  unsigned __int64 v62; // rdx
  __m128i *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rsi
  int v67; // eax
  __m128i *v68; // rsi
  unsigned int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rsi
  _DWORD *v72; // rcx
  __int64 v73; // rdi
  unsigned __int64 v74; // rax
  __int64 v75; // rdi
  unsigned int v76; // r15d
  unsigned int v77; // ecx
  unsigned int *v78; // rax
  __int64 v79; // rax
  unsigned int v80; // edx
  __int64 v81; // rax
  __int64 v82; // rsi
  _DWORD *v83; // rcx
  __int64 v84; // rdi
  unsigned __int64 v85; // rax
  __int64 v86; // rdi
  unsigned int v87; // r15d
  unsigned int v88; // ecx
  unsigned int *v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rdx
  _QWORD *v93; // rax
  _QWORD *v94; // rdx
  char **exception; // rbp
  char **v96; // rbp
  char **v97; // rbp
  char **v98; // rbp
  __int64 *v99; // [rsp+10h] [rbp-128h]
  __int64 v100; // [rsp+18h] [rbp-120h]
  __int64 v101; // [rsp+20h] [rbp-118h]
  unsigned int v102; // [rsp+2Ch] [rbp-10Ch]
  unsigned int v103; // [rsp+2Ch] [rbp-10Ch]
  __int64 *v104; // [rsp+30h] [rbp-108h]
  __m128i *v105; // [rsp+40h] [rbp-F8h]
  __m128i *v106; // [rsp+40h] [rbp-F8h]
  _DWORD *v107; // [rsp+48h] [rbp-F0h]
  _DWORD *v108; // [rsp+48h] [rbp-F0h]
  __int64 v109; // [rsp+50h] [rbp-E8h]
  __int64 v110; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v111; // [rsp+70h] [rbp-C8h] BYREF
  __int64 *v112; // [rsp+78h] [rbp-C0h]
  __m128i v113[2]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v114[152]; // [rsp+A0h] [rbp-98h] BYREF

  v7 = a4;
  sub_9D5820((__int64)v114, a1, a2, a3, a4);
  v8 = sub_186B270(0x88u);
  *(_QWORD *)v8 = &off_1C563C8;
  *(_DWORD *)(v8 + 8) = a2;
  sub_8A6550(v8 + 16, (__int64)v114);
  v9 = *(_BYTE *)(v8 + 112);
  *(_OWORD *)(v8 + 120) = 0;
  v113[0].m128i_i64[0] = v8;
  *(_BYTE *)(v8 + 112) = v7 & 1 | v9 & 0xFC;
  *(_QWORD *)v8 = &off_1C56470;
  sub_98CC00((_QWORD *)(a1 + 1152), v113);
  v113[0].m128i_i64[0] = v8;
  sub_98CC00((_QWORD *)(a1 + 800), v113);
  v110 = 0;
  sub_A30ED0(a1 + 888, a5, &v110);
  v10 = v110;
  v100 = a1 + 272;
  v109 = v110;
  sub_9E4980(a1 + 272);
  v101 = a1 + 296;
  sub_9E7500(a1 + 296);
  if ( v10 )
  {
    v104 = (__int64 *)(v10 + 8LL * *(unsigned int *)(v10 - 4));
    if ( (__int64 *)v10 != v104 )
    {
      v99 = (__int64 *)v10;
      while ( 1 )
      {
        v11 = *v99;
        v12 = *(unsigned int *)(a1 + 1320);
        v111 = a1;
        v112 = (__int64 *)(a1 + 48 * v12 + 1176);
        sub_9A4DA0((__int64)v112);
        v13 = *(_QWORD *)(a1 + 24);
        ++*(_DWORD *)(a1 + 1320);
        (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v11 + 24LL))(
          v11,
          &v111,
          &qword_1C7F2A0,
          *(_DWORD *)(v13 + 712) != 0);
        v14 = v112;
        v15 = *v112;
        if ( *v112 )
        {
          v16 = *(unsigned int *)(v15 - 4);
          if ( (_DWORD)v16 )
          {
            v17 = 4 * v16;
            v18 = 0;
            while ( 1 )
            {
              v19 = *(unsigned int *)(a1 + 280);
              v20 = *(_DWORD *)(v15 + v18);
              v21 = *(_DWORD **)(a1 + 272);
              v22 = v19 - 1;
              v19 *= 8;
              v23 = (_DWORD *)((char *)v21 + v19);
              v24 = 8LL * (v20 & v22);
              v25 = &v21[(unsigned __int64)v24 / 4];
              if ( v24 != v19 )
              {
                for ( i = &v21[(unsigned __int64)v24 / 4]; v23 != i; i += 2 )
                {
                  v27 = i[1];
                  if ( v27 + 0x80000000 > 1 )
                  {
                    if ( *i == v20 && v20 == v27 )
                      goto LABEL_20;
                  }
                  else if ( v27 == 0x80000000 )
                  {
                    goto LABEL_14;
                  }
                }
              }
              for ( ; v25 != v21; v21 += 2 )
              {
                v33 = v21[1];
                if ( v33 + 0x80000000 > 1 )
                {
                  if ( *v21 == v20 && v20 == v33 )
                    goto LABEL_20;
                }
                else if ( v33 == 0x80000000 )
                {
                  break;
                }
              }
LABEL_14:
              v28 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 712LL);
              v29 = *(_DWORD *(__fastcall **)(__int64, int))(*(_QWORD *)v8 + 40LL);
              if ( !(_DWORD)v28 )
                break;
              if ( v29 != sub_9C8250 )
              {
                ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _DWORD *))v29)(
                  v8,
                  v20,
                  v14[2] + 8 * v18,
                  v28,
                  v23);
                goto LABEL_36;
              }
              v30 = *(unsigned __int32 **)(v8 + 120);
              if ( v30 )
              {
                v31 = *(v30 - 1);
                if ( (_DWORD)v31 == *(v30 - 2) )
                {
                  v87 = (unsigned int)(3 * v31 + 1) >> 1;
                  v88 = 4 * v87 + 8;
                  if ( 4 * (int)v31 + 8 >= v88 || (unsigned int)v31 >= v87 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v113[0].m128i_i64, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v113);
                    sub_233E40((__int64)v113);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v89 = (unsigned int *)sub_186B300(v30 - 2, v88);
                  v30 = v89 + 2;
                  *v89 = v87;
                  v90 = v89[1];
                  *(_QWORD *)(v8 + 120) = v30;
                  v14 = v112;
                  v32 = &v30[v90];
                }
                else
                {
                  v32 = &v30[v31];
                }
              }
              else
              {
                v91 = (_QWORD *)sub_186B270(0x10u);
                v14 = v112;
                v30 = (unsigned __int32 *)(v91 + 1);
                *v91 = 2;
                v32 = v30;
                *(_QWORD *)(v8 + 120) = v30;
              }
              *v32 = v20;
              ++*(v30 - 1);
LABEL_20:
              v18 += 4;
              if ( v18 == v17 )
                goto LABEL_37;
LABEL_21:
              v15 = *v14;
            }
            if ( v29 == sub_9C8250 )
            {
              v34 = *(unsigned __int32 **)(v8 + 120);
              if ( v34 )
              {
                v35 = *(v34 - 1);
                if ( (_DWORD)v35 == *(v34 - 2) )
                {
                  v76 = (unsigned int)(3 * v35 + 1) >> 1;
                  v77 = 4 * v76 + 8;
                  if ( 4 * (int)v35 + 8 >= v77 || (unsigned int)v35 >= v76 )
                  {
                    v97 = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v113[0].m128i_i64, "Overflow encountered when expanding vector");
                    *v97 = (char *)off_1C63128;
                    sub_2333C0(v97 + 1, v113);
                    sub_233E40((__int64)v113);
                    __cxa_throw(v97, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v78 = (unsigned int *)sub_186B300(v34 - 2, v77);
                  v34 = v78 + 2;
                  *v78 = v76;
                  v79 = v78[1];
                  *(_QWORD *)(v8 + 120) = v34;
                  v36 = &v34[v79];
                }
                else
                {
                  v36 = &v34[v35];
                }
              }
              else
              {
                v93 = (_QWORD *)sub_186B270(0x10u);
                v34 = (unsigned __int32 *)(v93 + 1);
                *v93 = 2;
                v36 = v34;
                *(_QWORD *)(v8 + 120) = v34;
              }
              *v36 = v20;
              ++*(v34 - 1);
            }
            else
            {
              ((void (__fastcall *)(__int64, _QWORD, int *, __int64, _DWORD *))v29)(v8, v20, &qword_1C7F2A0, v28, v23);
            }
            v113[0].m128i_i32[0] = v20;
            sub_9E1E20(v100, v113[0].m128i_i32);
LABEL_36:
            v18 += 4;
            v14 = v112;
            if ( v18 == v17 )
              goto LABEL_37;
            goto LABEL_21;
          }
        }
LABEL_37:
        v37 = v14[1];
        if ( v37 )
        {
          v38 = *(_DWORD *)(v37 - 4);
          if ( v38 )
            break;
        }
LABEL_67:
        ++v99;
        --*(_DWORD *)(v111 + 1320);
        if ( v104 == v99 )
          goto LABEL_68;
      }
      v39 = 0;
      v40 = 16LL * v38;
LABEL_40:
      v41 = (const __m128i *)(v39 + v37);
      v42 = *(unsigned int *)(a1 + 304);
      v43 = *(_QWORD *)(a1 + 296);
      v44 = v41->m128i_i64[0];
      v45 = v41->m128i_i64[1];
      v46 = *(_DWORD *)(*(_QWORD *)v41->m128i_i64[0] + 12LL);
      v47 = (*(_DWORD *)(*(_QWORD *)v45 + 12LL) - v46) ^ (v46 << 8);
      v48 = ((v47 ^ ((v46 - v47) << 16)) + v47 - v46) ^ ((v46 - v47) << 10);
      v49 = 24 * v42;
      v50 = v48 & (unsigned int)(v42 - 1);
      v51 = v43 + 24 * v42;
      v52 = 24 * v50;
      v53 = v43 + v52;
      if ( v52 == v49 )
      {
LABEL_57:
        if ( v43 == v53 )
        {
LABEL_47:
          v56 = *(__int64 (__fastcall **)(__int64, const __m128i *))(*(_QWORD *)v8 + 48LL);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          {
            if ( v56 == sub_9C22D0 )
            {
              v57 = *(__m128i **)(v8 + 128);
              if ( v57 )
              {
                v58 = v57[-1].m128i_u32[3];
                if ( v58 == v57[-1].m128i_i32[2] )
                {
                  v102 = (3 * v58 + 1) >> 1;
                  v69 = 16 * v102 + 8;
                  if ( 16 * v58 + 8 >= v69 || v58 >= (3 * v58 + 1) >> 1 )
                  {
                    v98 = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v113[0].m128i_i64, "Overflow encountered when expanding vector");
                    *v98 = (char *)off_1C63128;
                    sub_2333C0(v98 + 1, v113);
                    sub_233E40((__int64)v113);
                    __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v70 = sub_186B270(v69);
                  v71 = *(_QWORD *)(v8 + 128);
                  v72 = (_DWORD *)v70;
                  v57 = (__m128i *)(v70 + 8);
                  if ( v71 )
                  {
                    v73 = *(unsigned int *)(v71 - 4);
                    *(_DWORD *)(v70 + 4) = v73;
                    v74 = 0;
                    v75 = 16 * v73;
                    if ( v75 )
                    {
                      do
                      {
                        *(__m128i *)&v72[v74 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v71 + v74));
                        v74 += 16LL;
                      }
                      while ( v75 != v74 );
                    }
                    v107 = v72;
                    v105 = v57;
                    sub_186B220((void *)(v71 - 8));
                    v72 = v107;
                    v57 = v105;
                    v61 = &v105[v107[1]];
                    v60 = v107[1] + 1;
                  }
                  else
                  {
                    *(_DWORD *)(v70 + 4) = 0;
                    v61 = (__m128i *)(v70 + 8);
                    v60 = 1;
                  }
                  *(_QWORD *)(v8 + 128) = v57;
                  *v72 = v102;
                }
                else
                {
                  v59 = v58;
                  v60 = v58 + 1;
                  v61 = &v57[v59];
                }
              }
              else
              {
                v94 = (_QWORD *)sub_186B270(0x28u);
                *v94 = 2;
                v60 = 1;
                v57 = (__m128i *)(v94 + 1);
                *(_QWORD *)(v8 + 128) = v57;
                v61 = v57;
              }
              *v61 = _mm_loadu_si128(v41);
              v57[-1].m128i_i32[3] = v60;
            }
            else
            {
              ((void (__fastcall *)(__int64, const __m128i *, __int64))v56)(v8, v41, v14[3] + 2 * v39);
            }
          }
          else
          {
            if ( v56 == sub_9C22D0 )
            {
              v64 = *(__m128i **)(v8 + 128);
              if ( v64 )
              {
                v65 = v64[-1].m128i_u32[3];
                if ( v65 == v64[-1].m128i_i32[2] )
                {
                  v103 = (3 * v65 + 1) >> 1;
                  v80 = 16 * v103 + 8;
                  if ( 16 * v65 + 8 >= v80 || v65 >= (3 * v65 + 1) >> 1 )
                  {
                    v96 = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v113[0].m128i_i64, "Overflow encountered when expanding vector");
                    *v96 = (char *)off_1C63128;
                    sub_2333C0(v96 + 1, v113);
                    sub_233E40((__int64)v113);
                    __cxa_throw(v96, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v81 = sub_186B270(v80);
                  v82 = *(_QWORD *)(v8 + 128);
                  v83 = (_DWORD *)v81;
                  v64 = (__m128i *)(v81 + 8);
                  if ( v82 )
                  {
                    v84 = *(unsigned int *)(v82 - 4);
                    *(_DWORD *)(v81 + 4) = v84;
                    v85 = 0;
                    v86 = 16 * v84;
                    if ( v86 )
                    {
                      do
                      {
                        *(__m128i *)&v83[v85 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v82 + v85));
                        v85 += 16LL;
                      }
                      while ( v86 != v85 );
                    }
                    v108 = v83;
                    v106 = v64;
                    sub_186B220((void *)(v82 - 8));
                    v83 = v108;
                    v64 = v106;
                    v68 = &v106[v108[1]];
                    v67 = v108[1] + 1;
                  }
                  else
                  {
                    *(_DWORD *)(v81 + 4) = 0;
                    v68 = (__m128i *)(v81 + 8);
                    v67 = 1;
                  }
                  *(_QWORD *)(v8 + 128) = v64;
                  *v83 = v103;
                }
                else
                {
                  v66 = v65;
                  v67 = v65 + 1;
                  v68 = &v64[v66];
                }
              }
              else
              {
                v92 = (_QWORD *)sub_186B270(0x28u);
                *v92 = 2;
                v67 = 1;
                v64 = (__m128i *)(v92 + 1);
                *(_QWORD *)(v8 + 128) = v64;
                v68 = v64;
              }
              *v68 = _mm_loadu_si128(v41);
              v64[-1].m128i_i32[3] = v67;
            }
            else
            {
              ((void (__fastcall *)(__int64, const __m128i *, int *))v56)(v8, v41, &qword_1C7F2A0);
            }
            v113[0] = _mm_loadu_si128(v41);
            sub_A0D2E0(v101, v113);
          }
LABEL_53:
          v39 += 16;
          if ( v39 == v40 )
            goto LABEL_67;
          goto LABEL_54;
        }
        while ( 1 )
        {
          v62 = *(_QWORD *)(v43 + 8);
          if ( v62 > 1 )
          {
            if ( *(_DWORD *)v43 == v48 && v44 == v62 && v45 == *(_QWORD *)(v43 + 16) )
            {
              v39 += 16;
              if ( v39 == v40 )
                goto LABEL_67;
LABEL_54:
              v14 = v112;
              v37 = v112[1];
              goto LABEL_40;
            }
          }
          else if ( !v62 )
          {
            goto LABEL_47;
          }
          v43 += 24;
          if ( v53 == v43 )
            goto LABEL_47;
        }
      }
      v54 = v43 + v52;
      while ( 1 )
      {
        v55 = *(_QWORD *)(v54 + 8);
        if ( v55 > 1 )
        {
          if ( *(_DWORD *)v54 != v48 || v44 != v55 )
            goto LABEL_44;
          if ( v45 == *(_QWORD *)(v54 + 16) )
            goto LABEL_53;
          v54 += 24;
          if ( v51 == v54 )
            goto LABEL_57;
        }
        else
        {
          if ( !v55 )
            goto LABEL_47;
LABEL_44:
          v54 += 24;
          if ( v51 == v54 )
            goto LABEL_57;
        }
      }
    }
LABEL_68:
    sub_186B220((void *)(v109 - 8));
  }
  return sub_2A6060((__int64)v114);
}

