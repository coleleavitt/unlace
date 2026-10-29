void __fastcall sub_A38880(__int64 a1, unsigned int a2, __int64 a3, int a4, __int64 a5)
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
  __m128i *v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rsi
  int v66; // eax
  __m128i *v67; // rsi
  unsigned int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rsi
  _DWORD *v71; // rcx
  __int64 v72; // rdi
  unsigned __int64 v73; // rax
  __int64 v74; // rdi
  unsigned int v75; // r15d
  unsigned int v76; // ecx
  unsigned int *v77; // rax
  __int64 v78; // rax
  unsigned int v79; // edx
  __int64 v80; // rax
  __int64 v81; // rsi
  _DWORD *v82; // rcx
  __int64 v83; // rdi
  unsigned __int64 v84; // rax
  __int64 v85; // rdi
  unsigned int v86; // r15d
  unsigned int v87; // ecx
  unsigned int *v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rdx
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  char **exception; // rbp
  char **v95; // rbp
  char **v96; // rbp
  char **v97; // rbp
  __int64 *v98; // [rsp+10h] [rbp-108h]
  __int64 v99; // [rsp+18h] [rbp-100h]
  __int64 v100; // [rsp+20h] [rbp-F8h]
  unsigned int v101; // [rsp+2Ch] [rbp-ECh]
  unsigned int v102; // [rsp+2Ch] [rbp-ECh]
  __int64 *v103; // [rsp+30h] [rbp-E8h]
  __m128i *v104; // [rsp+40h] [rbp-D8h]
  __m128i *v105; // [rsp+40h] [rbp-D8h]
  _DWORD *v106; // [rsp+48h] [rbp-D0h]
  _DWORD *v107; // [rsp+48h] [rbp-D0h]
  __int64 v108; // [rsp+50h] [rbp-C8h]
  __int64 v109; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v110; // [rsp+70h] [rbp-A8h] BYREF
  __int64 *v111; // [rsp+78h] [rbp-A0h]
  __m128i v112[2]; // [rsp+80h] [rbp-98h] BYREF
  char v113[32]; // [rsp+A0h] [rbp-78h] BYREF
  char v114[88]; // [rsp+C0h] [rbp-58h] BYREF

  v7 = a4;
  sub_9ABF40((__int64)v113, a1, a2, a3, a4);
  v8 = sub_186B270(0x68u);
  *(_QWORD *)v8 = &off_1C56158;
  *(_DWORD *)(v8 + 8) = a2;
  sub_91F480(v8 + 16, (__int64)v113);
  v9 = *(_BYTE *)(v8 + 80);
  *(_OWORD *)(v8 + 88) = 0;
  v112[0].m128i_i64[0] = v8;
  *(_BYTE *)(v8 + 80) = v7 & 1 | v9 & 0xFC;
  *(_QWORD *)v8 = &off_1C56200;
  sub_98CF00((_QWORD *)(a1 + 1056), v112);
  v112[0].m128i_i64[0] = v8;
  sub_98CF00((_QWORD *)(a1 + 736), v112);
  v109 = 0;
  sub_A30ED0(a1 + 824, a5, &v109);
  v10 = v109;
  v99 = a1 + 208;
  v108 = v109;
  sub_9E4980(a1 + 208);
  v100 = a1 + 232;
  sub_9E7500(a1 + 232);
  if ( v10 )
  {
    v103 = (__int64 *)(v10 + 8LL * *(unsigned int *)(v10 - 4));
    if ( (__int64 *)v10 != v103 )
    {
      v98 = (__int64 *)v10;
      while ( 1 )
      {
        v11 = *v98;
        v12 = *(unsigned int *)(a1 + 1224);
        v110 = a1;
        v111 = (__int64 *)(a1 + 48 * v12 + 1080);
        sub_998560((__int64)v111);
        v13 = *(_QWORD *)(a1 + 24);
        ++*(_DWORD *)(a1 + 1224);
        (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v11 + 24LL))(
          v11,
          &v110,
          &qword_1C7F2A0,
          *(_DWORD *)(v13 + 712) != 0);
        v14 = v111;
        v15 = *v111;
        if ( *v111 )
        {
          v16 = *(unsigned int *)(v15 - 4);
          if ( (_DWORD)v16 )
          {
            v17 = 4 * v16;
            v18 = 0;
            while ( 1 )
            {
              v19 = *(unsigned int *)(a1 + 216);
              v20 = *(_DWORD *)(v15 + v18);
              v21 = *(_DWORD **)(a1 + 208);
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
              if ( v29 != sub_9C8030 )
              {
                ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _DWORD *))v29)(
                  v8,
                  v20,
                  v14[2] + 8 * v18,
                  v28,
                  v23);
                goto LABEL_36;
              }
              v30 = *(unsigned __int32 **)(v8 + 88);
              if ( v30 )
              {
                v31 = *(v30 - 1);
                if ( (_DWORD)v31 == *(v30 - 2) )
                {
                  v86 = (unsigned int)(3 * v31 + 1) >> 1;
                  v87 = 4 * v86 + 8;
                  if ( 4 * (int)v31 + 8 >= v87 || (unsigned int)v31 >= v86 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v112[0].m128i_i64, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v112);
                    sub_233E40((__int64)v112);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v88 = (unsigned int *)sub_186B300(v30 - 2, v87);
                  v30 = v88 + 2;
                  *v88 = v86;
                  v89 = v88[1];
                  *(_QWORD *)(v8 + 88) = v30;
                  v14 = v111;
                  v32 = &v30[v89];
                }
                else
                {
                  v32 = &v30[v31];
                }
              }
              else
              {
                v90 = (_QWORD *)sub_186B270(0x10u);
                v14 = v111;
                v30 = (unsigned __int32 *)(v90 + 1);
                *v90 = 2;
                v32 = v30;
                *(_QWORD *)(v8 + 88) = v30;
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
            if ( v29 == sub_9C8030 )
            {
              v34 = *(unsigned __int32 **)(v8 + 88);
              if ( v34 )
              {
                v35 = *(v34 - 1);
                if ( (_DWORD)v35 == *(v34 - 2) )
                {
                  v75 = (unsigned int)(3 * v35 + 1) >> 1;
                  v76 = 4 * v75 + 8;
                  if ( 4 * (int)v35 + 8 >= v76 || (unsigned int)v35 >= v75 )
                  {
                    v96 = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v112[0].m128i_i64, "Overflow encountered when expanding vector");
                    *v96 = (char *)off_1C63128;
                    sub_2333C0(v96 + 1, v112);
                    sub_233E40((__int64)v112);
                    __cxa_throw(v96, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v77 = (unsigned int *)sub_186B300(v34 - 2, v76);
                  v34 = v77 + 2;
                  *v77 = v75;
                  v78 = v77[1];
                  *(_QWORD *)(v8 + 88) = v34;
                  v36 = &v34[v78];
                }
                else
                {
                  v36 = &v34[v35];
                }
              }
              else
              {
                v92 = (_QWORD *)sub_186B270(0x10u);
                v34 = (unsigned __int32 *)(v92 + 1);
                *v92 = 2;
                v36 = v34;
                *(_QWORD *)(v8 + 88) = v34;
              }
              *v36 = v20;
              ++*(v34 - 1);
            }
            else
            {
              ((void (__fastcall *)(__int64, _QWORD, int *, __int64, _DWORD *))v29)(v8, v20, &qword_1C7F2A0, v28, v23);
            }
            v112[0].m128i_i32[0] = v20;
            sub_9E1E20(v99, v112[0].m128i_i32);
LABEL_36:
            v18 += 4;
            v14 = v111;
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
        ++v98;
        --*(_DWORD *)(v110 + 1224);
        if ( v103 == v98 )
          goto LABEL_68;
      }
      v39 = 0;
      v40 = 16LL * v38;
LABEL_40:
      v41 = (const __m128i *)(v39 + v37);
      v42 = *(unsigned int *)(a1 + 240);
      v43 = *(_QWORD *)(a1 + 232);
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
            if ( v56 == sub_9C22F0 )
            {
              v57 = *(__m128i **)(v8 + 96);
              if ( v57 )
              {
                v58 = v57[-1].m128i_u32[3];
                if ( v58 == v57[-1].m128i_i32[2] )
                {
                  v101 = (3 * v58 + 1) >> 1;
                  v68 = 16 * v101 + 8;
                  if ( 16 * v58 + 8 >= v68 || v58 >= (3 * v58 + 1) >> 1 )
                  {
                    v97 = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v112[0].m128i_i64, "Overflow encountered when expanding vector");
                    *v97 = (char *)off_1C63128;
                    sub_2333C0(v97 + 1, v112);
                    sub_233E40((__int64)v112);
                    __cxa_throw(v97, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v69 = sub_186B270(v68);
                  v70 = *(_QWORD *)(v8 + 96);
                  v71 = (_DWORD *)v69;
                  v57 = (__m128i *)(v69 + 8);
                  if ( v70 )
                  {
                    v72 = *(unsigned int *)(v70 - 4);
                    *(_DWORD *)(v69 + 4) = v72;
                    v73 = 0;
                    v74 = 16 * v72;
                    if ( v74 )
                    {
                      do
                      {
                        *(__m128i *)&v71[v73 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v70 + v73));
                        v73 += 16LL;
                      }
                      while ( v74 != v73 );
                    }
                    v106 = v71;
                    v104 = v57;
                    sub_186B220((void *)(v70 - 8));
                    v71 = v106;
                    v57 = v104;
                    v61 = &v104[v106[1]];
                    v60 = v106[1] + 1;
                  }
                  else
                  {
                    *(_DWORD *)(v69 + 4) = 0;
                    v61 = (__m128i *)(v69 + 8);
                    v60 = 1;
                  }
                  *(_QWORD *)(v8 + 96) = v57;
                  *v71 = v101;
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
                v93 = (_QWORD *)sub_186B270(0x28u);
                *v93 = 2;
                v60 = 1;
                v57 = (__m128i *)(v93 + 1);
                *(_QWORD *)(v8 + 96) = v57;
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
            if ( v56 == sub_9C22F0 )
            {
              v63 = *(__m128i **)(v8 + 96);
              if ( v63 )
              {
                v64 = v63[-1].m128i_u32[3];
                if ( v64 == v63[-1].m128i_i32[2] )
                {
                  v102 = (3 * v64 + 1) >> 1;
                  v79 = 16 * v102 + 8;
                  if ( 16 * v64 + 8 >= v79 || v64 >= (3 * v64 + 1) >> 1 )
                  {
                    v95 = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v112[0].m128i_i64, "Overflow encountered when expanding vector");
                    *v95 = (char *)off_1C63128;
                    sub_2333C0(v95 + 1, v112);
                    sub_233E40((__int64)v112);
                    __cxa_throw(v95, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v80 = sub_186B270(v79);
                  v81 = *(_QWORD *)(v8 + 96);
                  v82 = (_DWORD *)v80;
                  v63 = (__m128i *)(v80 + 8);
                  if ( v81 )
                  {
                    v83 = *(unsigned int *)(v81 - 4);
                    *(_DWORD *)(v80 + 4) = v83;
                    v84 = 0;
                    v85 = 16 * v83;
                    if ( v85 )
                    {
                      do
                      {
                        *(__m128i *)&v82[v84 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v81 + v84));
                        v84 += 16LL;
                      }
                      while ( v85 != v84 );
                    }
                    v107 = v82;
                    v105 = v63;
                    sub_186B220((void *)(v81 - 8));
                    v82 = v107;
                    v63 = v105;
                    v67 = &v105[v107[1]];
                    v66 = v107[1] + 1;
                  }
                  else
                  {
                    *(_DWORD *)(v80 + 4) = 0;
                    v67 = (__m128i *)(v80 + 8);
                    v66 = 1;
                  }
                  *(_QWORD *)(v8 + 96) = v63;
                  *v82 = v102;
                }
                else
                {
                  v65 = v64;
                  v66 = v64 + 1;
                  v67 = &v63[v65];
                }
              }
              else
              {
                v91 = (_QWORD *)sub_186B270(0x28u);
                *v91 = 2;
                v66 = 1;
                v63 = (__m128i *)(v91 + 1);
                *(_QWORD *)(v8 + 96) = v63;
                v67 = v63;
              }
              *v67 = _mm_loadu_si128(v41);
              v63[-1].m128i_i32[3] = v66;
            }
            else
            {
              ((void (__fastcall *)(__int64, const __m128i *, int *))v56)(v8, v41, &qword_1C7F2A0);
            }
            v112[0] = _mm_loadu_si128(v41);
            sub_A0D2E0(v100, v112);
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
              v14 = v111;
              v37 = v111[1];
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
    sub_186B220((void *)(v108 - 8));
  }
  sub_25A130(v114);
  sub_25A130(v113);
}

