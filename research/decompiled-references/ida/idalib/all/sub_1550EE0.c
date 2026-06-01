__int64 __fastcall sub_1550EE0(const __m128i *a1, int a2, int a3, double a4, __m128 a5)
{
  __int64 v5; // r12
  int *m128i_i32; // rbp
  __int16 v7; // ax
  __int32 v8; // ebx
  int *v9; // rsi
  __int64 *v10; // rdi
  __int32 v11; // eax
  bool v12; // r13
  __int16 v13; // ax
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbp
  bool v20; // zf
  __int32 v21; // eax
  __int64 *v22; // rdi
  __int64 *v23; // rdi
  void **v24; // r14
  unsigned __int64 v25; // rax
  void **v26; // rdx
  void **v27; // r15
  unsigned int v28; // r12d
  void **v29; // rbx
  void **v30; // rdi
  void **v31; // rdi
  void **v32; // r15
  __int64 *v33; // rdi
  int v34; // ebp
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned __int8 *v39; // rbx
  _QWORD *v40; // rdx
  __int64 v41; // rax
  void **v42; // rbp
  unsigned __int64 v43; // rax
  void **v44; // r12
  void **v45; // rbx
  void **v46; // rdi
  void **v47; // rdi
  void **v48; // rbx
  void **v49; // r12
  unsigned __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // r12
  __int64 v57; // rbp
  void *v58; // rdi
  __int64 v59; // [rsp+8h] [rbp-E0h]
  unsigned int v62; // [rsp+20h] [rbp-C8h]
  __int64 v63; // [rsp+20h] [rbp-C8h]
  void **v64; // [rsp+20h] [rbp-C8h]
  char v65; // [rsp+20h] [rbp-C8h]
  __int32 v66; // [rsp+28h] [rbp-C0h]
  __int128 v67; // [rsp+30h] [rbp-B8h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-A8h]
  __int128 v69; // [rsp+50h] [rbp-98h]
  void *v70; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v71; // [rsp+68h] [rbp-80h]
  __int64 v72; // [rsp+70h] [rbp-78h]
  void *v73; // [rsp+80h] [rbp-68h]
  _BYTE v74[16]; // [rsp+90h] [rbp-58h] BYREF
  __int16 v75; // [rsp+A0h] [rbp-48h]

  v5 = (__int64)a1;
  m128i_i32 = a1[1].m128i_i32;
  v67 = 0;
  *(_OWORD *)ptr = 0;
  v69 = 0;
  sub_14D0170(a1, (__int64)&v67, 0, 0, 0, nullptr, (__m128i)0LL, 0, nullptr, 0, 0, 0);
  v7 = a1[2].m128i_i16[0];
  if ( v7 == 418 )
  {
    v8 = a1[1].m128i_i32[0];
    v9 = a1[1].m128i_i32;
    v10 = (__int64 *)a1->m128i_i64[1];
    v59 = *(_QWORD *)(v5 + 24);
    v11 = *(_DWORD *)(v5 + 20);
    if ( !v11 )
      v11 = v8;
    v12 = 0;
    *(_DWORD *)(v5 + 40) = v11;
    sub_14634E0(v10, v9);
    v66 = v8;
  }
  else
  {
    v20 = v7 == 151;
    v21 = a1[1].m128i_i32[0];
    v22 = (__int64 *)a1->m128i_i64[1];
    v12 = v20;
    *(_DWORD *)(v5 + 40) = v21;
    sub_14634E0(v22, m128i_i32);
    v59 = 0;
    v66 = *(_DWORD *)(v5 + 40);
  }
  v13 = *(_WORD *)(v5 + 32);
  v14 = *(_DWORD *)(v5 + 16);
  v15 = 0;
  if ( v13 == 27 )
  {
    *(_DWORD *)(v5 + 40) = v14;
    sub_14634E0(*(__int64 **)(v5 + 8), m128i_i32);
    v15 = *(_DWORD *)(v5 + 40);
    sub_1564820(&v70, v5, v15, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 56LL) + 1LL) & 0x10) == 0 ? 96 : 135);
    if ( (_BYTE)v75 )
    {
      sub_FC7790(v72, (__int64 *)&v70, SHIBYTE(v75));
      v72 = 0;
      v75 = 0;
    }
    if ( v73 != v74 )
      operator delete(v73);
    v24 = (void **)v70;
    if ( v70 )
    {
      v25 = v71;
      if ( v71 )
      {
        if ( (unsigned __int64)v70 >= v71 && (unsigned __int64)v70 <= v71 + 14848 )
        {
          v52 = *(unsigned int *)(v71 + 14976);
          *(_DWORD *)(v71 + 14976) = v52 + 1;
          *(_QWORD *)(v25 + 8 * v52 + 14848) = v24;
        }
        else
        {
          v26 = *((void ***)v70 + 66);
          v27 = &v26[8 * (unsigned __int64)*((unsigned int *)v70 + 134)];
          if ( v26 != v27 )
          {
            v63 = v5;
            v28 = v15;
            v29 = *((void ***)v70 + 66);
            do
            {
              while ( 1 )
              {
                v27 -= 8;
                v30 = (void **)v27[3];
                if ( v30 == v27 + 5 )
                  break;
                operator delete(v30);
                if ( v29 == v27 )
                  goto LABEL_31;
              }
            }
            while ( v29 != v27 );
LABEL_31:
            v15 = v28;
            v27 = (void **)v24[66];
            v5 = v63;
          }
          if ( v27 != v24 + 68 )
            free(v27);
          v31 = (void **)v24[52];
          v32 = v24 + 52;
          if ( v31 != v24 + 54 )
            free(v31);
          v64 = v24 + 12;
          do
          {
            while ( 1 )
            {
              v32 -= 4;
              if ( *v32 == v32 + 2 )
                break;
              operator delete(*v32);
              if ( v64 == v32 )
                goto LABEL_39;
            }
          }
          while ( v64 != v32 );
LABEL_39:
          operator delete(v24, 0x3A0u);
        }
      }
    }
    v14 = *(_DWORD *)(v5 + 16);
    v13 = *(_WORD *)(v5 + 32);
  }
  if ( v13 == 5 )
  {
    *(_DWORD *)(v5 + 40) = v14;
    v16 = *(_QWORD *)(v5 + 24);
    sub_14634E0(*(__int64 **)(v5 + 8), m128i_i32);
    v13 = *(_WORD *)(v5 + 32);
    if ( v13 != 27 )
      goto LABEL_10;
    goto LABEL_18;
  }
  if ( (v13 & 0xFFFD) != 0x40 && (unsigned __int16)(v13 - 52) > 1u )
  {
    sub_1564820(&v70, v5, v14, 14);
    v39 = (unsigned __int8 *)v70;
    if ( !v70 )
    {
      v50 = v71;
      v51 = *(_DWORD *)(v71 + 14976);
      if ( v51 )
      {
        v54 = (unsigned int)(v51 - 1);
        *(_DWORD *)(v71 + 14976) = v54;
        v39 = *(unsigned __int8 **)(v50 + 8 * v54 + 14848);
        v55 = *((unsigned int *)v39 + 134);
        *v39 = 0;
        v56 = *((_QWORD *)v39 + 66);
        *((_DWORD *)v39 + 106) = 0;
        v57 = v56 + (v55 << 6);
        while ( v56 != v57 )
        {
          while ( 1 )
          {
            v57 -= 64;
            v58 = *(void **)(v57 + 24);
            if ( v58 == (void *)(v57 + 40) )
              break;
            operator delete(v58);
            if ( v56 == v57 )
              goto LABEL_83;
          }
        }
LABEL_83:
        *((_DWORD *)v39 + 134) = 0;
      }
      else
      {
        v39 = (unsigned __int8 *)operator new(0x3A0u);
        *v39 = 0;
        *((_QWORD *)v39 + 12) = v39 + 112;
        *((_QWORD *)v39 + 16) = v39 + 144;
        *((_QWORD *)v39 + 20) = v39 + 176;
        *((_QWORD *)v39 + 24) = v39 + 208;
        *((_QWORD *)v39 + 28) = v39 + 240;
        *((_QWORD *)v39 + 32) = v39 + 272;
        *((_QWORD *)v39 + 36) = v39 + 304;
        *((_QWORD *)v39 + 40) = v39 + 336;
        *((_QWORD *)v39 + 44) = v39 + 368;
        *((_QWORD *)v39 + 48) = v39 + 400;
        *((_QWORD *)v39 + 52) = v39 + 432;
        *((_QWORD *)v39 + 13) = 0;
        v39[112] = 0;
        *((_QWORD *)v39 + 17) = 0;
        v39[144] = 0;
        *((_QWORD *)v39 + 21) = 0;
        v39[176] = 0;
        *((_QWORD *)v39 + 25) = 0;
        v39[208] = 0;
        *((_QWORD *)v39 + 29) = 0;
        v39[240] = 0;
        *((_QWORD *)v39 + 33) = 0;
        v39[272] = 0;
        *((_QWORD *)v39 + 37) = 0;
        v39[304] = 0;
        *((_QWORD *)v39 + 41) = 0;
        v39[336] = 0;
        *((_QWORD *)v39 + 45) = 0;
        v39[368] = 0;
        *((_QWORD *)v39 + 49) = 0;
        v39[400] = 0;
        *((_QWORD *)v39 + 53) = 0x800000000LL;
        *((_QWORD *)v39 + 66) = v39 + 544;
        *((_QWORD *)v39 + 67) = 0x600000000LL;
      }
      v70 = v39;
    }
    v39[*v39 + 1] = 4;
    v40 = v70;
    v41 = *(unsigned __int8 *)v70;
    *(_BYTE *)v70 = v41 + 1;
    v40[v41 + 2] = 5;
    if ( (_BYTE)v75 )
    {
      sub_FC7790(v72, (__int64 *)&v70, SHIBYTE(v75));
      v72 = 0;
      v75 = 0;
    }
    if ( v73 != v74 )
      operator delete(v73);
    v42 = (void **)v70;
    if ( v70 )
    {
      v43 = v71;
      if ( v71 )
      {
        if ( (unsigned __int64)v70 >= v71 && (unsigned __int64)v70 <= v71 + 14848 )
        {
          v53 = *(unsigned int *)(v71 + 14976);
          *(_DWORD *)(v71 + 14976) = v53 + 1;
          *(_QWORD *)(v43 + 8 * v53 + 14848) = v42;
          v18 = 0;
          goto LABEL_13;
        }
        v44 = *((void ***)v70 + 66);
        v45 = &v44[8 * (unsigned __int64)*((unsigned int *)v70 + 134)];
        if ( v44 != v45 )
        {
          do
          {
            while ( 1 )
            {
              v45 -= 8;
              v46 = (void **)v45[3];
              if ( v46 == v45 + 5 )
                break;
              operator delete(v46);
              if ( v44 == v45 )
                goto LABEL_56;
            }
          }
          while ( v44 != v45 );
LABEL_56:
          v45 = (void **)v42[66];
        }
        if ( v45 != v42 + 68 )
          free(v45);
        v47 = (void **)v42[52];
        if ( v47 != v42 + 54 )
          free(v47);
        v48 = v42 + 48;
        v49 = v42 + 8;
        do
        {
          while ( *v48 != v48 + 2 )
          {
            operator delete(*v48);
            v48 -= 4;
            if ( v48 == v49 )
              goto LABEL_64;
          }
          v48 -= 4;
        }
        while ( v49 != v48 );
LABEL_64:
        operator delete(v42, 0x3A0u);
      }
    }
    v18 = 0;
    goto LABEL_13;
  }
  LODWORD(v16) = 0;
  if ( v13 == 27 )
  {
LABEL_18:
    v23 = *(__int64 **)(v5 + 8);
    *(_DWORD *)(v5 + 40) = *(_DWORD *)(v5 + 16);
    sub_14634E0(v23, m128i_i32);
    v62 = *(_DWORD *)(v5 + 40);
    sub_154FF40(v5, v62, v14, v15 != 0, 1u);
    v13 = *(_WORD *)(v5 + 32);
    v15 = v62;
  }
LABEL_10:
  if ( v13 == 64 )
  {
    v33 = *(__int64 **)(v5 + 8);
    *(_DWORD *)(v5 + 40) = *(_DWORD *)(v5 + 16);
    sub_14634E0(v33, m128i_i32);
    v34 = *(_DWORD *)(v5 + 40);
    ++*(_DWORD *)(v5 + 2548);
    v35 = *(_BYTE *)(v5 + 2696);
    *(_BYTE *)(v5 + 2696) = 1;
    v65 = v35;
    v36 = sub_1496480(v5, nullptr, 23, 3u, nullptr, 0, (__m128i)0LL, a5);
    v37 = *(_QWORD *)(v5 + 96);
    --*(_DWORD *)(v5 + 2548);
    v38 = sub_1CCBFB0(v37, *(_QWORD *)(v37 + 608), v12, v15, v66, v16, v14, a2, a3, v34, v36, v59 != 0);
    v18 = v38;
    if ( v59 )
      sub_1CD20C0(*(_QWORD *)(v5 + 96), &v67, v59, v38, v15);
    *(_BYTE *)(v5 + 2696) = v65;
  }
  else
  {
    v17 = sub_1CCBFB0(
            *(_QWORD *)(v5 + 96),
            *(_QWORD *)(*(_QWORD *)(v5 + 96) + 608LL),
            v12,
            v15,
            v66,
            v16,
            v14,
            a2,
            a3,
            0,
            0,
            v59 != 0);
    v18 = v17;
    if ( v59 )
      sub_1CD20C0(*(_QWORD *)(v5 + 96), &v67, v59, v17, v15);
  }
LABEL_13:
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  return v18;
}
