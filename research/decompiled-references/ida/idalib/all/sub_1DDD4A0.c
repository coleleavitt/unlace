void __fastcall sub_1DDD4A0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        double a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // r8
  _BYTE *v10; // r9
  unsigned __int64 v11; // r15
  unsigned int v12; // eax
  unsigned __int64 v13; // r12
  unsigned int v14; // r15d
  char v15; // al
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  char v27; // al
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  char v37; // al
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 *v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 *v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  _QWORD *v67; // rbx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  _BYTE *v76; // [rsp-10h] [rbp-158h]
  __int64 v77; // [rsp-10h] [rbp-158h]
  __int64 v78; // [rsp-8h] [rbp-150h]
  unsigned int v79; // [rsp+14h] [rbp-134h]
  unsigned int v80; // [rsp+18h] [rbp-130h]
  unsigned __int64 v81; // [rsp+18h] [rbp-130h]
  __int64 v82; // [rsp+18h] [rbp-130h]
  unsigned __int64 v83; // [rsp+18h] [rbp-130h]
  __int64 v86; // [rsp+38h] [rbp-110h]
  char v87; // [rsp+4Fh] [rbp-F9h] BYREF
  __int128 v88; // [rsp+50h] [rbp-F8h] BYREF
  void *v89; // [rsp+60h] [rbp-E8h]
  __int64 v90; // [rsp+68h] [rbp-E0h]
  _BYTE v91[96]; // [rsp+70h] [rbp-D8h] BYREF
  __int16 v92; // [rsp+D0h] [rbp-78h]
  void *ptr; // [rsp+D8h] [rbp-70h]
  __int64 v94; // [rsp+E0h] [rbp-68h]
  _BYTE v95[96]; // [rsp+E8h] [rbp-60h] BYREF

  v79 = a2;
  v8 = sub_B8E970(a3 + 64);
  if ( v8 )
  {
    v11 = v8;
    v86 = 2LL * (a5 - 1);
    v12 = a5;
    v13 = v11;
    v14 = v12;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *(_BYTE *)(v13 + 28);
        v87 = 0;
        v16 = v15 & 0x7F;
        if ( (unsigned int)v16 - 34 <= 5 )
          break;
        v24 = (unsigned int)v16 - 40;
        if ( (unsigned int)v24 > 6 )
        {
          v32 = (unsigned int)v16 - 59;
          if ( (unsigned int)v32 > 2 )
          {
            if ( v16 == 62 )
            {
              v47 = *(_QWORD *)(v13 + 144);
              v9 = ((unsigned int)(*(__int64 *)v47 >> 1) & 3) + 1;
              if ( ((*(__int64 *)v47 >> 1) & 3) != 1 )
              {
                a2 = v79;
                if ( !(unsigned __int8)sub_1CBF140(a1, v79, v14, v13, v9, *(unsigned int *)(v47 + 8), &v87)
                  && !v87
                  && !sub_B7E870(v13, v79, v77, v78, v9, (__int64)v10) )
                {
                  v50 = sub_B7E890(v13, v79, v48, v49, v9, (__int64)v10);
                  if ( v14 == 4 )
                  {
                    v82 = (__int64)v50;
                    if ( sub_B7E870((__int64)v50, v79, v51, v52, v9, (__int64)v10) )
                    {
                      a2 = v79;
                      sub_1DC3A70(a1, v79, v13, v82, a4, 4);
                    }
                  }
                  else
                  {
                    *(_QWORD *)v47 = v86 | *(_QWORD *)v47 & 0xFFFFFFFFFFFFFFF9LL;
                    *(_DWORD *)(v47 + 8) = v79;
                  }
                }
              }
            }
            else if ( (unsigned int)v16 - 49 <= 2
                   && (*(_BYTE *)(v13 + 68) & 0xC) != 0xC
                   && (*(_BYTE *)(v13 + 68) & 0xC) != 0
                   && v14 == 1 )
            {
              v57 = a3;
              while ( 1 )
              {
                v58 = *(_QWORD *)(v57 + 16);
                v59 = v58 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v58 & 4) != 0 )
                  v59 = *(_QWORD *)v59;
                v60 = *(_BYTE *)(v59 + 8) & 0x7F;
                v61 = (unsigned int)(v60 - 59);
                if ( (unsigned int)v61 > 2 )
                  break;
                v57 = v59 - 64;
                if ( !v57 )
                  goto LABEL_99;
              }
              v60 = (unsigned int)(v60 - 34);
              if ( (unsigned int)v60 > 5 || v59 == 72 )
              {
LABEL_99:
                v62 = sub_B9DFE0(a3, a2, v60, v61, v9, (__int64)v10);
                goto LABEL_118;
              }
              v62 = sub_B971E0(a3);
LABEL_118:
              v68 = sub_B94670(v62 + 64, *(_QWORD *)(v13 + 40), v63, v64, v65, v66);
              if ( v68 )
              {
                while ( 1 )
                {
                  v69 = v68 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v68 & 4) == 0 )
                    break;
                  if ( !v69 )
                    goto LABEL_139;
                  v70 = *(_QWORD *)v69;
                  if ( (*(_BYTE *)(*(_QWORD *)v69 + 28LL) & 0x7Fu) - 49 <= 2 )
                    goto LABEL_122;
                  v68 = *(_QWORD *)(v69 + 8);
                  if ( !v68 )
                    goto LABEL_139;
                }
                v70 = 0;
                if ( (*(_BYTE *)(v69 + 28) & 0x7Fu) - 49 < 3 )
                  v70 = v68 & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
LABEL_139:
                v70 = 0;
              }
LABEL_122:
              a2 = v79;
              sub_1DDCCE0(a1, v79, v13, v70, a4, a6, a7);
            }
            goto LABEL_14;
          }
          if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
          {
            v43 = sub_B8C3D0(v13, a2, v16, v32, v9, (__int64)v10);
            v44 = *v43;
            v45 = *v43 + 8LL * *((unsigned int *)v43 + 2);
            if ( *v43 >= v45 )
            {
              if ( v44 != v45 )
              {
                while ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 211 )
                {
                  v45 += 8LL;
                  if ( v44 == v45 )
                    goto LABEL_46;
                }
                goto LABEL_14;
              }
            }
            else
            {
              v46 = *v43;
              while ( *(_WORD *)(*(_QWORD *)v46 + 36LL) != 211 )
              {
                v46 += 8LL;
                if ( v45 == v46 )
                  goto LABEL_46;
              }
              if ( v45 != v46 )
                goto LABEL_14;
            }
          }
LABEL_46:
          if ( !sub_B97450(v13) )
          {
            if ( (*(_BYTE *)(v13 + 96) & 3) != 0
              || (a2 = v13, !sub_7052B0((__int64 *)(v13 + 96), v13, v33, v34, v9, (__int64)v10)) )
            {
              v35 = *(_QWORD *)(v13 + 128);
              if ( !v35 || (*(_BYTE *)(v35 + 10) & 0x20) == 0 )
              {
                v36 = sub_B97210(v13);
                v9 = ((unsigned int)(*(__int64 *)v36 >> 1) & 3) + 1;
                if ( ((*(__int64 *)v36 >> 1) & 3) != 1
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 260LL) != 15 || v14 != 3) )
                {
                  a2 = v79;
                  v37 = sub_1CBF140(a1, v79, v14, v13, v9, *(unsigned int *)(v36 + 8), &v87);
                  v10 = v76;
                  if ( !v37 && !v87 )
                  {
                    v39 = sub_B971E0(v13);
                    v40 = *(_QWORD *)(v13 + 128);
                    if ( (v40
                       || (a2 = *(_QWORD *)(v13 + 104),
                           v81 = v39,
                           sub_7052B0((__int64 *)(a2 + 96), a2, v38, v39, v9, (__int64)v10),
                           v40 = *(_QWORD *)(v13 + 128),
                           v39 = v81,
                           v40))
                      && *(_QWORD *)(v40 + 88) )
                    {
                      if ( v14 != 4 )
                        goto LABEL_59;
                      if ( (unsigned int)sub_B97260(v13) == 3 )
                      {
                        sub_B972B0(v13, 4);
                        a2 = v79;
                        sub_1884910(a1, v79, (__int64 *)v13, 1, v74, v75);
                      }
                      v40 = *(_QWORD *)(v13 + 128);
                    }
                    else
                    {
                      v71 = *(_QWORD *)(v39 + 128);
                      if ( !v71
                        && (a2 = *(_QWORD *)(v39 + 104),
                            v83 = v39,
                            sub_7052B0((__int64 *)(a2 + 96), a2, v38, v39, v9, (__int64)v10),
                            v39 = v83,
                            (v71 = *(_QWORD *)(v83 + 128)) == 0)
                        || !*(_QWORD *)(v71 + 88) )
                      {
                        if ( v14 == 3 )
                        {
                          *(_QWORD *)v36 = *(_QWORD *)v36 & 0xFFFFFFFFFFFFFFF9LL | 4;
                          *(_DWORD *)(v36 + 8) = v79;
                        }
                        goto LABEL_14;
                      }
                      v78 = a2;
                      a2 = v79;
                      sub_1DD54A0(a1, v79, (__int64 *)v13, v39, a4, v14, a6, a7, 1);
                      v40 = *(_QWORD *)(v13 + 128);
                      v9 = v78;
                    }
                    if ( v40
                      || (a2 = *(_QWORD *)(v13 + 104),
                          sub_7052B0((__int64 *)(a2 + 96), a2, v72, v73, v9, (__int64)v10),
                          (v40 = *(_QWORD *)(v13 + 128)) != 0) )
                    {
LABEL_59:
                      v41 = *(_QWORD *)(v40 + 88);
                      if ( v41 )
                      {
                        a2 = v79;
                        sub_1DDD4A0(a1, v79, v41, a4, v14);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ( ((v16 + 87) & 0x7Fu) > 2 )
        {
          v25 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
          {
            v25 = *(_QWORD *)v25;
            if ( ((*(_BYTE *)(v25 + 8) + 70) & 0x7Fu) > 3 )
              goto LABEL_14;
          }
          else if ( ((*(_BYTE *)(v25 + 8) + 70) & 0x7Fu) > 3 )
          {
            goto LABEL_14;
          }
          if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
          {
            v53 = sub_B8C3D0(v13, a2, v25, v24, v9, (__int64)v10);
            v54 = *v53;
            v55 = *v53 + 8LL * *((unsigned int *)v53 + 2);
            if ( *v53 >= v55 )
            {
              if ( v54 != v55 )
              {
                while ( *(_WORD *)(*(_QWORD *)v55 + 36LL) != 211 )
                {
                  v55 += 8LL;
                  if ( v54 == v55 )
                    goto LABEL_21;
                }
                goto LABEL_14;
              }
            }
            else
            {
              v56 = *v53;
              while ( *(_WORD *)(*(_QWORD *)v56 + 36LL) != 211 )
              {
                v56 += 8LL;
                if ( v55 == v56 )
                  goto LABEL_21;
              }
              if ( v55 != v56 )
                goto LABEL_14;
            }
          }
LABEL_21:
          v26 = sub_B73ED0(v13);
          v9 = ((unsigned int)(*(__int64 *)v26 >> 1) & 3) + 1;
          if ( ((*(__int64 *)v26 >> 1) & 3) != 1 )
          {
            a2 = v79;
            if ( !(unsigned __int8)sub_1CBF140(a1, v79, v14, v13, v9, *(unsigned int *)(v26 + 8), &v87) && !v87 )
            {
              if ( v14 == 4 )
              {
                v67 = sub_B73FE0(v13);
                a2 = sub_B8C330((__int64)v67);
                if ( sub_B7D8D0((__int64)v67, a2) )
                {
                  sub_B74430(v13, 4, v79);
                  a2 = v79;
                  sub_1E3BC50(a1, v79, v13, 0, 0, 0);
                }
              }
              else
              {
                a2 = v14;
                sub_B74430(v13, v14, v79);
              }
            }
          }
        }
LABEL_14:
        v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v13 )
          return;
      }
      v19 = sub_B77970(v13);
      if ( !v19 )
        goto LABEL_14;
      v20 = *(_QWORD *)(v13 + 56);
      if ( (v20 & 4) == 0 || !*(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
        break;
      a6 = 0.0;
      v92 = 0;
      a2 = v13;
      ptr = v95;
      v88 = 0;
      v89 = v91;
      v90 = 0x400000000LL;
      v94 = 0x400000000LL;
      v27 = sub_17516B0(a1, v13, (__int64)&v88, 0, 0, 0.0);
      v10 = v95;
      if ( !v27 && (_BYTE)v92 )
      {
        if ( ptr != v95 )
          free(ptr);
        if ( v89 == v91 )
          break;
        free(v89);
        if ( (*(_BYTE *)(v13 + 29) & 1) == 0 )
          goto LABEL_7;
LABEL_38:
        v28 = sub_B8C3D0(v13, a2, v17, v18, v9, (__int64)v10);
        v29 = *v28;
        v30 = *v28 + 8LL * *((unsigned int *)v28 + 2);
        if ( *v28 >= v30 )
        {
          if ( v29 != v30 )
          {
            while ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 211 )
            {
              v30 += 8LL;
              if ( v29 == v30 )
                goto LABEL_7;
            }
            goto LABEL_14;
          }
        }
        else
        {
          v31 = *v28;
          while ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 211 )
          {
            v31 += 8LL;
            if ( v30 == v31 )
              goto LABEL_7;
          }
          if ( v30 != v31 )
            goto LABEL_14;
        }
LABEL_7:
        v21 = sub_B77D20(v13);
        if ( v21 == 2 )
          goto LABEL_14;
        v80 = v21;
        v22 = sub_B77EF0(v13);
        a2 = v79;
        if ( (unsigned __int8)sub_1CBF140(a1, v79, v14, v13, v80, v22, &v87) || v87 )
          goto LABEL_14;
        if ( v14 == 4 )
        {
          a2 = (__int64)&v88;
          if ( (unsigned __int8)sub_B7D390((__int64)v19, (__int64)&v88, 0, v78) )
          {
            sub_B77E40(v13, 4, v79);
            if ( (unsigned __int8)sub_B7D390(v13, (__int64)&v88, 0, v42) )
              goto LABEL_70;
            a2 = v79;
            sub_1E3D740(a1, v79, v13, 0, 0, 0);
          }
          goto LABEL_14;
        }
        sub_B77E40(v13, v14, v79);
        a2 = (__int64)&v88;
        if ( !(unsigned __int8)sub_B7D390(v13, (__int64)&v88, 0, v23) )
        {
          if ( v14 == 1 )
          {
            a2 = (__int64)&v88;
            *(_QWORD *)&v88 = v13;
            DWORD2(v88) = v79;
            sub_18C98A0((__m128 *)(a1 + 15600), (__int64 *)&v88);
          }
          goto LABEL_14;
        }
LABEL_70:
        a2 = v13;
        (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1 + 256) + 24LL))(*(_QWORD *)(a1 + 256), v13);
        v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v13 )
          return;
      }
      else
      {
        if ( ptr != v95 )
          free(ptr);
        if ( v89 == v91 )
          goto LABEL_14;
        free(v89);
        v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v13 )
          return;
      }
    }
    if ( (*(_BYTE *)(v13 + 29) & 1) == 0 )
      goto LABEL_7;
    goto LABEL_38;
  }
}
