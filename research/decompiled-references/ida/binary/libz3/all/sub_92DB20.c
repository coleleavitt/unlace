__int64 __fastcall sub_92DB20(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  void *v7; // r12
  void *v8; // r12
  __int64 v9; // rsi
  _QWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdi
  void *v16; // r14
  void *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r14
  void *v23; // r12
  void *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r14
  void *v29; // r12
  void *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rax
  _QWORD *v33; // r14
  __int64 v34; // rax
  int v35; // edx
  int v36; // ecx
  _QWORD *v37; // rax
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned int v43; // ebx
  size_t v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rsi
  _QWORD *v50; // rax
  _QWORD *v51; // rdx
  _QWORD *v52; // rsi
  __int64 v53; // rcx
  char v54; // di
  __int64 v55; // rcx
  char v56; // di
  __int64 v57; // rcx
  char v58; // di
  __int64 v59; // rcx
  char v60; // di
  __int64 v61; // rax
  void *v62; // r15
  void *v63; // r15
  _QWORD *v64; // rsi
  _QWORD *v65; // rax
  char **exception; // rbp
  _QWORD *v67; // [rsp+0h] [rbp-B8h]
  _QWORD *v68; // [rsp+0h] [rbp-B8h]
  _DWORD *v69; // [rsp+8h] [rbp-B0h]
  __int64 v70[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+30h] [rbp-88h]
  __int64 v72; // [rsp+38h] [rbp-80h] BYREF
  __int64 v73; // [rsp+40h] [rbp-78h]
  __int64 v74; // [rsp+48h] [rbp-70h]
  __int64 v75; // [rsp+50h] [rbp-68h]
  __int64 v76; // [rsp+58h] [rbp-60h] BYREF
  __int64 v77; // [rsp+60h] [rbp-58h]
  __int64 v78; // [rsp+68h] [rbp-50h]
  __int64 v79; // [rsp+70h] [rbp-48h]
  int v80; // [rsp+78h] [rbp-40h]

  sub_91FA00((_QWORD *)a1, 0);
  v2 = *(_QWORD *)(a1 + 288);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_QWORD *)(a1 + 296);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_QWORD *)(a1 + 304);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 80 * v5;
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4 + 40);
        sub_182CBA0(v7, v4 + 56);
        v8 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4 + 8);
        v9 = v4 + 24;
        v4 += 80;
        sub_182CBA0(v8, v9);
      }
      while ( v4 != v6 );
      v4 = *(_QWORD *)(a1 + 304);
    }
    *(_DWORD *)(v4 - 4) = 0;
  }
  v10 = *(_QWORD **)(a1 + 312);
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 )
    {
      v67 = &v10[v11];
      do
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = *(unsigned int *)(v12 - 4);
          if ( (_DWORD)v13 )
          {
            v14 = v12 + 80 * v13;
            do
            {
              v15 = *(_QWORD *)(v12 + 72);
              if ( v15 )
                sub_186B220((void *)(v15 - 8));
              v16 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v12 + 40);
              sub_182CBA0(v16, v12 + 56);
              v17 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v12 + 8);
              v18 = v12 + 24;
              v12 += 80;
              sub_182CBA0(v17, v18);
            }
            while ( v12 != v14 );
            v12 = *v10;
          }
          sub_186B220((void *)(v12 - 8));
        }
        ++v10;
      }
      while ( v10 != v67 );
      v10 = *(_QWORD **)(a1 + 312);
    }
    *((_DWORD *)v10 - 1) = 0;
  }
  v19 = *(_QWORD *)(a1 + 320);
  if ( v19 )
    *(_DWORD *)(v19 - 4) = 0;
  v20 = *(_QWORD *)(a1 + 392);
  if ( v20 )
  {
    v21 = *(unsigned int *)(v20 - 4);
    if ( (_DWORD)v21 )
    {
      v22 = v20 + 72 * v21;
      do
      {
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 40);
        sub_182CBA0(v23, v20 + 56);
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 8);
        v25 = v20 + 24;
        v20 += 72;
        sub_182CBA0(v24, v25);
      }
      while ( v20 != v22 );
      v20 = *(_QWORD *)(a1 + 392);
    }
    *(_DWORD *)(v20 - 4) = 0;
  }
  v26 = *(_QWORD *)(a1 + 328);
  if ( v26 )
  {
    v27 = *(unsigned int *)(v26 - 4);
    if ( (_DWORD)v27 )
    {
      v28 = v26 + 72 * v27;
      do
      {
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26 + 40);
        sub_182CBA0(v29, v26 + 56);
        v30 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26 + 8);
        v31 = v26 + 24;
        v26 += 72;
        sub_182CBA0(v30, v31);
      }
      while ( v28 != v26 );
      v26 = *(_QWORD *)(a1 + 328);
    }
    *(_DWORD *)(v26 - 4) = 0;
  }
  v32 = *(_QWORD *)(a1 + 336);
  if ( v32 )
    *(_DWORD *)(v32 - 4) = 0;
  v33 = *(_QWORD **)(a1 + 304);
  *(_BYTE *)(a1 + 344) = 0;
  v71 = -1;
  v72 = 0;
  v73 = 0;
  v74 = 1;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 1;
  v79 = 0;
  v80 = -2;
  if ( v33 )
  {
    v34 = *((unsigned int *)v33 - 1);
    if ( (_DWORD)v34 == *((_DWORD *)v33 - 2) )
    {
      v43 = (unsigned int)(3 * v34 + 1) >> 1;
      v44 = 80 * v43 + 8;
      if ( 80 * (int)v34 + 8 >= (unsigned int)v44 || (unsigned int)v34 >= v43 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v70, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v70);
        sub_233E40((__int64)v70);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v45 = sub_186B270(v44);
      v46 = *(_QWORD **)(a1 + 304);
      v69 = (_DWORD *)v45;
      v33 = (_QWORD *)(v45 + 8);
      if ( v46 )
      {
        v47 = v45;
        v48 = *((unsigned int *)v46 - 1);
        v49 = 5 * v48;
        *(_DWORD *)(v47 + 4) = v48;
        v50 = v46;
        v51 = v33;
        v52 = &v46[2 * v49];
        if ( v52 != v46 )
        {
          do
          {
            v53 = *v50;
            v54 = *((_BYTE *)v51 + 12);
            v50 += 10;
            v51 += 10;
            *(v51 - 10) = v53;
            *((_DWORD *)v51 - 18) = *((_DWORD *)v50 - 18);
            *((_BYTE *)v51 - 68) = v54 & 0xFC | *((_BYTE *)v50 - 68) & 3;
            v55 = *(v50 - 8);
            *(v50 - 8) = 0;
            v56 = *((_BYTE *)v51 - 52);
            *(v51 - 8) = v55;
            *((_DWORD *)v51 - 14) = *((_DWORD *)v50 - 14);
            *((_BYTE *)v51 - 52) = v56 & 0xFC | *((_BYTE *)v50 - 52) & 3;
            v57 = *(v50 - 6);
            *(v50 - 6) = 0;
            v58 = *((_BYTE *)v51 - 36);
            *(v51 - 6) = v57;
            *((_DWORD *)v51 - 10) = *((_DWORD *)v50 - 10);
            *((_BYTE *)v51 - 36) = v58 & 0xFC | *((_BYTE *)v50 - 36) & 3;
            v59 = *(v50 - 4);
            *(v50 - 4) = 0;
            v60 = *((_BYTE *)v51 - 20);
            *(v51 - 4) = v59;
            *((_DWORD *)v51 - 6) = *((_DWORD *)v50 - 6);
            *((_BYTE *)v51 - 20) = v60 & 0xFC | *((_BYTE *)v50 - 20) & 3;
            *(v51 - 2) = *(v50 - 2);
            LODWORD(v59) = *((_DWORD *)v50 - 2);
            *(v50 - 2) = 0;
            *((_DWORD *)v51 - 2) = v59;
          }
          while ( v52 != v50 );
        }
        v61 = *((unsigned int *)v46 - 1);
        if ( (_DWORD)v61 )
        {
          v68 = &v46[10 * v61];
          do
          {
            v62 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v46 + 5);
            sub_182CBA0(v62, v46 + 7);
            v63 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v46 + 1);
            v64 = v46 + 3;
            v46 += 10;
            sub_182CBA0(v63, v64);
          }
          while ( v68 != v46 );
          v46 = *(_QWORD **)(a1 + 304);
        }
        sub_186B220(v46 - 1);
        v37 = &v33[10 * (unsigned int)v69[1]];
      }
      else
      {
        *(_DWORD *)(v45 + 4) = 0;
        v37 = (_QWORD *)(v45 + 8);
      }
      v36 = v71;
      *(_QWORD *)(a1 + 304) = v33;
      *v69 = v43;
      v35 = HIDWORD(v71);
    }
    else
    {
      v35 = -1;
      v36 = -1;
      v37 = &v33[10 * v34];
    }
  }
  else
  {
    v65 = (_QWORD *)sub_186B270(0xA8u);
    *v65 = 2;
    v36 = v71;
    v33 = v65 + 1;
    v35 = HIDWORD(v71);
    *(_QWORD *)(a1 + 304) = v65 + 1;
    v37 = v65 + 1;
  }
  *((_DWORD *)v37 + 1) = v35;
  v38 = v72;
  *(_DWORD *)v37 = v36;
  *((_DWORD *)v37 + 2) = v38;
  *((_BYTE *)v37 + 12) = BYTE4(v72) & 3 | *((_BYTE *)v37 + 12) & 0xFC;
  v39 = v73;
  v73 = 0;
  v37[2] = v39;
  *((_DWORD *)v37 + 6) = v74;
  *((_BYTE *)v37 + 28) = BYTE4(v74) & 3 | *((_BYTE *)v37 + 28) & 0xFC;
  v40 = v75;
  v75 = 0;
  v37[4] = v40;
  *((_DWORD *)v37 + 10) = v76;
  *((_BYTE *)v37 + 44) = BYTE4(v76) & 3 | *((_BYTE *)v37 + 44) & 0xFC;
  v41 = v77;
  v77 = 0;
  v37[6] = v41;
  *((_DWORD *)v37 + 14) = v78;
  *((_BYTE *)v37 + 60) = BYTE4(v78) & 3 | *((_BYTE *)v37 + 60) & 0xFC;
  v37[8] = v79;
  v79 = 0;
  *((_DWORD *)v37 + 18) = v80;
  ++*((_DWORD *)v33 - 1);
  sub_25A130((char *)&v76);
  sub_25A130((char *)&v72);
  return sub_965AC0(a1);
}

