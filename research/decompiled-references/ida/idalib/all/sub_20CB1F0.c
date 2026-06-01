unsigned __int64 __fastcall sub_20CB1F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 *v10; // r12
  unsigned __int64 v11; // rsi
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rbx
  unsigned __int64 *v17; // rdx
  char v18; // al
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // r8
  int v25; // r8d
  unsigned int v26; // esi
  __int64 *v27; // rax
  __int64 v28; // r9
  unsigned __int64 (__fastcall *v29)(__int64 *); // rax
  __int64 v30; // rax
  unsigned __int64 result; // rax
  int v32; // eax
  int v33; // r9d
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
    goto LABEL_45;
  v11 = v9 - 1;
  v12 = ((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4);
  v13 = v11 & v12;
  v14 = &v10[2 * ((unsigned int)v11 & v12)];
  v15 = *v14;
  if ( a1 != *v14 )
  {
    a5 = 1;
    v35 = nullptr;
    if ( v15 != -4096 )
    {
      while ( 1 )
      {
        if ( v15 == -8192 && !v35 )
          v35 = v14;
        a6 = (unsigned int)(a5 + 1);
        v13 = v11 & (a5 + v13);
        v14 = &v10[2 * v13];
        v15 = *v14;
        if ( *v14 == a1 )
          goto LABEL_3;
        if ( v15 == -4096 )
          break;
        a5 = (unsigned int)a6;
      }
      if ( v35 )
        v14 = v35;
    }
    a4 = (unsigned int)(*(_DWORD *)(v8 + 2672) + 1);
    if ( 4 * (int)a4 < 3 * v9 )
    {
      if ( v9 - *(_DWORD *)(v8 + 2676) - (unsigned int)a4 > v9 >> 3 )
      {
        v36 = *v14;
        goto LABEL_42;
      }
      v58 = (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
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
            if ( v69 != *v71 && v72 != -4096 )
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
        v75 = v74 & v12;
        v14 = (__int64 *)(v61 + 16LL * v75);
        v76 = *v14;
        if ( *v14 == a1 )
          goto LABEL_42;
        v77 = 1;
        v78 = nullptr;
        if ( v76 != -4096 )
        {
          while ( 1 )
          {
            if ( !v78 && v76 == -8192 )
              v78 = v14;
            v75 = v74 & (v77 + v75);
            v14 = (__int64 *)(v61 + 16LL * v75);
            v76 = *v14;
            if ( *v14 == a1 )
              break;
            if ( v76 == -4096 )
            {
              if ( !v78 )
                goto LABEL_61;
              v36 = *v78;
              v14 = v78;
              goto LABEL_42;
            }
            ++v77;
          }
LABEL_82:
          v36 = a1;
LABEL_42:
          *(_DWORD *)(v8 + 2672) = a4;
          if ( v36 != -4096 )
            --*(_DWORD *)(v8 + 2676);
          goto LABEL_44;
        }
        goto LABEL_61;
      }
      goto LABEL_136;
    }
LABEL_45:
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
                if ( !v86 && v51 == -8192 )
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
      v14 = (__int64 *)(v39 + 16LL * v54);
      v55 = *v14;
      if ( *v14 == a1 )
        goto LABEL_42;
      v56 = 1;
      v57 = nullptr;
      if ( v55 != -4096 )
      {
        while ( 1 )
        {
          if ( v55 == -8192 && !v57 )
            v57 = v14;
          v54 = v53 & (v56 + v54);
          v14 = (__int64 *)(v39 + 16LL * v54);
          v55 = *v14;
          if ( *v14 == a1 )
            goto LABEL_82;
          if ( v55 == -4096 )
          {
            if ( !v57 )
              break;
            v36 = *v57;
            v14 = v57;
            goto LABEL_42;
          }
          ++v56;
        }
      }
LABEL_61:
      *(_DWORD *)(v8 + 2672) = a4;
LABEL_44:
      *v14 = a1;
      v14[1] = 0;
      sub_20CA120((__int64 *)&v89, 0, nullptr);
      goto LABEL_29;
    }
LABEL_136:
    ++*(_DWORD *)(v8 + 2672);
    BUG();
  }
LABEL_3:
  v16 = (__int64 *)v14[1];
  sub_20CA120((__int64 *)&v89, 0, v16);
  if ( v16 )
  {
    v17 = v90;
    while ( 1 )
    {
      v20 = v89 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFF8LL) = v17;
      if ( v17 )
      {
        *v17 = *v17 & 7 | v20;
        goto LABEL_6;
      }
      v21 = v91;
      v22 = ***(_QWORD ***)(v91 + 8);
      v23 = *(_QWORD *)(v22 + 2664);
      if ( v20 >= v23 )
      {
        v24 = *(unsigned int *)(v22 + 2680);
        if ( v20 < v23 + 16 * v24 )
          break;
      }
LABEL_6:
      v90 = (unsigned __int64 *)v16[1];
      v18 = v89;
      v16[1] = (__int64)&v89;
      v89 = (unsigned __int64)(v16 + 1) | v18 & 7;
      if ( v90 )
      {
        *v90 = (unsigned __int64)&v90 | *v90 & 7;
        if ( ((*v16 >> 1) & 3) != 1 )
        {
          if ( ((*v16 >> 1) & 3) == 0 )
            goto LABEL_14;
          goto LABEL_9;
        }
      }
      else if ( ((*v16 >> 1) & 3) != 1 )
      {
        if ( ((*v16 >> 1) & 3) == 0 )
          goto LABEL_29;
LABEL_9:
        v19 = v16[2];
        if ( v19 )
        {
          if ( v19 != -4096 && v19 != -8192 )
            goto LABEL_12;
          goto LABEL_13;
        }
        goto LABEL_14;
      }
      v29 = *(unsigned __int64 (__fastcall **)(__int64 *))(*(v16 - 1) + 8);
      if ( v29 != sub_20CA020 )
      {
        v29(v16 - 1);
        goto LABEL_14;
      }
      v30 = v16[2];
      if ( v30 )
      {
        if ( v30 == -8192 || v30 == -4096 )
          goto LABEL_13;
LABEL_12:
        sub_20CB110(v16);
LABEL_13:
        v16[2] = 0;
      }
LABEL_14:
      v16 = (__int64 *)v90;
      v17 = v90;
      if ( !v90 )
        goto LABEL_29;
    }
    if ( (_DWORD)v24 )
    {
      v25 = v24 - 1;
      v26 = v25 & (((unsigned int)v91 >> 9) ^ ((unsigned int)v91 >> 4));
      v27 = (__int64 *)(v23 + 16LL * v26);
      v28 = *v27;
      if ( *v27 != v91 )
      {
        v32 = 1;
        if ( v28 == -4096 )
          goto LABEL_21;
        while ( 1 )
        {
          v33 = v32 + 1;
          v26 = v25 & (v32 + v26);
          v27 = (__int64 *)(v23 + 16LL * v26);
          v34 = *v27;
          if ( v91 == *v27 )
            break;
          v32 = v33;
          if ( v34 == -4096 )
            goto LABEL_21;
        }
      }
      *v27 = -8192;
      v21 = v91;
      --*(_DWORD *)(v22 + 2672);
      ++*(_DWORD *)(v22 + 2676);
    }
LABEL_21:
    *(_BYTE *)(v21 + 1) &= ~1u;
    goto LABEL_6;
  }
LABEL_29:
  result = v91;
  if ( v91 != 0 && v91 != -4096 && v91 != -8192 )
    return sub_20CB110(&v89);
  return result;
}
