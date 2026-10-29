__int64 __fastcall sub_1505250(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, __m128i a5, __m128 a6)
{
  int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  void *v11; // rdi
  void *v12; // rdi
  _BYTE *v13; // r14
  __int64 v14; // r13
  _BYTE *v15; // rbx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int i; // r14d
  __int64 v19; // rax
  void **v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r15
  void **v24; // rdx
  void *v25; // r14
  __int64 v26; // r14
  void *v27; // rdi
  void *v28; // rdi
  char v29; // al
  _BYTE *v30; // rbx
  _BYTE *v31; // rdi
  _QWORD *v32; // r13
  _QWORD *v33; // rbx
  _QWORD *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rbp
  void *v37; // rdi
  void *v38; // rdi
  void *v40; // rdi
  void **v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // r13
  void *v44; // rdi
  void *v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rbp
  void *v48; // rdi
  void *v49; // rdi
  void **v50; // [rsp+0h] [rbp-C48h]
  __int64 v51; // [rsp+8h] [rbp-C40h]
  __int64 v52; // [rsp+18h] [rbp-C30h]
  _QWORD v53[10]; // [rsp+20h] [rbp-C28h] BYREF
  _QWORD v54[5]; // [rsp+70h] [rbp-BD8h] BYREF
  void *v55; // [rsp+98h] [rbp-BB0h]
  __int64 v56; // [rsp+A0h] [rbp-BA8h]
  _BYTE v57[16]; // [rsp+A8h] [rbp-BA0h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-B90h] BYREF
  void *v59; // [rsp+C0h] [rbp-B88h]
  __int64 v60; // [rsp+C8h] [rbp-B80h]
  _QWORD v61[4]; // [rsp+D0h] [rbp-B78h] BYREF
  void *v62; // [rsp+F0h] [rbp-B58h]
  __int64 v63; // [rsp+F8h] [rbp-B50h]
  __int64 v64; // [rsp+100h] [rbp-B48h]
  __int64 v65; // [rsp+108h] [rbp-B40h]
  __int64 v66; // [rsp+110h] [rbp-B38h]
  __int64 v67; // [rsp+118h] [rbp-B30h]
  __int64 v68; // [rsp+120h] [rbp-B28h]
  __int64 v69; // [rsp+128h] [rbp-B20h]
  __int64 v70; // [rsp+130h] [rbp-B18h]
  __int64 v71; // [rsp+138h] [rbp-B10h]
  __int64 v72; // [rsp+140h] [rbp-B08h]
  __int64 v73; // [rsp+148h] [rbp-B00h]
  __int64 v74; // [rsp+150h] [rbp-AF8h]
  __int64 v75; // [rsp+158h] [rbp-AF0h]
  __int64 v76; // [rsp+160h] [rbp-AE8h]
  __int64 v77; // [rsp+168h] [rbp-AE0h]
  __int64 v78; // [rsp+170h] [rbp-AD8h]
  __int64 v79; // [rsp+178h] [rbp-AD0h]
  __int64 v80; // [rsp+180h] [rbp-AC8h]
  __int16 v81; // [rsp+188h] [rbp-AC0h]
  __int64 v82; // [rsp+190h] [rbp-AB8h]
  _QWORD *v83; // [rsp+1A0h] [rbp-AA8h] BYREF
  __int64 v84; // [rsp+1A8h] [rbp-AA0h]
  void *v85[2]; // [rsp+1B0h] [rbp-A98h]
  __int64 v86; // [rsp+1C0h] [rbp-A88h]
  __int64 v87; // [rsp+1C8h] [rbp-A80h]
  __int64 v88; // [rsp+1D0h] [rbp-A78h]
  int v89; // [rsp+1D8h] [rbp-A70h]
  __int64 v90; // [rsp+1E0h] [rbp-A68h]
  __int64 v91; // [rsp+1F0h] [rbp-A58h]
  __int64 v92; // [rsp+1F8h] [rbp-A50h]
  int v93; // [rsp+200h] [rbp-A48h]
  __int64 v94; // [rsp+208h] [rbp-A40h]
  __int64 v95; // [rsp+210h] [rbp-A38h]
  int v96; // [rsp+218h] [rbp-A30h]
  _BYTE *v97; // [rsp+220h] [rbp-A28h]
  __int64 v98; // [rsp+228h] [rbp-A20h]
  _BYTE v99[576]; // [rsp+230h] [rbp-A18h] BYREF
  __int16 v100; // [rsp+470h] [rbp-7D8h]
  __int64 v101; // [rsp+478h] [rbp-7D0h]
  void *v102; // [rsp+480h] [rbp-7C8h]
  __int64 v103; // [rsp+488h] [rbp-7C0h]
  _BYTE v104[16]; // [rsp+490h] [rbp-7B8h] BYREF
  __int64 v105; // [rsp+4A0h] [rbp-7A8h] BYREF
  void *ptr; // [rsp+4A8h] [rbp-7A0h]
  __int64 v107; // [rsp+4B0h] [rbp-798h]
  _QWORD v108[3]; // [rsp+4B8h] [rbp-790h] BYREF
  __int64 v109; // [rsp+4D0h] [rbp-778h]
  __int64 v110; // [rsp+4D8h] [rbp-770h]
  __int64 v111; // [rsp+4E0h] [rbp-768h]
  __int64 v112; // [rsp+4E8h] [rbp-760h]
  __int64 v113; // [rsp+4F0h] [rbp-758h]
  __int64 v114; // [rsp+BF8h] [rbp-50h]
  __int64 v115; // [rsp+C00h] [rbp-48h]

  v54[0] &= 0xFFFFFFC000000000LL;
  memset(&v54[2], 0, 24);
  v55 = v57;
  v58 = a1 + 504;
  v59 = v61;
  v56 = 0x200000000LL;
  v60 = 0x200000000LL;
  v61[2] = 0;
  v61[3] = 0;
  v62 = nullptr;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 &= 0xF000u;
  v82 = 0;
  sub_148B330(a1, (__int64)v54, 1u, a4, 2, a5, a6);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[2] = 0x200000000LL;
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  *(_OWORD *)v85 = 0;
  v92 = v66;
  v97 = v99;
  v98 = 0x400000000LL;
  v83 = v54;
  v84 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  LOBYTE(v100) = (((LODWORD(v54[0]) >> 12) & 0x7F) == 69) | v100 & 0xFE;
  v102 = v104;
  v105 = v58;
  v103 = 0x200000000LL;
  v107 = 0x200000000LL;
  ptr = v108;
  v91 = 0;
  v93 = 1;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v100 &= 0xFC01u;
  v101 = 0;
  v108[2] = qword_2CD8AE0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  sub_147E3E0(a1, (__int64)&v83);
  v7 = v89;
  *a2 = v92;
  if ( v7 || !v90 )
  {
    sub_1564820(v53, a1, *(unsigned int *)(a1 + 16), 1812);
    sub_AEA040((__int64)v53);
    v51 = 0;
  }
  else
  {
    sub_17B46E0(v53, *(_QWORD *)(a1 + 96), &v83);
    *a3 = v53[0];
    v51 = sub_1AF59D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), &v83);
  }
  v84 = 0;
  v85[0] = nullptr;
  v8 = v95;
  v9 = v83[20];
  LODWORD(v86) = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = v9;
  v94 = 0;
  if ( v96 < 0 )
  {
    if ( v95 )
    {
      v42 = 112LL * *(_QWORD *)(v95 - 8);
      v43 = v95 + v42;
      if ( v95 + v42 != v95 )
      {
        while ( 1 )
        {
          v8 = v43 - 112;
          if ( !*(_BYTE *)(v43 - 16) )
            goto LABEL_97;
          sub_15DCED0(*(_QWORD *)(v43 - 56), v8 + 56);
          v44 = *(void **)(v43 - 48);
          if ( v44 != (void *)(v8 + 80) )
            free(v44);
          v45 = *(void **)(v8 + 24);
          if ( v45 == (void *)(v8 + 40) )
          {
LABEL_97:
            if ( v95 == v8 )
              goto LABEL_104;
          }
          else
          {
            free(v45);
            if ( v95 == v8 )
            {
LABEL_104:
              v42 = 112LL * *(_QWORD *)(v43 - 120);
              break;
            }
          }
          v43 -= 112;
        }
      }
      operator delete[]((void *)(v8 - 8), v42 + 8);
    }
  }
  else
  {
    v10 = v95 + 112LL * (v96 & 0x7FFFFFFF);
    if ( v10 != v95 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v8 + 96) )
          {
            *(_BYTE *)(v8 + 96) = 0;
            sub_15DCED0(*(_QWORD *)(v8 + 56), v8 + 56);
            v11 = *(void **)(v8 + 64);
            if ( v11 != (void *)(v8 + 80) )
              free(v11);
            v12 = *(void **)(v8 + 24);
            if ( v12 != (void *)(v8 + 40) )
              break;
          }
          v8 += 112;
          if ( v10 == v8 )
            goto LABEL_15;
        }
        free(v12);
        v8 += 112;
      }
      while ( v10 != v8 );
    }
  }
LABEL_15:
  v95 = 0;
  v96 = 0;
  if ( !(_DWORD)v98 )
    goto LABEL_58;
  v13 = v97;
  v14 = 0;
  v52 = 16 * (9LL * (unsigned int)(v98 - 1) + 9);
  do
  {
    while ( 1 )
    {
      v15 = &v13[v14];
      v16 = *(_DWORD *)&v13[v14];
      if ( v16 != 3 )
      {
        if ( v16 != 5 || !*((_DWORD *)v15 + 23) )
          goto LABEL_19;
        free(*((void **)v15 + 10));
        goto LABEL_53;
      }
      v17 = *((_DWORD *)v15 + 18);
      for ( i = 0; i < v17; ++i )
      {
        v19 = *((_QWORD *)v15 + 12) + 32LL * i;
        v20 = *(void ***)(v19 + 24);
        *(_QWORD *)(v19 + 24) = 0;
        if ( v20 )
        {
          if ( *v20 != v20 + 2 )
            free(*v20);
          operator delete(v20, 0x70u);
          v17 = *((_DWORD *)v15 + 18);
        }
      }
      if ( (v15[57] & 1) != 0 )
      {
        v21 = *((_QWORD *)v15 + 12);
        if ( v21 )
        {
          v22 = 32LL * *(_QWORD *)(v21 - 8);
          v23 = v21 + v22;
          if ( v21 != v21 + v22 )
          {
            while ( 1 )
            {
              v24 = *(void ***)(v23 - 8);
              if ( v24 )
              {
                if ( *v24 != v24 + 2 )
                {
                  v50 = *(void ***)(v23 - 8);
                  free(*v24);
                  v24 = v50;
                }
                operator delete(v24, 0x70u);
                v21 = *((_QWORD *)v15 + 12);
              }
              if ( v23 - 32 == v21 )
                break;
              v23 -= 32;
            }
            v22 = 32LL * *(_QWORD *)(v23 - 40);
          }
          operator delete[]((void *)(v21 - 8), v22 + 8);
        }
        v15[57] &= ~1u;
      }
      v25 = *((void **)v15 + 14);
      *((_DWORD *)v15 + 18) = 0;
      if ( v25 )
      {
        sub_15D7C30(v25);
        operator delete(v25, 0x520u);
      }
      v26 = *((_QWORD *)v15 + 13);
      if ( v26 )
      {
        if ( *(_DWORD *)(v26 + 140) )
          free(*(void **)(v26 + 128));
        sub_15DCED0(*(_QWORD *)(v26 + 72), v26 + 72);
        v27 = *(void **)(v26 + 80);
        if ( v27 != (void *)(v26 + 96) )
          free(v27);
        v28 = *(void **)(v26 + 40);
        if ( v28 != (void *)(v26 + 56) )
          free(v28);
        operator delete((void *)v26, 0x128u);
      }
      v29 = v15[56] >> 4;
      if ( v29 != 2 )
        break;
LABEL_85:
      v40 = *((void **)v15 + 15);
      if ( !v40 )
        goto LABEL_53;
      operator delete[](v40);
      v13 = v97;
LABEL_19:
      v14 += 144;
      if ( v52 == v14 )
        goto LABEL_54;
    }
    if ( v29 == 11 )
    {
      v41 = *((void ***)v15 + 15);
      if ( v41 )
      {
        if ( *v41 != v41 + 2 )
          free(*v41);
        operator delete(v41, 0x70u);
        v13 = v97;
        goto LABEL_19;
      }
    }
    else if ( !v29 && *((_DWORD *)v15 + 19) )
    {
      goto LABEL_85;
    }
LABEL_53:
    v13 = v97;
    v14 += 144;
  }
  while ( v52 != v14 );
LABEL_54:
  v30 = &v13[144 * (unsigned int)v98];
  while ( v30 != v13 )
  {
    while ( 1 )
    {
      v30 -= 144;
      v31 = *((_BYTE **)v30 + 3);
      if ( v31 == v30 + 40 )
        break;
      free(v31);
      if ( v30 == v13 )
        goto LABEL_58;
    }
  }
LABEL_58:
  LODWORD(v98) = 0;
  LODWORD(v103) = 0;
  sub_15DCED0(v105, &v105);
  LODWORD(v107) = 0;
  v101 = 0;
  v109 = 0;
  v100 &= 0xFC3Fu;
  v114 = 0;
  v115 = 0;
  sub_15DCED0(v105, &v105);
  if ( ptr != v108 )
    free(ptr);
  if ( v102 != v104 )
    free(v102);
  v32 = v97;
  v33 = &v97[144 * (unsigned int)v98];
  if ( v97 != (_BYTE *)v33 )
  {
    do
    {
      while ( 1 )
      {
        v33 -= 18;
        v34 = (_QWORD *)v33[3];
        if ( v34 == v33 + 5 )
          break;
        free(v34);
        if ( v32 == v33 )
          goto LABEL_65;
      }
    }
    while ( v32 != v33 );
LABEL_65:
    v33 = v97;
  }
  if ( v33 != (_QWORD *)v99 )
    free(v33);
  v35 = v95;
  v94 = 0;
  if ( v96 < 0 )
  {
    if ( !v95 )
      goto LABEL_77;
    v46 = 112LL * *(_QWORD *)(v95 - 8);
    v47 = v95 + v46;
    if ( v95 + v46 != v95 )
    {
      while ( 1 )
      {
        v35 = v47 - 112;
        if ( !*(_BYTE *)(v47 - 16) )
          goto LABEL_109;
        sub_15DCED0(*(_QWORD *)(v47 - 56), v35 + 56);
        v48 = *(void **)(v47 - 48);
        if ( v48 != (void *)(v35 + 80) )
          free(v48);
        v49 = *(void **)(v35 + 24);
        if ( v49 == (void *)(v35 + 40) )
        {
LABEL_109:
          if ( v95 == v35 )
            goto LABEL_116;
        }
        else
        {
          free(v49);
          if ( v95 == v35 )
          {
LABEL_116:
            v46 = 112LL * *(_QWORD *)(v47 - 120);
            break;
          }
        }
        v47 -= 112;
      }
    }
    operator delete[]((void *)(v35 - 8), v46 + 8);
    if ( HIDWORD(v86) )
      goto LABEL_118;
LABEL_78:
    if ( HIDWORD(v63) )
LABEL_119:
      free(v62);
  }
  else
  {
    v36 = v95 + 112LL * (v96 & 0x7FFFFFFF);
    if ( v36 != v95 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v35 + 96) )
          {
            *(_BYTE *)(v35 + 96) = 0;
            sub_15DCED0(*(_QWORD *)(v35 + 56), v35 + 56);
            v37 = *(void **)(v35 + 64);
            if ( v37 != (void *)(v35 + 80) )
              free(v37);
            v38 = *(void **)(v35 + 24);
            if ( v38 != (void *)(v35 + 40) )
              break;
          }
          v35 += 112;
          if ( v36 == v35 )
            goto LABEL_77;
        }
        free(v38);
        v35 += 112;
      }
      while ( v36 != v35 );
    }
LABEL_77:
    if ( !HIDWORD(v86) )
      goto LABEL_78;
LABEL_118:
    free(v85[1]);
    if ( HIDWORD(v63) )
      goto LABEL_119;
  }
  sub_15DCED0(v58, &v58);
  if ( v59 != v61 )
    free(v59);
  if ( v55 != v57 )
    free(v55);
  return v51;
}
