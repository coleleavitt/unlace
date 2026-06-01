__int64 __fastcall sub_18417B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 *v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // edx
  _BYTE *v9; // rax
  __int64 *v10; // rcx
  _BYTE *v11; // r15
  unsigned int *v12; // r14
  __int64 *v13; // r12
  __int64 *v14; // rbp
  _BYTE *v15; // rsi
  __int64 *v16; // rax
  size_t v17; // rbx
  unsigned __int64 v18; // r13
  __int64 v19; // r13
  unsigned __int64 v20; // rdi
  __int64 *v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned int v24; // ebx
  _BYTE *v25; // rdi
  char *v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r10
  char *v31; // rsi
  __int64 v32; // rdx
  void **v33; // rbx
  unsigned __int64 v34; // rax
  void **v35; // r15
  void **v36; // rbp
  void **v37; // rdi
  void **v38; // rdi
  void **v39; // r15
  void **v40; // rbp
  void **v41; // r13
  unsigned __int64 v42; // rax
  void **v43; // rbp
  void **v44; // rbx
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // rbp
  void **v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rbp
  __int64 v54; // rbx
  void *v55; // rdi
  unsigned __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbp
  __int64 v63; // r15
  __int64 v64; // rbp
  void *v65; // rdi
  __int64 v66; // [rsp+0h] [rbp-138h]
  __int64 v67; // [rsp+8h] [rbp-130h]
  __int64 *v68; // [rsp+10h] [rbp-128h]
  __int64 *v69; // [rsp+20h] [rbp-118h]
  __int64 *v70; // [rsp+28h] [rbp-110h]
  __int64 v71; // [rsp+30h] [rbp-108h]
  void *v75; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v76; // [rsp+58h] [rbp-E0h]
  int v77; // [rsp+60h] [rbp-D8h]
  void *v78; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v79; // [rsp+78h] [rbp-C0h]
  int v80; // [rsp+80h] [rbp-B8h]

  result = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)result )
  {
    v71 = 8LL * (unsigned int)(result - 1) + 8;
    v68 = (__int64 *)(a1 + 8);
    v66 = 0;
    do
    {
      v67 = *(_QWORD *)(*(_QWORD *)a3 + v66);
      sub_168B9B0((__int64)&v78, (__int64)v68, 6017);
      v4 = (unsigned __int8 *)v78;
      if ( !v78 )
      {
        v56 = v79;
        v57 = *(_DWORD *)(v79 + 14976);
        if ( v57 )
        {
          v61 = (unsigned int)(v57 - 1);
          *(_DWORD *)(v79 + 14976) = v61;
          v4 = *(unsigned __int8 **)(v56 + 8 * v61 + 14848);
          v62 = *((unsigned int *)v4 + 134);
          *v4 = 0;
          v63 = *((_QWORD *)v4 + 66);
          *((_DWORD *)v4 + 106) = 0;
          v64 = v63 + (v62 << 6);
          while ( v63 != v64 )
          {
            while ( 1 )
            {
              v64 -= 64;
              v65 = *(void **)(v64 + 24);
              if ( v65 == (void *)(v64 + 40) )
                break;
              operator delete(v65);
              if ( v63 == v64 )
                goto LABEL_100;
            }
          }
LABEL_100:
          *((_DWORD *)v4 + 134) = 0;
        }
        else
        {
          v4 = (unsigned __int8 *)operator new(0x3A0u);
          *v4 = 0;
          *((_QWORD *)v4 + 12) = v4 + 112;
          *((_QWORD *)v4 + 16) = v4 + 144;
          *((_QWORD *)v4 + 20) = v4 + 176;
          *((_QWORD *)v4 + 24) = v4 + 208;
          *((_QWORD *)v4 + 28) = v4 + 240;
          *((_QWORD *)v4 + 32) = v4 + 272;
          *((_QWORD *)v4 + 36) = v4 + 304;
          *((_QWORD *)v4 + 40) = v4 + 336;
          *((_QWORD *)v4 + 44) = v4 + 368;
          *((_QWORD *)v4 + 48) = v4 + 400;
          *((_QWORD *)v4 + 52) = v4 + 432;
          *((_QWORD *)v4 + 13) = 0;
          v4[112] = 0;
          *((_QWORD *)v4 + 17) = 0;
          v4[144] = 0;
          *((_QWORD *)v4 + 21) = 0;
          v4[176] = 0;
          *((_QWORD *)v4 + 25) = 0;
          v4[208] = 0;
          *((_QWORD *)v4 + 29) = 0;
          v4[240] = 0;
          *((_QWORD *)v4 + 33) = 0;
          v4[272] = 0;
          *((_QWORD *)v4 + 37) = 0;
          v4[304] = 0;
          *((_QWORD *)v4 + 41) = 0;
          v4[336] = 0;
          *((_QWORD *)v4 + 45) = 0;
          v4[368] = 0;
          *((_QWORD *)v4 + 49) = 0;
          v4[400] = 0;
          *((_QWORD *)v4 + 53) = 0x800000000LL;
          *((_QWORD *)v4 + 66) = v4 + 544;
          *((_QWORD *)v4 + 67) = 0x600000000LL;
        }
        v78 = v4;
      }
      v4[*v4 + 1] = 10;
      v5 = v78;
      v6 = *(unsigned __int8 *)v78;
      *(_BYTE *)v78 = v6 + 1;
      v5[v6 + 2] = v67;
      v75 = nullptr;
      v77 = v80;
      v7 = v79;
      v76 = v79;
      if ( v78 )
      {
        v8 = *(_DWORD *)(v79 + 14976);
        if ( v8 )
        {
          v51 = (unsigned int)(v8 - 1);
          *(_DWORD *)(v79 + 14976) = v51;
          v11 = *(_BYTE **)(v7 + 8 * v51 + 14848);
          v52 = *((unsigned int *)v11 + 134);
          *v11 = 0;
          v53 = *((_QWORD *)v11 + 66);
          *((_DWORD *)v11 + 106) = 0;
          v54 = v53 + (v52 << 6);
          while ( v53 != v54 )
          {
            while ( 1 )
            {
              v54 -= 64;
              v55 = *(void **)(v54 + 24);
              if ( v55 == (void *)(v54 + 40) )
                break;
              operator delete(v55);
              if ( v53 == v54 )
                goto LABEL_86;
            }
          }
LABEL_86:
          v10 = (__int64 *)(v11 + 112);
          *((_DWORD *)v11 + 134) = 0;
          v69 = (__int64 *)(v11 + 432);
        }
        else
        {
          v9 = (_BYTE *)operator new(0x3A0u);
          v10 = (__int64 *)(v9 + 112);
          v11 = v9;
          *v9 = 0;
          v9 += 144;
          *((_QWORD *)v9 - 6) = v10;
          *((_QWORD *)v9 - 5) = 0;
          *(v9 - 32) = 0;
          *((_QWORD *)v11 + 16) = v9;
          *((_QWORD *)v11 + 20) = v11 + 176;
          *((_QWORD *)v11 + 24) = v11 + 208;
          *((_QWORD *)v11 + 28) = v11 + 240;
          *((_QWORD *)v11 + 32) = v11 + 272;
          *((_QWORD *)v11 + 36) = v11 + 304;
          *((_QWORD *)v11 + 40) = v11 + 336;
          *((_QWORD *)v11 + 44) = v11 + 368;
          *((_QWORD *)v11 + 48) = v11 + 400;
          v69 = (__int64 *)(v11 + 432);
          *((_QWORD *)v11 + 17) = 0;
          v11[144] = 0;
          *((_QWORD *)v11 + 21) = 0;
          v11[176] = 0;
          *((_QWORD *)v11 + 25) = 0;
          v11[208] = 0;
          *((_QWORD *)v11 + 29) = 0;
          v11[240] = 0;
          *((_QWORD *)v11 + 33) = 0;
          v11[272] = 0;
          *((_QWORD *)v11 + 37) = 0;
          v11[304] = 0;
          *((_QWORD *)v11 + 41) = 0;
          v11[336] = 0;
          *((_QWORD *)v11 + 45) = 0;
          v11[368] = 0;
          *((_QWORD *)v11 + 49) = 0;
          v11[400] = 0;
          *((_QWORD *)v11 + 52) = v11 + 432;
          *((_QWORD *)v11 + 53) = 0x800000000LL;
          *((_QWORD *)v11 + 66) = v11 + 544;
          *((_QWORD *)v11 + 67) = 0x600000000LL;
        }
        v12 = (unsigned int *)v78;
        v75 = v11;
        v13 = v10;
        v14 = (__int64 *)((char *)v78 + 96);
        *v11 = *(_BYTE *)v78;
        v11[1] = *((_BYTE *)v12 + 1);
        v11[2] = *((_BYTE *)v12 + 2);
        v11[3] = *((_BYTE *)v12 + 3);
        v11[4] = *((_BYTE *)v12 + 4);
        v11[5] = *((_BYTE *)v12 + 5);
        v11[6] = *((_BYTE *)v12 + 6);
        v11[7] = *((_BYTE *)v12 + 7);
        v11[8] = *((_BYTE *)v12 + 8);
        v11[9] = *((_BYTE *)v12 + 9);
        v11[10] = *((_BYTE *)v12 + 10);
        *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
        *((_QWORD *)v11 + 3) = *((_QWORD *)v12 + 3);
        *((_QWORD *)v11 + 4) = *((_QWORD *)v12 + 4);
        *((_QWORD *)v11 + 5) = *((_QWORD *)v12 + 5);
        *((_QWORD *)v11 + 6) = *((_QWORD *)v12 + 6);
        *((_QWORD *)v11 + 7) = *((_QWORD *)v12 + 7);
        *((_QWORD *)v11 + 8) = *((_QWORD *)v12 + 8);
        *((_QWORD *)v11 + 9) = *((_QWORD *)v12 + 9);
        *((_QWORD *)v11 + 10) = *((_QWORD *)v12 + 10);
        *((_QWORD *)v11 + 11) = *((_QWORD *)v12 + 11);
        do
        {
          if ( v14 != v13 - 2 )
          {
            v16 = (__int64 *)*(v13 - 2);
            v17 = v14[1];
            if ( v16 == v13 )
              v18 = 15;
            else
              v18 = *v13;
            if ( v17 > v18 )
            {
              if ( (v17 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_create");
              v19 = 2 * v18;
              if ( v17 < v19 )
              {
                v20 = v19 + 1;
                if ( v19 < 0 )
                {
                  v20 = 0x8000000000000000LL;
                  v19 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v20 = v17 + 1;
                v19 = v14[1];
              }
              v16 = (__int64 *)operator new(v20);
              v21 = (__int64 *)*(v13 - 2);
              if ( v21 != v13 )
              {
                v70 = v16;
                operator delete(v21);
                v16 = v70;
              }
              *(v13 - 2) = (__int64)v16;
              *v13 = v19;
            }
            if ( v17 )
            {
              v15 = (_BYTE *)*v14;
              if ( v17 == 1 )
                *(_BYTE *)v16 = *v15;
              else
                memcpy(v16, v15, v17);
              v16 = (__int64 *)*(v13 - 2);
            }
            *(v13 - 1) = v17;
            *((_BYTE *)v16 + v17) = 0;
          }
          v14 += 4;
          v13 += 4;
        }
        while ( v69 != v13 );
        if ( v11 + 416 != (_BYTE *)(v12 + 104) )
        {
          v22 = v12[106];
          v23 = *((unsigned int *)v11 + 106);
          v24 = v12[106];
          if ( v22 <= v23 )
          {
            if ( v12[106] )
            {
              v58 = *((_QWORD *)v11 + 52);
              v59 = *((_QWORD *)v12 + 52);
              v60 = 0;
              do
              {
                *(_QWORD *)(v58 + v60) = *(_QWORD *)(v59 + v60);
                *(_BYTE *)(v58 + v60 + 8) = *(_BYTE *)(v59 + v60 + 8);
                v60 += 12;
              }
              while ( 12 * v22 != v60 );
            }
          }
          else
          {
            if ( v22 > *((unsigned int *)v11 + 107) )
            {
              *((_DWORD *)v11 + 106) = 0;
              sub_2237220(v11 + 416, v69, v22, 12);
              v26 = *((char **)v12 + 52);
              v25 = *((_BYTE **)v11 + 52);
              v30 = 0;
              v22 = v12[106];
              v31 = v26;
            }
            else
            {
              v25 = *((_BYTE **)v11 + 52);
              v26 = *((char **)v12 + 52);
              if ( *((_DWORD *)v11 + 106) )
              {
                v27 = 3 * v23;
                v28 = 0;
                v29 = 4 * v27;
                v30 = v29;
                do
                {
                  *(_QWORD *)&v25[v28] = *(_QWORD *)&v26[v28];
                  v25[v28 + 8] = v26[v28 + 8];
                  v28 += 12;
                }
                while ( v29 != v28 );
                v22 = v12[106];
                v25 += v29;
                v31 = &v26[v29];
              }
              else
              {
                v31 = *((char **)v12 + 52);
                v30 = 0;
              }
            }
            v32 = 12 * v22;
            if ( v31 != &v26[v32] )
              memcpy(v25, v31, v32 - v30);
          }
          *((_DWORD *)v11 + 106) = v24;
        }
        sub_9EED30((__int64)(v11 + 528), (__int64 *)v12 + 66);
        v33 = (void **)v78;
        if ( v78 )
        {
          v34 = v79;
          if ( v79 )
          {
            if ( (unsigned __int64)v78 < v79 || (unsigned __int64)v78 > v79 + 14848 )
            {
              v35 = *((void ***)v78 + 66);
              v36 = &v35[8 * (unsigned __int64)*((unsigned int *)v78 + 134)];
              if ( v35 != v36 )
              {
                do
                {
                  while ( 1 )
                  {
                    v36 -= 8;
                    v37 = (void **)v36[3];
                    if ( v37 == v36 + 5 )
                      break;
                    operator delete(v37);
                    if ( v35 == v36 )
                      goto LABEL_40;
                  }
                }
                while ( v35 != v36 );
LABEL_40:
                v36 = (void **)v33[66];
              }
              if ( v36 != v33 + 68 )
                free(v36);
              v38 = (void **)v33[52];
              if ( v38 != v33 + 54 )
                free(v38);
              v39 = v33 + 48;
              v40 = v33 + 8;
              do
              {
                while ( *v39 != v39 + 2 )
                {
                  operator delete(*v39);
                  v39 -= 4;
                  if ( v39 == v40 )
                    goto LABEL_48;
                }
                v39 -= 4;
              }
              while ( v40 != v39 );
LABEL_48:
              operator delete(v33, 0x3A0u);
            }
            else
            {
              v50 = *(unsigned int *)(v79 + 14976);
              *(_DWORD *)(v79 + 14976) = v50 + 1;
              *(_QWORD *)(v34 + 8 * v50 + 14848) = v33;
            }
          }
        }
      }
      sub_1BE63A0(a1, &v75, *(_QWORD *)(a2 + 48), *(_QWORD *)(v67 + 48));
      sub_168CDE0((__int64)&v78, v68, *(_DWORD *)(v67 + 24), (__int64)&v75, 0);
      sub_15F7200(&v78);
      v41 = (void **)v75;
      if ( v75 )
      {
        v42 = v76;
        if ( v76 )
        {
          if ( (unsigned __int64)v75 < v76 || (unsigned __int64)v75 > v76 + 14848 )
          {
            v43 = *((void ***)v75 + 66);
            v44 = &v43[8 * (unsigned __int64)*((unsigned int *)v75 + 134)];
            if ( v43 != v44 )
            {
              do
              {
                while ( 1 )
                {
                  v44 -= 8;
                  v45 = (void **)v44[3];
                  if ( v45 == v44 + 5 )
                    break;
                  operator delete(v45);
                  if ( v43 == v44 )
                    goto LABEL_55;
                }
              }
              while ( v43 != v44 );
LABEL_55:
              v44 = (void **)v41[66];
            }
            if ( v44 != v41 + 68 )
              free(v44);
            v46 = (void **)v41[52];
            if ( v46 != v41 + 54 )
              free(v46);
            v47 = v41 + 48;
            v48 = v41 + 8;
            do
            {
              while ( *v47 != v47 + 2 )
              {
                operator delete(*v47);
                v47 -= 4;
                if ( v47 == v48 )
                  goto LABEL_63;
              }
              v47 -= 4;
            }
            while ( v47 != v48 );
LABEL_63:
            operator delete(v41, 0x3A0u);
          }
          else
          {
            v49 = *(unsigned int *)(v76 + 14976);
            *(_DWORD *)(v76 + 14976) = v49 + 1;
            *(_QWORD *)(v42 + 8 * v49 + 14848) = v41;
          }
        }
      }
      v66 += 8;
      result = v66;
    }
    while ( v71 != v66 );
  }
  return result;
}
