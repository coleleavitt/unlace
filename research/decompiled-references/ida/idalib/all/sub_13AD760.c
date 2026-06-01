_BYTE *__fastcall sub_13AD760(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 *a5,
        size_t a6,
        char *s,
        __int64 a8,
        __int64 a9,
        int *a10,
        __int64 a11)
{
  _QWORD *v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 (__fastcall *v15)(__int64, __int64, __int64, int, int *, __int64, char *, __int64, unsigned int); // rax
  __int64 v16; // rcx
  char v17; // al
  unsigned int v18; // r15d
  size_t v19; // rax
  char *v20; // rdx
  char v21; // al
  __int64 v22; // rdi
  _BYTE *v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  bool v26; // zf
  _BYTE *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  _BYTE *v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rbp
  _BOOL8 v33; // r14
  unsigned int v34; // r13d
  int v35; // eax
  __int64 v37; // rdi
  _WORD *v38; // rdx
  char v39; // dl
  _BYTE *v40; // rax
  _BYTE *v41; // rax
  char *v42; // rax
  unsigned __int64 v43; // rcx
  _DWORD *v44; // rdx
  int v45; // eax
  int *v46; // rbp
  _DWORD *v47; // r15
  int *v48; // r14
  int v49; // ebx
  int v50; // esi
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // esi
  char v55; // dl
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  size_t *v61; // rax
  size_t i; // rdx
  unsigned __int64 v63; // rdx
  __int64 v64; // rdi
  _WORD *v65; // rdx
  unsigned int v66; // esi
  int v67; // eax
  __int64 v68; // r13
  _BYTE *v69; // rax
  __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r13
  _BYTE *v76; // rax
  __int64 v77; // rdx
  unsigned int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r13
  _BYTE *v83; // rax
  __int64 v84; // rdx
  unsigned int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r13
  _BYTE *v90; // rax
  __int64 v91; // rdx
  int v92; // eax
  __int64 v93; // rax
  _BYTE *v94; // rdx
  int v95; // eax
  char v99; // [rsp+18h] [rbp-A0h]
  int v100; // [rsp+18h] [rbp-A0h]
  char v101; // [rsp+23h] [rbp-95h]
  int v102; // [rsp+24h] [rbp-94h]
  int v103; // [rsp+28h] [rbp-90h]
  unsigned int v104; // [rsp+48h] [rbp-70h]
  char v105; // [rsp+4Ch] [rbp-6Ch]
  __int64 v106; // [rsp+50h] [rbp-68h] BYREF
  _DWORD *v107; // [rsp+58h] [rbp-60h]
  int v108; // [rsp+60h] [rbp-58h] BYREF
  _DWORD *v109; // [rsp+68h] [rbp-50h]
  int v110; // [rsp+70h] [rbp-48h] BYREF
  _DWORD *v111; // [rsp+78h] [rbp-40h]

  v13 = (_QWORD *)a1[5];
  v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 80LL))(v13) + v13[4] - v13[2];
  if ( !(_DWORD)a2 )
    goto LABEL_23;
  v15 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __int64, int, int *, __int64, char *, __int64, unsigned int))(*a1 + 24LL);
  if ( v15 == sub_13AD000 )
  {
    v107 = (_DWORD *)a3;
    v106 = (unsigned int)a2;
    if ( !s )
    {
      if ( (unsigned int)sub_101B270((__int64)&v106) )
      {
        v61 = (size_t *)sub_101B8C0((__int64)&v106, a2, v57, v58, v59, v60);
        if ( v61 )
        {
          for ( i = v61[1]; i; i = *(_QWORD *)(v63 + 8) )
          {
            if ( (i & 4) == 0 )
              break;
            v63 = i & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v63 )
              break;
            v61 = (size_t *)v63;
          }
          sub_13ACD70((__int64)a1, v61 + 4, *v61, (__int64)v107);
          v64 = a1[5];
          v65 = *(_WORD **)(v64 + 32);
          if ( *(_QWORD *)(v64 + 24) - (_QWORD)v65 > 1u )
          {
            *v65 = 8250;
            *(_QWORD *)(v64 + 32) += 2LL;
          }
          else
          {
            sub_227BF10(v64, ": ", 2);
          }
        }
      }
      goto LABEL_23;
    }
    v16 = a1[2];
    v17 = *(_BYTE *)(v16 + 2) & 4;
    if ( (*(_BYTE *)v16 & 0x40) == 0 )
      goto LABEL_24;
    v18 = a9;
    if ( v17 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a1[5] + 24LL))(a1[5], 16, 1, 0);
    v19 = strlen(s);
    sub_13ACD70((__int64)a1, s, v19, (__int64)v107);
    v20 = (char *)a1[2];
    v21 = ((unsigned __int8)v20[40] >> 1) & 3;
    if ( v21 == 1 )
    {
      v37 = a1[5];
      v41 = *(_BYTE **)(v37 + 32);
      if ( (unsigned __int64)v41 >= *(_QWORD *)(v37 + 24) )
      {
        v37 = sub_227BA10(v37, 40);
      }
      else
      {
        *(_QWORD *)(v37 + 32) = v41 + 1;
        *v41 = 40;
      }
    }
    else if ( v21 == 2 )
    {
      v37 = a1[5];
      v38 = *(_WORD **)(v37 + 32);
      if ( *(_QWORD *)(v37 + 24) - (_QWORD)v38 > 1u )
      {
        *v38 = 11040;
        *(_QWORD *)(v37 + 32) += 2LL;
      }
      else
      {
        v37 = sub_227BF10(v37, " +", 2);
      }
    }
    else
    {
      v39 = *v20;
      if ( (v39 & 0x10) == 0 )
      {
LABEL_10:
        if ( (v39 & 0x20) != 0 && (_DWORD)a9 )
        {
          v22 = a1[5];
          v23 = *(_BYTE **)(v22 + 32);
          v24 = *(_QWORD *)(v22 + 24);
          if ( v21 == 1 )
          {
            if ( (unsigned __int64)v23 >= v24 )
            {
              sub_227BA10(v22, 44);
            }
            else
            {
              *(_QWORD *)(v22 + 32) = v23 + 1;
              *v23 = 44;
            }
            v18 = (__PAIR64__(a9, *(_DWORD *)(a1[1] + 152LL) - 1) - 169999999) >> 32;
          }
          else if ( (unsigned __int64)v23 >= v24 )
          {
            sub_227BA10(v22, 58);
          }
          else
          {
            *(_QWORD *)(v22 + 32) = v23 + 1;
            *v23 = 58;
          }
          sub_227B910(a1[5], v18);
          v21 = (*(_BYTE *)(a1[2] + 40LL) >> 1) & 3;
        }
        v25 = a1[5];
        v26 = v21 == 1;
        v27 = *(_BYTE **)(v25 + 32);
        if ( v26 )
        {
          if ( (unsigned __int64)v27 >= *(_QWORD *)(v25 + 24) )
          {
            sub_227BA10(v25, 41);
          }
          else
          {
            *(_QWORD *)(v25 + 32) = v27 + 1;
            *v27 = 41;
          }
          v25 = a1[5];
          v27 = *(_BYTE **)(v25 + 32);
          v43 = *(_QWORD *)(v25 + 24);
          if ( (unsigned int)(*(_DWORD *)(a1[1] + 152LL) - 1) <= 0xB532B7E )
          {
            if ( (unsigned __int64)v27 >= v43 )
            {
              sub_227BA10(v25, 32);
            }
            else
            {
              *(_QWORD *)(v25 + 32) = v27 + 1;
              *v27 = 32;
            }
            v25 = a1[5];
            v27 = *(_BYTE **)(v25 + 32);
            v43 = *(_QWORD *)(v25 + 24);
          }
          if ( (unsigned __int64)v27 < v43 )
            goto LABEL_18;
        }
        else if ( (unsigned __int64)v27 < *(_QWORD *)(v25 + 24) )
        {
LABEL_18:
          *(_QWORD *)(v25 + 32) = v27 + 1;
          *v27 = 58;
          v28 = a1[2];
LABEL_19:
          v101 = (a11 != 0) & (*(_BYTE *)(v28 + 1) >> 3);
          if ( v101 )
          {
            v110 = sub_101B2B0((__int64)&v106);
            v111 = v44;
            v45 = sub_101B270((__int64)&v110);
            v46 = a10;
            v47 = v107;
            v99 = 0;
            v102 = v45;
            v48 = &a10[3 * a11];
            if ( v48 != a10 )
            {
              v103 = v14;
              do
              {
                v49 = *v46;
                if ( *v46 )
                {
                  v50 = v46[1];
                  if ( v50 )
                  {
                    if ( v49 < 0 )
                    {
                      v95 = sub_10212A0((__int64)v47, v49);
                      v50 = v46[1];
                      v49 = v95;
                    }
                    v104 = sub_101FD20((__int64)v47, v50) >> 32;
                    v54 = v49 & 0x7FFFFFFF;
                    v105 = v55;
                    if ( (v49 & 0x7FFFFFFFu) < v47[119] || v54 >= v47[120] )
                      v56 = sub_101D590((__int64)v47, v54);
                    else
                      v56 = v47[118];
                    if ( v102 == v56 )
                    {
                      v66 = v104 & 0x7FFFFFFF;
                      if ( (v104 & 0x7FFFFFFF) < v47[119] || v66 >= v47[120] )
                        v67 = sub_101D590((__int64)v47, v66);
                      else
                        v67 = v47[118];
                      if ( v102 == v67 )
                      {
                        if ( v105 )
                          v100 = sub_13DC0F0(v104, v47, a1[1]);
                        else
                          v100 = 0;
                        v110 = v104;
                        v68 = a1[5];
                        v108 = v49;
                        v109 = v47;
                        v69 = *(_BYTE **)(v68 + 32);
                        v111 = v47;
                        if ( (unsigned __int64)v69 >= *(_QWORD *)(v68 + 24) )
                        {
                          v68 = sub_227BA10(v68, 123);
                        }
                        else
                        {
                          v70 = (__int64)(v69 + 1);
                          *(_QWORD *)(v68 + 32) = v69 + 1;
                          *v69 = 123;
                        }
                        v71 = sub_101B500((__int64)&v108, 0, v70, v51, v52, v53);
                        v75 = sub_227B910(v68, v71);
                        v76 = *(_BYTE **)(v75 + 32);
                        if ( (unsigned __int64)v76 >= *(_QWORD *)(v75 + 24) )
                        {
                          v75 = sub_227BA10(v75, 58);
                        }
                        else
                        {
                          v77 = (__int64)(v76 + 1);
                          *(_QWORD *)(v75 + 32) = v76 + 1;
                          *v76 = 58;
                        }
                        v78 = sub_101BC00((__int64)&v108, 0, v77, v72, v73, v74);
                        v82 = sub_227B910(v75, v78);
                        v83 = *(_BYTE **)(v82 + 32);
                        if ( (unsigned __int64)v83 >= *(_QWORD *)(v82 + 24) )
                        {
                          v82 = sub_227BA10(v82, 45);
                        }
                        else
                        {
                          v84 = (__int64)(v83 + 1);
                          *(_QWORD *)(v82 + 32) = v83 + 1;
                          *v83 = 45;
                        }
                        v85 = sub_101B500((__int64)&v110, 0, v84, v79, v80, v81);
                        v89 = sub_227B910(v82, v85);
                        v90 = *(_BYTE **)(v89 + 32);
                        if ( (unsigned __int64)v90 >= *(_QWORD *)(v89 + 24) )
                        {
                          v89 = sub_227BA10(v89, 58);
                        }
                        else
                        {
                          v91 = (__int64)(v90 + 1);
                          *(_QWORD *)(v89 + 32) = v90 + 1;
                          *v90 = 58;
                        }
                        v92 = sub_101BC00((__int64)&v110, 0, v91, v86, v87, v88);
                        v93 = sub_227B910(v89, (unsigned int)(v92 + v100));
                        v94 = *(_BYTE **)(v93 + 32);
                        if ( (unsigned __int64)v94 >= *(_QWORD *)(v93 + 24) )
                        {
                          sub_227BA10(v93, 125);
                        }
                        else
                        {
                          *(_QWORD *)(v93 + 32) = v94 + 1;
                          *v94 = 125;
                        }
                        v99 = v101;
                      }
                    }
                  }
                }
                v46 += 3;
              }
              while ( v48 != v46 );
              v29 = a1[5];
              LODWORD(v14) = v103;
              v30 = *(_BYTE **)(v29 + 32);
              v31 = *(_QWORD *)(v29 + 24);
              if ( !v99 )
                goto LABEL_21;
              if ( v31 <= (unsigned __int64)v30 )
              {
                sub_227BA10(v29, 58);
                v29 = a1[5];
                v30 = *(_BYTE **)(v29 + 32);
                v31 = *(_QWORD *)(v29 + 24);
LABEL_21:
                if ( (unsigned __int64)v30 >= v31 )
                {
                  sub_227BA10(v29, 32);
                }
                else
                {
                  *(_QWORD *)(v29 + 32) = v30 + 1;
                  *v30 = 32;
                }
LABEL_23:
                v16 = a1[2];
                v17 = *(_BYTE *)(v16 + 2) & 4;
                goto LABEL_24;
              }
              *(_QWORD *)(v29 + 32) = v30 + 1;
              *v30 = 58;
            }
          }
          v29 = a1[5];
          v30 = *(_BYTE **)(v29 + 32);
          v31 = *(_QWORD *)(v29 + 24);
          goto LABEL_21;
        }
        sub_227BA10(v25, 58);
        v28 = a1[2];
        goto LABEL_19;
      }
      v37 = a1[5];
      v40 = *(_BYTE **)(v37 + 32);
      if ( (unsigned __int64)v40 >= *(_QWORD *)(v37 + 24) )
      {
        v37 = sub_227BA10(v37, 58);
      }
      else
      {
        *(_QWORD *)(v37 + 32) = v40 + 1;
        *v40 = 58;
      }
    }
    sub_227B910(v37, HIDWORD(a8));
    v42 = (char *)a1[2];
    v39 = *v42;
    v21 = ((unsigned __int8)v42[40] >> 1) & 3;
    goto LABEL_10;
  }
  v15((__int64)a1, (unsigned int)a2, a3, a4, a10, a11, s, a8, a9);
  v16 = a1[2];
  v17 = *(_BYTE *)(v16 + 2) & 4;
LABEL_24:
  v32 = a1[5];
  if ( v17 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32 + 32LL))(a1[5]);
    v16 = a1[2];
    v32 = a1[5];
    v33 = (*(_BYTE *)(v16 + 2) & 4) != 0;
    if ( *(char *)v16 >= 0 )
      goto LABEL_26;
LABEL_28:
    sub_13AC690((_QWORD *)v32, a4, v33);
    v16 = a1[2];
    v32 = a1[5];
    LOBYTE(v33) = (*(_BYTE *)(v16 + 2) & 4) != 0;
    goto LABEL_26;
  }
  LOBYTE(v33) = 0;
  if ( *(char *)v16 < 0 )
    goto LABEL_28;
LABEL_26:
  v34 = *(_DWORD *)(v16 + 36);
  v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 80LL))(v32);
  return sub_13AC900(
           (_QWORD *)a1[5],
           a4 == 1,
           a5,
           a6,
           v35 + *(_DWORD *)(v32 + 32) - *(_DWORD *)(v32 + 16) - (int)v14,
           v34,
           v33);
}
