_QWORD *__fastcall sub_1D7EDC0(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        char a9,
        __int64 a10)
{
  _QWORD *v10; // r15
  _QWORD *v11; // r14
  _QWORD *result; // rax
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  _QWORD *v15; // rbp
  _QWORD *v16; // rax
  __int64 (__fastcall *v17)(__int64); // rdx
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rax
  _QWORD *v21; // r14
  _QWORD *v22; // rax
  _QWORD *v23; // rbp
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 (__fastcall *v26)(__int64); // rdx
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(__int64); // rax
  __int64 v29; // rax
  bool v32; // zf
  unsigned __int64 v33; // rax
  int v34; // edx
  __int64 v35; // r13
  __int64 v36; // r15
  __int64 v37; // rbp
  __int64 v38; // r12
  __int64 v39; // rbp
  _BYTE *v40; // rsi
  _BYTE *v41; // rax
  size_t v42; // r13
  unsigned __int64 v43; // rbx
  __int64 v44; // rbx
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  int v48; // ebx
  _BYTE *v49; // rdi
  char *v50; // rcx
  char *v51; // rsi
  __int64 v52; // r9
  __int64 v53; // rdx
  unsigned __int64 v54; // rbx
  unsigned int *v55; // r13
  unsigned __int64 v56; // rax
  __int64 v57; // r8
  void **v58; // rbx
  unsigned __int64 v59; // rax
  void **v60; // r13
  void **v61; // r15
  void **v62; // rdi
  void **v63; // rdi
  void **v64; // r13
  void **v65; // r15
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rbx
  __int64 v69; // r15
  __int64 v70; // rbx
  void *v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v80; // [rsp+8h] [rbp-120h]
  _BYTE *v81; // [rsp+10h] [rbp-118h]
  _QWORD *v82; // [rsp+18h] [rbp-110h]
  __int64 v83; // [rsp+20h] [rbp-108h]
  __int64 *v84; // [rsp+20h] [rbp-108h]
  __int64 v85; // [rsp+28h] [rbp-100h]
  __int64 v86; // [rsp+30h] [rbp-F8h]
  void *v87; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v88; // [rsp+48h] [rbp-E0h]
  int v89; // [rsp+50h] [rbp-D8h]
  void *v90[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v91; // [rsp+70h] [rbp-B8h] BYREF

  v10 = a3;
  if ( a3 == a2 )
  {
    if ( a9 )
    {
      sub_168CDE0((__int64)v90, a1 + 1, a5, a6, 0);
      sub_15F7200(v90);
      sub_1BE16D0(a4, a1, a5);
    }
    return v10;
  }
  v11 = a2 + 1;
  result = a2;
  if ( a2 + 1 != a3 )
  {
    v13 = a2;
    v14 = (_QWORD *)sub_B77AF0(*a2 & 0xFFFFFFFFFFFFFFF8LL);
    do
    {
      v15 = (_QWORD *)sub_B77AF0(*v11 & 0xFFFFFFFFFFFFFFF8LL);
      v16 = (_QWORD *)sub_1D7E040((unsigned __int64)a1, (__int64)v14, (__int64)v15, a5, 2, 0, 0, 0, 0, 0);
      if ( v16 && v15 )
      {
        if ( v16 == v15 )
        {
          v13 = v11;
          v14 = v16;
        }
        else
        {
          v17 = *(__int64 (__fastcall **)(__int64))(*v16 + 32LL);
          if ( v17 == sub_6EE8E0 )
            v18 = v16[9];
          else
            v18 = v17((__int64)v16);
          v19 = *(__int64 (__fastcall **)(__int64))(*v15 + 32LL);
          if ( v19 == sub_6EE8E0 )
          {
            v20 = v15[9];
          }
          else
          {
            v83 = v18;
            v20 = v19((__int64)v15);
            v18 = v83;
          }
          if ( v18 == v20 )
          {
            v13 = v11;
            v14 = v15;
          }
        }
      }
      ++v11;
    }
    while ( v10 != v11 );
    v21 = a2;
    v22 = a2;
    v23 = a2;
    while ( 1 )
    {
      v24 = sub_B77AF0(*v22 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v13 != v23 )
      {
        v25 = (_QWORD *)sub_1D7E040((unsigned __int64)a1, (__int64)v14, v24, a5, 2, 0, 0, 0, 0, 0);
        if ( !v25 || !v14 )
          break;
        if ( v25 != v14 )
        {
          v26 = *(__int64 (__fastcall **)(__int64))(*v25 + 32LL);
          v27 = v26 == sub_6EE8E0 ? v25[9] : v26((__int64)v25);
          v28 = *(__int64 (__fastcall **)(__int64))(*v14 + 32LL);
          if ( v28 == sub_6EE8E0 )
          {
            v29 = v14[9];
          }
          else
          {
            v80 = v27;
            v29 = v28((__int64)v14);
            v27 = v80;
          }
          if ( v27 != v29 )
            break;
        }
      }
      v22 = ++v23;
      if ( v10 == v23 )
        return v13;
    }
    if ( a9 )
    {
      v84 = a1 + 1;
      sub_168CDE0((__int64)v90, a1 + 1, a5, a7, 0);
      sub_15F7200(v90);
      v82 = v10;
      do
      {
        v87 = nullptr;
        v32 = *a8 == 0;
        v89 = *((_DWORD *)a8 + 4);
        v33 = a8[1];
        v88 = v33;
        if ( !v32 )
        {
          v34 = *(_DWORD *)(v33 + 14976);
          if ( v34 )
          {
            v67 = (unsigned int)(v34 - 1);
            *(_DWORD *)(v33 + 14976) = v67;
            v35 = *(_QWORD *)(v33 + 8 * v67 + 14848);
            v68 = *(unsigned int *)(v35 + 536);
            *(_BYTE *)v35 = 0;
            v69 = *(_QWORD *)(v35 + 528);
            *(_DWORD *)(v35 + 424) = 0;
            v70 = v69 + (v68 << 6);
            while ( v69 != v70 )
            {
              while ( 1 )
              {
                v70 -= 64;
                v71 = *(void **)(v70 + 24);
                if ( v71 == (void *)(v70 + 40) )
                  break;
                operator delete(v71);
                if ( v69 == v70 )
                  goto LABEL_101;
              }
            }
LABEL_101:
            *(_DWORD *)(v35 + 536) = 0;
          }
          else
          {
            v35 = operator new(0x3A0u);
            *(_BYTE *)v35 = 0;
            *(_QWORD *)(v35 + 96) = v35 + 112;
            *(_QWORD *)(v35 + 128) = v35 + 144;
            *(_QWORD *)(v35 + 160) = v35 + 176;
            *(_QWORD *)(v35 + 192) = v35 + 208;
            *(_QWORD *)(v35 + 224) = v35 + 240;
            *(_QWORD *)(v35 + 256) = v35 + 272;
            *(_QWORD *)(v35 + 288) = v35 + 304;
            *(_QWORD *)(v35 + 320) = v35 + 336;
            *(_QWORD *)(v35 + 352) = v35 + 368;
            *(_QWORD *)(v35 + 384) = v35 + 400;
            *(_QWORD *)(v35 + 416) = v35 + 432;
            *(_QWORD *)(v35 + 104) = 0;
            *(_BYTE *)(v35 + 112) = 0;
            *(_QWORD *)(v35 + 136) = 0;
            *(_BYTE *)(v35 + 144) = 0;
            *(_QWORD *)(v35 + 168) = 0;
            *(_BYTE *)(v35 + 176) = 0;
            *(_QWORD *)(v35 + 200) = 0;
            *(_BYTE *)(v35 + 208) = 0;
            *(_QWORD *)(v35 + 232) = 0;
            *(_BYTE *)(v35 + 240) = 0;
            *(_QWORD *)(v35 + 264) = 0;
            *(_BYTE *)(v35 + 272) = 0;
            *(_QWORD *)(v35 + 296) = 0;
            *(_BYTE *)(v35 + 304) = 0;
            *(_QWORD *)(v35 + 328) = 0;
            *(_BYTE *)(v35 + 336) = 0;
            *(_QWORD *)(v35 + 360) = 0;
            *(_BYTE *)(v35 + 368) = 0;
            *(_QWORD *)(v35 + 392) = 0;
            *(_BYTE *)(v35 + 400) = 0;
            *(_QWORD *)(v35 + 424) = 0x800000000LL;
            *(_QWORD *)(v35 + 528) = v35 + 544;
            *(_QWORD *)(v35 + 536) = 0x600000000LL;
          }
          v87 = (void *)v35;
          v36 = v35 + 96;
          v37 = *a8;
          v38 = *a8 + 96;
          *(_BYTE *)v35 = *(_BYTE *)*a8;
          *(_BYTE *)(v35 + 1) = *(_BYTE *)(v37 + 1);
          *(_BYTE *)(v35 + 2) = *(_BYTE *)(v37 + 2);
          *(_BYTE *)(v35 + 3) = *(_BYTE *)(v37 + 3);
          *(_BYTE *)(v35 + 4) = *(_BYTE *)(v37 + 4);
          *(_BYTE *)(v35 + 5) = *(_BYTE *)(v37 + 5);
          *(_BYTE *)(v35 + 6) = *(_BYTE *)(v37 + 6);
          *(_BYTE *)(v35 + 7) = *(_BYTE *)(v37 + 7);
          *(_BYTE *)(v35 + 8) = *(_BYTE *)(v37 + 8);
          *(_BYTE *)(v35 + 9) = *(_BYTE *)(v37 + 9);
          *(_BYTE *)(v35 + 10) = *(_BYTE *)(v37 + 10);
          *(_QWORD *)(v35 + 16) = *(_QWORD *)(v37 + 16);
          *(_QWORD *)(v35 + 24) = *(_QWORD *)(v37 + 24);
          *(_QWORD *)(v35 + 32) = *(_QWORD *)(v37 + 32);
          *(_QWORD *)(v35 + 40) = *(_QWORD *)(v37 + 40);
          v85 = v37;
          *(_QWORD *)(v35 + 48) = *(_QWORD *)(v37 + 48);
          v86 = v35;
          *(_QWORD *)(v35 + 56) = *(_QWORD *)(v37 + 56);
          *(_QWORD *)(v35 + 64) = *(_QWORD *)(v37 + 64);
          *(_QWORD *)(v35 + 72) = *(_QWORD *)(v37 + 72);
          *(_QWORD *)(v35 + 80) = *(_QWORD *)(v37 + 80);
          *(_QWORD *)(v35 + 88) = *(_QWORD *)(v37 + 88);
          v39 = v37 + 416;
          do
          {
            if ( v38 != v36 )
            {
              v41 = *(_BYTE **)v36;
              v42 = *(_QWORD *)(v38 + 8);
              if ( *(_QWORD *)v36 == v36 + 16 )
                v43 = 15;
              else
                v43 = *(_QWORD *)(v36 + 16);
              if ( v42 > v43 )
              {
                if ( (v42 & 0x8000000000000000LL) != 0LL )
                  std::__throw_length_error("basic_string::_M_create");
                v44 = 2 * v43;
                if ( v42 < v44 )
                {
                  v45 = v44 + 1;
                  if ( v44 < 0 )
                  {
                    v45 = 0x8000000000000000LL;
                    v44 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                else
                {
                  v45 = v42 + 1;
                  v44 = *(_QWORD *)(v38 + 8);
                }
                v41 = (_BYTE *)operator new(v45);
                if ( *(_QWORD *)v36 != v36 + 16 )
                {
                  v81 = v41;
                  operator delete(*(void **)v36);
                  v41 = v81;
                }
                *(_QWORD *)v36 = v41;
                *(_QWORD *)(v36 + 16) = v44;
              }
              if ( v42 )
              {
                v40 = *(_BYTE **)v38;
                if ( v42 == 1 )
                  *v41 = *v40;
                else
                  memcpy(v41, v40, v42);
                v41 = *(_BYTE **)v36;
              }
              *(_QWORD *)(v36 + 8) = v42;
              v41[v42] = 0;
            }
            v38 += 32;
            v36 += 32;
          }
          while ( v38 != v39 );
          if ( v86 + 416 != v38 )
          {
            v46 = *(unsigned int *)(v85 + 424);
            v47 = *(unsigned int *)(v86 + 424);
            v48 = *(_DWORD *)(v85 + 424);
            if ( v46 <= v47 )
            {
              if ( *(_DWORD *)(v85 + 424) )
              {
                v72 = *(_QWORD *)(v86 + 416);
                v73 = *(_QWORD *)(v85 + 416);
                v74 = 0;
                do
                {
                  *(_QWORD *)(v72 + v74) = *(_QWORD *)(v73 + v74);
                  *(_BYTE *)(v72 + v74 + 8) = *(_BYTE *)(v73 + v74 + 8);
                  v74 += 12;
                }
                while ( 12 * v46 != v74 );
              }
            }
            else
            {
              if ( v46 > *(unsigned int *)(v86 + 428) )
              {
                *(_DWORD *)(v86 + 424) = 0;
                sub_2237220(v86 + 416, v86 + 432, v46, 12);
                v50 = *(char **)(v85 + 416);
                v49 = *(_BYTE **)(v86 + 416);
                v52 = 0;
                v46 = *(unsigned int *)(v85 + 424);
                v51 = v50;
              }
              else
              {
                v49 = *(_BYTE **)(v86 + 416);
                v50 = *(char **)(v85 + 416);
                if ( *(_DWORD *)(v86 + 424) )
                {
                  v75 = 3 * v47;
                  v76 = 0;
                  v77 = 4 * v75;
                  v52 = v77;
                  do
                  {
                    *(_QWORD *)&v49[v76] = *(_QWORD *)&v50[v76];
                    v49[v76 + 8] = v50[v76 + 8];
                    v76 += 12;
                  }
                  while ( v77 != v76 );
                  v49 += v77;
                  v46 = *(unsigned int *)(v85 + 424);
                  v51 = &v50[v77];
                }
                else
                {
                  v51 = *(char **)(v85 + 416);
                  v52 = 0;
                }
              }
              v53 = 12 * v46;
              if ( v51 != &v50[v53] )
                memcpy(v49, v51, v53 - v52);
            }
            *(_DWORD *)(v86 + 424) = v48;
          }
          sub_9EED30(v86 + 528, (__int64 *)(v85 + 528));
        }
        v54 = *v21 & 0xFFFFFFFFFFFFFFF8LL;
        sub_AE9DF0((unsigned __int8 **)&v87, v54, 0xAu);
        v55 = (unsigned int *)sub_B77B50(v54);
        v56 = sub_B77AF0(v54);
        sub_1CB6030((__int64)v90, (__int64)a1, *(_QWORD *)(v56 + 56), v55);
        sub_AEC220((unsigned __int8 **)&v87, (_BYTE *)v90[0], (signed __int64)v90[1]);
        if ( v90[0] != &v91 )
          operator delete(v90[0]);
        if ( (a10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          sub_1BE63A0((__int64)a1, (__int64)&v87, *(_QWORD *)(v54 + 48), a10, v57);
        sub_168CDE0((__int64)v90, v84, *(_DWORD *)((*v21 & 0xFFFFFFFFFFFFFFF8LL) + 24), (__int64)&v87, 0);
        sub_15F7200(v90);
        v58 = (void **)v87;
        if ( v87 )
        {
          v59 = v88;
          if ( v88 )
          {
            if ( (unsigned __int64)v87 < v88 || (unsigned __int64)v87 > v88 + 14848 )
            {
              v60 = *((void ***)v87 + 66);
              v61 = &v60[8 * (unsigned __int64)*((unsigned int *)v87 + 134)];
              if ( v60 != v61 )
              {
                do
                {
                  while ( 1 )
                  {
                    v61 -= 8;
                    v62 = (void **)v61[3];
                    if ( v62 == v61 + 5 )
                      break;
                    operator delete(v62);
                    if ( v60 == v61 )
                      goto LABEL_76;
                  }
                }
                while ( v60 != v61 );
LABEL_76:
                v61 = (void **)v58[66];
              }
              if ( v61 != v58 + 68 )
                free(v61);
              v63 = (void **)v58[52];
              if ( v63 != v58 + 54 )
                free(v63);
              v64 = v58 + 48;
              v65 = v58 + 8;
              do
              {
                while ( *v64 != v64 + 2 )
                {
                  operator delete(*v64);
                  v64 -= 4;
                  if ( v64 == v65 )
                    goto LABEL_84;
                }
                v64 -= 4;
              }
              while ( v64 != v65 );
LABEL_84:
              operator delete(v58, 0x3A0u);
            }
            else
            {
              v66 = *(unsigned int *)(v88 + 14976);
              *(_DWORD *)(v88 + 14976) = v66 + 1;
              *(_QWORD *)(v59 + 8 * v66 + 14848) = v58;
            }
          }
        }
        ++v21;
      }
      while ( v82 != v21 );
      return v82;
    }
    return v10;
  }
  return result;
}
