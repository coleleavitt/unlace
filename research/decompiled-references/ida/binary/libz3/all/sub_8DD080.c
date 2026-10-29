__int64 __fastcall sub_8DD080(__int64 a1, unsigned int *a2, double a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // r14d
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rsi
  bool v11; // zf
  _DWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  unsigned int v17; // r15d
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r13
  unsigned int *v23; // rcx
  unsigned int *v24; // r8
  __int64 v25; // r9
  char v26; // al
  __int64 v27; // r9
  unsigned int *v28; // r8
  unsigned int *v29; // rcx
  char v30; // al
  char v31; // al
  __int64 v32; // r9
  char v33; // al
  void *v34; // rdi
  bool v35; // al
  int v36; // ebx
  __int64 v37; // rax
  void *v38; // r8
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  unsigned int v41; // r15d
  __int64 v42; // rbx
  size_t v43; // r12
  __int64 v44; // r15
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  int v48; // edx
  int v49; // eax
  char *v50; // rcx
  __int64 v51; // r15
  unsigned int v52; // eax
  unsigned int v53; // ebx
  unsigned int v54; // ecx
  unsigned int *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  void *v58; // rdi
  int v59; // ecx
  _QWORD *v60; // rdx
  int *v61; // rsi
  int v62; // eax
  int v63; // eax
  char **exception; // r12
  __int64 v65; // rdx
  void *v66; // [rsp+8h] [rbp-1A0h]
  void *v67; // [rsp+8h] [rbp-1A0h]
  bool v68; // [rsp+18h] [rbp-190h]
  int v69; // [rsp+18h] [rbp-190h]
  void *v70; // [rsp+18h] [rbp-190h]
  unsigned int v71; // [rsp+24h] [rbp-184h]
  char v72; // [rsp+28h] [rbp-180h]
  int v73; // [rsp+40h] [rbp-168h]
  int v74; // [rsp+44h] [rbp-164h]
  unsigned int v75; // [rsp+44h] [rbp-164h]
  int *v76; // [rsp+48h] [rbp-160h]
  void *v77; // [rsp+48h] [rbp-160h]
  unsigned int *v78; // [rsp+48h] [rbp-160h]
  __int64 v79; // [rsp+58h] [rbp-150h]
  unsigned int *v80; // [rsp+58h] [rbp-150h]
  unsigned int *v81; // [rsp+58h] [rbp-150h]
  unsigned int *v82; // [rsp+58h] [rbp-150h]
  unsigned int *v83; // [rsp+58h] [rbp-150h]
  unsigned int *v84; // [rsp+58h] [rbp-150h]
  unsigned int *v85; // [rsp+58h] [rbp-150h]
  unsigned int *v86; // [rsp+60h] [rbp-148h]
  __int64 v87; // [rsp+60h] [rbp-148h]
  __int64 v88; // [rsp+60h] [rbp-148h]
  unsigned int *v89; // [rsp+60h] [rbp-148h]
  unsigned int *v90; // [rsp+60h] [rbp-148h]
  __int64 v91; // [rsp+60h] [rbp-148h]
  unsigned int *v92; // [rsp+68h] [rbp-140h]
  unsigned int *v93; // [rsp+68h] [rbp-140h]
  unsigned int *v94; // [rsp+68h] [rbp-140h]
  int v95; // [rsp+7Ch] [rbp-12Ch] BYREF
  int v96[2]; // [rsp+80h] [rbp-128h] BYREF
  __int64 v97; // [rsp+88h] [rbp-120h]
  __int64 v98; // [rsp+90h] [rbp-118h]
  __int64 v99; // [rsp+98h] [rbp-110h]
  _QWORD v100[4]; // [rsp+A0h] [rbp-108h] BYREF
  _QWORD v101[4]; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD v102[2]; // [rsp+E0h] [rbp-C8h] BYREF
  _QWORD v103[2]; // [rsp+F0h] [rbp-B8h] BYREF
  __int128 v104; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v105; // [rsp+110h] [rbp-98h] BYREF
  __int64 v106; // [rsp+118h] [rbp-90h]
  __int64 v107; // [rsp+120h] [rbp-88h]
  __int64 v108; // [rsp+128h] [rbp-80h]
  _QWORD v109[4]; // [rsp+130h] [rbp-78h] BYREF
  _QWORD v110[2]; // [rsp+150h] [rbp-58h] BYREF
  _QWORD v111[9]; // [rsp+160h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 576) )
  {
    if ( !*((_WORD *)a2 + 2) )
    {
      v5 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v5 )
      {
        if ( *v5 == 5 )
        {
          v8 = v5[1];
          if ( v8 == 2 || v8 == 3 )
          {
            v9 = *((_QWORD *)a2 + 5);
            v10 = *((_QWORD *)a2 + 4);
            *(_QWORD *)v96 = 0;
            v98 = 1;
            v11 = *(_WORD *)(v9 + 4) == 0;
            v97 = 0;
            v99 = 0;
            if ( v11 && (v12 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL)) != nullptr && *v12 == 5 && !v12[1] )
            {
              v11 = v8 == 3;
              v13 = v9;
              v9 = v10;
              v68 = v11;
              v10 = v13;
            }
            else
            {
              v68 = v8 != 3;
            }
            v6 = sub_1666AE0(a1 + 104, v10, v96, v102);
            if ( !(_BYTE)v6 )
            {
              sub_8AC610(a1, (__int64)a2, a3);
              goto LABEL_32;
            }
            v100[0] = 0;
            v100[1] = 0;
            v100[2] = 1;
            v100[3] = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v100, v96);
            sub_41D160((__int64 *)(a1 + 632));
            v14 = *(_QWORD *)(a1 + 648);
            if ( v14 )
              *(_DWORD *)(v14 - 4) = 0;
            *(_QWORD *)&v104 = v9;
            if ( v9 )
              ++*(_DWORD *)(v9 + 8);
            sub_892DF0((_QWORD *)(a1 + 640), &v104);
            LOBYTE(v104) = 1;
            sub_893820((_QWORD *)(a1 + 648), &v104);
            v6 = sub_8B8500(a1, a1 + 632, (unsigned int **)(a1 + 648));
            if ( !(_BYTE)v6 )
            {
              sub_8AC610(a1, (__int64)a2, a3);
              goto LABEL_31;
            }
            v15 = *(__int64 **)(a1 + 640);
            v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 392LL);
            if ( v15 && *((_DWORD *)v15 - 1) == 2 && (v50 = *(char **)(a1 + 648), v72 = *v50, *v50 != v50[1]) )
            {
              v51 = v15[1];
              v71 = v16(a1, *v15);
              v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 392LL))(a1, v51);
              if ( v72 )
              {
                v52 = v71;
                v71 = v17;
                v17 = v52;
              }
            }
            else
            {
              v17 = v16(a1, v9);
              if ( (unsigned __int8)sub_892DC0(v9) )
                v71 = *(_DWORD *)(a1 + 580);
              else
                v71 = *(_DWORD *)(a1 + 584);
            }
            if ( v68 )
            {
              sub_1831620(qword_1C7F2C0, v100);
              v21 = v71;
              v71 = v17;
              v17 = v21;
            }
            v18 = *(_QWORD *)(a1 + 16);
            v19 = *(_QWORD *)(v18 + 8832);
            if ( v19 )
            {
              v20 = *a2;
              if ( (unsigned int)v20 < *(_DWORD *)(v19 - 4) && *(_DWORD *)(v19 + 4 * v20) != 0x7FFFFFFF )
              {
LABEL_31:
                sub_25A130((char *)v100);
LABEL_32:
                sub_25A130((char *)v96);
                return v6;
              }
            }
            v22 = (unsigned int)sub_B67520(v18, a2);
            sub_8F1CE0(*(_QWORD *)(a1 + 16), v22, *(unsigned int *)(a1 + 8));
            v73 = 2 * v22;
            v95 = 2 * v22;
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 356LL) )
            {
              v101[0] = 0;
              v101[1] = 0;
              *(_QWORD *)((char *)&v104 + 4) = 0xFFFFFFFEFFFFFFFELL;
              v101[2] = 1;
              v101[3] = 0;
              HIDWORD(v104) = -2;
              v105 = 0;
              v106 = 0;
              v107 = 1;
              v108 = 0;
              v109[0] = 0;
              v109[1] = 0;
              v109[2] = 1;
              v109[3] = 0;
              v110[0] = 0;
              v110[1] = 0;
              v111[0] = 1;
              v111[1] = 0;
              v102[0] = 0;
              v102[1] = 0;
              v103[0] = 1;
              v103[1] = 0;
              sub_182CBA0(qword_1C7F2C0, v103);
              LODWORD(v103[0]) = 1;
              LOWORD(v104) = 0;
              *(_QWORD *)((char *)&v104 + 4) = 0xFFFFFFFEFFFFFFFELL;
              BYTE4(v103[0]) &= ~1u;
              BYTE2(v104) = 0;
              HIDWORD(v104) = -2;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v110, (int *)v102);
              sub_25A130((char *)v102);
              LOWORD(v104) = 0;
              *(_QWORD *)((char *)&v104 + 4) = 0xFFFFFFFEFFFFFFFELL;
              BYTE2(v104) = 0;
              HIDWORD(v104) = -2;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v110, (int *)v100);
              v23 = *(unsigned int **)(*(_QWORD *)(a1 + 256) + 8LL * v71);
              if ( v23 )
              {
                v24 = &v23[*(v23 - 1)];
                if ( v23 != v24 )
                {
                  while ( 1 )
                  {
                    v25 = *(_QWORD *)(a1 + 248) + 56LL * *v23;
                    if ( v17 != *(_DWORD *)(v25 + 4) )
                      goto LABEL_39;
                    v74 = *(_DWORD *)(v25 + 44);
                    if ( v74 == -2 )
                      goto LABEL_39;
                    v92 = v23;
                    v86 = v24;
                    v79 = *(_QWORD *)(a1 + 248) + 56LL * *v23;
                    v76 = (int *)(v25 + 8);
                    v26 = sub_3ED700((__int64)qword_1C7F2C0, v25 + 8, (__int64)v110);
                    v27 = v79;
                    v28 = v86;
                    v29 = v92;
                    if ( v26 )
                    {
                      if ( !(_BYTE)v104
                        || (v87 = v79,
                            v80 = v28,
                            v30 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v105, (__int64)v76),
                            v28 = v80,
                            v29 = v92,
                            v30) )
                      {
                        v89 = v29;
                        v82 = v28;
                        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v105, v76);
                        LOBYTE(v104) = 1;
                        v24 = v82;
                        v23 = v89;
                        DWORD1(v104) = v74;
                        goto LABEL_39;
                      }
                      v27 = v87;
                    }
                    v93 = v29;
                    v88 = v27;
                    v81 = v28;
                    v31 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v110, (__int64)v76);
                    v24 = v81;
                    v32 = v88;
                    v23 = v93;
                    if ( v31 )
                    {
                      if ( !BYTE1(v104)
                        || (v33 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v76, (__int64)v109),
                            v24 = v81,
                            v23 = v93,
                            v33) )
                      {
                        v90 = v23;
                        v83 = v24;
                        sub_27B950((__int64)qword_1C7F2C0, (__int64)v109, v76);
                        BYTE1(v104) = 1;
                        v24 = v83;
                        v23 = v90;
                        DWORD2(v104) = v74;
                        goto LABEL_39;
                      }
                      v32 = v88;
                    }
                    v34 = qword_1C7F2C0;
                    if ( (*(_BYTE *)(v32 + 12) & 1) != 0 || (v110[0] & 0x100000000LL) != 0 )
                    {
                      v61 = v76;
                      v94 = v23;
                      v91 = v32;
                      v84 = v24;
                      v77 = qword_1C7F2C0;
                      v62 = sub_182C7B0(qword_1C7F2C0, v61, v110);
                      v34 = v77;
                      v24 = v84;
                      v32 = v91;
                      v23 = v94;
                      v35 = v62 == 0;
                    }
                    else
                    {
                      v35 = *(_DWORD *)(v32 + 8) == LODWORD(v110[0]);
                    }
                    if ( !v35 )
                      goto LABEL_39;
                    if ( (*(_BYTE *)(v32 + 28) & 1) != 0 || (v111[0] & 0x100000000LL) != 0 )
                      break;
                    if ( *(_DWORD *)(v32 + 24) == LODWORD(v111[0]) )
                      goto LABEL_57;
LABEL_39:
                    if ( v24 == ++v23 )
                      goto LABEL_58;
                  }
                  v85 = v23;
                  v78 = v24;
                  v63 = sub_182C7B0(v34, v32 + 24, v111);
                  v24 = v78;
                  v23 = v85;
                  if ( v63 )
                    goto LABEL_39;
LABEL_57:
                  BYTE2(v104) = 1;
                  HIDWORD(v104) = v74;
                  goto LABEL_39;
                }
              }
LABEL_58:
              if ( BYTE2(v104) )
              {
                v75 = HIDWORD(v104);
                sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), HIDWORD(v104) ^ 1u, (unsigned int)v95, 0, 0);
                sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v73 ^ 1u, v75, 0, 0);
              }
              else
              {
                sub_27B950((__int64)qword_1C7F2C0, (__int64)v101, (int *)&v105);
                if ( (_BYTE)v104 )
                  sub_B6A470(
                    *(_QWORD *)(a1 + 16),
                    *(unsigned int *)(a1 + 8),
                    DWORD1(v104) ^ 1u,
                    (unsigned int)v95,
                    0,
                    0);
                sub_27B950((__int64)qword_1C7F2C0, (__int64)v101, (int *)v109);
                if ( BYTE1(v104) )
                  sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v73 ^ 1u, DWORD2(v104), 0, 0);
              }
              sub_25A130((char *)v110);
              sub_25A130((char *)v109);
              sub_25A130((char *)&v105);
              sub_25A130((char *)v101);
            }
            v69 = sub_8ACED0(a1 + 208, v71, v17, (int *)v100, &v95);
            sub_1831620(qword_1C7F2C0, v100);
            if ( (unsigned __int8)sub_892DC0(v9) )
            {
              v104 = 1u;
              v105 = 1;
              v106 = 0;
              sub_182CBA0(qword_1C7F2C0, &v105);
              LODWORD(v105) = 1;
              BYTE4(v105) &= ~1u;
              sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v100, (__int64)&v104, (__int64)v100);
              sub_25A130((char *)&v104);
            }
            else
            {
              sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v100, a1 + 64, (__int64)v100);
            }
            LODWORD(v104) = v73 ^ 1;
            v36 = sub_8ACED0(a1 + 208, v17, v71, (int *)v100, (int *)&v104);
            v37 = sub_186B270(0x10u);
            *(_DWORD *)v37 = v22;
            v38 = (void *)v37;
            v39 = *(_QWORD **)(a1 + 656);
            *(_BYTE *)(v37 + 4) = 0;
            *(_DWORD *)(v37 + 12) = v36;
            *(_DWORD *)(v37 + 8) = v69;
            if ( v39 )
            {
              v40 = *((_DWORD *)v39 - 1);
              if ( v40 == *((_DWORD *)v39 - 2) )
              {
                v53 = (3 * v40 + 1) >> 1;
                v54 = 8 * v53 + 8;
                if ( 8 * v40 + 8 >= v54 || v40 >= v53 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_12D192((__int64 *)&v104, "Overflow encountered when expanding vector", v65);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v104);
                  sub_233E40((__int64)&v104);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v66 = v38;
                v55 = (unsigned int *)sub_186B300(v39 - 1, v54);
                v39 = v55 + 2;
                *v55 = v53;
                v38 = v66;
                *(_QWORD *)(a1 + 656) = v55 + 2;
                v40 = v55[1];
              }
            }
            else
            {
              v67 = (void *)v37;
              v60 = (_QWORD *)sub_186B270(0x18u);
              *v60 = 2;
              v38 = v67;
              v40 = 0;
              v39 = v60 + 1;
              *(_QWORD *)(a1 + 656) = v39;
            }
            v39[v40] = v38;
            *((_DWORD *)v39 - 1) = v40 + 1;
            v41 = *(_DWORD *)(a1 + 688);
            if ( 3 * v41 < 4 * (*(_DWORD *)(a1 + 692) + *(_DWORD *)(a1 + 696)) )
            {
              v70 = v38;
              v43 = 48LL * v41;
              v56 = (_QWORD *)sub_186B270(v43);
              v42 = (__int64)v56;
              if ( 2 * v41 )
              {
                v57 = &v56[6 * (v41 & 0x7FFFFFFF)];
                do
                {
                  *v56 = 0;
                  v56 += 6;
                  *(v56 - 3) = 0;
                }
                while ( v57 != v56 );
              }
              sub_8DCF70(*(const __m128i **)(a1 + 680), *(_DWORD *)(a1 + 688), v42, 2 * v41);
              v58 = *(void **)(a1 + 680);
              v59 = 2 * v41;
              v38 = v70;
              if ( v58 )
              {
                sub_186B220(v58);
                v59 = 2 * v41;
                v38 = v70;
              }
              *(_QWORD *)(a1 + 680) = v42;
              v41 = v59;
              *(_DWORD *)(a1 + 688) = v59;
              *(_DWORD *)(a1 + 696) = 0;
            }
            else
            {
              v42 = *(_QWORD *)(a1 + 680);
              v43 = 24LL * v41;
            }
            v44 = (unsigned int)v22 & (v41 - 1);
            v45 = v42 + 24 * v44;
            if ( 24 * v44 != v43 )
            {
              v46 = v42 + 24 * v44;
              v47 = 0;
              while ( 1 )
              {
                v48 = *(_DWORD *)(v46 + 4);
                if ( v48 == 2 )
                {
                  if ( (_DWORD)v22 == *(_DWORD *)v46 && (_DWORD)v22 == *(_DWORD *)(v46 + 8) )
                  {
                    *(_DWORD *)(v46 + 8) = v22;
                    *(_QWORD *)(v46 + 16) = v38;
                    *(_DWORD *)(v46 + 4) = 2;
                    goto LABEL_31;
                  }
                }
                else
                {
                  if ( !v48 )
                  {
                    if ( v47 )
                      goto LABEL_93;
                    v47 = v46;
                    goto LABEL_94;
                  }
                  v47 = v46;
                }
                v46 += 24;
                if ( v42 + v43 == v46 )
                  goto LABEL_79;
              }
            }
            v47 = 0;
            while ( 1 )
            {
LABEL_79:
              if ( v45 == v42 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v49 = *(_DWORD *)(v42 + 4);
              if ( v49 == 2 )
              {
                if ( (_DWORD)v22 == *(_DWORD *)v42 && (_DWORD)v22 == *(_DWORD *)(v42 + 8) )
                {
                  *(_DWORD *)(v42 + 8) = v22;
                  *(_QWORD *)(v42 + 16) = v38;
                  *(_DWORD *)(v42 + 4) = 2;
                  goto LABEL_31;
                }
              }
              else
              {
                if ( !v49 )
                {
                  if ( v47 )
LABEL_93:
                    --*(_DWORD *)(a1 + 696);
                  else
                    v47 = v42;
LABEL_94:
                  *(_DWORD *)(v47 + 8) = v22;
                  *(_QWORD *)(v47 + 16) = v38;
                  *(_DWORD *)(v47 + 4) = 2;
                  *(_DWORD *)v47 = v22;
                  ++*(_DWORD *)(a1 + 692);
                  goto LABEL_31;
                }
                v47 = v42;
              }
              v42 += 24;
            }
          }
        }
      }
    }
    sub_8AC610(a1, (__int64)a2, a3);
  }
  return 0;
}

