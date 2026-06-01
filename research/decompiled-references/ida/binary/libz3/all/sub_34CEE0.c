void __fastcall sub_34CEE0(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // r14
  _QWORD *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rdx
  __int64 v15; // r13
  _QWORD *v16; // r13
  void *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v24; // rax
  _QWORD *v25; // r12
  _QWORD *v26; // r14
  void *v27; // r13
  _QWORD *v28; // rsi
  void *v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r12
  void *v37; // rbp
  __int64 v38; // rsi
  unsigned int v39; // r15d
  size_t v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // r9
  _DWORD *v44; // rsi
  __int64 v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rdi
  int v48; // ecx
  char v49; // r8
  __int64 v50; // rcx
  char v51; // r8
  __int64 v52; // rcx
  __int64 v53; // r13
  _QWORD *v54; // rax
  _DWORD *v55; // r13
  _QWORD *v56; // r12
  void *v57; // rbp
  _QWORD *v58; // rsi
  __int64 v59; // r13
  unsigned int v60; // r15d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  char **v67; // r12
  char **exception; // r12
  _QWORD *v70; // [rsp+10h] [rbp-F8h]
  _QWORD *v71; // [rsp+20h] [rbp-E8h]
  __int64 v72; // [rsp+28h] [rbp-E0h]
  _QWORD *v73; // [rsp+28h] [rbp-E0h]
  __int64 v74; // [rsp+30h] [rbp-D8h]
  _QWORD *v75; // [rsp+38h] [rbp-D0h]
  __int64 v76; // [rsp+40h] [rbp-C8h]
  __int64 v77[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v78[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v79; // [rsp+90h] [rbp-78h] BYREF
  int v80; // [rsp+98h] [rbp-70h]
  __int128 v81; // [rsp+A0h] [rbp-68h]
  _QWORD v82[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v83[9]; // [rsp+C0h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a1 + 534) )
    return;
  v79 = *(_QWORD *)(a1 + 8);
  v1 = v79;
  sub_180C5A0(v78, "pb");
  v2 = sub_15DA4C0(v1 + 560, v78);
  v82[0] = 0;
  v80 = v2;
  v3 = *(_QWORD *)(a1 + 8);
  v83[0] = 1;
  v76 = v3;
  v77[0] = v3;
  v4 = *(_QWORD **)(a1 + 32);
  v81 = 0;
  v82[1] = 0;
  v5 = (_QWORD *)*v4;
  v83[1] = 0;
  if ( v5 )
  {
    v70 = &v5[7 * *((unsigned int *)v5 - 1)];
    if ( v5 != v70 )
    {
      v6 = v5;
      v7 = sub_15EC2C0(v76, *v5);
      v8 = 0;
      v9 = nullptr;
      if ( !v7 )
      {
        v9 = nullptr;
        goto LABEL_53;
      }
LABEL_10:
      ++*(_DWORD *)(v7 + 8);
      if ( v8 )
      {
        while ( 1 )
        {
          v11 = *(_DWORD *)(v8 - 4);
          if ( v11 != *(_DWORD *)(v8 - 8) )
            break;
          v60 = (3 * v11 + 1) >> 1;
          v61 = 8 * v60 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v61 || v11 >= v60 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v78, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v78);
            sub_233E40((__int64)v78);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v62 = (unsigned int *)sub_186B300((void *)(v8 - 8), v61);
          v63 = v62[1];
          *v62 = v60;
          v8 = (__int64)(v62 + 2);
          *(_QWORD *)&v62[2 * v63 + 2] = v7;
          v62[1] = v63 + 1;
          if ( !v9 )
          {
LABEL_52:
            v64 = (_QWORD *)sub_186B270(0x48u);
            v16 = v64 + 1;
            *v64 = 2;
            v9 = v64 + 1;
            goto LABEL_16;
          }
LABEL_14:
          v15 = *((unsigned int *)v9 - 1);
          if ( (_DWORD)v15 == *((_DWORD *)v9 - 2) )
          {
            v39 = (unsigned int)(3 * v15 + 1) >> 1;
            v40 = 32 * v39 + 8;
            if ( 32 * (int)v15 + 8 >= (unsigned int)v40 || (unsigned int)v15 >= v39 )
            {
              v67 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v78, "Overflow encountered when expanding vector");
              *v67 = (char *)off_1C63128;
              sub_2333C0(v67 + 1, v78);
              sub_233E40((__int64)v78);
              __cxa_throw(v67, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v41 = sub_186B270(v40);
            v42 = *((unsigned int *)v9 - 1);
            v43 = v41 + 8;
            v44 = (_DWORD *)v41;
            v45 = v41 + 8;
            *(_DWORD *)(v41 + 4) = v42;
            v46 = v9;
            v47 = &v9[4 * v42];
            if ( v47 != v9 )
            {
              do
              {
                v48 = *(_DWORD *)v46;
                v49 = *((_BYTE *)v46 + 4);
                v46 += 4;
                v45 += 32;
                *(_DWORD *)(v45 - 32) = v48;
                *(_BYTE *)(v45 - 28) = v49 & 3 | *(_BYTE *)(v45 - 28) & 0xFC;
                v50 = *(v46 - 3);
                *(v46 - 3) = 0;
                *(_QWORD *)(v45 - 24) = v50;
                v51 = *((_BYTE *)v46 - 12);
                *(_DWORD *)(v45 - 16) = *((_DWORD *)v46 - 4);
                *(_BYTE *)(v45 - 12) = v51 & 3 | *(_BYTE *)(v45 - 12) & 0xFC;
                v52 = *(v46 - 1);
                *(v46 - 1) = 0;
                *(_QWORD *)(v45 - 8) = v52;
              }
              while ( v46 != v47 );
            }
            v53 = *((unsigned int *)v9 - 1);
            if ( (_DWORD)v53 )
            {
              v72 = v43;
              v74 = v8;
              v54 = &v9[4 * v53];
              v55 = v44;
              v75 = v9;
              v71 = v6;
              v56 = v54;
              do
              {
                v57 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v9);
                v58 = v9 + 2;
                v9 += 4;
                sub_182CBA0(v57, v58);
              }
              while ( v9 != v56 );
              v6 = v71;
              v43 = v72;
              v44 = v55;
              v8 = v74;
              v9 = v75;
            }
            v73 = (_QWORD *)v43;
            sub_186B220(v9 - 1);
            v59 = (unsigned int)v44[1];
            v9 = v73;
            *v44 = v39;
            v16 = &v73[4 * v59];
          }
          else
          {
            v16 = &v9[4 * v15];
          }
LABEL_16:
          *v16 = 0;
          v16[1] = 0;
          v16[2] = 1;
          v17 = qword_1C7F2C0;
          v16[3] = 0;
          if ( (*((_BYTE *)v5 + 20) & 1) != 0 )
          {
            sub_182C690(v17, v16, v6 + 2);
            if ( (*((_BYTE *)v5 + 36) & 1) == 0 )
            {
LABEL_8:
              v10 = *((_DWORD *)v5 + 8);
              v6 += 7;
              *((_BYTE *)v16 + 20) &= ~1u;
              *((_DWORD *)v16 + 4) = v10;
              ++*((_DWORD *)v9 - 1);
              if ( v70 == v6 )
                goto LABEL_19;
              goto LABEL_9;
            }
          }
          else
          {
            *(_DWORD *)v16 = *((_DWORD *)v5 + 4);
            if ( (*((_BYTE *)v5 + 36) & 1) == 0 )
              goto LABEL_8;
          }
          sub_182C690(v17, v16 + 2, v6 + 4);
          ++*((_DWORD *)v9 - 1);
          v6 += 7;
          if ( v70 == v6 )
          {
LABEL_19:
            v18 = *(unsigned int *)(v8 - 4);
            v19 = a1 + 104;
            goto LABEL_20;
          }
LABEL_9:
          v5 = v6;
          v7 = sub_15EC2C0(*(_QWORD *)(a1 + 8), *v6);
          if ( v7 )
            goto LABEL_10;
        }
        v12 = v11;
        v13 = v11 + 1;
        v14 = (__int64 *)(v8 + 8 * v12);
      }
      else
      {
LABEL_53:
        v65 = (_QWORD *)sub_186B270(0x18u);
        v14 = v65 + 1;
        *v65 = 2;
        v13 = 1;
        v8 = (__int64)v14;
      }
      *v14 = v7;
      *(_DWORD *)(v8 - 4) = v13;
      if ( !v9 )
        goto LABEL_52;
      goto LABEL_14;
    }
  }
  v8 = 0;
  v9 = nullptr;
  v18 = 0;
  v19 = a1 + 104;
LABEL_20:
  v20 = sub_1691620(&v79, v18, v9, v8, v19);
  v21 = v20;
  if ( v20 )
  {
    ++*(_DWORD *)(v20 + 8);
    v22 = sub_2FF8B0(a1);
    sub_E5EBF0(v22, v21);
    if ( (*(_DWORD *)(v21 + 8))-- == 1 )
      sub_15D7BC0(v76, v21);
  }
  else
  {
    v66 = sub_2FF8B0(a1);
    sub_E5EBF0(v66, 0);
  }
  if ( v9 )
  {
    v24 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v24 )
    {
      v25 = v9;
      v26 = &v9[4 * v24];
      do
      {
        v27 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v25);
        v28 = v25 + 2;
        v25 += 4;
        sub_182CBA0(v27, v28);
      }
      while ( v26 != v25 );
    }
    sub_186B220(v9 - 1);
  }
  v77[1] = v8;
  sub_2334C0(v77);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v82);
  sub_182CBA0(v29, v83);
  v30 = *((_QWORD *)&v81 + 1);
  if ( *((_QWORD *)&v81 + 1) )
  {
    v31 = *(unsigned int *)(*((_QWORD *)&v81 + 1) - 4LL);
    if ( (_DWORD)v31 )
    {
      v32 = *((_QWORD *)&v81 + 1) + 16 * v31;
      do
      {
        v33 = v30;
        v30 += 16;
        sub_15D0DF0(v33);
      }
      while ( v30 != v32 );
      v30 = *((_QWORD *)&v81 + 1);
    }
    sub_186B220((void *)(v30 - 8));
  }
  v34 = v81;
  if ( (_QWORD)v81 )
  {
    v35 = *(unsigned int *)(v81 - 4);
    if ( (_DWORD)v35 )
    {
      v36 = v81 + 32 * v35;
      do
      {
        v37 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v34);
        v38 = v34 + 16;
        v34 += 32;
        sub_182CBA0(v37, v38);
      }
      while ( v34 != v36 );
      v34 = v81;
    }
    sub_186B220((void *)(v34 - 8));
  }
}

