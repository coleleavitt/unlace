__int64 __fastcall sub_302850(__int64 a1)
{
  char **exception; // r12
  char **v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _DWORD *v5; // r15
  _QWORD *v6; // rbp
  __int64 v7; // r13
  _QWORD *v8; // r13
  void *v9; // rdi
  int v10; // eax
  __int64 v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rdx
  void *v16; // r13
  _DWORD *v17; // r14
  int v18; // eax
  _QWORD *v19; // rax
  size_t v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r9
  _DWORD *v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rdi
  int v28; // ecx
  char v29; // r8
  __int64 v30; // rcx
  char v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r13
  _QWORD *v34; // r13
  void *v35; // rbp
  _QWORD *v36; // rsi
  __int64 v37; // r13
  unsigned int v38; // r14d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rax
  void *v48; // r14
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rdi
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // r14
  void *v56; // rbx
  __int64 v57; // rsi
  __int64 v58; // rax
  _QWORD *v59; // r15
  _QWORD *v60; // r14
  void *v61; // rbx
  _QWORD *v62; // rsi
  void *v63; // rbx
  void *v64; // rbx
  __int64 result; // rax
  __int64 *v66; // rbx
  unsigned __int64 v67; // r12
  __int64 v68; // rsi
  bool v69; // zf
  _QWORD *v70; // rax
  int v71; // eax
  _QWORD *v72; // [rsp+8h] [rbp-140h]
  _QWORD *v73; // [rsp+8h] [rbp-140h]
  _QWORD *v74; // [rsp+8h] [rbp-140h]
  _DWORD *v75; // [rsp+10h] [rbp-138h]
  unsigned int v76; // [rsp+18h] [rbp-130h]
  _DWORD *v77; // [rsp+30h] [rbp-118h]
  __int64 v78; // [rsp+38h] [rbp-110h]
  _QWORD *v79; // [rsp+38h] [rbp-110h]
  _QWORD *v80; // [rsp+40h] [rbp-108h]
  _QWORD *v81; // [rsp+48h] [rbp-100h]
  __int64 v83; // [rsp+58h] [rbp-F0h]
  char v84[8]; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v85; // [rsp+80h] [rbp-C8h]
  _QWORD v86[2]; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD v87[2]; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v88[2]; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v89[2]; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v90; // [rsp+D0h] [rbp-78h] BYREF
  int v91; // [rsp+D8h] [rbp-70h]
  __int128 v92; // [rsp+E0h] [rbp-68h]
  _QWORD v93[2]; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD v94[9]; // [rsp+100h] [rbp-48h] BYREF

  v83 = *(_QWORD *)(a1 + 8);
  v85 = v83;
  v86[0] = 0;
  v86[1] = 0;
  v87[0] = 1;
  v87[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v87);
  BYTE4(v87[0]) &= ~1u;
  LODWORD(v87[0]) = 1;
  v88[0] = 0;
  v88[1] = 0;
  v89[0] = 1;
  v89[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v89);
  BYTE4(v89[0]) &= ~1u;
  LODWORD(v89[0]) = 1;
  v3 = **(_QWORD ***)(a1 + 32);
  if ( v3 )
  {
    v75 = &v3[7 * *((unsigned int *)v3 - 1)];
    if ( v75 != (_DWORD *)v3 )
    {
      v4 = v3 + 2;
      v5 = v3 + 4;
      v6 = nullptr;
      v3 = nullptr;
      v72 = v4;
      while ( 1 )
      {
        v16 = qword_1C7F2C0;
        v17 = v5 - 8;
        v18 = *(v5 - 4);
        if ( v5[4] != 1 )
          break;
        if ( !v18 )
        {
          if ( (v86[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, v86, v86);
          else
            BYTE4(v86[0]) &= ~1u;
          if ( (v87[0] & 0x100000000LL) != 0 )
            sub_182C690(v16, v87, v87);
          else
            BYTE4(v87[0]) &= ~1u;
          goto LABEL_9;
        }
        if ( !LODWORD(v86[0]) )
        {
          if ( (v17[5] & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v86, v72);
            if ( (v17[9] & 1) == 0 )
              goto LABEL_94;
          }
          else
          {
            BYTE4(v86[0]) &= ~1u;
            LODWORD(v86[0]) = v18;
            if ( (v17[9] & 1) == 0 )
            {
LABEL_94:
              v71 = *v5;
              BYTE4(v87[0]) &= ~1u;
              LODWORD(v87[0]) = v71;
              goto LABEL_9;
            }
          }
          sub_182C690(v16, v87, v5);
LABEL_9:
          if ( !v3 )
            goto LABEL_29;
          goto LABEL_10;
        }
        if ( (v87[0] & 0x100000000LL) == 0 && LODWORD(v87[0]) == 1 && (v17[9] & 1) == 0 && *v5 == 1 )
        {
          sub_1831A80(qword_1C7F2C0, v86, v72, v86);
          sub_182CBA0(v16, v87);
          BYTE4(v87[0]) &= ~1u;
          LODWORD(v87[0]) = 1;
          goto LABEL_9;
        }
        sub_1851D20(qword_1C7F2C0, v86, v72, v86);
        if ( !v3 )
        {
LABEL_29:
          v19 = (_QWORD *)sub_186B270(0x48u);
          v8 = v19 + 1;
          *v19 = 2;
          v3 = v19 + 1;
          goto LABEL_12;
        }
LABEL_10:
        v7 = *((unsigned int *)v3 - 1);
        if ( (_DWORD)v7 == *((_DWORD *)v3 - 2) )
        {
          v76 = (unsigned int)(3 * v7 + 1) >> 1;
          v20 = 32 * v76 + 8;
          if ( 32 * (int)v7 + 8 >= (unsigned int)v20 || (unsigned int)v7 >= (unsigned int)(3 * v7 + 1) >> 1 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v90, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v90);
            sub_233E40((__int64)&v90);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v21 = sub_186B270(v20);
          v22 = *((unsigned int *)v3 - 1);
          v23 = v21 + 8;
          v24 = (_DWORD *)v21;
          v25 = v21 + 8;
          *(_DWORD *)(v21 + 4) = v22;
          v26 = v3;
          v27 = &v3[4 * v22];
          if ( v27 != v3 )
          {
            do
            {
              v28 = *(_DWORD *)v26;
              v29 = *((_BYTE *)v26 + 4);
              v26 += 4;
              v25 += 32;
              *(_DWORD *)(v25 - 32) = v28;
              *(_BYTE *)(v25 - 28) = v29 & 3 | *(_BYTE *)(v25 - 28) & 0xFC;
              v30 = *(v26 - 3);
              *(v26 - 3) = 0;
              *(_QWORD *)(v25 - 24) = v30;
              v31 = *((_BYTE *)v26 - 12);
              *(_DWORD *)(v25 - 16) = *((_DWORD *)v26 - 4);
              *(_BYTE *)(v25 - 12) = v31 & 3 | *(_BYTE *)(v25 - 12) & 0xFC;
              v32 = *(v26 - 1);
              *(v26 - 1) = 0;
              *(_QWORD *)(v25 - 8) = v32;
            }
            while ( v26 != v27 );
          }
          v33 = *((unsigned int *)v3 - 1);
          if ( (_DWORD)v33 )
          {
            v77 = v24;
            v78 = v23;
            v80 = v6;
            v34 = &v3[4 * v33];
            v81 = v3;
            do
            {
              v35 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v3);
              v36 = v3 + 2;
              v3 += 4;
              sub_182CBA0(v35, v36);
            }
            while ( v3 != v34 );
            v24 = v77;
            v23 = v78;
            v6 = v80;
            v3 = v81;
          }
          v79 = (_QWORD *)v23;
          sub_186B220(v3 - 1);
          v37 = (unsigned int)v24[1];
          v3 = v79;
          *v24 = v76;
          v8 = &v79[4 * v37];
        }
        else
        {
          v8 = &v3[4 * v7];
        }
LABEL_12:
        *v8 = 0;
        v9 = qword_1C7F2C0;
        v8[1] = 0;
        v8[2] = 1;
        v8[3] = 0;
        if ( (v17[5] & 1) != 0 )
          sub_182C690(v9, v8, v72);
        else
          *(_DWORD *)v8 = *(v5 - 4);
        if ( (v17[9] & 1) != 0 )
        {
          sub_182C690(v9, v8 + 2, v5);
        }
        else
        {
          v10 = *v5;
          *((_BYTE *)v8 + 20) &= ~1u;
          *((_DWORD *)v8 + 4) = v10;
        }
        v11 = *((_QWORD *)v5 - 4);
        ++*((_DWORD *)v3 - 1);
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        if ( v6 )
        {
          v12 = *((_DWORD *)v6 - 1);
          if ( v12 == *((_DWORD *)v6 - 2) )
          {
            v38 = (3 * v12 + 1) >> 1;
            v39 = 8 * v38 + 8;
            if ( 8 * v12 + 8 >= (unsigned int)v39 || v12 >= v38 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v90, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, &v90);
              sub_233E40((__int64)&v90);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v40 = (unsigned int *)sub_186B300(v6 - 1, v39);
            v41 = v40[1];
            v6 = v40 + 2;
            *v40 = v38;
            LODWORD(v40) = v41;
            v15 = &v6[v41];
            v14 = (_DWORD)v40 + 1;
          }
          else
          {
            v13 = v12;
            v14 = v12 + 1;
            v15 = &v6[v13];
          }
        }
        else
        {
          v70 = (_QWORD *)sub_186B270(0x18u);
          v6 = v70 + 1;
          *v70 = 2;
          v14 = 1;
          v15 = v6;
        }
        *v15 = v11;
        *((_DWORD *)v6 - 1) = v14;
        v72 += 7;
        if ( v75 == v5 + 6 )
          goto LABEL_54;
        v5 += 14;
      }
      if ( v18 )
      {
        if ( LODWORD(v88[0]) )
        {
          if ( (v89[0] & 0x100000000LL) != 0 || LODWORD(v89[0]) != 1 || (v17[9] & 1) != 0 || *v5 != 1 )
          {
            sub_1851D20(qword_1C7F2C0, v88, v72, v88);
          }
          else
          {
            sub_1831A80(qword_1C7F2C0, v88, v72, v88);
            sub_182CBA0(v16, v89);
            BYTE4(v89[0]) &= ~1u;
            LODWORD(v89[0]) = 1;
          }
        }
        else
        {
          if ( (v17[5] & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v88, v72);
          }
          else
          {
            BYTE4(v88[0]) &= ~1u;
            LODWORD(v88[0]) = v18;
          }
          if ( (v17[9] & 1) != 0 )
          {
            sub_182C690(v16, v89, v5);
          }
          else
          {
            v42 = *v5;
            BYTE4(v89[0]) &= ~1u;
            LODWORD(v89[0]) = v42;
          }
        }
      }
      else
      {
        if ( (v88[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, v88, v88);
        else
          BYTE4(v88[0]) &= ~1u;
        if ( (v89[0] & 0x100000000LL) != 0 )
          sub_182C690(v16, v89, v89);
        else
          BYTE4(v89[0]) &= ~1u;
      }
      goto LABEL_9;
    }
    v3 = nullptr;
  }
  v6 = nullptr;
LABEL_54:
  v90 = *(_QWORD *)(a1 + 8);
  v43 = v90;
  sub_180C5A0(v84, "pb");
  v91 = sub_15DA4C0(v43 + 560, v84);
  v93[0] = 0;
  v93[1] = 0;
  v94[0] = 1;
  v94[1] = 0;
  v92 = 0;
  if ( v3 )
    v44 = *((unsigned int *)v3 - 1);
  else
    v44 = 0;
  v45 = sub_1690D20(&v90, v44, v3, v6, v86);
  v46 = v45;
  if ( v45 )
    ++*(_DWORD *)(v45 + 8);
  v47 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  sub_E5EBF0(v47, v46);
  v48 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v93);
  sub_182CBA0(v48, v94);
  v49 = *((_QWORD *)&v92 + 1);
  if ( *((_QWORD *)&v92 + 1) )
  {
    v50 = *(unsigned int *)(*((_QWORD *)&v92 + 1) - 4LL);
    if ( (_DWORD)v50 )
    {
      v51 = *((_QWORD *)&v92 + 1) + 16 * v50;
      do
      {
        v52 = v49;
        v49 += 16;
        sub_15D0DF0(v52);
      }
      while ( v51 != v49 );
      v49 = *((_QWORD *)&v92 + 1);
    }
    sub_186B220((void *)(v49 - 8));
  }
  v53 = v92;
  if ( (_QWORD)v92 )
  {
    v54 = *(unsigned int *)(v92 - 4);
    if ( (_DWORD)v54 )
    {
      v73 = v3;
      v55 = v92 + 32 * v54;
      do
      {
        v56 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v53);
        v57 = v53 + 16;
        v53 += 32;
        sub_182CBA0(v56, v57);
      }
      while ( v55 != v53 );
      v3 = v73;
      v53 = v92;
    }
    sub_186B220((void *)(v53 - 8));
  }
  if ( v3 )
  {
    v58 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v58 )
    {
      v74 = v3;
      v59 = v3;
      v60 = &v3[4 * v58];
      do
      {
        v61 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v59);
        v62 = v59 + 2;
        v59 += 4;
        sub_182CBA0(v61, v62);
      }
      while ( v60 != v59 );
      v3 = v74;
    }
    sub_186B220(v3 - 1);
  }
  v63 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v88);
  sub_182CBA0(v63, v89);
  v64 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v86);
  result = sub_182CBA0(v64, v87);
  if ( v6 )
  {
    v66 = v6;
    v67 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
    if ( (unsigned __int64)v6 < v67 )
    {
      do
      {
        while ( 1 )
        {
          v68 = *v66;
          if ( *v66 )
          {
            v69 = (*(_DWORD *)(v68 + 8))-- == 1;
            if ( v69 )
              break;
          }
          if ( (unsigned __int64)++v66 >= v67 )
            goto LABEL_83;
        }
        ++v66;
        sub_15D7BC0(v83, v68);
      }
      while ( (unsigned __int64)v66 < v67 );
    }
LABEL_83:
    result = sub_186B220(v6 - 1);
  }
  if ( v46 )
  {
    v69 = (*(_DWORD *)(v46 + 8))-- == 1;
    if ( v69 )
      return sub_15D7BC0(v83, v46);
  }
  return result;
}

