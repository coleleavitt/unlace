unsigned __int64 __fastcall sub_20CD350(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 *v10; // r12
  unsigned __int64 v12; // rsi
  unsigned int v13; // r13d
  unsigned int v14; // ecx
  __int64 *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 *v17; // rbx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 *v29; // rax
  void (*v30)(); // rax
  __int64 v31; // rax
  unsigned __int64 result; // rax
  int v33; // eax
  __int64 v34; // r10
  __int64 *v35; // rdi
  __int64 v36; // rsi
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  __int64 v42; // rsi
  int v43; // r10d
  __int64 *v44; // r9
  _QWORD *v45; // rcx
  __int64 *v46; // rdx
  int i; // r13d
  __int64 v48; // rcx
  unsigned int v49; // r8d
  _QWORD *v50; // rdi
  __int64 v51; // r11
  int v52; // edi
  int v53; // r8d
  unsigned int v54; // edi
  __int64 v55; // r9
  int v56; // esi
  __int64 *v57; // r10
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rdx
  int v64; // r9d
  __int64 v65; // r15
  _QWORD *v66; // rcx
  __int64 *v67; // rdx
  int v68; // r14d
  __int64 v69; // rcx
  unsigned int v70; // edi
  _QWORD *v71; // rsi
  __int64 v72; // r10
  int v73; // edi
  int v74; // edi
  unsigned int v75; // r13d
  __int64 v76; // r8
  int v77; // esi
  __int64 *v78; // r9
  __int64 v79; // rcx
  _QWORD *v80; // rcx
  _QWORD *v81; // rdx
  __int64 v82; // rcx
  _QWORD *v83; // rcx
  _QWORD *v84; // rdx
  int v85; // r15d
  _QWORD *v86; // r14
  _QWORD *v87; // r11
  int v88; // [rsp+4h] [rbp-64h]
  unsigned __int64 v89; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 *v90; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v91; // [rsp+20h] [rbp-48h]

  v7 = **(__int64 ***)(a1 + 8);
  v8 = *v7;
  v9 = *(_DWORD *)(*v7 + 2680);
  v10 = *(__int64 **)(*v7 + 2664);
  if ( !v9 )
    goto LABEL_42;
  v12 = v9 - 1;
  v13 = ((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4);
  v14 = v12 & v13;
  v15 = &v10[2 * ((unsigned int)v12 & v13)];
  v16 = *v15;
  if ( *v15 != a1 )
  {
    a5 = 1;
    v35 = nullptr;
    if ( v16 != -4096 )
    {
      while ( 1 )
      {
        if ( v16 == -8192 && !v35 )
          v35 = v15;
        a6 = (unsigned int)(a5 + 1);
        v14 = v12 & (a5 + v14);
        v15 = &v10[2 * v14];
        v16 = *v15;
        if ( *v15 == a1 )
          goto LABEL_3;
        if ( v16 == -4096 )
          break;
        a5 = (unsigned int)a6;
      }
      if ( v35 )
        v15 = v35;
    }
    a4 = (unsigned int)(*(_DWORD *)(v8 + 2672) + 1);
    if ( 4 * (int)a4 < 3 * v9 )
    {
      if ( v9 - *(_DWORD *)(v8 + 2676) - (unsigned int)a4 > v9 >> 3 )
      {
        v36 = *v15;
        goto LABEL_39;
      }
      v58 = (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2);
      v59 = (((v58 >> 4) | v58) >> 8) | (v58 >> 4) | v58;
      v60 = ((v59 >> 16) | v59) + 1;
      if ( (unsigned int)v60 < 0x40 )
        LODWORD(v60) = 64;
      *(_DWORD *)(v8 + 2680) = v60;
      v61 = sub_22300B0(16LL * (unsigned int)v60, 8, 64, a4, a5, a6);
      *(_QWORD *)(v8 + 2664) = v61;
      if ( v10 )
      {
        v62 = *(unsigned int *)(v8 + 2680);
        v63 = (_QWORD *)v61;
        *(_QWORD *)(v8 + 2672) = 0;
        v64 = v62;
        v65 = 2LL * v9;
        v66 = (_QWORD *)(v61 + 16 * v62);
        if ( (_QWORD *)v61 != v66 )
        {
          do
          {
            *v63 = -4096;
            v63 += 2;
          }
          while ( v66 != v63 );
        }
        v67 = v10;
        v68 = v64 - 1;
        do
        {
          v69 = *v67;
          if ( *v67 != -4096 && v69 != -8192 )
          {
            if ( !v64 )
            {
              *(_QWORD *)&dword_0 = *v67;
              BUG();
            }
            v70 = v68 & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
            v71 = (_QWORD *)(v61 + 16LL * v70);
            v72 = *v71;
            if ( *v71 != v69 && v72 != -4096 )
            {
              v88 = 1;
              v87 = nullptr;
              while ( 1 )
              {
                if ( v72 == -8192 && !v87 )
                  v87 = v71;
                v70 = v68 & (v88 + v70);
                v71 = (_QWORD *)(v61 + 16LL * v70);
                v72 = *v71;
                if ( v69 == *v71 )
                  break;
                if ( v72 == -4096 )
                {
                  if ( v87 )
                    v71 = v87;
                  break;
                }
                ++v88;
              }
            }
            *v71 = v69;
            v71[1] = v67[1];
            ++*(_DWORD *)(v8 + 2672);
          }
          v67 += 2;
        }
        while ( &v10[v65] != v67 );
        operator delete(v10, v65 * 8, 8);
        v61 = *(_QWORD *)(v8 + 2664);
        v73 = *(_DWORD *)(v8 + 2680);
        LODWORD(a4) = *(_DWORD *)(v8 + 2672) + 1;
      }
      else
      {
        v82 = *(unsigned int *)(v8 + 2680);
        *(_QWORD *)(v8 + 2672) = 0;
        v73 = v82;
        v83 = (_QWORD *)(v61 + 16 * v82);
        if ( (_QWORD *)v61 != v83 )
        {
          v84 = (_QWORD *)v61;
          do
          {
            *v84 = -4096;
            v84 += 2;
          }
          while ( v83 != v84 );
        }
        LODWORD(a4) = 1;
      }
      if ( v73 )
      {
        v74 = v73 - 1;
        v36 = a1;
        v75 = v74 & v13;
        v15 = (__int64 *)(v61 + 16LL * v75);
        v76 = *v15;
        if ( *v15 == a1 )
          goto LABEL_39;
        v77 = 1;
        v78 = nullptr;
        if ( v76 != -4096 )
        {
          while ( 1 )
          {
            if ( !v78 && v76 == -8192 )
              v78 = v15;
            v75 = v74 & (v77 + v75);
            v15 = (__int64 *)(v61 + 16LL * v75);
            v76 = *v15;
            if ( *v15 == a1 )
              break;
            if ( v76 == -4096 )
            {
              if ( !v78 )
                goto LABEL_58;
              v36 = *v78;
              v15 = v78;
              goto LABEL_39;
            }
            ++v77;
          }
LABEL_79:
          v36 = a1;
LABEL_39:
          *(_DWORD *)(v8 + 2672) = a4;
          if ( v36 != -4096 )
            --*(_DWORD *)(v8 + 2676);
          goto LABEL_41;
        }
        goto LABEL_58;
      }
      goto LABEL_133;
    }
LABEL_42:
    v37 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
            | (2 * v9 - 1)
            | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
          | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 8)
        | (((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
        | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
        | (2 * v9 - 1)
        | ((unsigned __int64)(2 * v9 - 1) >> 1);
    v38 = ((v37 >> 16) | v37) + 1;
    if ( (unsigned int)v38 < 0x40 )
      LODWORD(v38) = 64;
    *(_DWORD *)(v8 + 2680) = v38;
    v39 = sub_22300B0(16LL * (unsigned int)v38, 8, 64, a4, a5, a6);
    *(_QWORD *)(v8 + 2664) = v39;
    if ( v10 )
    {
      v40 = *(unsigned int *)(v8 + 2680);
      v41 = (_QWORD *)v39;
      *(_QWORD *)(v8 + 2672) = 0;
      v42 = 2LL * v9;
      v43 = v40;
      v44 = &v10[v42];
      v45 = (_QWORD *)(v39 + 16 * v40);
      if ( (_QWORD *)v39 != v45 )
      {
        do
        {
          *v41 = -4096;
          v41 += 2;
        }
        while ( v45 != v41 );
      }
      v46 = v10;
      for ( i = v43 - 1; v44 != v46; v46 += 2 )
      {
        v48 = *v46;
        if ( *v46 != -8192 && v48 != -4096 )
        {
          if ( !v43 )
          {
            *(_QWORD *)&dword_0 = *v46;
            BUG();
          }
          v49 = i & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
          v50 = (_QWORD *)(v39 + 16LL * v49);
          v51 = *v50;
          if ( v48 != *v50 )
          {
            v85 = 1;
            v86 = nullptr;
            if ( v51 != -4096 )
            {
              while ( 1 )
              {
                if ( v51 == -8192 && !v86 )
                  v86 = v50;
                v49 = i & (v85 + v49);
                v50 = (_QWORD *)(v39 + 16LL * v49);
                v51 = *v50;
                if ( v48 == *v50 )
                  break;
                if ( v51 == -4096 )
                {
                  if ( v86 )
                    v50 = v86;
                  break;
                }
                ++v85;
              }
            }
          }
          *v50 = v48;
          v50[1] = v46[1];
          ++*(_DWORD *)(v8 + 2672);
        }
      }
      operator delete(v10, v42 * 8, 8);
      v39 = *(_QWORD *)(v8 + 2664);
      v52 = *(_DWORD *)(v8 + 2680);
      LODWORD(a4) = *(_DWORD *)(v8 + 2672) + 1;
    }
    else
    {
      v79 = *(unsigned int *)(v8 + 2680);
      *(_QWORD *)(v8 + 2672) = 0;
      v52 = v79;
      v80 = (_QWORD *)(v39 + 16 * v79);
      if ( (_QWORD *)v39 != v80 )
      {
        v81 = (_QWORD *)v39;
        do
        {
          *v81 = -4096;
          v81 += 2;
        }
        while ( v80 != v81 );
      }
      LODWORD(a4) = 1;
    }
    if ( v52 )
    {
      v53 = v52 - 1;
      v36 = a1;
      v54 = (v52 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
      v15 = (__int64 *)(v39 + 16LL * v54);
      v55 = *v15;
      if ( *v15 == a1 )
        goto LABEL_39;
      v56 = 1;
      v57 = nullptr;
      if ( v55 != -4096 )
      {
        while ( 1 )
        {
          if ( v55 == -8192 && !v57 )
            v57 = v15;
          v54 = v53 & (v56 + v54);
          v15 = (__int64 *)(v39 + 16LL * v54);
          v55 = *v15;
          if ( *v15 == a1 )
            goto LABEL_79;
          if ( v55 == -4096 )
          {
            if ( !v57 )
              break;
            v36 = *v57;
            v15 = v57;
            goto LABEL_39;
          }
          ++v56;
        }
      }
LABEL_58:
      *(_DWORD *)(v8 + 2672) = a4;
LABEL_41:
      *v15 = a1;
      v15[1] = 0;
      sub_20CA120((__int64 *)&v89, 0, nullptr);
      goto LABEL_27;
    }
LABEL_133:
    ++*(_DWORD *)(v8 + 2672);
    BUG();
  }
LABEL_3:
  v17 = (unsigned __int64 *)v15[1];
  v18 = 0;
  sub_20CA120((__int64 *)&v89, 0, v17);
  if ( v17 )
  {
    v21 = (__int64)v90;
    while ( 1 )
    {
      v26 = v89 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFF8LL) = v21;
      if ( v21 )
      {
        *(_QWORD *)v21 = *(_QWORD *)v21 & 7LL | v26;
        goto LABEL_6;
      }
      v27 = v91;
      v21 = ***(_QWORD ***)(v91 + 8);
      v28 = *(_QWORD *)(v21 + 2664);
      if ( v26 >= v28 )
      {
        v19 = *(unsigned int *)(v21 + 2680);
        v18 = v28 + 16 * v19;
        if ( v26 < v18 )
          break;
      }
LABEL_6:
      v90 = (unsigned __int64 *)v17[1];
      v22 = v89;
      v17[1] = (unsigned __int64)&v89;
      v23 = (__int64)v90;
      v89 = (unsigned __int64)(v17 + 1) | v22 & 7;
      if ( !v90 )
      {
        v31 = ((__int64)*v17 >> 1) & 3;
        if ( (_DWORD)v31 == 1 )
        {
LABEL_23:
          v30 = *(void (**)())(*(v17 - 1) + 16);
          if ( v30 != nullsub_1261 )
          {
            v18 = a2;
            ((void (__fastcall *)(unsigned __int64 *, unsigned __int64))v30)(v17 - 1, a2);
          }
          goto LABEL_15;
        }
        if ( (_DWORD)v31 != 3 )
          goto LABEL_27;
LABEL_9:
        v25 = v17[2];
        if ( a2 != v25 )
        {
          LOBYTE(v21) = v25 != 0;
          LOBYTE(v23) = v25 != -4096;
          if ( ((unsigned __int8)v23 & (v25 != 0)) != 0 && v25 != -8192 )
            sub_20CB110(v17);
          v17[2] = a2;
          if ( a2 != -8192 && a2 != -4096 && a2 != 0 )
            sub_20CC510(v17, v18, v23, v21, (unsigned __int64 *)v19, v20);
        }
        goto LABEL_15;
      }
      *v90 = (unsigned __int64)&v90 | *v90 & 7;
      v24 = ((__int64)*v17 >> 1) & 3;
      if ( (_DWORD)v24 == 1 )
        goto LABEL_23;
      if ( (_DWORD)v24 == 3 )
        goto LABEL_9;
LABEL_15:
      v17 = v90;
      v21 = (__int64)v90;
      if ( !v90 )
        goto LABEL_27;
    }
    if ( (_DWORD)v19 )
    {
      v19 = (unsigned int)(v19 - 1);
      v18 = (unsigned int)v19 & (((unsigned int)v91 >> 9) ^ ((unsigned int)v91 >> 4));
      v29 = (__int64 *)(v28 + 16 * v18);
      v20 = *v29;
      if ( v91 != *v29 )
      {
        v33 = 1;
        if ( v20 == -4096 )
          goto LABEL_22;
        while ( 1 )
        {
          v20 = (unsigned int)(v33 + 1);
          v18 = (unsigned int)v19 & (v33 + (_DWORD)v18);
          v29 = (__int64 *)(v28 + 16LL * (unsigned int)v18);
          v34 = *v29;
          if ( v91 == *v29 )
            break;
          v33 = v20;
          if ( v34 == -4096 )
            goto LABEL_22;
        }
      }
      *v29 = -8192;
      v27 = v91;
      --*(_DWORD *)(v21 + 2672);
      ++*(_DWORD *)(v21 + 2676);
    }
LABEL_22:
    *(_BYTE *)(v27 + 1) &= ~1u;
    goto LABEL_6;
  }
LABEL_27:
  result = v91;
  if ( v91 != -4096 && v91 != 0 && v91 != -8192 )
    return sub_20CB110(&v89);
  return result;
}
