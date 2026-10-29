__int64 __fastcall sub_8F0DC0(__int64 a1, __int64 *a2, unsigned int a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 *v10; // r14
  __int64 *v11; // rbp
  unsigned int v12; // r13d
  __int64 v13; // rax
  unsigned int *v14; // rbx
  __int64 v15; // rsi
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rsi
  __int64 v24; // rcx
  int v25; // r9d
  __int64 v26; // rax
  char *v27; // rdi
  __int64 v28; // r8
  char v29; // dl
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // r11
  __int64 v36; // r10
  char v37; // al
  char v38; // al
  _QWORD *v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // rdx
  int v42; // ecx
  __int64 *v43; // rdx
  __int64 v44; // r10
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // ecx
  __int64 v50; // rdx
  int v51; // ecx
  __int64 *v52; // rdx
  unsigned int v53; // edx
  size_t v54; // rsi
  unsigned int *v55; // rcx
  unsigned int v56; // edx
  size_t v57; // rsi
  unsigned int *v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // [rsp+0h] [rbp-128h]
  __int64 v63; // [rsp+10h] [rbp-118h]
  __int64 v64; // [rsp+10h] [rbp-118h]
  __int64 v65; // [rsp+10h] [rbp-118h]
  __int64 v66; // [rsp+10h] [rbp-118h]
  __int64 v67; // [rsp+10h] [rbp-118h]
  int v68; // [rsp+20h] [rbp-108h]
  __int64 v69; // [rsp+20h] [rbp-108h]
  __int64 v70; // [rsp+20h] [rbp-108h]
  __int64 v71; // [rsp+20h] [rbp-108h]
  __int64 v72; // [rsp+20h] [rbp-108h]
  __int64 v73; // [rsp+20h] [rbp-108h]
  __int64 v74; // [rsp+28h] [rbp-100h]
  __int64 v75; // [rsp+28h] [rbp-100h]
  __int64 v76; // [rsp+28h] [rbp-100h]
  __int64 v77; // [rsp+28h] [rbp-100h]
  __int64 v78; // [rsp+28h] [rbp-100h]
  __int64 v79; // [rsp+28h] [rbp-100h]
  __int64 v80; // [rsp+30h] [rbp-F8h]
  __int64 v81; // [rsp+30h] [rbp-F8h]
  __int64 v82; // [rsp+30h] [rbp-F8h]
  unsigned int v83; // [rsp+30h] [rbp-F8h]
  int v84; // [rsp+3Ch] [rbp-ECh]
  unsigned int v85; // [rsp+3Ch] [rbp-ECh]
  __int64 v86; // [rsp+40h] [rbp-E8h]
  __int64 v87; // [rsp+40h] [rbp-E8h]
  __int64 v88[4]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+70h] [rbp-B8h] BYREF
  char v90; // [rsp+78h] [rbp-B0h]
  __int64 v91; // [rsp+80h] [rbp-A8h]
  int v92; // [rsp+88h] [rbp-A0h]
  __int64 v93; // [rsp+90h] [rbp-98h]
  void *v94; // [rsp+A0h] [rbp-88h]
  __int64 v95; // [rsp+A8h] [rbp-80h]
  _BYTE v96[120]; // [rsp+B0h] [rbp-78h] BYREF

  v6 = *a2;
  if ( !*a2 )
  {
    v10 = nullptr;
    v9 = 8LL * a3;
    if ( !v9 )
      return 0;
    goto LABEL_3;
  }
  v7 = 8LL * a3;
  v8 = 8LL * *(unsigned int *)(v6 - 4);
  v9 = v6 + v7;
  v10 = (__int64 *)(v6 + v8);
  if ( v8 != v7 )
  {
LABEL_3:
    v11 = (__int64 *)v9;
    v12 = 0;
    v61 = a1 + 7536;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (unsigned int *)*v11;
        v15 = *v11;
        if ( *(char *)(*v11 + 7) >= 0 )
          break;
LABEL_7:
        sub_AED140(v61, v15);
        if ( *((char *)v14 + 7) >= 0 )
          sub_8E8AA0((_QWORD *)a1, v14);
        ++v11;
        ++v12;
        sub_AA3E20(v14, *(_QWORD *)(a1 + 104));
        ++*(_DWORD *)(a1 + 60);
        if ( v11 == v10 )
        {
LABEL_10:
          v6 = *a2;
          if ( *a2 )
            goto LABEL_11;
          return v12;
        }
      }
      if ( (unsigned __int8)sub_8F08F0((_QWORD *)a1, v15) )
      {
        v17 = 0;
        do
        {
          v18 = 16LL * (v14[v17 + 2] >> 1);
          v19 = (__int64 *)(v18 + *(_QWORD *)(a1 + 8872));
          v20 = *v19;
          if ( *v19 != qword_1C7EC50 && (v20 & 7) == 0 && v14 == (unsigned int *)(v20 & 0xFFFFFFFFFFFFFFF8LL) )
          {
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 104) + 712LL) )
            {
              v22 = 0;
              v94 = v96;
              v95 = 0x1000000000LL;
              v63 = *v14;
              if ( (_DWORD)v63 )
              {
                do
                {
                  if ( (_DWORD)v17 != (_DWORD)v22 )
                  {
                    v24 = (unsigned int)v95;
                    v25 = v14[v22 + 2] ^ 1;
                    if ( (unsigned int)v95 < HIDWORD(v95) )
                    {
                      v23 = (char *)v94;
                    }
                    else
                    {
                      v86 = v22;
                      v68 = 2 * HIDWORD(v95);
                      v84 = v14[v22 + 2] ^ 1;
                      v80 = v18;
                      v74 = v17;
                      v23 = (char *)sub_186B270(4LL * (unsigned int)(2 * HIDWORD(v95)));
                      v26 = 0;
                      v27 = (char *)v94;
                      v17 = v74;
                      v18 = v80;
                      v24 = (unsigned int)v95;
                      v28 = 4LL * (unsigned int)v95;
                      v25 = v84;
                      v22 = v86;
                      if ( (_DWORD)v95 )
                      {
                        do
                        {
                          *(_DWORD *)&v23[v26] = *(_DWORD *)&v27[v26];
                          v26 += 4;
                        }
                        while ( v26 != v28 );
                        v22 = v86;
                      }
                      if ( v27 != v96 && v27 )
                      {
                        v87 = v22;
                        sub_186B220(v27);
                        v24 = (unsigned int)v95;
                        v22 = v87;
                        v25 = v84;
                        v18 = v80;
                        v17 = v74;
                      }
                      v94 = v23;
                      HIDWORD(v95) = v68;
                    }
                    *(_DWORD *)&v23[4 * v24] = v25;
                    LODWORD(v95) = v95 + 1;
                  }
                  ++v22;
                }
                while ( v22 != v63 );
              }
              v29 = *((_BYTE *)v14 + 7);
              v30 = 0;
              if ( (v29 & 0x40) == 0 )
                goto LABEL_45;
              v31 = (__int64)&v14[(v14[1] & 0xFFFFFF) + 2];
              if ( (v29 & 3u) - 2 < 2 )
                v31 += 4;
              v32 = (__int64 *)((v31 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*((_BYTE *)v14 + 7) & 0x20) != 0 )
                ++v32;
              v30 = *v32;
              if ( *v32 && (*(_BYTE *)(v30 + 8) & 2) == 0 )
              {
                v77 = v18;
                v71 = v17;
                v65 = sub_186B270(0x28u);
                sub_B72710(v65, v30, (unsigned int)v95, v94);
                v45 = v65;
                v17 = v71;
                v44 = v77;
                v46 = (__int64)&v14[(v14[1] & 0xFFFFFF) + 2];
                if ( (*((_BYTE *)v14 + 7) & 3u) - 2 < 2 )
                  v46 += 4;
                v47 = (_QWORD *)((v46 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                if ( (*((_BYTE *)v14 + 7) & 0x20) != 0 )
                  ++v47;
                *v47 = 0;
                v48 = *(_QWORD **)(a1 + 8600);
                if ( v48 )
                {
                  v49 = *((_DWORD *)v48 - 1);
                  if ( v49 == *((_DWORD *)v48 - 2) )
                  {
                    v53 = (3 * v49 + 1) >> 1;
                    v54 = 8 * v53 + 8;
                    if ( 8 * v49 + 8 >= (unsigned int)v54 || v49 >= v53 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_8E4EB0(&v89, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, &v89);
                      sub_233E40((__int64)&v89);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v83 = (3 * v49 + 1) >> 1;
                    v78 = v65;
                    v72 = v44;
                    v66 = v17;
                    v55 = (unsigned int *)sub_186B300(v48 - 1, v54);
                    v48 = v55 + 2;
                    v17 = v66;
                    *(_QWORD *)(a1 + 8600) = v55 + 2;
                    v44 = v72;
                    *v55 = v83;
                    v45 = v78;
                    LODWORD(v55) = v55[1];
                    v52 = &v48[(unsigned int)v55];
                    v51 = (_DWORD)v55 + 1;
                  }
                  else
                  {
                    v50 = v49;
                    v51 = v49 + 1;
                    v52 = &v48[v50];
                  }
                }
                else
                {
                  v79 = v65;
                  v73 = v44;
                  v67 = v17;
                  v59 = (_QWORD *)sub_186B270(0x18u);
                  *v59 = 2;
                  v48 = v59 + 1;
                  v17 = v67;
                  v51 = 1;
                  *(_QWORD *)(a1 + 8600) = v48;
                  v44 = v73;
                  v52 = v48;
                  v45 = v79;
                }
                *v52 = v45;
                *((_DWORD *)v48 - 1) = v51;
              }
              else
              {
LABEL_45:
                v75 = v18;
                v69 = v17;
                sub_B72610(&v89, a1, v30, (unsigned int)v95, v94);
                v33 = sub_180C100(a1 + 8400, 40);
                v34 = v91;
                v35 = v69;
                v36 = v75;
                v37 = v90 & 3 | *(_BYTE *)(v33 + 8) & 0xFC;
                *(_QWORD *)(v33 + 16) = v91;
                *(_BYTE *)(v33 + 8) = v37;
                *(_QWORD *)v33 = &off_1C57678;
                *(_DWORD *)(v33 + 24) = v92;
                *(_QWORD *)(v33 + 32) = v93;
                if ( (v37 & 2) == 0 )
                {
                  if ( v34 )
                  {
                    v81 = v33;
                    v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                    v35 = v69;
                    v36 = v75;
                    v33 = v81;
                    if ( v38 )
                    {
                      v39 = *(_QWORD **)(a1 + 8600);
                      if ( v39 )
                      {
                        v40 = *((_DWORD *)v39 - 1);
                        if ( v40 == *((_DWORD *)v39 - 2) )
                        {
                          v56 = (3 * v40 + 1) >> 1;
                          v57 = 8 * v56 + 8;
                          if ( 8 * v40 + 8 >= (unsigned int)v57 || v40 >= v56 )
                          {
                            v3 = (char **)__cxa_allocate_exception(0x28u);
                            sub_8E4EB0(v88, "Overflow encountered when expanding vector");
                            *v3 = (char *)off_1C63128;
                            sub_2333C0(v3 + 1, v88);
                            sub_233E40((__int64)v88);
                            __cxa_throw(
                              v3,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v85 = (3 * v40 + 1) >> 1;
                          v58 = (unsigned int *)sub_186B300(v39 - 1, v57);
                          v39 = v58 + 2;
                          v35 = v69;
                          *(_QWORD *)(a1 + 8600) = v58 + 2;
                          v36 = v75;
                          *v58 = v85;
                          v33 = v81;
                          LODWORD(v58) = v58[1];
                          v43 = &v39[(unsigned int)v58];
                          v42 = (_DWORD)v58 + 1;
                        }
                        else
                        {
                          v41 = v40;
                          v42 = v40 + 1;
                          v43 = &v39[v41];
                        }
                      }
                      else
                      {
                        v60 = (_QWORD *)sub_186B270(0x18u);
                        *v60 = 2;
                        v39 = v60 + 1;
                        v35 = v69;
                        v42 = 1;
                        *(_QWORD *)(a1 + 8600) = v39;
                        v36 = v75;
                        v43 = v39;
                        v33 = v81;
                      }
                      *v43 = v33;
                      *((_DWORD *)v39 - 1) = v42;
                    }
                  }
                }
                v82 = v33;
                v76 = v36;
                v70 = v35;
                sub_B71F80(&v89);
                v17 = v70;
                v44 = v76;
                v45 = v82;
              }
              *(_QWORD *)(*(_QWORD *)(a1 + 8872) + v44) = v45 | 3;
              if ( v94 && v94 != v96 )
              {
                v64 = v17;
                sub_186B220(v94);
                v17 = v64;
              }
            }
            else
            {
              *v19 = 2;
            }
          }
          v21 = v17 + 1;
          v17 = 1;
        }
        while ( v21 != 2 );
        v15 = (__int64)v14;
        goto LABEL_7;
      }
      v13 = *v11++;
      v9 += 8;
      *(_QWORD *)(v9 - 8) = v13;
      *(_DWORD *)(a1 + 8944) += *v14;
      if ( v11 == v10 )
        goto LABEL_10;
    }
  }
  v12 = 0;
LABEL_11:
  *(_DWORD *)(v6 - 4) = (v9 - v6) >> 3;
  return v12;
}

