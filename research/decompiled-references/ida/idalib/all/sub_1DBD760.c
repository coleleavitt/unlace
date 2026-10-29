__int64 __fastcall sub_1DBD760(__int64 a1, int a2, __int64 a3, double a4, double a5, __m128i a6)
{
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 *v9; // r12
  __int64 *v10; // rax
  __int128 *v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rdi
  unsigned __int64 v23; // r13
  __int64 v24; // rax
  void *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int128 *v28; // r13
  __int128 *v29; // rbx
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rax
  _QWORD *v32; // rbp
  _QWORD *v33; // r14
  _QWORD *v34; // rdi
  void *v35; // rdi
  void **v36; // r14
  void **v37; // rbp
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  int v47; // edx
  __int64 v48; // r13
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rdi
  int v55; // edx
  __int128 *v56; // r14
  __int128 *v57; // rbx
  unsigned __int64 v58; // r13
  unsigned __int64 v59; // rax
  _QWORD *v60; // r15
  _QWORD *v61; // r12
  _QWORD *v62; // rdi
  void *v63; // rdi
  void **v64; // r12
  void **v65; // r15
  __int64 v66; // rdx
  __int128 *v67; // [rsp+10h] [rbp-2A8h]
  unsigned __int64 v68; // [rsp+10h] [rbp-2A8h]
  unsigned __int64 v69; // [rsp+10h] [rbp-2A8h]
  __int64 v70; // [rsp+10h] [rbp-2A8h]
  __int64 v71; // [rsp+10h] [rbp-2A8h]
  __int64 *v72; // [rsp+18h] [rbp-2A0h]
  _QWORD *v73; // [rsp+20h] [rbp-298h]
  void *v76; // [rsp+50h] [rbp-268h] BYREF
  __int64 v77; // [rsp+58h] [rbp-260h]
  _BYTE v78[32]; // [rsp+60h] [rbp-258h] BYREF
  __int128 v79; // [rsp+80h] [rbp-238h] BYREF
  int v80; // [rsp+90h] [rbp-228h]
  __int16 v81; // [rsp+94h] [rbp-224h]
  __int64 v82; // [rsp+98h] [rbp-220h]
  __int128 *v83; // [rsp+A0h] [rbp-218h]
  __int64 v84; // [rsp+A8h] [rbp-210h]
  _QWORD v85[17]; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v86; // [rsp+138h] [rbp-180h]
  __int64 v87; // [rsp+140h] [rbp-178h]
  __int64 v88; // [rsp+150h] [rbp-168h]
  __int64 v89; // [rsp+158h] [rbp-160h]
  int v90; // [rsp+168h] [rbp-150h]
  char v91; // [rsp+16Ch] [rbp-14Ch]
  void *v92; // [rsp+170h] [rbp-148h]
  __int64 v93; // [rsp+178h] [rbp-140h]
  __int64 v94; // [rsp+1C0h] [rbp-F8h]
  __int64 v95; // [rsp+1C8h] [rbp-F0h]
  void *v96; // [rsp+1D0h] [rbp-E8h]
  __int64 v97; // [rsp+1D8h] [rbp-E0h]
  __int16 v98; // [rsp+240h] [rbp-78h]
  void *ptr; // [rsp+248h] [rbp-70h]
  __int64 v100; // [rsp+250h] [rbp-68h]

  v7 = 1;
  if ( (unsigned int)sub_B97260(a3) == 2 )
    return v7;
  v76 = v78;
  v77 = 0x400000000LL;
  v73 = (_QWORD *)sub_BBF290(a3);
  sub_BC4340(v73, (__int64 *)&v76);
  v9 = (__int64 *)v76;
  v10 = (__int64 *)((char *)v76 + 8 * (unsigned int)v77);
  v72 = v10;
  if ( v76 == v10 )
  {
    v7 = 0;
    goto LABEL_45;
  }
  v11 = &v79;
  while ( 1 )
  {
    v12 = *v9;
    v13 = v73[9];
    v14 = *(_QWORD *)(v13 + 64);
    v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v14 & 1) == 0 )
    {
      v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v17 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v14 & 2) == 0 )
          goto LABEL_7;
        v40 = v16[2295];
        v41 = v13 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v40 )
        {
          v42 = v16[294];
          v16[304] += 24LL;
          v43 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v16[295] >= v43 + 24 && v42 )
          {
            v16[294] = v43 + 24;
            v44 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v70 = v40;
            v44 = sub_986170((__int64)(v16 + 294), 24, 24, 3, v40, v8);
            v40 = v70;
            v43 = v44 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v44 = v40;
          v41 = v43 | 4;
          *(_DWORD *)(v44 + 8) = 0;
          *(_QWORD *)(v44 + 16) = v13;
        }
        v15 = v41 & 0xFFFFFFFFFFFFFFFELL;
        v14 = v15 | 1;
        *(_QWORD *)(v13 + 64) = v15 | 1;
      }
    }
    v45 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    v17 = (_QWORD *)v45;
    if ( v15 )
    {
      if ( (v15 & 4) != 0 )
      {
        v17 = nullptr;
        if ( v45 )
        {
          v46 = *(_QWORD *)v45;
          v47 = *(_DWORD *)(*(_QWORD *)v45 + 12LL);
          if ( *(_DWORD *)(v45 + 8) != v47 )
          {
            *(_DWORD *)(v45 + 8) = v47;
            v68 = v45;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 152LL))(v46, v13);
            v45 = v68;
          }
          v17 = *(_QWORD **)(v45 + 16);
        }
      }
    }
LABEL_7:
    if ( (*(_BYTE *)sub_BC3640(v17) & 4) == 0 )
      goto LABEL_15;
    v19 = *(_QWORD *)(v12 + 104);
    v20 = *(_QWORD *)(v19 + 96);
    v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v20 & 1) == 0 )
    {
      v22 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v20 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v23 = v20 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v20 & 2) == 0 )
          goto LABEL_11;
        v48 = v22[2295];
        v49 = v19 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v48 )
        {
          v50 = v22[294];
          v22[304] += 24LL;
          v51 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22[295] >= v51 + 24 && v50 )
          {
            v22[294] = v51 + 24;
            v52 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v71 = v19;
            v52 = sub_986170((__int64)(v22 + 294), 24, 24, 3, v19, v18);
            v19 = v71;
            v51 = v52 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v52 = v48;
          v49 = v51 | 4;
          *(_DWORD *)(v52 + 8) = 0;
          *(_QWORD *)(v52 + 16) = v19;
        }
        v21 = v49 & 0xFFFFFFFFFFFFFFFELL;
        v20 = v21 | 1;
        *(_QWORD *)(v19 + 96) = v21 | 1;
      }
    }
    v53 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    v23 = v53;
    if ( v21 )
    {
      if ( (v21 & 4) != 0 )
      {
        v23 = 0;
        if ( v53 )
        {
          v54 = *(_QWORD *)v53;
          v55 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
          if ( *(_DWORD *)(v53 + 8) != v55 )
          {
            *(_DWORD *)(v53 + 8) = v55;
            v69 = v53;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 152LL))(v54, v19);
            v53 = v69;
          }
          v23 = *(_QWORD *)(v53 + 16);
        }
      }
    }
LABEL_11:
    while ( sub_B97450(v23) )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v23 + 96);
        v23 = 0;
        if ( (v24 & 3) != 0 )
          break;
        v23 = v24 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !sub_B97450(v24 & 0xFFFFFFFFFFFFFFFCLL) )
          goto LABEL_14;
      }
    }
LABEL_14:
    if ( (*(_BYTE *)(*(_QWORD *)(v23 + 104) + 192LL) & 4) == 0 )
      goto LABEL_43;
LABEL_15:
    v98 = 0;
    v25 = (char *)v11 + 472;
    v80 = a2;
    v81 = 0;
    v84 = 0x400000000LL;
    v83 = (__int128 *)v85;
    v86 &= 0xFFFFFFFE00000000LL;
    v88 &= 0xFFFFFFFE00000000LL;
    v92 = v11 + 16;
    v93 = 0x800000000LL;
    v96 = v11 + 22;
    v97 = 0x400000000LL;
    v26 = *(_QWORD *)(a3 + 168);
    v100 = 0x400000000LL;
    v79 = 0;
    v82 = 0;
    v26 += 8;
    v85[16] = 0;
    v87 = 0;
    v89 = 0;
    v90 = 0;
    v91 = 0;
    v95 = 0;
    v27 = *(unsigned int *)(v26 - 8);
    v94 = 0;
    ptr = (char *)v11 + 472;
    if ( !(unsigned int)sub_1D720F0(a1, v12, v26, v27, (__int64)v11, (__m128)0LL, a5, a6) )
      break;
    if ( ptr != v25 )
      free(ptr);
    if ( v96 != v11 + 22 )
      free(v96);
    if ( v92 != v11 + 16 )
      free(v92);
    v28 = v83;
    v29 = &v83[2 * (unsigned int)v84];
    if ( v83 != v29 )
    {
      v67 = v11;
      do
      {
        v29 -= 2;
        v30 = *((_QWORD *)v29 + 1);
        if ( v30 )
        {
          v31 = *((_QWORD *)v29 + 2);
          if ( v31 )
          {
            if ( v30 < v31 || v30 > v31 + 14848 )
            {
              v32 = *(_QWORD **)(v30 + 528);
              v33 = &v32[8 * (unsigned __int64)*(unsigned int *)(v30 + 536)];
              if ( v32 != v33 )
              {
                do
                {
                  while ( 1 )
                  {
                    v33 -= 8;
                    v34 = (_QWORD *)v33[3];
                    if ( v34 == v33 + 5 )
                      break;
                    operator delete(v34);
                    if ( v32 == v33 )
                      goto LABEL_30;
                  }
                }
                while ( v32 != v33 );
LABEL_30:
                v33 = *(_QWORD **)(v30 + 528);
              }
              if ( v33 != (_QWORD *)(v30 + 544) )
                free(v33);
              v35 = *(void **)(v30 + 416);
              v36 = (void **)(v30 + 416);
              if ( v35 != (void *)(v30 + 432) )
                free(v35);
              v37 = (void **)(v30 + 96);
              do
              {
                while ( 1 )
                {
                  v36 -= 4;
                  if ( *v36 == v36 + 2 )
                    break;
                  operator delete(*v36);
                  if ( v37 == v36 )
                    goto LABEL_38;
                }
              }
              while ( v37 != v36 );
LABEL_38:
              operator delete((void *)v30, 0x3A0u);
            }
            else
            {
              v39 = *(unsigned int *)(v31 + 14976);
              *(_DWORD *)(v31 + 14976) = v39 + 1;
              *(_QWORD *)(v31 + 8 * v39 + 14848) = v30;
            }
          }
        }
      }
      while ( v28 != v29 );
      v11 = v67;
      v29 = v83;
    }
    if ( v29 != (__int128 *)v85 )
      free(v29);
LABEL_43:
    if ( v72 == ++v9 )
    {
      v10 = (__int64 *)v76;
      v7 = 0;
      goto LABEL_45;
    }
  }
  if ( ptr != v25 )
    free(ptr);
  if ( v96 != v11 + 22 )
    free(v96);
  if ( v92 != v11 + 16 )
    free(v92);
  v56 = v83;
  v57 = &v83[2 * (unsigned int)v84];
  if ( v83 != v57 )
  {
    do
    {
      v57 -= 2;
      v58 = *((_QWORD *)v57 + 1);
      if ( v58 )
      {
        v59 = *((_QWORD *)v57 + 2);
        if ( v59 )
        {
          if ( v58 < v59 || v58 > v59 + 14848 )
          {
            v60 = *(_QWORD **)(v58 + 528);
            v61 = &v60[8 * (unsigned __int64)*(unsigned int *)(v58 + 536)];
            if ( v60 != v61 )
            {
              do
              {
                while ( 1 )
                {
                  v61 -= 8;
                  v62 = (_QWORD *)v61[3];
                  if ( v62 == v61 + 5 )
                    break;
                  operator delete(v62);
                  if ( v60 == v61 )
                    goto LABEL_91;
                }
              }
              while ( v60 != v61 );
LABEL_91:
              v61 = *(_QWORD **)(v58 + 528);
            }
            if ( v61 != (_QWORD *)(v58 + 544) )
              free(v61);
            v63 = *(void **)(v58 + 416);
            v64 = (void **)(v58 + 416);
            if ( v63 != (void *)(v58 + 432) )
              free(v63);
            v65 = (void **)(v58 + 96);
            do
            {
              while ( 1 )
              {
                v64 -= 4;
                if ( *v64 == v64 + 2 )
                  break;
                operator delete(*v64);
                if ( v64 == v65 )
                  goto LABEL_99;
              }
            }
            while ( v64 != v65 );
LABEL_99:
            operator delete((void *)v58, 0x3A0u);
          }
          else
          {
            v66 = *(unsigned int *)(v59 + 14976);
            *(_DWORD *)(v59 + 14976) = v66 + 1;
            *(_QWORD *)(v59 + 8 * v66 + 14848) = v58;
          }
        }
      }
    }
    while ( v56 != v57 );
    v57 = v83;
  }
  if ( v57 != v11 + 3 )
    free(v57);
  v10 = (__int64 *)v76;
  v7 = 1;
LABEL_45:
  if ( v10 != (__int64 *)v78 )
    free(v10);
  return v7;
}
