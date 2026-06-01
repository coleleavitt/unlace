void __fastcall sub_116FF10(__int64 a1)
{
  __int64 v2; // rdx
  _BYTE *v3; // rsi
  void *v4; // rdi
  __int64 v5; // rax
  const void **v6; // r14
  const void **v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int8 (__fastcall *v10)(__int64, void **); // rdx
  void *v11; // rcx
  _BYTE *v12; // rax
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  size_t v17; // rdx
  __int64 v18; // rax
  void **v19; // rbp
  void **v20; // rdx
  void **v21; // rbx
  void *v22; // rax
  void *v23; // rdx
  void **v24; // rax
  void **v25; // rbx
  void **i; // rdx
  char *v27; // rbp
  char *v28; // rbx
  char *v29; // rdi
  void *v30; // rax
  void *v31; // rdx
  void *v32; // rax
  void *v33; // rdx
  void **v34; // rax
  void **v35; // rdi
  void **v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r13
  signed __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  const void **v43; // rbx
  char v44; // al
  _QWORD *v45; // rdi
  _QWORD *v46; // rax
  int v47; // ebp
  size_t v48; // rax
  __int64 v49; // r14
  const void **v50; // rbx
  const void **v51; // rdi
  int v52; // eax
  const void **v53; // [rsp+8h] [rbp-460h]
  __int64 v54; // [rsp+8h] [rbp-460h]
  int v55; // [rsp+10h] [rbp-458h]
  void **v56; // [rsp+18h] [rbp-450h]
  const void **v57; // [rsp+20h] [rbp-448h]
  void **v58; // [rsp+40h] [rbp-428h]
  void *ptr; // [rsp+50h] [rbp-418h] BYREF
  __int128 v60; // [rsp+58h] [rbp-410h]
  char v61; // [rsp+68h] [rbp-400h] BYREF
  void *s2; // [rsp+70h] [rbp-3F8h] BYREF
  __int64 v63; // [rsp+78h] [rbp-3F0h]
  _BYTE v64[16]; // [rsp+80h] [rbp-3E8h] BYREF
  char *v65; // [rsp+90h] [rbp-3D8h] BYREF
  __int16 v66; // [rsp+B0h] [rbp-3B8h]
  char *v67; // [rsp+C0h] [rbp-3A8h] BYREF
  __int16 v68; // [rsp+E0h] [rbp-388h]
  char v69[32]; // [rsp+F0h] [rbp-378h] BYREF
  __int16 v70; // [rsp+110h] [rbp-358h]
  char v71[32]; // [rsp+120h] [rbp-348h] BYREF
  __int16 v72; // [rsp+140h] [rbp-328h]
  char *v73; // [rsp+150h] [rbp-318h] BYREF
  __int16 v74; // [rsp+170h] [rbp-2F8h]
  char *v75; // [rsp+180h] [rbp-2E8h] BYREF
  __int16 v76; // [rsp+1A0h] [rbp-2C8h]
  char v77[32]; // [rsp+1B0h] [rbp-2B8h] BYREF
  __int16 v78; // [rsp+1D0h] [rbp-298h]
  char v79[32]; // [rsp+1E0h] [rbp-288h] BYREF
  __int16 v80; // [rsp+200h] [rbp-268h]
  const char *v81; // [rsp+210h] [rbp-258h] BYREF
  __int16 v82; // [rsp+230h] [rbp-238h]
  _QWORD v83[4]; // [rsp+240h] [rbp-228h] BYREF
  __int16 v84; // [rsp+260h] [rbp-208h]
  _BYTE v85[32]; // [rsp+270h] [rbp-1F8h] BYREF
  __int16 v86; // [rsp+290h] [rbp-1D8h]
  __int64 v87[2]; // [rsp+2A0h] [rbp-1C8h] BYREF
  char v88; // [rsp+2B0h] [rbp-1B8h]
  __int16 v89; // [rsp+2C0h] [rbp-1A8h]
  void *v90; // [rsp+2D0h] [rbp-198h] BYREF
  __int128 v91; // [rsp+2D8h] [rbp-190h] BYREF
  __int64 **v92; // [rsp+2E8h] [rbp-180h] BYREF
  __int128 v93; // [rsp+2F0h] [rbp-178h]
  __int64 *v94; // [rsp+300h] [rbp-168h] BYREF
  __int128 v95; // [rsp+308h] [rbp-160h]
  __int64 v96; // [rsp+318h] [rbp-150h] BYREF
  void *v97; // [rsp+320h] [rbp-148h] BYREF
  __int64 v98; // [rsp+328h] [rbp-140h]
  _BYTE v99[312]; // [rsp+330h] [rbp-138h] BYREF

  v2 = *(_QWORD *)(a1 + 160);
  v97 = v99;
  v98 = 0x400000000LL;
  if ( v2 )
  {
    v3 = *(_BYTE **)(a1 + 152);
    v90 = (char *)&v91 + 8;
    if ( v3 )
    {
      sub_116C0A0(&v90, v3, (__int64)&v3[v2]);
    }
    else
    {
      *(_QWORD *)&v91 = 0;
      BYTE8(v91) = 0;
    }
    sub_116E790((__int64)&v97, (__m128i *)&v90);
    v4 = v90;
    if ( v90 != (char *)&v91 + 8 )
LABEL_5:
      operator delete(v4);
  }
  else
  {
    v48 = j__strlen("HIP_PATH");
    sub_2290A40(&v90, "HIP_PATH", v48);
    if ( (_BYTE)v93 )
    {
      if ( !(_QWORD)v91 || (sub_116E790((__int64)&v97, (__m128i *)&v90), (_BYTE)v93) )
      {
        v4 = v90;
        if ( v90 != (char *)&v91 + 8 )
          goto LABEL_5;
      }
    }
  }
  v5 = (unsigned int)v98;
  if ( (_DWORD)v98 )
  {
    v6 = (const void **)v97;
  }
  else
  {
    v37 = sub_116FE60(a1);
    v38 = *(_QWORD *)v37;
    v39 = (unsigned __int64)*(unsigned int *)(v37 + 8) << 6;
    v40 = v38 + v39;
    v54 = v39 >> 6;
    v41 = (unsigned int)v98;
    v42 = v54 + (unsigned int)v98;
    if ( v42 > HIDWORD(v98) )
    {
      v6 = (const void **)sub_2237400(&v97, v99, v42, 64, &v90);
      sub_116E650((__int64)&v97, (__int64)v6);
      v52 = (int)v90;
      if ( v97 != v99 )
      {
        v55 = (int)v90;
        free(v97);
        v52 = v55;
      }
      HIDWORD(v98) = v52;
      v41 = (unsigned int)v98;
      v97 = v6;
    }
    else
    {
      v6 = (const void **)v97;
    }
    v43 = &v6[8 * v41];
    if ( v38 != v40 )
    {
      do
      {
        *(_OWORD *)(v43 + 1) = 0;
        v14 = *(_QWORD *)(v38 + 8) == 0;
        *v43 = v43 + 3;
        if ( !v14 )
          sub_9C3DB0((void **)v43, (const void **)v38);
        v44 = *(_BYTE *)(v38 + 24);
        v45 = v43 + 4;
        v38 += 64;
        *((_BYTE *)v43 + 24) = v44;
        v46 = v43 + 6;
        v43 += 8;
        *(v43 - 4) = v46;
        sub_116BFE0(v45, *(_BYTE **)(v38 - 32), *(_QWORD *)(v38 - 32) + *(_QWORD *)(v38 - 24));
      }
      while ( v40 != v38 );
      LODWORD(v41) = v98;
      v6 = (const void **)v97;
    }
    v47 = v41 + v54;
    v5 = (unsigned int)(v41 + v54);
    LODWORD(v98) = v47;
  }
  v57 = &v6[8 * v5];
  if ( v57 == v6 )
  {
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    v7 = v6;
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    v53 = (const void **)(a1 + 240);
    sub_9C3DB0((void **)(a1 + 240), v7);
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 248);
      if ( v9 )
      {
        v10 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 96LL);
        LOWORD(v93) = 261;
        v11 = *(void **)(a1 + 240);
        *(_QWORD *)&v91 = v9;
        v90 = v11;
        if ( v10(v8, &v90) )
        {
          sub_9C3DB0((void **)(a1 + 264), v53);
          LOWORD(v93) = 257;
          v83[0] = "bin";
          v89 = 257;
          v86 = 257;
          v84 = 259;
          sub_228A3B0(a1 + 264, v83, v85, v87, &v90);
          sub_9C3DB0((void **)(a1 + 336), v53);
          v83[0] = "include";
          v86 = 257;
          LOWORD(v93) = 257;
          v89 = 257;
          v84 = 259;
          sub_228A3B0(a1 + 336, v83, v85, v87, &v90);
          sub_9C3DB0((void **)(a1 + 288), v53);
          LOWORD(v93) = 257;
          v89 = 257;
          v83[0] = "lib";
          v86 = 257;
          v84 = 259;
          sub_228A3B0(a1 + 288, v83, v85, v87, &v90);
          sub_9C3DB0((void **)(a1 + 360), v53);
          LOWORD(v93) = 257;
          v89 = 257;
          v86 = 257;
          v84 = 259;
          v83[0] = "share";
          sub_228A3B0(a1 + 360, v83, v85, v87, &v90);
          v12 = (_BYTE *)sub_228A4B0(*(_QWORD *)(a1 + 240), *(_QWORD *)(a1 + 248), 0);
          v60 = 0;
          ptr = &v61;
          sub_A1FE50(&ptr, v12, &v12[v13]);
          LOWORD(v93) = 257;
          v89 = 257;
          v86 = 257;
          v83[0] = "share";
          v84 = 259;
          sub_228A3B0(&ptr, v83, v85, v87, &v90);
          v14 = *(_QWORD *)(a1 + 368) == 0;
          v72 = 257;
          v70 = 257;
          v67 = "version";
          v68 = 259;
          v65 = "hip";
          v66 = 259;
          v90 = &v92;
          v91 = 0;
          if ( !v14 )
            sub_9C3DB0(&v90, (const void **)(a1 + 360));
          sub_228A3B0(&v90, &v65, &v67, v69, v71);
          v15 = *(_QWORD *)a1;
          s2 = v64;
          sub_116BFE0(&s2, *(_BYTE **)(v15 + 488), *(_QWORD *)(v15 + 488) + *(_QWORD *)(v15 + 496));
          v16 = j__strlen("/usr/local");
          if ( v16 > 0x7FFFFFFFFFFFFFFFLL - v63 )
            std::__throw_length_error("basic_string::append");
          sub_9EE560(&s2, "/usr/local", v16);
          v17 = *(_QWORD *)(a1 + 248);
          if ( v17 == v63 && (!v17 || !memcmp(*(const void **)(a1 + 240), s2, v17)) )
          {
            v92 = &v94;
            v93 = 0;
          }
          else
          {
            v80 = 257;
            v78 = 257;
            v75 = "version";
            v73 = "hip";
            v76 = 259;
            v74 = 259;
            v92 = &v94;
            v93 = 0;
            if ( (_QWORD)v60 )
              sub_9C3DB0((void **)&v92, (const void **)&ptr);
            sub_228A3B0(&v92, &v73, &v75, v77, v79);
          }
          v14 = *(_QWORD *)(a1 + 272) == 0;
          v89 = 257;
          v86 = 257;
          v84 = 257;
          v81 = ".hipVersion";
          v82 = 259;
          v94 = &v96;
          v95 = 0;
          if ( !v14 )
            sub_9C3DB0((void **)&v94, (const void **)(a1 + 264));
          sub_228A3B0(&v94, &v81, v83, v85, v87);
          v18 = operator new(0x48u);
          v14 = (_QWORD)v91 == 0;
          v19 = (void **)v18;
          v58 = (void **)(v18 + 24);
          *(_QWORD *)v18 = v18 + 24;
          *(_OWORD *)(v18 + 8) = 0;
          if ( !v14 )
            sub_9C3DB0((void **)v18, (const void **)&v90);
          v20 = v19 + 6;
          v14 = (_QWORD)v93 == 0;
          v19[3] = v19 + 6;
          *((_OWORD *)v19 + 2) = 0;
          if ( !v14 )
          {
            sub_9C3DB0(v58, (const void **)&v92);
            v20 = v19 + 6;
          }
          v14 = (_QWORD)v95 == 0;
          v56 = v19 + 9;
          v19[6] = v19 + 9;
          *(_OWORD *)(v19 + 7) = 0;
          if ( !v14 )
            sub_9C3DB0(v20, (const void **)&v94);
          v21 = (void **)&v96;
          do
          {
            while ( 1 )
            {
              v21 -= 3;
              if ( *v21 == v21 + 3 )
                break;
              free(*v21);
              if ( v21 == &v90 )
                goto LABEL_34;
            }
          }
          while ( v21 != &v90 );
LABEL_34:
          if ( s2 != v64 )
            operator delete(s2);
          if ( v56 == v19 )
          {
            if ( !*((_BYTE *)v7 + 24) )
            {
              *(_BYTE *)(a1 + 8) = 1;
LABEL_47:
              operator delete(v19);
              if ( ptr != &v61 )
                free(ptr);
              v27 = (char *)v97;
              v28 = (char *)v97 + 64 * (unsigned __int64)(unsigned int)v98;
              if ( v97 != v28 )
              {
                do
                {
                  while ( 1 )
                  {
                    v28 -= 64;
                    v29 = *((char **)v28 + 4);
                    if ( v29 != v28 + 48 )
                      operator delete(v29);
                    if ( *(char **)v28 == v28 + 24 )
                      break;
                    free(*(void **)v28);
                    if ( v27 == v28 )
                      goto LABEL_54;
                  }
                }
                while ( v27 != v28 );
LABEL_54:
                v28 = (char *)v97;
              }
              if ( v28 != v99 )
                free(v28);
              return;
            }
          }
          else
          {
            v22 = v19[1];
            if ( v22 )
            {
              v23 = *v19;
              LOWORD(v93) = 261;
              v90 = v23;
              *(_QWORD *)&v91 = v22;
              sub_225D6F0((unsigned int)v87, v8, (unsigned int)&v90, -1, 1, 0, 1);
              if ( (v88 & 1) == 0
                && (*(_QWORD *)(a1 + 224)
                 || !(unsigned __int8)sub_116D5A0(
                                        a1,
                                        *(_QWORD *)(v87[0] + 8),
                                        *(_QWORD *)(v87[0] + 16) - *(_QWORD *)(v87[0] + 8))) )
              {
LABEL_41:
                *(_BYTE *)(a1 + 8) = 1;
                sub_FC2AF0(v87);
LABEL_42:
                v24 = v19;
                v25 = v19 + 3;
                for ( i = v58; ; i = v25 )
                {
                  if ( *v24 == i )
                  {
                    v24 = v25;
                    if ( v56 == v25 )
                      goto LABEL_47;
                  }
                  else
                  {
                    free(*v24);
                    v24 = v25;
                    if ( v56 == v25 )
                      goto LABEL_47;
                  }
                  v25 += 3;
                }
              }
              sub_FC2AF0(v87);
            }
            v30 = v19[4];
            if ( v30 )
            {
              v31 = v19[3];
              LOWORD(v93) = 261;
              v90 = v31;
              *(_QWORD *)&v91 = v30;
              sub_225D6F0((unsigned int)v87, v8, (unsigned int)&v90, -1, 1, 0, 1);
              if ( (v88 & 1) == 0
                && (*(_QWORD *)(a1 + 224)
                 || !(unsigned __int8)sub_116D5A0(
                                        a1,
                                        *(_QWORD *)(v87[0] + 8),
                                        *(_QWORD *)(v87[0] + 16) - *(_QWORD *)(v87[0] + 8))) )
              {
                goto LABEL_41;
              }
              sub_FC2AF0(v87);
            }
            v32 = v19[7];
            if ( v32 )
            {
              LOWORD(v93) = 261;
              v33 = v19[6];
              *(_QWORD *)&v91 = v32;
              v90 = v33;
              sub_225D6F0((unsigned int)v87, v8, (unsigned int)&v90, -1, 1, 0, 1);
              if ( (v88 & 1) == 0
                && (*(_QWORD *)(a1 + 224)
                 || !(unsigned __int8)sub_116D5A0(
                                        a1,
                                        *(_QWORD *)(v87[0] + 8),
                                        *(_QWORD *)(v87[0] + 16) - *(_QWORD *)(v87[0] + 8))) )
              {
                goto LABEL_41;
              }
              sub_FC2AF0(v87);
            }
            if ( !*((_BYTE *)v7 + 24) )
            {
              *(_BYTE *)(a1 + 8) = 1;
              goto LABEL_42;
            }
            v34 = v19;
            do
            {
              while ( 1 )
              {
                v35 = (void **)*v34;
                v36 = v34 + 3;
                if ( *v34 == v34 + 3 )
                  break;
                free(v35);
                v34 = v36;
                if ( v56 == v36 )
                  goto LABEL_79;
              }
              v34 = (void **)*v34;
            }
            while ( v56 != v35 );
          }
LABEL_79:
          operator delete(v19);
          if ( ptr != &v61 )
            free(ptr);
        }
      }
      v7 += 8;
      if ( v57 == v7 )
        break;
      sub_9C3DB0((void **)v53, v7);
    }
    v49 = (unsigned int)v98;
    v50 = (const void **)v97;
    *(_BYTE *)(a1 + 8) = 0;
    v6 = &v50[8 * v49];
    if ( v50 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 8;
          v51 = (const void **)v6[4];
          if ( v51 != v6 + 6 )
            operator delete(v51);
          if ( *v6 == v6 + 3 )
            break;
          free((void *)*v6);
          if ( v6 == v50 )
            goto LABEL_101;
        }
      }
      while ( v6 != v50 );
LABEL_101:
      v6 = (const void **)v97;
    }
  }
  if ( v6 != (const void **)v99 )
    free(v6);
}
