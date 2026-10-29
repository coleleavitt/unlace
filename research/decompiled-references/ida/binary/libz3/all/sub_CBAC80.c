__int64 __fastcall sub_CBAC80(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  char v5; // r14
  __int64 *v6; // rcx
  __int64 v7; // rsi
  __int64 *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  bool v11; // zf
  _DWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r14
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // r14
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  _QWORD *v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  int v34; // edx
  unsigned int v35; // ebx
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r12
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  unsigned int v48; // r12d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  _QWORD *v53; // rax
  unsigned int v54; // r14d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r14
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  char **v61; // r12
  char **exception; // r12
  char **v63; // r12
  __int64 v64; // [rsp+0h] [rbp-78h]
  __int64 *v65; // [rsp+0h] [rbp-78h]
  __int64 *v66; // [rsp+8h] [rbp-70h]
  __int64 v67; // [rsp+18h] [rbp-60h] BYREF
  __int64 v68[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v4 = a2;
  v5 = 0;
  v6 = a1 + 60;
  while ( 2 )
  {
    v7 = a1[62];
    v8 = (__int64 *)a1[18];
    v9 = *(_QWORD *)(v4 + 16);
    if ( v7 )
    {
      v10 = a1[63];
      v11 = (*(_DWORD *)(v7 + 8))-- == 1;
      if ( v11 )
      {
        v66 = v6;
        v64 = v9;
        sub_15D7BC0(v10, v7);
        v9 = v64;
        v6 = v66;
      }
    }
    a1[62] = 0;
    v12 = *(_DWORD **)(v9 + 24);
    if ( !v12 )
      goto LABEL_12;
    if ( *v12 != 5 )
    {
      if ( !*v12 )
      {
        v13 = v12[1];
        if ( v13 == 2 )
        {
          v52 = sub_CB42E0(v8, 0x3010102464C457FLL, 0, v6);
        }
        else
        {
          if ( v13 != 4 )
            goto LABEL_12;
          v52 = sub_CB4070(v8, 0x3010102464C457FLL, 0, 0x1003E0003LL, v6);
        }
LABEL_51:
        if ( v52 != 5 )
        {
          v17 = a1[60];
          goto LABEL_53;
        }
      }
LABEL_12:
      v14 = *(_DWORD *)(v4 + 8) + 1;
      if ( !v5 )
      {
        *(_DWORD *)(v4 + 8) = v14;
        v67 = v4;
        sub_CB55F0(a1 + 7, &v67);
        v68[0] = 0;
        sub_CB5530(a1 + 11, v68);
LABEL_33:
        v35 = 1;
        goto LABEL_34;
      }
      v15 = a1[60];
      *(_DWORD *)(v4 + 8) = v14;
      if ( !v15 || (v16 = a1[61], v11 = *(_DWORD *)(v15 + 8) == 1, --*(_DWORD *)(v15 + 8), !v11) )
      {
        a1[60] = v4;
        v17 = v4;
        goto LABEL_16;
      }
      sub_15D7BC0(v16, v15);
      a1[60] = v4;
      v17 = v4;
LABEL_53:
      if ( !v17 )
      {
        v18 = (_QWORD *)a1[7];
        if ( v18 )
        {
LABEL_17:
          v19 = *((_DWORD *)v18 - 1);
          if ( v19 == *((_DWORD *)v18 - 2) )
          {
            v37 = (3 * v19 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v19 + 8 >= (unsigned int)v38 || v19 >= v37 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v68, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v68);
              sub_233E40((__int64)v68);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v39 = (unsigned int *)sub_186B300(v18 - 1, v38);
            v40 = v39[1];
            v18 = v39 + 2;
            *v39 = v37;
            a1[7] = v39 + 2;
            LODWORD(v39) = v40;
            v22 = &v18[v40];
            v21 = (_DWORD)v39 + 1;
          }
          else
          {
            v20 = v19;
            v21 = v19 + 1;
            v22 = &v18[v20];
          }
          goto LABEL_19;
        }
LABEL_55:
        v53 = (_QWORD *)sub_186B270(0x18u);
        v18 = v53 + 1;
        *v53 = 2;
        v21 = 1;
        a1[7] = v18;
        v22 = v18;
LABEL_19:
        *v22 = v17;
        v23 = a1[62];
        *((_DWORD *)v18 - 1) = v21;
        if ( v23 )
        {
          v24 = (_QWORD *)a1[11];
          ++*(_DWORD *)(v23 + 8);
          if ( v24 )
          {
            v25 = *((_DWORD *)v24 - 1);
            if ( v25 == *((_DWORD *)v24 - 2) )
            {
              v48 = (3 * v25 + 1) >> 1;
              v49 = 8 * v48 + 8;
              if ( 8 * v25 + 8 >= (unsigned int)v49 || v25 >= v48 )
              {
                v63 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v68, "Overflow encountered when expanding vector");
                *v63 = (char *)off_1C63128;
                sub_2333C0(v63 + 1, v68);
                sub_233E40((__int64)v68);
                __cxa_throw(v63, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v50 = (unsigned int *)sub_186B300(v24 - 1, v49);
              v51 = v50[1];
              v24 = v50 + 2;
              *v50 = v48;
              a1[11] = v50 + 2;
              LODWORD(v50) = v51;
              v28 = &v24[v51];
              v27 = (_DWORD)v50 + 1;
            }
            else
            {
              v26 = v25;
              v27 = v25 + 1;
              v28 = &v24[v26];
            }
          }
          else
          {
            v59 = (_QWORD *)sub_186B270(0x18u);
            v24 = v59 + 1;
            *v59 = 2;
            v27 = 1;
            a1[11] = v24;
            v28 = v24;
          }
          *v28 = v23;
          *((_DWORD *)v24 - 1) = v27;
        }
        else
        {
          v41 = sub_15DE370(a1[1]);
          v42 = v41;
          if ( v41 )
            ++*(_DWORD *)(v41 + 8);
          v43 = (_QWORD *)a1[11];
          if ( v43 )
          {
            v44 = *((_DWORD *)v43 - 1);
            if ( v44 == *((_DWORD *)v43 - 2) )
            {
              v54 = (3 * v44 + 1) >> 1;
              v55 = 8 * v54 + 8;
              if ( 8 * v44 + 8 >= (unsigned int)v55 || v44 >= v54 )
              {
                v61 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v68, "Overflow encountered when expanding vector");
                *v61 = (char *)off_1C63128;
                sub_2333C0(v61 + 1, v68);
                sub_233E40((__int64)v68);
                __cxa_throw(v61, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v56 = (unsigned int *)sub_186B300(v43 - 1, v55);
              v57 = v56[1];
              v43 = v56 + 2;
              *v56 = v54;
              a1[11] = v56 + 2;
              LODWORD(v56) = v57;
              v47 = &v43[v57];
              v46 = (_DWORD)v56 + 1;
            }
            else
            {
              v45 = v44;
              v46 = v44 + 1;
              v47 = &v43[v45];
            }
          }
          else
          {
            v60 = (_QWORD *)sub_186B270(0x18u);
            v43 = v60 + 1;
            *v60 = 2;
            v46 = 1;
            a1[11] = v43;
            v47 = v43;
          }
          *v47 = v42;
          *((_DWORD *)v43 - 1) = v46;
        }
        v29 = a1[62];
        if ( v29 )
        {
          v30 = a1[63];
          v11 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v30, v29);
        }
        v31 = a1[60];
        a1[62] = 0;
        if ( v31 )
        {
          v32 = a1[61];
          v11 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v32, v31);
        }
        a1[60] = 0;
        v33 = a1[5];
        if ( v33 )
        {
          v34 = *(_DWORD *)(v33 - 4);
          if ( v34 )
            *(_BYTE *)(v33 + 16LL * (unsigned int)(v34 - 1) + 8) |= 2u;
        }
        goto LABEL_33;
      }
LABEL_16:
      v18 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v17 + 8);
      if ( v18 )
        goto LABEL_17;
      goto LABEL_55;
    }
    switch ( v12[1] )
    {
      case 2:
        v52 = sub_CB3B50(v8, 0x3010102464C457FLL, 0, v6);
        goto LABEL_51;
      case 3:
        v52 = sub_CB3B50(v8, 0, 0x3010102464C457FLL, v6);
        goto LABEL_51;
      case 4:
        v65 = v6;
        sub_CB1DB0(v8, 0x3010102464C457FLL, 0, v6);
        goto LABEL_67;
      case 5:
        v65 = v6;
        sub_CB1E40(v8, 0x3010102464C457FLL, 0, v6);
LABEL_67:
        v58 = a1[60];
        v6 = v65;
        if ( !*(_WORD *)(v58 + 4) && !*(_DWORD *)(v58 + 24) )
        {
          ++*(_DWORD *)(v58 + 8);
          v11 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v11 )
          {
            sub_15D7BC0(v3, v4);
            v6 = v65;
          }
          v4 = v58;
          v5 = 1;
          continue;
        }
        v35 = 0;
LABEL_34:
        v11 = (*(_DWORD *)(v4 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v3, v4);
        return v35;
      case 6:
        v52 = sub_CB4E40(v8, 0, nullptr, v6);
        goto LABEL_51;
      case 7:
      case 9:
        BUG();
      case 8:
        v52 = sub_CB47F0(v8, 0x3010102464C457FLL, v6);
        goto LABEL_51;
      case 0x10:
        v52 = sub_CB2F90((__int64)v8, 0x3010102464C457FLL, nullptr, v6);
        goto LABEL_51;
      default:
        goto LABEL_12;
    }
  }
}

