__int64 __fastcall Z3_mk_pbge(__int64 a1, unsigned int a2, __int64 a3, int *a4, unsigned int a5)
{
  char **exception; // r13
  int *v6; // r12
  char v7; // al
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  char v10; // di
  int v11; // r8d
  _QWORD *v12; // rax
  int v13; // ecx
  char v14; // si
  void *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  char v19; // dl
  __int64 v20; // rax
  unsigned int v21; // r14d
  size_t v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned int *v26; // r8
  __int64 v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  int v30; // ecx
  char v31; // r9
  __int64 v32; // rcx
  char v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r13
  __int64 v36; // r15
  _QWORD *v37; // r13
  void *v38; // r12
  _QWORD *v39; // rsi
  __int64 v40; // rax
  char v41; // di
  __int64 v42; // rax
  void *v43; // r15
  __int64 v44; // r12
  __int64 v45; // rax
  _QWORD *v46; // r14
  _QWORD *v47; // r13
  void *v48; // r15
  _QWORD *v49; // rsi
  void *v50; // rbx
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r13
  void *v58; // r14
  __int64 v59; // rsi
  _QWORD *v61; // rax
  int *v62; // [rsp+10h] [rbp-118h]
  unsigned int *v63; // [rsp+20h] [rbp-108h]
  unsigned int *v64; // [rsp+20h] [rbp-108h]
  _QWORD *v65; // [rsp+28h] [rbp-100h]
  int *v66; // [rsp+30h] [rbp-F8h]
  char v70; // [rsp+5Bh] [rbp-CDh]
  int v72[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+78h] [rbp-B0h]
  __int64 v74; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+88h] [rbp-A0h]
  __int64 v76; // [rsp+90h] [rbp-98h] BYREF
  int v77[2]; // [rsp+98h] [rbp-90h]
  int v78[2]; // [rsp+A0h] [rbp-88h] BYREF
  int v79[2]; // [rsp+A8h] [rbp-80h]
  int v80[2]; // [rsp+B0h] [rbp-78h] BYREF
  int v81; // [rsp+B8h] [rbp-70h]
  int v82[4]; // [rsp+C0h] [rbp-68h]
  int v83[2]; // [rsp+D0h] [rbp-58h] BYREF
  char v84[8]; // [rsp+D8h] [rbp-50h]
  int v85[2]; // [rsp+E0h] [rbp-48h] BYREF
  int v86[2]; // [rsp+E8h] [rbp-40h]

  v6 = a4;
  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v70 = v7;
  if ( v7 )
    sub_299D70(a1, a2, a3, a4, a5);
  *(_DWORD *)(a1 + 1520) = 0;
  *(_QWORD *)v80 = *(_QWORD *)(a1 + 232);
  v8 = *(_QWORD *)v80;
  sub_180C5A0(&v76, "pb");
  v81 = sub_15DA4C0(v8 + 560, &v76);
  *(_QWORD *)v83 = 0;
  *(_QWORD *)v84 = 0;
  *(_QWORD *)v85 = 1;
  *(_QWORD *)v86 = 0;
  *(_OWORD *)v82 = 0;
  if ( a2 )
  {
    v9 = nullptr;
    v62 = &v6[a2];
    do
    {
      v18 = *v6;
      v72[1] = 0;
      v73 = 0;
      v72[0] = v18;
      v74 = 1;
      v75 = 0;
      sub_182CBA0(qword_1C7F2C0, &v74);
      LODWORD(v74) = 1;
      v19 = BYTE4(v74) & 0xFE;
      BYTE4(v74) &= ~1u;
      if ( v9 )
      {
        v20 = *((unsigned int *)v9 - 1);
        if ( (_DWORD)v20 == *((_DWORD *)v9 - 2) )
        {
          v21 = (unsigned int)(3 * v20 + 1) >> 1;
          v22 = 32 * v21 + 8;
          if ( 32 * (int)v20 + 8 >= (unsigned int)v22 || (unsigned int)v20 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v76, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v76);
            sub_233E40((__int64)&v76);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = sub_186B270(v22);
          v24 = *((unsigned int *)v9 - 1);
          v25 = v23 + 8;
          v26 = (unsigned int *)v23;
          v27 = v23 + 8;
          *(_DWORD *)(v23 + 4) = v24;
          v28 = v9;
          v29 = &v9[4 * v24];
          if ( v29 != v9 )
          {
            do
            {
              v30 = *(_DWORD *)v28;
              v31 = *((_BYTE *)v28 + 4);
              v28 += 4;
              v27 += 32;
              *(_DWORD *)(v27 - 32) = v30;
              *(_BYTE *)(v27 - 28) = v31 & 3 | *(_BYTE *)(v27 - 28) & 0xFC;
              v32 = *(v28 - 3);
              *(v28 - 3) = 0;
              *(_QWORD *)(v27 - 24) = v32;
              v33 = *((_BYTE *)v28 - 12);
              *(_DWORD *)(v27 - 16) = *((_DWORD *)v28 - 4);
              *(_BYTE *)(v27 - 12) = v33 & 3 | *(_BYTE *)(v27 - 12) & 0xFC;
              v34 = *(v28 - 1);
              *(v28 - 1) = 0;
              *(_QWORD *)(v27 - 8) = v34;
            }
            while ( v28 != v29 );
          }
          v35 = *((unsigned int *)v9 - 1);
          if ( (_DWORD)v35 )
          {
            v63 = v26;
            v36 = v25;
            v65 = v9;
            v37 = &v9[4 * v35];
            v66 = v6;
            do
            {
              v38 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v9);
              v39 = v9 + 2;
              v9 += 4;
              sub_182CBA0(v38, v39);
            }
            while ( v9 != v37 );
            v26 = v63;
            v9 = v65;
            v25 = v36;
            v6 = v66;
          }
          v64 = v26;
          sub_186B220(v9 - 1);
          v19 = BYTE4(v74);
          v40 = v64[1];
          v41 = BYTE4(v74);
          *v64 = v21;
          v10 = v41 & 1;
          v11 = v74;
          v9 = (_QWORD *)v25;
          v12 = (_QWORD *)(v25 + 32 * v40);
        }
        else
        {
          v10 = 0;
          v11 = 1;
          v12 = &v9[4 * v20];
        }
      }
      else
      {
        v61 = (_QWORD *)sub_186B270(0x48u);
        v19 = BYTE4(v74);
        v9 = v61 + 1;
        *v61 = 2;
        v11 = v74;
        v12 = v61 + 1;
        v10 = v19 & 1;
      }
      v13 = v72[0];
      v14 = v72[1];
      *((_DWORD *)v12 + 4) = v11;
      v15 = qword_1C7F2C0;
      ++v6;
      *(_DWORD *)v12 = v13;
      *((_BYTE *)v12 + 4) = v14 & 3 | *((_BYTE *)v12 + 4) & 0xFC;
      v16 = v73;
      v73 = 0;
      v12[1] = v16;
      *((_BYTE *)v12 + 20) = *((_BYTE *)v12 + 20) & 0xFC | v10 | v19 & 2;
      v17 = v75;
      v75 = 0;
      v12[3] = v17;
      ++*((_DWORD *)v9 - 1);
      sub_182CBA0(v15, v72);
      sub_182CBA0(v15, &v74);
    }
    while ( v62 != v6 );
  }
  else
  {
    v9 = nullptr;
  }
  *(_QWORD *)v77 = 0;
  v76 = a5;
  *(_QWORD *)v78 = 1;
  *(_QWORD *)v79 = 0;
  sub_182CBA0(qword_1C7F2C0, v78);
  LOBYTE(v78[1]) &= ~1u;
  v78[0] = 1;
  v42 = sub_1690D20(v80, a2, v9, a3, &v76);
  v43 = qword_1C7F2C0;
  v44 = v42;
  sub_182CBA0(qword_1C7F2C0, &v76);
  sub_182CBA0(v43, v78);
  sub_251FD0(a1, v44);
  sub_24FE40(a1, v44);
  if ( v70 )
    sub_2BB620(v44);
  if ( v9 )
  {
    v45 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v45 )
    {
      v46 = v9;
      v47 = &v9[4 * v45];
      do
      {
        v48 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v46);
        v49 = v46 + 2;
        v46 += 4;
        sub_182CBA0(v48, v49);
      }
      while ( v47 != v46 );
    }
    sub_186B220(v9 - 1);
  }
  v50 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v83);
  sub_182CBA0(v50, v85);
  v51 = *(_QWORD *)&v82[2];
  if ( *(_QWORD *)&v82[2] )
  {
    v52 = *(unsigned int *)(*(_QWORD *)&v82[2] - 4LL);
    if ( (_DWORD)v52 )
    {
      v53 = *(_QWORD *)&v82[2] + 16 * v52;
      do
      {
        v54 = v51;
        v51 += 16;
        sub_15D0DF0(v54);
      }
      while ( v51 != v53 );
      v51 = *(_QWORD *)&v82[2];
    }
    sub_186B220((void *)(v51 - 8));
  }
  v55 = *(_QWORD *)v82;
  if ( *(_QWORD *)v82 )
  {
    v56 = *(unsigned int *)(*(_QWORD *)v82 - 4LL);
    if ( (_DWORD)v56 )
    {
      v57 = *(_QWORD *)v82 + 32 * v56;
      do
      {
        v58 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v55);
        v59 = v55 + 16;
        v55 += 32;
        sub_182CBA0(v58, v59);
      }
      while ( v57 != v55 );
      v55 = *(_QWORD *)v82;
    }
    sub_186B220((void *)(v55 - 8));
  }
  if ( v70 )
    byte_1C7EBA0 = 1;
  return v44;
}

