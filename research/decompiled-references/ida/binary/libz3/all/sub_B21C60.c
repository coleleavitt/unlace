__int64 __fastcall sub_B21C60(__int64 a1)
{
  char **v1; // rbp
  char **exception; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // ebp
  int v8; // eax
  _QWORD *v9; // rdi
  int v10; // r12d
  __int64 v11; // rax
  _DWORD *v12; // rax
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  unsigned int v18; // r12d
  unsigned int v19; // ebp
  unsigned int v20; // r14d
  int v21; // r13d
  unsigned int *v22; // rdx
  __int64 v23; // rcx
  unsigned int *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int *v28; // r12
  int *v29; // rdx
  _QWORD *v30; // r8
  _QWORD *v31; // rax
  int v32; // esi
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rdi
  int v37; // r10d
  int v38; // esi
  __int64 v39; // rsi
  bool v40; // zf
  __int64 v41; // rdx
  int *v42; // rax
  int *v43; // rdx
  char v44; // r8
  __int64 v45; // r15
  int v46; // r10d
  __int64 v47; // r11
  char v48; // di
  __int64 v49; // rcx
  char v50; // r9
  char v51; // r9
  int v52; // esi
  __int64 v53; // rcx
  char v54; // r9
  char v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rdx
  void *v58; // r15
  unsigned int v59; // r13d
  size_t v60; // rsi
  unsigned int *v61; // rax
  __int64 v62; // rax
  int v63; // esi
  _QWORD *v64; // rax
  __int64 v65; // [rsp+8h] [rbp-90h]
  _QWORD *v66; // [rsp+8h] [rbp-90h]
  int v67; // [rsp+10h] [rbp-88h]
  _QWORD *v68; // [rsp+10h] [rbp-88h]
  __int64 v69; // [rsp+20h] [rbp-78h]
  __int64 v70; // [rsp+28h] [rbp-70h]
  __int64 v71[2]; // [rsp+40h] [rbp-58h] BYREF
  int v72; // [rsp+50h] [rbp-48h] BYREF
  char v73; // [rsp+54h] [rbp-44h]
  __int64 v74; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  result = *(_QWORD *)(a1 + 32);
  ++*(_DWORD *)(a1 + 84);
  v7 = 0;
  if ( result )
  {
    while ( v7 < *(_DWORD *)(result - 4) )
    {
      v8 = sub_B21A10(a1, *(unsigned int **)(result + 8LL * v7));
      v9 = *(_QWORD **)(a1 + 112);
      v10 = v8;
      if ( v9 )
      {
        v11 = *((unsigned int *)v9 - 1);
        if ( (_DWORD)v11 == *((_DWORD *)v9 - 2) )
        {
          v13 = (unsigned int)(3 * v11 + 1) >> 1;
          v14 = 4 * v13 + 8;
          if ( 4 * (int)v11 + 8 >= (unsigned int)v14 || (unsigned int)v11 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v71, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v9 - 1, v14);
          v9 = v15 + 2;
          *v15 = v13;
          v16 = v15[1];
          *(_QWORD *)(a1 + 112) = v9;
          v12 = (_DWORD *)v9 + v16;
        }
        else
        {
          v12 = (_DWORD *)v9 + v11;
        }
      }
      else
      {
        v17 = (_QWORD *)sub_186B270(0x10u);
        v9 = v17 + 1;
        *v17 = 2;
        *(_QWORD *)(a1 + 112) = v17 + 1;
        v12 = v17 + 1;
      }
      *v12 = v10;
      result = *(_QWORD *)(a1 + 32);
      ++v7;
      ++*((_DWORD *)v9 - 1);
      if ( !result )
        return result;
    }
    v18 = 0;
    do
    {
      if ( v18 >= *(_DWORD *)(result - 4) )
        break;
      v19 = v18 + 1;
      v20 = v18 + 1;
      v21 = sub_B21620(a1, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * v18));
      for ( result = *(_QWORD *)(a1 + 32); result; ++v20 )
      {
        if ( v20 >= *(_DWORD *)(result - 4) )
          break;
        if ( v21 == (unsigned int)sub_B21620(a1, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * v20)) )
        {
          if ( v20 != v19 )
          {
            v25 = *(_QWORD *)(a1 + 112);
            v26 = v19;
            v27 = *(_QWORD *)(a1 + 32);
            v28 = (int *)(v25 + 4LL * v20);
            v29 = (int *)(v25 + 4LL * v19);
            v30 = (_QWORD *)(v27 + 8LL * v20);
            v31 = (_QWORD *)(8LL * v19 + v27);
            v32 = *v29;
            *v29 = *v28;
            v33 = *(_QWORD *)a1;
            *v28 = v32;
            v34 = *v30;
            v70 = v33;
            v35 = *v31;
            v36 = *(_QWORD *)(a1 + 24);
            if ( *v30 )
            {
              v37 = *(_DWORD *)(v34 + 8);
              v38 = v37 + 1;
              *(_DWORD *)(v34 + 8) = v37 + 1;
              if ( v35 )
              {
                ++*(_DWORD *)(v35 + 8);
                v38 = *(_DWORD *)(v34 + 8);
                v37 = v38 - 1;
              }
              *(_DWORD *)(v34 + 8) = v37;
              if ( v37 )
              {
                *v30 = v35;
              }
              else
              {
                v69 = v35;
                v66 = v30;
                sub_15D7BC0(v36, v34);
                v63 = *(_DWORD *)(v34 + 8);
                v36 = *(_QWORD *)(a1 + 24);
                v26 = v19;
                *v66 = v69;
                v31 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v19);
                v38 = v63 + 1;
              }
              *(_DWORD *)(v34 + 8) = v38;
            }
            else
            {
              if ( v35 )
                ++*(_DWORD *)(v35 + 8);
              *v30 = v35;
            }
            v39 = *v31;
            if ( *v31 )
            {
              v40 = (*(_DWORD *)(v39 + 8))-- == 1;
              if ( v40 )
              {
                v68 = v31;
                v65 = v26;
                sub_15D7BC0(v36, v39);
                v31 = v68;
                v26 = v65;
              }
            }
            v41 = *(_QWORD *)(a1 + 40);
            *v31 = v34;
            v42 = (int *)(v41 + 32LL * v20);
            v43 = (int *)(32 * v26 + v41);
            v44 = *((_BYTE *)v43 + 4);
            v45 = *((_QWORD *)v43 + 1);
            *((_QWORD *)v43 + 1) = 0;
            v46 = *v43;
            v47 = *((_QWORD *)v43 + 3);
            *((_QWORD *)v43 + 3) = 0;
            v48 = *((_BYTE *)v43 + 20);
            v67 = v43[4];
            *v43 = *v42;
            v49 = *((_QWORD *)v42 + 1);
            *v42 = v46;
            *((_QWORD *)v43 + 1) = v49;
            v50 = *((_BYTE *)v42 + 4);
            *((_QWORD *)v42 + 1) = 0;
            LOBYTE(v49) = *((_BYTE *)v43 + 4);
            *((_BYTE *)v43 + 4) = v50 & 2 | v49 & 0xFD;
            LOBYTE(v49) = v49 & 2 | v42[1] & 0xFD;
            *((_BYTE *)v42 + 4) = v49;
            v51 = *((_BYTE *)v43 + 4);
            *((_BYTE *)v43 + 4) = v49 & 1 | v51 & 0xFE;
            v52 = v42[4];
            *((_BYTE *)v42 + 4) = v51 & 1 | v42[1] & 0xFE;
            LODWORD(v49) = v43[4];
            v43[4] = v52;
            v42[4] = v49;
            v53 = *((_QWORD *)v43 + 3);
            *((_QWORD *)v43 + 3) = *((_QWORD *)v42 + 3);
            v54 = *((_BYTE *)v42 + 20);
            *((_QWORD *)v42 + 3) = v53;
            LOBYTE(v52) = *((_BYTE *)v43 + 20);
            v55 = v54 & 2 | v52 & 0xFD;
            *((_BYTE *)v43 + 20) = v55;
            *((_BYTE *)v43 + 20) = v42[5] & 1 | v55 & 0xFE;
            LODWORD(v43) = *v42;
            *v42 = v46;
            LODWORD(v71[0]) = (_DWORD)v43;
            v56 = *((_QWORD *)v42 + 1);
            *((_QWORD *)v42 + 1) = v45;
            v71[1] = v56;
            LOBYTE(v53) = *((_BYTE *)v42 + 4);
            *((_BYTE *)v42 + 4) = v44 & 2 | v53 & 0xFD;
            BYTE4(v71[0]) = v53 & 2 | BYTE4(v71[0]) & 0xFD;
            LOBYTE(v53) = v42[1] & 1;
            *((_BYTE *)v42 + 4) = v44 & 1 | v42[1] & 0xFE;
            BYTE4(v71[0]) = v53 | BYTE4(v71[0]) & 0xFE;
            LODWORD(v56) = v42[4];
            v42[4] = v67;
            v72 = v56;
            v57 = *((_QWORD *)v42 + 3);
            *((_QWORD *)v42 + 3) = v47;
            v74 = v57;
            *((_BYTE *)v42 + 20) = v42[5] & 0xFD | v48 & 2;
            v73 = v73 & 0xFD | v52 & 2;
            *((_BYTE *)v42 + 20) = v48 & 1 | v42[5] & 0xFE;
            v73 = v55 & 1 | v73 & 0xFE;
            v58 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v71);
            sub_182CBA0(v58, &v72);
            if ( v34 )
            {
              v40 = (*(_DWORD *)(v34 + 8))-- == 1;
              if ( v40 )
                sub_15D7BC0(v70, v34);
            }
          }
          ++v19;
        }
        result = *(_QWORD *)(a1 + 32);
      }
      v22 = *(unsigned int **)(a1 + 104);
      v18 = v19;
      if ( v22 )
      {
        v23 = *(v22 - 1);
        if ( (_DWORD)v23 == *(v22 - 2) )
        {
          v59 = (unsigned int)(3 * v23 + 1) >> 1;
          v60 = 4 * v59 + 8;
          if ( 4 * (int)v23 + 8 >= (unsigned int)v60 || (unsigned int)v23 >= v59 )
          {
            v1 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v71, "Overflow encountered when expanding vector");
            *v1 = (char *)off_1C63128;
            sub_2333C0(v1 + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B300(v22 - 2, v60);
          v22 = v61 + 2;
          *v61 = v59;
          v62 = v61[1];
          *(_QWORD *)(a1 + 104) = v22;
          v24 = &v22[v62];
          result = *(_QWORD *)(a1 + 32);
        }
        else
        {
          v24 = &v22[v23];
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x10u);
        v22 = (unsigned int *)(v64 + 1);
        *v64 = 2;
        v24 = v22;
        result = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 104) = v22;
      }
      *v24 = v19;
      ++*(v22 - 1);
    }
    while ( result );
  }
  return result;
}

