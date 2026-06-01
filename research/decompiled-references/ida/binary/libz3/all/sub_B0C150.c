__int64 *__fastcall sub_B0C150(__int64 *a1, __int64 *a2, char a3, __int64 a4, __int64 a5)
{
  char **v5; // r14
  char **exception; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  __int64 v11; // r13
  unsigned int v12; // r14d
  unsigned int v13; // esi
  __int64 v14; // r12
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 *v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rsi
  _QWORD *v21; // rsi
  void *v22; // rdi
  _QWORD *v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rax
  size_t v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r9
  unsigned int *v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rdi
  int v34; // edx
  char v35; // si
  __int64 v36; // rdx
  char v37; // si
  __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned int v40; // edx
  size_t v41; // rsi
  unsigned int *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rdi
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // r15
  void *v53; // rbx
  __int64 v54; // rsi
  _QWORD *v56; // rax
  __int64 v57; // [rsp+0h] [rbp-E8h]
  _QWORD *v59; // [rsp+8h] [rbp-E0h]
  unsigned int *v61; // [rsp+20h] [rbp-C8h]
  _QWORD *v62; // [rsp+28h] [rbp-C0h]
  unsigned int v64; // [rsp+38h] [rbp-B0h]
  unsigned int v65; // [rsp+38h] [rbp-B0h]
  char v67[8]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+50h] [rbp-98h] BYREF
  __int64 v69; // [rsp+58h] [rbp-90h]
  __int64 v70[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v71; // [rsp+70h] [rbp-78h] BYREF
  int v72; // [rsp+78h] [rbp-70h]
  __int128 v73; // [rsp+80h] [rbp-68h]
  _QWORD v74[11]; // [rsp+90h] [rbp-58h] BYREF

  v8 = *a2;
  a1[1] = a5;
  *a1 = 0;
  v70[0] = a5;
  if ( v8 )
  {
    v57 = a5;
    v9 = 0;
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= *(_DWORD *)(v8 - 4) )
        goto LABEL_13;
      v68 = v11;
      v13 = *(_DWORD *)(v8 + 40LL * v12);
      v14 = 40LL * v12;
      v69 = v57;
      sub_894B80(a4, v13, &v68);
      v11 = v68;
      v57 = v69;
      if ( v68 )
        ++*(_DWORD *)(v68 + 8);
      if ( !v9 )
        break;
      v15 = *(_DWORD *)(v9 - 4);
      if ( v15 != *(_DWORD *)(v9 - 8) )
      {
        v16 = v15;
        v17 = v15 + 1;
        v18 = (__int64 *)(v9 + 8 * v16);
        goto LABEL_9;
      }
      v40 = (3 * v15 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v41 || v15 >= v40 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0(&v71, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v71);
        sub_233E40((__int64)&v71);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = (3 * v15 + 1) >> 1;
      v42 = (unsigned int *)sub_186B300((void *)(v9 - 8), v41);
      v9 = (__int64)(v42 + 2);
      v19 = *a2 + v14;
      *v42 = v65;
      LODWORD(v42) = v42[1];
      *(_QWORD *)(v9 + 8LL * (unsigned int)v42) = v11;
      *(_DWORD *)(v9 - 4) = (_DWORD)v42 + 1;
      if ( v10 )
      {
LABEL_10:
        v20 = *((unsigned int *)v10 - 1);
        if ( (_DWORD)v20 == *((_DWORD *)v10 - 2) )
        {
          v64 = (unsigned int)(3 * v20 + 1) >> 1;
          v26 = 32 * v64 + 8;
          if ( 32 * (int)v20 + 8 >= (unsigned int)v26 || (unsigned int)v20 >= (unsigned int)(3 * v20 + 1) >> 1 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0(&v71, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v71);
            sub_233E40((__int64)&v71);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v27 = sub_186B270(v26);
          v28 = *((unsigned int *)v10 - 1);
          v29 = v27 + 8;
          v30 = (unsigned int *)v27;
          v31 = v27 + 8;
          *(_DWORD *)(v27 + 4) = v28;
          v32 = v10;
          v33 = &v10[4 * v28];
          if ( v33 != v10 )
          {
            do
            {
              v34 = *(_DWORD *)v32;
              v35 = *((_BYTE *)v32 + 4);
              v32 += 4;
              v31 += 32;
              *(_DWORD *)(v31 - 32) = v34;
              *(_BYTE *)(v31 - 28) = v35 & 3 | *(_BYTE *)(v31 - 28) & 0xFC;
              v36 = *(v32 - 3);
              *(v32 - 3) = 0;
              *(_QWORD *)(v31 - 24) = v36;
              v37 = *((_BYTE *)v32 - 12);
              *(_DWORD *)(v31 - 16) = *((_DWORD *)v32 - 4);
              *(_BYTE *)(v31 - 12) = v37 & 3 | *(_BYTE *)(v31 - 12) & 0xFC;
              v38 = *(v32 - 1);
              *(v32 - 1) = 0;
              *(_QWORD *)(v31 - 8) = v38;
            }
            while ( v32 != v33 );
          }
          v62 = (_QWORD *)v29;
          v61 = v30;
          sub_186B220(v10 - 1);
          v39 = v61[1];
          v10 = v62;
          *v61 = v64;
          v21 = &v62[4 * v39];
        }
        else
        {
          v21 = &v10[4 * v20];
        }
        goto LABEL_12;
      }
LABEL_25:
      v43 = (_QWORD *)sub_186B270(0x48u);
      v21 = v43 + 1;
      *v43 = 2;
      v10 = v43 + 1;
LABEL_12:
      *v21 = 0;
      v21[1] = 0;
      v21[2] = 1;
      v22 = qword_1C7F2C0;
      v21[3] = 0;
      sub_27B950((__int64)v22, (__int64)v21, (int *)(v19 + 8));
      v8 = *a2;
      ++*((_DWORD *)v10 - 1);
      ++v12;
      if ( !v8 )
        goto LABEL_13;
    }
    v56 = (_QWORD *)sub_186B270(0x18u);
    v18 = v56 + 1;
    *v56 = 2;
    v17 = 1;
    v9 = (__int64)v18;
LABEL_9:
    *v18 = v11;
    v19 = *a2 + v14;
    *(_DWORD *)(v9 - 4) = v17;
    if ( v10 )
      goto LABEL_10;
    goto LABEL_25;
  }
  v57 = a5;
  v9 = 0;
  v10 = nullptr;
  v11 = 0;
LABEL_13:
  v71 = a5;
  sub_180C5A0(v67, "pb");
  v72 = sub_15DA4C0(a5 + 560, v67);
  v23 = a2 + 1;
  v74[0] = 0;
  v74[1] = 0;
  v74[2] = 1;
  v74[3] = 0;
  v73 = 0;
  if ( a3 )
  {
    if ( v10 )
      v24 = *((unsigned int *)v10 - 1);
    else
      v24 = 0;
    v25 = sub_1690760(&v71, v24, v10, v9, v23);
  }
  else
  {
    if ( v10 )
      v44 = *((unsigned int *)v10 - 1);
    else
      v44 = 0;
    v25 = sub_1690D20(&v71, v44, v10, v9, v23);
  }
  v45 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  sub_B03590(*a1, a1[1]);
  *a1 = v45;
  sub_25A130((char *)v74);
  v46 = *((_QWORD *)&v73 + 1);
  if ( *((_QWORD *)&v73 + 1) )
  {
    v47 = *(unsigned int *)(*((_QWORD *)&v73 + 1) - 4LL);
    if ( (_DWORD)v47 )
    {
      v48 = *((_QWORD *)&v73 + 1) + 16 * v47;
      do
      {
        v49 = v46;
        v46 += 16;
        sub_15D0DF0(v49);
      }
      while ( v46 != v48 );
      v46 = *((_QWORD *)&v73 + 1);
    }
    sub_186B220((void *)(v46 - 8));
  }
  v50 = v73;
  if ( (_QWORD)v73 )
  {
    v51 = *(unsigned int *)(v73 - 4);
    if ( (_DWORD)v51 )
    {
      v59 = v10;
      v52 = v73 + 32 * v51;
      do
      {
        v53 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v50);
        v54 = v50 + 16;
        v50 += 32;
        sub_182CBA0(v53, v54);
      }
      while ( v50 != v52 );
      v10 = v59;
      v50 = v73;
    }
    sub_186B220((void *)(v50 - 8));
  }
  v70[1] = v9;
  sub_2334C0(v70);
  if ( v10 )
    sub_186B220(v10 - 1);
  sub_B035B0(v11, v57);
  return a1;
}

