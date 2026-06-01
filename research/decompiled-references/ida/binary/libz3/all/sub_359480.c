void __fastcall sub_359480(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  char *v4; // r12
  __int64 *v5; // r15
  __int64 v6; // rax
  __int64 *v7; // r13
  _QWORD *v8; // rax
  __int64 *v9; // rdx
  __int64 *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // edx
  size_t v15; // rsi
  unsigned int v16; // r14d
  unsigned int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r13d
  _QWORD *v21; // rax
  __int64 v22; // rdx
  size_t v23; // rdx
  void *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // cl
  void *v29; // r15
  char v30; // cl
  __int64 v31; // rdx
  __int64 v32; // rdx
  void *v33; // r15
  __int64 *v34; // rdi
  __int64 *v35; // r9
  __int64 *v36; // r15
  __int64 j; // rcx
  __int64 v38; // rdx
  __int64 *v39; // rsi
  __int64 *v40; // rax
  __int64 v41; // r10
  unsigned int v42; // r14d
  __int64 *v43; // rax
  __int64 v44; // rsi
  bool v45; // zf
  char *v46; // r14
  int v47; // eax
  void *v48; // rbx
  void *v49; // rbx
  unsigned __int64 v50; // rdx
  __int64 *v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rdi
  unsigned int v54; // edx
  __int64 v55; // rax
  _DWORD *v56; // rdx
  char *v57; // rdi
  char *i; // rax
  __int64 v59; // rcx
  char v60; // si
  __int64 v61; // rcx
  char v62; // si
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 *v65; // r14
  __int64 *v66; // r15
  void *v67; // rbx
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 *v71; // rbx
  __int64 *v72; // rbp
  void *v73; // r14
  __int64 v74; // rax
  char **v75; // r13
  char **exception; // rbx
  __int64 v77; // [rsp+8h] [rbp-100h]
  char *v78; // [rsp+8h] [rbp-100h]
  void *v79; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v80; // [rsp+18h] [rbp-F0h]
  __int64 v81; // [rsp+18h] [rbp-F0h]
  unsigned int v82; // [rsp+28h] [rbp-E0h]
  __int64 *v83; // [rsp+28h] [rbp-E0h]
  unsigned int v84; // [rsp+28h] [rbp-E0h]
  __int64 *v85; // [rsp+30h] [rbp-D8h]
  unsigned int *v86; // [rsp+30h] [rbp-D8h]
  __int64 v87; // [rsp+38h] [rbp-D0h]
  __int64 *v88; // [rsp+48h] [rbp-C0h]
  __int64 *v89; // [rsp+58h] [rbp-B0h] BYREF
  int v90; // [rsp+60h] [rbp-A8h] BYREF
  char v91; // [rsp+64h] [rbp-A4h]
  int v92; // [rsp+70h] [rbp-98h] BYREF
  char v93; // [rsp+74h] [rbp-94h]
  __int64 v94[4]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v95; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v98; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-48h]

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 8);
  v77 = *a2;
  if ( *a2 )
  {
    v4 = nullptr;
    v87 = v2 + 16LL * *(unsigned int *)(v2 - 4);
    if ( v2 != v87 )
    {
      while ( 1 )
      {
        v5 = *(__int64 **)(v77 + 8);
        if ( v5 && (v6 = *((unsigned int *)v5 - 1), (_DWORD)v6) )
        {
          v7 = &v5[v6];
          v8 = (_QWORD *)sub_186B270(0x18u);
          v9 = v8 + 1;
          *v8 = 2;
          v10 = v8 + 1;
          v11 = 1;
          while ( 1 )
          {
            v12 = *v5++;
            *v9 = v12;
            *((_DWORD *)v10 - 1) = v11;
            if ( v7 == v5 )
              break;
            if ( *((_DWORD *)v10 - 2) == v11 )
            {
              v14 = (3 * v11 + 1) >> 1;
              v15 = 8 * v14 + 8;
              v16 = v14;
              if ( 8 * v11 + 8 >= (unsigned int)v15 || v11 >= v14 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v95, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v95);
                sub_233E40((__int64)&v95);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v17 = (unsigned int *)sub_186B300(v10 - 1, v15);
              v18 = v17[1];
              v10 = (__int64 *)(v17 + 2);
              *v17 = v16;
              LODWORD(v17) = v18;
              v9 = &v10[v18];
              v11 = (_DWORD)v17 + 1;
            }
            else
            {
              v13 = v11++;
              v9 = &v10[v13];
            }
          }
          v89 = v10;
          sub_34B090((__int64)&v90, v3, &v89);
          v19 = *((unsigned int *)v10 - 2);
          v20 = *((_DWORD *)v10 - 1);
          v95 = nullptr;
          v82 = v19;
          v21 = (_QWORD *)sub_186B270(8 * v19 + 8);
          v22 = *((unsigned int *)v10 - 1);
          v95 = v21 + 1;
          v23 = 8 * v22;
          *v21 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v82), _mm_cvtsi32_si128(v20)).m128i_u64[0];
          if ( v23 <= 8 )
          {
            if ( v23 == 8 )
              v21[1] = *v10;
          }
          else
          {
            memcpy(v21 + 1, v10, v23);
          }
        }
        else
        {
          v89 = nullptr;
          sub_34B090((__int64)&v90, v3, &v89);
          v95 = nullptr;
          v10 = nullptr;
        }
        v96 = 0;
        v97 = 0;
        v98 = 1;
        v24 = qword_1C7F2C0;
        v99 = 0;
        if ( (v91 & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v96, &v90);
        else
          LODWORD(v96) = v90;
        if ( (v93 & 1) != 0 )
        {
          sub_182C690(v24, &v98, &v92);
          if ( !v4 )
          {
LABEL_73:
            v69 = (_QWORD *)sub_186B270(0x58u);
            *v69 = 2;
            v26 = (__int64)(v69 + 1);
            v4 = (char *)v26;
            goto LABEL_20;
          }
        }
        else
        {
          BYTE4(v98) &= ~1u;
          LODWORD(v98) = v92;
          if ( !v4 )
            goto LABEL_73;
        }
        v25 = *((unsigned int *)v4 - 1);
        if ( (_DWORD)v25 == *((_DWORD *)v4 - 2) )
        {
          v84 = (unsigned int)(3 * v25 + 1) >> 1;
          v54 = 40 * v84 + 8;
          if ( 40 * (int)v25 + 8 >= v54 || (unsigned int)v25 >= (unsigned int)(3 * v25 + 1) >> 1 )
          {
            v75 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v94, "Overflow encountered when expanding vector");
            *v75 = (char *)off_1C63128;
            sub_2333C0(v75 + 1, v94);
            sub_233E40((__int64)v94);
            __cxa_throw(v75, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v86 = (unsigned int *)sub_186B270(v54);
          v55 = *((unsigned int *)v4 - 1);
          v56 = v86 + 2;
          v86[1] = v55;
          v57 = &v4[40 * v55];
          for ( i = v4; v57 != i; *((_QWORD *)v56 - 1) = v63 )
          {
            v59 = *(_QWORD *)i;
            v60 = i[12];
            i += 40;
            v56 += 10;
            *((_QWORD *)i - 5) = 0;
            *((_QWORD *)v56 - 5) = v59;
            *(v56 - 8) = *((_DWORD *)i - 8);
            *((_BYTE *)v56 - 28) = v60 & 3 | *(_BYTE *)(v56 - 7) & 0xFC;
            v61 = *((_QWORD *)i - 3);
            *((_QWORD *)i - 3) = 0;
            *((_QWORD *)v56 - 3) = v61;
            v62 = *(i - 12);
            *(v56 - 4) = *((_DWORD *)i - 4);
            *((_BYTE *)v56 - 12) = v62 & 3 | *(_BYTE *)(v56 - 3) & 0xFC;
            v63 = *((_QWORD *)i - 1);
            *((_QWORD *)i - 1) = 0;
          }
          v64 = *((unsigned int *)v4 - 1);
          if ( (_DWORD)v64 )
          {
            v88 = v10;
            v65 = (__int64 *)v4;
            v66 = (__int64 *)&v4[40 * v64];
            do
            {
              while ( 1 )
              {
                v67 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v65 + 1);
                sub_182CBA0(v67, v65 + 3);
                v68 = *v65;
                if ( !*v65 )
                  break;
                v65 += 5;
                sub_186B220((void *)(v68 - 8));
                if ( v65 == v66 )
                  goto LABEL_68;
              }
              v65 += 5;
            }
            while ( v65 != v66 );
LABEL_68:
            v10 = v88;
          }
          sub_186B220(v4 - 8);
          v4 = (char *)(v86 + 2);
          *v86 = v84;
          v26 = (__int64)&v86[10 * v86[1] + 2];
        }
        else
        {
          v26 = (__int64)&v4[40 * v25];
        }
LABEL_20:
        v27 = (__int64)v95;
        v28 = BYTE4(v96);
        v95 = nullptr;
        v29 = qword_1C7F2C0;
        *(_QWORD *)v26 = v27;
        *(_DWORD *)(v26 + 8) = v96;
        LOBYTE(v27) = v28 & 3 | *(_BYTE *)(v26 + 12) & 0xFC;
        v30 = BYTE4(v98);
        *(_BYTE *)(v26 + 12) = v27;
        v31 = v97;
        v97 = 0;
        *(_QWORD *)(v26 + 16) = v31;
        *(_DWORD *)(v26 + 24) = v98;
        *(_BYTE *)(v26 + 28) = v30 & 3 | *(_BYTE *)(v26 + 28) & 0xFC;
        v32 = v99;
        v99 = 0;
        *(_QWORD *)(v26 + 32) = v32;
        ++*((_DWORD *)v4 - 1);
        sub_182CBA0(v29, &v96);
        sub_182CBA0(v29, &v98);
        if ( v95 )
          sub_186B220(v95 - 1);
        v33 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v90);
        sub_182CBA0(v33, &v92);
        v34 = *(__int64 **)(v3 + 192);
        if ( !v34 )
          goto LABEL_41;
        v35 = &v34[*((unsigned int *)v34 - 1)];
        if ( v34 == v35 )
        {
          v42 = 0;
        }
        else
        {
          v36 = *(__int64 **)(v3 + 192);
          for ( j = 0; ; j = v42 )
          {
            v38 = *v36;
            if ( v10 )
            {
              v39 = &v10[*((unsigned int *)v10 - 1)];
              if ( v39 != v10 )
                break;
            }
LABEL_32:
            v41 = *(_QWORD *)(v3 + 184);
            v42 = j + 1;
            v43 = &v34[j];
            if ( v38 )
              ++*(_DWORD *)(v38 + 8);
            v44 = *v43;
            if ( *v43 )
            {
              v45 = (*(_DWORD *)(v44 + 8))-- == 1;
              if ( v45 )
              {
                v85 = v35;
                v83 = &v34[j];
                v81 = v38;
                sub_15D7BC0(v41, v44);
                v34 = *(__int64 **)(v3 + 192);
                v35 = v85;
                v43 = v83;
                v38 = v81;
              }
            }
            ++v36;
            *v43 = v38;
            if ( v35 == v36 )
              goto LABEL_53;
          }
          while ( 1 )
          {
            v40 = v10;
            while ( *v40 != v38 )
            {
              if ( v39 == ++v40 )
                goto LABEL_32;
            }
            if ( v35 == ++v36 )
              break;
            v38 = *v36;
            if ( v39 == v10 )
              goto LABEL_32;
          }
          v42 = j;
LABEL_53:
          if ( !v34 )
            goto LABEL_41;
          v50 = (unsigned __int64)&v34[*((unsigned int *)v34 - 1)];
          v51 = &v34[v42];
          if ( (unsigned __int64)v51 < v50 )
          {
            do
            {
              v52 = *v51;
              if ( *v51 )
              {
                v53 = *(_QWORD *)(v3 + 184);
                v45 = (*(_DWORD *)(v52 + 8))-- == 1;
                if ( v45 )
                {
                  v80 = v50;
                  sub_15D7BC0(v53, v52);
                  v50 = v80;
                }
              }
              ++v51;
            }
            while ( (unsigned __int64)v51 < v50 );
            v35 = *(__int64 **)(v3 + 192);
            if ( !v35 )
              goto LABEL_41;
          }
          else
          {
            v35 = v34;
          }
        }
        *((_DWORD *)v35 - 1) = v42;
LABEL_41:
        v89 = v10;
        sub_34FDD0((__int64)&v95, v3, &v89);
        v79 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v95);
        sub_182CBA0(v79, &v97);
        if ( v10 )
          sub_186B220(v10 - 1);
        v77 += 16;
        if ( v77 == v87 )
        {
          v46 = v4;
          v78 = &v4[40 * *((unsigned int *)v4 - 1)];
          if ( v4 == v78 )
          {
            if ( *(_BYTE *)(v3 + 551) )
            {
              *(_BYTE *)(v3 + 551) = 0;
              sub_36FA10(v3 + 344);
              *(_BYTE *)(v3 + 551) = 1;
            }
            v4 = v78;
LABEL_77:
            v70 = *((unsigned int *)v4 - 1);
            if ( !(_DWORD)v70 )
              goto LABEL_81;
            goto LABEL_78;
          }
          while ( 2 )
          {
            v95 = nullptr;
            v49 = qword_1C7F2C0;
            v96 = 0;
            v97 = 1;
            v98 = 0;
            if ( (v46[12] & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v95, v46 + 8);
              if ( (v46[28] & 1) != 0 )
              {
LABEL_51:
                sub_182C690(v49, &v97, v46 + 24);
LABEL_48:
                sub_357640(v3, v46, (int *)&v95);
                v48 = qword_1C7F2C0;
                v46 += 40;
                sub_182CBA0(qword_1C7F2C0, &v95);
                sub_182CBA0(v48, &v97);
                if ( v78 == v46 )
                {
                  if ( !*(_BYTE *)(v3 + 551) )
                    goto LABEL_77;
                  *(_BYTE *)(v3 + 551) = 0;
                  sub_36FA10(v3 + 344);
                  v70 = *((unsigned int *)v4 - 1);
                  *(_BYTE *)(v3 + 551) = 1;
                  if ( !(_DWORD)v70 )
                  {
LABEL_81:
                    sub_186B220(v4 - 8);
                    return;
                  }
LABEL_78:
                  v71 = (__int64 *)v4;
                  v72 = (__int64 *)&v4[40 * v70];
                  do
                  {
                    while ( 1 )
                    {
                      v73 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v71 + 1);
                      sub_182CBA0(v73, v71 + 3);
                      v74 = *v71;
                      if ( !*v71 )
                        break;
                      v71 += 5;
                      sub_186B220((void *)(v74 - 8));
                      if ( v71 == v72 )
                        goto LABEL_81;
                    }
                    v71 += 5;
                  }
                  while ( v71 != v72 );
                  goto LABEL_81;
                }
                continue;
              }
            }
            else
            {
              LODWORD(v95) = *((_DWORD *)v46 + 2);
              if ( (v46[28] & 1) != 0 )
                goto LABEL_51;
            }
            break;
          }
          v47 = *((_DWORD *)v46 + 6);
          BYTE4(v97) &= ~1u;
          LODWORD(v97) = v47;
          goto LABEL_48;
        }
      }
    }
  }
  if ( *(_BYTE *)(v3 + 551) )
  {
    *(_BYTE *)(v3 + 551) = 0;
    sub_36FA10(v3 + 344);
    *(_BYTE *)(v3 + 551) = 1;
  }
}

