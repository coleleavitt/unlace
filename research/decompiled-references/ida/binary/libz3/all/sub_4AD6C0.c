void __fastcall sub_4AD6C0(__int64 a1, unsigned int a2, int a3)
{
  char **exception; // rbp
  char **v4; // rbp
  unsigned int v5; // r12d
  _QWORD *v6; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // edx
  unsigned int *v11; // rbp
  __int64 *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 *v15; // r9
  unsigned __int64 v16; // rcx
  __int64 *v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __m128i v20; // xmm0
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 *v23; // r13
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rbp
  void *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rax
  void *v30; // rbx
  int **v31; // r13
  unsigned int v32; // eax
  void *v33; // rbx
  int *v34; // r15
  unsigned int v35; // eax
  unsigned int v36; // ebx
  unsigned int v37; // r12d
  size_t v38; // rdi
  unsigned int *v39; // rax
  int *v40; // r14
  unsigned int *v41; // r9
  __int64 v42; // rdi
  _DWORD *v43; // rdx
  int *v44; // rax
  int *v45; // rdi
  int v46; // ecx
  char v47; // si
  __int64 v48; // rcx
  char v49; // si
  __int64 v50; // rcx
  __int64 v51; // rax
  int *v52; // rbx
  int *v53; // r12
  unsigned int *v54; // r14
  void *v55; // r13
  _QWORD *v56; // rsi
  __int64 v57; // r14
  __int64 v58; // rdx
  int *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdx
  void *v62; // rbx
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  int *v66; // r12
  int *v67; // rbx
  void *v68; // r14
  _QWORD *v69; // rsi
  _DWORD *v70; // rdx
  __int64 v71; // rax
  unsigned int v72; // [rsp+Ch] [rbp-DCh]
  unsigned int *v73; // [rsp+10h] [rbp-D8h]
  __int64 v74; // [rsp+10h] [rbp-D8h]
  _DWORD *v76; // [rsp+20h] [rbp-C8h]
  int **v77; // [rsp+20h] [rbp-C8h]
  unsigned int *v78; // [rsp+20h] [rbp-C8h]
  unsigned int v79; // [rsp+38h] [rbp-B0h]
  unsigned int v80; // [rsp+38h] [rbp-B0h]
  unsigned int v81; // [rsp+3Ch] [rbp-ACh]
  _QWORD v82[2]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v83[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v84; // [rsp+70h] [rbp-78h] BYREF
  __int64 v85; // [rsp+78h] [rbp-70h]
  __int64 v86; // [rsp+80h] [rbp-68h] BYREF
  __int64 v87; // [rsp+88h] [rbp-60h]
  __int64 v88[11]; // [rsp+90h] [rbp-58h] BYREF

  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_QWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v5 = a2;
    v6 = (_QWORD *)sub_186B270(0x18u);
    v7 = v6 + 1;
    *v6 = 2;
    *(_QWORD *)(a1 + 8) = v6 + 1;
    while ( 1 )
    {
      v8 = *(v7 - 2);
      if ( v8 >= v5 )
        break;
      while ( 1 )
      {
        v9 = (3 * v8 + 1) >> 1;
        v10 = 8 * v9 + 8;
        if ( 8 * v8 + 8 >= v10 || v8 >= v9 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v88, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v88);
          sub_233E40((__int64)v88);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v11 = (unsigned int *)sub_186B270(v10);
        v7 = v11 + 2;
        v12 = *(__int64 **)(a1 + 8);
        if ( !v12 )
          break;
        v13 = *((unsigned int *)v12 - 1);
        v14 = 8 * v13;
        v11[1] = v13;
        v15 = &v12[v13];
        if ( v15 != v12 )
        {
          v16 = v14 - 8;
          v17 = v12;
          if ( (unsigned __int64)(v14 - 8) <= 8 || v12 < (__int64 *)v11 + 3 && v7 < (_DWORD *)v12 + 4 )
          {
            v70 = v11 + 2;
            do
            {
              v71 = *v17;
              *v17++ = 0;
              v70 += 2;
              *((_QWORD *)v70 - 1) = v71;
            }
            while ( v17 != v15 );
          }
          else
          {
            v18 = 0;
            v19 = (v16 >> 3) + 1;
            do
            {
              v20 = _mm_loadu_si128((const __m128i *)&v12[v18 / 2]);
              *(_OWORD *)&v12[v18 / 2] = 0;
              *(__m128i *)&v11[v18 + 2] = v20;
              v18 += 4LL;
            }
            while ( v18 != 4 * (v19 >> 1) );
            if ( (v19 & 1) != 0 )
            {
              v21 = 2 * (v19 & 0xFFFFFFFFFFFFFFFELL);
              v22 = v12[v21 / 2];
              v12[v21 / 2] = 0;
              *(_QWORD *)&v11[v21 + 2] = v22;
            }
          }
        }
        v23 = &v12[v13];
        if ( (_DWORD)v13 )
        {
          v73 = v11;
          v76 = v11 + 2;
          v79 = v5;
          do
          {
            v24 = *v12;
            if ( *v12 )
            {
              v25 = *(unsigned int *)(v24 - 4);
              if ( (_DWORD)v25 )
              {
                v26 = v24 + 32 * v25;
                do
                {
                  v27 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v24);
                  v28 = v24 + 16;
                  v24 += 32;
                  sub_182CBA0(v27, v28);
                }
                while ( v24 != v26 );
                v24 = *v12;
              }
              sub_186B220((void *)(v24 - 8));
            }
            ++v12;
          }
          while ( v12 != v23 );
          v11 = v73;
          v7 = v76;
          v5 = v79;
          v12 = *(__int64 **)(a1 + 8);
        }
        sub_186B220(v12 - 1);
        *v11 = v9;
        *(_QWORD *)(a1 + 8) = v7;
        v8 = *(v7 - 2);
        if ( v8 >= v5 )
          goto LABEL_27;
      }
      v11[1] = 0;
      *(_QWORD *)(a1 + 8) = v7;
      *v11 = v9;
    }
LABEL_27:
    *(v7 - 1) = v5;
    memset(v7, 0, 8LL * v5);
    if ( *(_DWORD *)a1 )
    {
      v74 = 0;
      v29 = 0;
      while ( 1 )
      {
        v82[0] = 0;
        v31 = (int **)&v7[2 * v29];
        v82[1] = 0;
        v83[0] = 1;
        v83[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v83);
        BYTE4(v83[0]) &= ~1u;
        LODWORD(v83[0]) = 1;
        v72 = *(_DWORD *)(a1 + 4);
        v32 = *v31 ? *(*v31 - 1) : 0;
        if ( v32 < v72 )
          break;
LABEL_29:
        v30 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v82);
        sub_182CBA0(v30, v83);
        v29 = ++v74;
        if ( (unsigned int)v74 >= *(_DWORD *)a1 )
          return;
        v7 = *(_DWORD **)(a1 + 8);
      }
      v84 = 0;
      v33 = qword_1C7F2C0;
      v85 = 0;
      v86 = 1;
      v87 = 0;
      if ( (v82[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v84, v82);
      else
        LODWORD(v84) = v82[0];
      if ( (v83[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v33, &v86, v83);
        v34 = *v31;
        if ( *v31 )
        {
LABEL_38:
          v81 = *(v34 - 1);
          if ( v81 >= v72 )
          {
            v64 = 32LL * v72;
            v65 = 32LL * v81;
            v66 = &v34[(unsigned __int64)v64 / 4];
            v67 = &v34[(unsigned __int64)v65 / 4];
            if ( v64 != v65 )
            {
              do
              {
                v68 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v66);
                v69 = v66 + 4;
                v66 += 8;
                sub_182CBA0(v68, v69);
              }
              while ( v67 != v66 );
              v34 = *v31;
            }
            *(v34 - 1) = v72;
LABEL_52:
            v62 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v84);
            sub_182CBA0(v62, &v86);
            goto LABEL_29;
          }
LABEL_39:
          while ( 1 )
          {
            v35 = *(v34 - 2);
            v36 = v72;
            if ( v35 >= v72 )
              break;
            while ( 1 )
            {
              v37 = (3 * v35 + 1) >> 1;
              v38 = 32 * v37 + 8;
              if ( 32 * v35 + 8 >= (unsigned int)v38 || v35 >= v37 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v88, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v88);
                sub_233E40((__int64)v88);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v39 = (unsigned int *)sub_186B270(v38);
              v40 = *v31;
              v41 = v39;
              v34 = (int *)(v39 + 2);
              if ( !*v31 )
                break;
              v42 = (unsigned int)*(v40 - 1);
              v43 = v39 + 2;
              v39[1] = v42;
              v44 = v40;
              v45 = &v40[8 * v42];
              if ( v45 != v40 )
              {
                do
                {
                  v46 = *v44;
                  v47 = *((_BYTE *)v44 + 4);
                  v44 += 8;
                  v43 += 8;
                  *(v43 - 8) = v46;
                  *((_BYTE *)v43 - 28) = v47 & 3 | *(_BYTE *)(v43 - 7) & 0xFC;
                  v48 = *((_QWORD *)v44 - 3);
                  *((_QWORD *)v44 - 3) = 0;
                  *((_QWORD *)v43 - 3) = v48;
                  v49 = *((_BYTE *)v44 - 12);
                  *(v43 - 4) = *(v44 - 4);
                  *((_BYTE *)v43 - 12) = v49 & 3 | *(_BYTE *)(v43 - 3) & 0xFC;
                  v50 = *((_QWORD *)v44 - 1);
                  *((_QWORD *)v44 - 1) = 0;
                  *((_QWORD *)v43 - 1) = v50;
                }
                while ( v44 != v45 );
              }
              v51 = (unsigned int)*(v40 - 1);
              v52 = &v40[8 * v51];
              if ( (_DWORD)v51 )
              {
                v77 = v31;
                v80 = v37;
                v53 = v40;
                v54 = v41;
                do
                {
                  v55 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v53);
                  v56 = v53 + 4;
                  v53 += 8;
                  sub_182CBA0(v55, v56);
                }
                while ( v53 != v52 );
                v31 = v77;
                v41 = v54;
                v37 = v80;
                v40 = *v77;
              }
              v78 = v41;
              sub_186B220(v40 - 2);
              v36 = v72;
              *v31 = v34;
              *v78 = v37;
              v35 = *(v34 - 2);
              if ( v35 >= v72 )
                goto LABEL_50;
            }
            v39[1] = 0;
            *v31 = v34;
            *v39 = v37;
          }
LABEL_50:
          *(v34 - 1) = v36;
          v57 = 32LL * v36;
          v58 = 32LL * v81;
          v59 = &v34[(unsigned __int64)v58 / 4];
          if ( v58 != v57 )
          {
            do
            {
              v59 += 8;
              *(v59 - 8) = v84;
              *((_BYTE *)v59 - 28) = BYTE4(v84) & 3 | *(_BYTE *)(v59 - 7) & 0xFC;
              v60 = v85;
              v85 = 0;
              *((_QWORD *)v59 - 3) = v60;
              *(v59 - 4) = v86;
              *((_BYTE *)v59 - 12) = BYTE4(v86) & 3 | *(_BYTE *)(v59 - 3) & 0xFC;
              v61 = v87;
              v87 = 0;
              *((_QWORD *)v59 - 1) = v61;
            }
            while ( &v34[(unsigned __int64)v57 / 4] != v59 );
          }
          goto LABEL_52;
        }
      }
      else
      {
        v34 = *v31;
        BYTE4(v86) &= ~1u;
        LODWORD(v86) = v83[0];
        if ( v34 )
          goto LABEL_38;
      }
      v81 = 0;
      v63 = (_QWORD *)sub_186B270(0x48u);
      v34 = (int *)(v63 + 1);
      *v31 = (int *)(v63 + 1);
      *v63 = 2;
      goto LABEL_39;
    }
  }
}

