__m128i *__fastcall sub_1BF6540(
        __m128i *a1,
        __m128 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9)
{
  _QWORD *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // r10d
  __int64 v35; // r12
  __int64 v37; // rax
  _QWORD *v38; // rdi
  __int32 v39; // r14d
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // esi
  _WORD **v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // r13
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // r13
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned __int64 *v51; // rdx
  char v52; // al
  __int16 v53; // ax
  unsigned int v54; // eax
  _QWORD *v55; // rdi
  unsigned __int64 v56; // rax
  _WORD *v57; // rdx
  __int16 v58; // ax
  __int64 v59; // r14
  unsigned int v60; // eax
  int v61; // eax
  unsigned int v62; // eax
  __int32 v63; // r14d
  unsigned int v64; // r12d
  int v65; // eax
  void *v66; // rdi
  _WORD *v67; // r10
  __int64 v68; // rax
  unsigned int v69; // eax
  __int64 v70; // r8
  __int64 v71; // r9
  char *v73; // [rsp+10h] [rbp-2A8h]
  unsigned int v74; // [rsp+10h] [rbp-2A8h]
  int v75; // [rsp+10h] [rbp-2A8h]
  int v76; // [rsp+10h] [rbp-2A8h]
  unsigned __int64 v77; // [rsp+18h] [rbp-2A0h]
  _WORD *v79; // [rsp+20h] [rbp-298h]
  char v81; // [rsp+37h] [rbp-281h]
  unsigned __int64 v82; // [rsp+38h] [rbp-280h]
  int v83; // [rsp+40h] [rbp-278h]
  __int64 v84; // [rsp+40h] [rbp-278h]
  void *v85; // [rsp+58h] [rbp-260h] BYREF
  char v86[8]; // [rsp+60h] [rbp-258h] BYREF
  __int64 v87; // [rsp+68h] [rbp-250h]
  __m128i v88; // [rsp+A0h] [rbp-218h] BYREF
  unsigned __int64 v89; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-200h]
  void *ptr; // [rsp+C0h] [rbp-1F8h]
  __int64 v92; // [rsp+C8h] [rbp-1F0h]
  __int64 v93; // [rsp+D0h] [rbp-1E8h] BYREF
  __int64 v94; // [rsp+D8h] [rbp-1E0h]
  _QWORD v95[10]; // [rsp+F0h] [rbp-1C8h] BYREF
  __m128i v96; // [rsp+140h] [rbp-178h] BYREF
  __int64 v97; // [rsp+150h] [rbp-168h]
  int v98; // [rsp+158h] [rbp-160h]
  void *v99; // [rsp+160h] [rbp-158h]
  __int64 v100; // [rsp+168h] [rbp-150h]
  char v101; // [rsp+170h] [rbp-148h] BYREF
  __int64 v102; // [rsp+178h] [rbp-140h]
  __m128i v103; // [rsp+1E0h] [rbp-D8h] BYREF
  unsigned __int64 v104; // [rsp+1F0h] [rbp-C8h]
  int v105; // [rsp+1F8h] [rbp-C0h]
  void *v106; // [rsp+200h] [rbp-B8h]
  _BYTE v107[168]; // [rsp+210h] [rbp-A8h] BYREF

  v82 = a4;
  v89 = v89 & 0xFFFFF80400000000LL | 0x2000000000LL;
  v88.m128i_i32[0] = 6;
  v88.m128i_i64[1] = 0;
  v94 = 0;
  sub_1BCD210((__int64)&v88, 0, a3, a4);
  v12 = (_QWORD *)a2[15].m128_u64[1];
  v85 = (void *)a4;
  v13 = sub_A72040(v12, a4);
  if ( v13 && *(char *)(a2[14].m128_u64[1] + 1) < 0 && *(_BYTE *)(v13 + 16) == 5 )
    v85 = *(void **)(v13 + 32);
  v14 = (unsigned int)sub_BFB1C0(a3);
  v81 = sub_1E63330(a2, v14, v85, 1, 0);
  if ( v81 )
    goto LABEL_36;
  v73 = *(char **)(a3 + 24);
  v17 = *(unsigned __int16 ***)(a3 + 16);
  v18 = (v73 - (char *)v17) >> 5;
  v19 = (v73 - (char *)v17) >> 3;
  if ( v18 <= 0 )
  {
    v20 = *(char **)(a3 + 16);
LABEL_17:
    if ( v19 != 2 )
    {
      if ( v19 != 3 )
      {
        if ( v19 != 1 )
        {
          v20 = *(char **)(a3 + 24);
          goto LABEL_21;
        }
        goto LABEL_96;
      }
      if ( (**(_WORD **)v20 & 0x1FF) == 0x44 )
        goto LABEL_21;
      v20 += 8;
    }
    if ( (**(_WORD **)v20 & 0x1FF) == 0x44 )
      goto LABEL_21;
    v20 += 8;
LABEL_96:
    if ( (**(_WORD **)v20 & 0x1FF) != 0x44 )
      v20 = *(char **)(a3 + 24);
    goto LABEL_21;
  }
  v19 = **v17;
  LOWORD(v19) = v19 & 0x1FF;
  if ( (_WORD)v19 == 68 )
  {
    v20 = *(char **)(a3 + 16);
  }
  else
  {
    v20 = (char *)(v17 + 1);
    v19 = *v17[1];
    LOWORD(v19) = v19 & 0x1FF;
    if ( (_WORD)v19 != 68 )
    {
      v20 = (char *)(v17 + 2);
      v19 = *v17[2];
      LOWORD(v19) = v19 & 0x1FF;
      if ( (_WORD)v19 != 68 )
      {
        v20 = (char *)(v17 + 3);
        v18 = (__int64)&v17[4 * v18];
        v19 = *v17[3];
        LOWORD(v19) = v19 & 0x1FF;
        if ( (_WORD)v19 != 68 )
        {
          while ( 1 )
          {
            v20 = (char *)(v17 + 4);
            if ( (unsigned __int16 **)v18 == v17 + 4 )
            {
              v19 = (v73 - v20) >> 3;
              goto LABEL_17;
            }
            v19 = *v17[4];
            LOWORD(v19) = v19 & 0x1FF;
            if ( (_WORD)v19 == 68 )
              goto LABEL_21;
            v19 = *v17[5];
            LOWORD(v19) = v19 & 0x1FF;
            if ( (_WORD)v19 == 68 )
            {
              v20 = (char *)(v17 + 5);
              goto LABEL_21;
            }
            v19 = *v17[6];
            LOWORD(v19) = v19 & 0x1FF;
            if ( (_WORD)v19 == 68 )
            {
              v20 = (char *)(v17 + 6);
              goto LABEL_21;
            }
            v19 = *v17[7];
            LOWORD(v19) = v19 & 0x1FF;
            if ( (_WORD)v19 == 68 )
              break;
            v17 += 4;
          }
          v20 = (char *)(v17 + 7);
        }
      }
    }
  }
LABEL_21:
  v77 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !sub_F61BB0(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL), v14, v18, v19, v15, v16) )
  {
    v25 = *(_QWORD *)v77;
    v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v77 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v21 - 43) > 1 )
    {
      if ( v73 == v20 )
      {
        v37 = (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3;
        v83 = v37;
        if ( (_DWORD)v37 != 1 )
        {
          if ( v13 )
            goto LABEL_54;
          goto LABEL_46;
        }
        goto LABEL_112;
      }
LABEL_36:
      sub_1A0B340(a1, &v88);
      goto LABEL_37;
    }
  }
  if ( (unsigned int)((__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3) != 1 || v73 != v20 )
  {
    if ( v13 )
    {
LABEL_26:
      if ( v73 != v20 )
        goto LABEL_27;
      v37 = (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3;
      v83 = v37;
LABEL_54:
      v96.m128i_i64[1] = 0;
      v102 = 0;
      v96.m128i_i32[0] = 5;
      v98 = 0;
      v97 = 0;
      v99 = nullptr;
      v100 = 0;
      if ( !v13 )
        goto LABEL_74;
      v85 = *(void **)(v13 + 32);
      if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 2 > 1 )
      {
        if ( !v83 )
        {
          sub_1BCD210((__int64)&v88, 5, a3, a4);
          v88.m128i_i64[1] = a4;
          v88.m128i_i8[3] |= 0x80u;
          sub_1A0B340(a1, &v88);
          goto LABEL_89;
        }
        v45 = (_QWORD *)a2[15].m128_u64[1];
        v46 = (unsigned int)v37;
        v47 = sub_A63CE0(v45);
        v103.m128i_i32[2] = sub_A97D20((__int64)v45, *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v103.m128i_i32[2] > 0x40u )
          sub_2205470(&v103, v46, 0);
        else
          v103.m128i_i64[0] = v46;
        v82 = sub_A70F70(a2[15].m128_i64[1], (__int64)v85, (__int64)&v103, nullptr, 0, 0);
        if ( v103.m128i_i32[2] > 0x40u && v103.m128i_i64[0] )
          operator delete[]((void *)v103.m128i_i64[0]);
        v81 = 1;
        goto LABEL_74;
      }
      v74 = v37;
      sub_A5DAD0((__int64)&v103, v13);
      v39 = v103.m128i_i32[2];
      if ( v103.m128i_i32[2] > 0x40u )
      {
        if ( v39 - (unsigned int)sub_2206780(&v103) <= 0x40 && (unsigned __int64)v74 > *(_QWORD *)v103.m128i_i64[0] )
        {
          operator delete[]((void *)v103.m128i_i64[0]);
          goto LABEL_58;
        }
        if ( v103.m128i_i64[0] )
          operator delete[]((void *)v103.m128i_i64[0]);
      }
      else if ( (unsigned __int64)v74 > v103.m128i_i64[0] )
      {
LABEL_58:
        v40 = a4;
        v41 = a3;
        v42 = 6;
LABEL_59:
        sub_1BCD210((__int64)&v88, v42, v41, v40);
        v88.m128i_i64[1] = a4;
        v88.m128i_i8[3] &= ~0x80u;
        sub_1A0B340(a1, &v88);
LABEL_89:
        if ( (v96.m128i_i32[0] & 0x7FFFFFFF) == 3 && v99 != &v101 )
          free(v99);
        goto LABEL_37;
      }
      sub_A5DAD0((__int64)&v103, v13);
      v63 = v103.m128i_i32[2];
      if ( v103.m128i_i32[2] <= 0x40u )
      {
        if ( (unsigned __int64)v74 >= v103.m128i_i64[0] )
          goto LABEL_74;
        goto LABEL_137;
      }
      if ( v63 - (unsigned int)sub_2206780(&v103) <= 0x40 )
      {
        v66 = (void *)v103.m128i_i64[0];
        if ( (unsigned __int64)v74 >= *(_QWORD *)v103.m128i_i64[0] )
        {
          if ( v103.m128i_i64[0] )
            operator delete[]((void *)v103.m128i_i64[0]);
          goto LABEL_74;
        }
      }
      else
      {
        v66 = (void *)v103.m128i_i64[0];
        if ( !v103.m128i_i64[0] )
        {
LABEL_137:
          v64 = sub_BFB220(a3);
          v65 = sub_BFB220(a3);
          sub_C0B340((__int64)v86, (_QWORD *)a2[15].m128_u64[1], v65, 0, 0, v64);
          v87 = *(_QWORD *)(a2[15].m128_u64[1] + 18632);
          sub_1BF6540((unsigned int)&v103, (_DWORD)a2, (unsigned int)v86, (_DWORD)v85, a5, a6, a9);
          sub_1BD9390(&v96, &v103);
          if ( (v103.m128i_i32[0] & 0x7FFFFFFF) == 3 && v106 != v107 )
            free(v106);
          if ( (v96.m128i_i32[0] & 0x7FFFFFFF) == 5 )
          {
            v40 = a4;
            v41 = a3;
            v42 = 5;
            goto LABEL_59;
          }
LABEL_74:
          if ( (v88.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v93 )
            free(ptr);
          v94 = 0;
          v88.m128i_i32[0] &= 0x80000000;
          v89 = v89 & 0xFFFFF80400000000LL | 0x2000000000LL;
          v90 = (__int64)v85;
          ptr = v85;
          v92 = (__int64)v85;
          v93 = (__int64)v85;
          if ( v83 )
          {
            v48 = 0;
            sub_1BEC520(&v103, (__int64)a2, **(_WORD ***)(a3 + 16), (__int64)v85, a5, a6, a7, a8, a9, 0);
            while ( 1 )
            {
              v49 = sub_BFB1C0(a3);
              if ( (unsigned int)sub_1BD5570((__int64)a2, v49, (__int64)&v103, (__int64)&v88) == 1 )
              {
                sub_1BD9390(&v88, &v103);
                if ( (v88.m128i_i32[0] & 0x7FFFFFFF) == 5 )
                  break;
              }
              if ( (v103.m128i_i32[0] & 0x7FFFFFFF) == 3 && v106 != v107 )
                free(v106);
              v48 += 8;
              if ( 8LL * (unsigned int)(v83 - 1) + 8 == v48 )
                goto LABEL_87;
              sub_1BEC520(
                &v103,
                (__int64)a2,
                *(_WORD **)(*(_QWORD *)(a3 + 16) + v48),
                (__int64)v85,
                a5,
                a6,
                a7,
                a8,
                a9,
                0);
            }
            v88.m128i_i64[1] = v82;
            v88.m128i_i8[3] = (v81 << 7) | v88.m128i_i8[3] & 0x7F;
            sub_1A0B340(a1, &v88);
            if ( (v103.m128i_i32[0] & 0x7FFFFFFF) == 3 && v106 != v107 )
              free(v106);
          }
          else
          {
LABEL_87:
            if ( (v96.m128i_i32[0] & 0x7FFFFFFF) != 5 )
            {
              v54 = sub_BFB220(a3);
              if ( (unsigned int)sub_1BD5570((__int64)a2, v54, (__int64)&v96, (__int64)&v88) == 1 )
                sub_1BD9390(&v88, &v96);
            }
            v88.m128i_i64[1] = v82;
            v88.m128i_i8[3] = (v81 << 7) | v88.m128i_i8[3] & 0x7F;
            sub_1A0B340(a1, &v88);
          }
          goto LABEL_89;
        }
      }
      operator delete[](v66);
      goto LABEL_137;
    }
LABEL_46:
    v14 = a4;
    if ( !(unsigned __int8)sub_1844E60((__int64)a2, a4, (unsigned __int64 *)&v85) )
    {
LABEL_27:
      v26 = *(_QWORD *)v77;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v77 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
      {
        if ( !sub_F61BB0(v26, v14, v21, v22, v23, v24) )
        {
          sub_1BF6010(a1, a2, a3, a4, a5, 0, a7, a8, 0);
          goto LABEL_37;
        }
        v26 = *(_QWORD *)v77;
      }
      if ( sub_F61BB0(v26, v14, v21, v22, v23, v24) )
      {
        v38 = (_QWORD *)a2[15].m128_u64[1];
        v103.m128i_i64[1] = 0;
        v105 = 0;
        v103.m128i_i32[0] = 1;
        v104 = sub_A73320(v38, a4);
        v106 = nullptr;
        if ( (unsigned __int8)sub_1A1D360((__int64)a2, (__int64)&v103, a3, *(double *)a7.m128_u64, a8) )
        {
          if ( (v88.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v93 )
            free(ptr);
          v90 = 0;
          ptr = nullptr;
          v92 = 0;
          v93 = 0;
          v88.m128i_i32[0] = v88.m128i_i32[0] & 0x80000000 | 2;
          v94 = 0;
          v95[5] = 0;
          v89 = v89 & 0xFFFFF80400000000LL | 0x2000000000LL;
          v95[0] = v95[0] & 0xFFFFF80400000000LL | 0x2000000000LL;
          v95[1] = a4;
          v95[2] = a4;
          v95[3] = a4;
          v95[4] = a4;
          v95[7] = 0;
        }
      }
      else
      {
        v29 = *(_QWORD *)v77;
        v30 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v77 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        v31 = (unsigned int)(v30 - 43);
        if ( (unsigned int)v31 > 1 )
        {
          if ( (_BYTE)v30 != 48 )
          {
            v43 = *(_WORD ***)(a3 + 16);
            v44 = (__int64)(*(_QWORD *)(a3 + 24) - (_QWORD)v43) >> 3;
            if ( (_DWORD)v44 == 1 )
            {
              v57 = *v43;
              v58 = *v57 & 0x1FF;
              if ( v58 != 53 && v58 != 66 )
              {
                sub_1BEC520(&v103, (__int64)a2, v57, a4, a5, a6, a7, a8, a9, 0);
                sub_1BD9390(&v88, &v103);
                if ( (v103.m128i_i32[0] & 0x7FFFFFFF) == 3 && v106 != v107 )
                  free(v106);
                if ( (v88.m128i_i32[0] & 0x7FFFFFFF) == 0 )
                  BYTE5(v89) |= 4u;
              }
            }
            else if ( !(_DWORD)v44 )
            {
              if ( (v88.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v93 )
                free(ptr);
              v88.m128i_i32[0] &= 0x80000000;
              v90 = a4;
              v89 = v89 & 0xFFFFF80400000000LL | 0x2000000000LL;
              v94 = 0;
              ptr = (void *)a4;
              v92 = a4;
              v93 = a4;
            }
          }
        }
        else
        {
          if ( (unsigned int)*(unsigned __int8 *)(v29 + 16) - 43 > 1 )
            v29 = sub_F63050(v29, v14, v31, v27);
          v32 = sub_9B4870(v29, v14, v31, v27, v28);
          v33 = *(_QWORD *)(a3 + 16);
          v34 = a5;
          v35 = v32;
          if ( (unsigned int)((*(_QWORD *)(a3 + 24) - v33) >> 3) == 1 && v73 == v20 )
          {
            v59 = *(_QWORD *)(*(_QWORD *)v33 + 8LL);
            v79 = *(_WORD **)v33;
            if ( (*(_QWORD *)&byte_8[v59 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)v59 | (unsigned __int8)*(_QWORD *)&byte_8[v59 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == *(_QWORD *)(a2[15].m128_u64[1] + 19080) )
            {
              v76 = v34;
              v68 = sub_1BE7B70(a2, v79, a4, 0, &v103, nullptr, *(double *)a7.m128_u64, a8);
              v34 = v76;
              if ( v68 )
                v59 = *(_QWORD *)(v68 + 48);
            }
            v75 = v34;
            v60 = sub_BFB1C0(a3);
            v61 = sub_1BE5E80((__int64)a2, v60, v35, v59, 0);
            v34 = v75;
            if ( v61 > 0 )
            {
              v62 = sub_BFB1C0(a3);
              sub_1BF3150(a1, a2, (unsigned __int64)v79, a4, v62, v75, a7, a8, 0);
              goto LABEL_37;
            }
          }
          sub_1BF6540((unsigned int)&v103, (_DWORD)a2, a3, v35, v34, a6, a9);
          sub_1BD9390(&v88, &v103);
          if ( (v103.m128i_i32[0] & 0x7FFFFFFF) == 3 && v106 != v107 )
            free(v106);
          if ( (((v88.m128i_i32[0] & 0x7FFFFFFF) + 2147483645) & 0x7FFFFFFD) != 0 )
          {
            v50 = *(_QWORD *)v77;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v77 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 44
              || ((v35 & 1) != 0 || (byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0)
              && (v35 & 4) == 0
              && (byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
            {
              v51 = &v89;
              if ( (v88.m128i_i32[0] & 0x7FFFFFFF) != 0 )
                v51 = v95;
              v52 = *((_BYTE *)v51 + 4) | 8;
              *((_BYTE *)v51 + 4) = v52;
              *((_BYTE *)v51 + 4) = (32
                                   * (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 43))
                                  | v52 & 0xDF;
              v53 = *((_WORD *)v51 + 2) & 0xF83F;
              LOBYTE(v53) = v53 | 0x80;
              *((_WORD *)v51 + 2) = v53;
            }
            else
            {
              sub_1BCD210((__int64)&v88, 3, a3, a4);
            }
          }
        }
      }
      goto LABEL_36;
    }
    goto LABEL_26;
  }
  v25 = *(_QWORD *)v77;
  v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v77 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_112:
  if ( (_BYTE)v21 == 48 && sub_F61BB0(v25, v14, v21, v22, v23, v24) )
  {
    v84 = *(_QWORD *)(**(_QWORD **)(a3 + 16) + 8LL);
    if ( sub_1BC70C0(v84, a4) )
    {
LABEL_156:
      sub_1BEC520(a1, (__int64)a2, v67, a4, a5, a6, a7, a8, a9, 0);
      goto LABEL_37;
    }
    v69 = sub_BFB1C0(a3);
    if ( (unsigned __int8)sub_183BD10((__int64)a2, v69, v84, a4, v70, v71) )
    {
      v67 = **(_WORD ***)(a3 + 16);
      goto LABEL_156;
    }
  }
  if ( !v13 )
    goto LABEL_46;
  v14 = **(_QWORD **)(a3 + 16);
  if ( !sub_1A0B440((__int64)a2, v14, v13) )
    goto LABEL_26;
  v55 = (_QWORD *)a2[15].m128_u64[1];
  v103.m128i_i64[1] = 0;
  v105 = 0;
  v103.m128i_i32[0] = 1;
  v56 = sub_A73320(v55, a4);
  v106 = nullptr;
  v104 = v56;
  v14 = (__int64)&v103;
  if ( !(unsigned __int8)sub_1A19380((__int64)a2, (__int64)&v103, a3, a7, a8) )
    goto LABEL_26;
  if ( (v88.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v93 )
    free(ptr);
  v90 = a4;
  v88.m128i_i32[0] &= 0x80000000;
  v89 = v89 & 0xFFFFF80400000000LL | 0x2000000000LL;
  v94 = 0;
  ptr = (void *)a4;
  v92 = a4;
  v93 = a4;
  sub_1A0B340(a1, &v88);
LABEL_37:
  if ( (v88.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v93 )
    free(ptr);
  return a1;
}
