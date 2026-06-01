_QWORD *__fastcall sub_1FDE590(_QWORD *a1, __int64 a2, const void *a3, size_t a4)
{
  _QWORD *v6; // r12
  __int64 v7; // rcx
  __int64 *v8; // r9
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 *v12; // r14
  unsigned __int64 v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // rcx
  __int64 *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v21; // rax
  char v22; // dl
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *j; // rdx
  __int64 *k; // r15
  __int64 v28; // rax
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // r9
  unsigned int v32; // esi
  _QWORD *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  int v37; // esi
  int v38; // edi
  _QWORD *v39; // rsi
  unsigned int v40; // ebx
  __int64 v41; // r8
  int v42; // edi
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *i; // rdx
  __int64 *v47; // rbx
  __int64 v48; // rax
  int v49; // esi
  int v50; // esi
  __int64 v51; // r9
  unsigned int v52; // ecx
  _QWORD *v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdi
  int v57; // esi
  int v58; // edi
  unsigned int v59; // r15d
  __int64 v60; // r8
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rcx
  _QWORD *v66; // rdx
  int v67; // r10d
  _QWORD *v68; // r8
  int v69; // r10d
  _QWORD *v70; // r8
  __int64 *v71; // r9
  int v72; // esi
  int v73; // esi
  unsigned int v74; // [rsp+0h] [rbp-58h]
  __int64 v75; // [rsp+0h] [rbp-58h]
  unsigned int v76; // [rsp+0h] [rbp-58h]
  __int64 v77; // [rsp+0h] [rbp-58h]
  _QWORD *v78; // [rsp+10h] [rbp-48h] BYREF
  char v79; // [rsp+18h] [rbp-40h]

  sub_FD9C70((__int64)&v78, *(_QWORD *)(a2 + 120), a3, a4, 0, 0, 1);
  if ( (v79 & 1) != 0 )
  {
    v21 = sub_1FDE260(&v78);
    if ( !v22 )
    {
      sub_A04D90((__int64 *)&v78);
      goto LABEL_14;
    }
    v6 = (_QWORD *)v21;
  }
  else
  {
    v6 = v78;
  }
  sub_A04D90((__int64 *)&v78);
  if ( !v6 )
  {
LABEL_14:
    *a1 = 0;
    return a1;
  }
  while ( 1 )
  {
    v9 = v6[1];
    if ( !v9 )
      break;
    v9 &= 0xFFFFFFFFFFFFFFF8LL;
    v10 = v6[1] & 4LL;
    v6 = (_QWORD *)v9;
    if ( !v10 || !v9 )
      goto LABEL_7;
  }
  v6 = nullptr;
LABEL_7:
  v11 = *(unsigned int *)(a2 + 168);
  v12 = *(__int64 **)(a2 + 152);
  if ( !(_DWORD)v11 )
    goto LABEL_16;
  v13 = (unsigned int)(v11 - 1);
  v14 = ((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4);
  LODWORD(v15) = v13 & v14;
  v16 = &v12[2 * ((unsigned int)v13 & v14)];
  v17 = (_QWORD *)*v16;
  if ( (_QWORD *)*v16 != v6 )
  {
    v42 = 1;
    v8 = nullptr;
    if ( v17 != (_QWORD *)-4096LL )
    {
      while ( 1 )
      {
        if ( v17 == (_QWORD *)-8192LL && !v8 )
          v8 = v16;
        v15 = (unsigned int)v13 & ((_DWORD)v15 + v42);
        v16 = &v12[2 * v15];
        v17 = (_QWORD *)*v16;
        if ( (_QWORD *)*v16 == v6 )
          goto LABEL_9;
        if ( v17 == (_QWORD *)-4096LL )
          break;
        ++v42;
      }
      if ( v8 )
        v16 = v8;
    }
    v7 = (unsigned int)(*(_DWORD *)(a2 + 160) + 1);
    if ( 4 * (int)v7 < (unsigned int)(3 * v11) )
    {
      if ( (int)v11 - *(_DWORD *)(a2 + 164) - (int)v7 > (unsigned int)v11 >> 3 )
      {
LABEL_38:
        v39 = (_QWORD *)*v16;
        goto LABEL_32;
      }
      v76 = v11;
      v43 = (((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4) | (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2);
      v44 = ((((v43 >> 8) | v43) >> 16) | (v43 >> 8) | v43) + 1;
      if ( (unsigned int)v44 < 0x40 )
        LODWORD(v44) = 64;
      *(_DWORD *)(a2 + 168) = v44;
      v45 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v44, 8, 64, v7, v11, v8);
      *(_QWORD *)(a2 + 152) = v45;
      if ( v12 )
      {
        *(_QWORD *)(a2 + 160) = 0;
        v77 = 2LL * v76;
        for ( i = &v45[2 * *(unsigned int *)(a2 + 168)]; i != v45; v45 += 2 )
          *v45 = -4096;
        v47 = v12;
        do
        {
          v48 = *v47;
          if ( *v47 != -4096 && v48 != -8192 )
          {
            v49 = *(_DWORD *)(a2 + 168);
            if ( !v49 )
            {
              *(_QWORD *)&dword_0 = *v47;
              BUG();
            }
            v50 = v49 - 1;
            v51 = *(_QWORD *)(a2 + 152);
            v52 = v50 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
            v53 = (_QWORD *)(v51 + 16LL * v52);
            v54 = *v53;
            if ( v48 != *v53 )
            {
              v69 = 1;
              v70 = nullptr;
              if ( v54 != -4096 )
              {
                while ( 1 )
                {
                  if ( v54 == -8192 && !v70 )
                    v70 = v53;
                  v52 = v50 & (v69 + v52);
                  v53 = (_QWORD *)(v51 + 16LL * v52);
                  v54 = *v53;
                  if ( v48 == *v53 )
                    break;
                  if ( v54 == -4096 )
                  {
                    if ( v70 )
                      v53 = v70;
                    break;
                  }
                  ++v69;
                }
              }
            }
            *v53 = v48;
            v55 = v47[1];
            v47[1] = 0;
            v53[1] = v55;
            v56 = v47[1];
            ++*(_DWORD *)(a2 + 160);
            if ( v56 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
          }
          v47 += 2;
        }
        while ( &v12[v77] != v47 );
        operator delete(v12, v77 * 8, 8);
        v45 = *(_QWORD **)(a2 + 152);
        v57 = *(_DWORD *)(a2 + 168);
        LODWORD(v7) = *(_DWORD *)(a2 + 160) + 1;
      }
      else
      {
        v64 = *(unsigned int *)(a2 + 168);
        *(_QWORD *)(a2 + 160) = 0;
        v57 = v64;
        v65 = &v45[2 * v64];
        if ( v45 != v65 )
        {
          v66 = v45;
          do
          {
            *v66 = -4096;
            v66 += 2;
          }
          while ( v65 != v66 );
        }
        LODWORD(v7) = 1;
      }
      if ( v57 )
      {
        v58 = v57 - 1;
        v39 = v6;
        v59 = v58 & v14;
        v16 = &v45[2 * v59];
        v60 = *v16;
        if ( (_QWORD *)*v16 == v6 )
          goto LABEL_32;
        if ( v60 == -4096 )
          goto LABEL_56;
        v71 = &v45[2 * v59];
        v73 = 1;
        v16 = nullptr;
        while ( 1 )
        {
          if ( v60 == -8192 && !v16 )
            v16 = v71;
          v59 = v58 & (v73 + v59);
          v71 = &v45[2 * v59];
          v60 = *v71;
          if ( (_QWORD *)*v71 == v6 )
            break;
          if ( v60 == -4096 )
            goto LABEL_105;
          ++v73;
        }
LABEL_98:
        v39 = v6;
        v16 = v71;
LABEL_32:
        *(_DWORD *)(a2 + 160) = v7;
        if ( v39 != (_QWORD *)-4096LL )
          --*(_DWORD *)(a2 + 164);
        goto LABEL_34;
      }
      goto LABEL_115;
    }
LABEL_16:
    v74 = v11;
    v23 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v11 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
    v24 = ((v23 >> 16) | v23) + 1;
    if ( (unsigned int)v24 < 0x40 )
      LODWORD(v24) = 64;
    *(_DWORD *)(a2 + 168) = v24;
    v25 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v24, 8, 64, v7, v11, v8);
    *(_QWORD *)(a2 + 152) = v25;
    if ( v12 )
    {
      *(_QWORD *)(a2 + 160) = 0;
      v75 = 2LL * v74;
      for ( j = &v25[2 * *(unsigned int *)(a2 + 168)]; j != v25; v25 += 2 )
        *v25 = -4096;
      for ( k = v12; &v12[v75] != k; k += 2 )
      {
        v28 = *k;
        if ( *k != -8192 && v28 != -4096 )
        {
          v29 = *(_DWORD *)(a2 + 168);
          if ( !v29 )
          {
            *(_QWORD *)&dword_0 = *k;
            BUG();
          }
          v30 = v29 - 1;
          v31 = *(_QWORD *)(a2 + 152);
          v32 = v30 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
          v33 = (_QWORD *)(v31 + 16LL * v32);
          v34 = *v33;
          if ( *v33 != v28 )
          {
            v67 = 1;
            v68 = nullptr;
            if ( v34 != -4096 )
            {
              while ( 1 )
              {
                if ( v34 == -8192 && !v68 )
                  v68 = v33;
                v32 = v30 & (v67 + v32);
                v33 = (_QWORD *)(v31 + 16LL * v32);
                v34 = *v33;
                if ( v28 == *v33 )
                  break;
                if ( v34 == -4096 )
                {
                  if ( v68 )
                    v33 = v68;
                  break;
                }
                ++v67;
              }
            }
          }
          *v33 = v28;
          v35 = k[1];
          k[1] = 0;
          v33[1] = v35;
          v36 = k[1];
          ++*(_DWORD *)(a2 + 160);
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
        }
      }
      operator delete(v12, v75 * 8, 8);
      v25 = *(_QWORD **)(a2 + 152);
      v37 = *(_DWORD *)(a2 + 168);
      LODWORD(v7) = *(_DWORD *)(a2 + 160) + 1;
    }
    else
    {
      v61 = *(unsigned int *)(a2 + 168);
      *(_QWORD *)(a2 + 160) = 0;
      v37 = v61;
      v62 = &v25[2 * v61];
      if ( v25 != v62 )
      {
        v63 = v25;
        do
        {
          *v63 = -4096;
          v63 += 2;
        }
        while ( v62 != v63 );
      }
      LODWORD(v7) = 1;
    }
    if ( v37 )
    {
      v38 = v37 - 1;
      v39 = v6;
      v40 = v38 & (((unsigned int)v9 >> 4) ^ ((unsigned int)v9 >> 9));
      v16 = &v25[2 * v40];
      v41 = *v16;
      if ( (_QWORD *)*v16 == v6 )
        goto LABEL_32;
      if ( v41 == -4096 )
      {
LABEL_56:
        *(_DWORD *)(a2 + 160) = v7;
LABEL_34:
        *v16 = (__int64)v6;
        v19 = v16 + 1;
        v18 = 0;
        v16[1] = 0;
        goto LABEL_10;
      }
      v71 = &v25[2 * v40];
      v72 = 1;
      v16 = nullptr;
      while ( 1 )
      {
        if ( !v16 && v41 == -8192 )
          v16 = v71;
        v40 = v38 & (v72 + v40);
        v71 = &v25[2 * v40];
        v41 = *v71;
        if ( (_QWORD *)*v71 == v6 )
          goto LABEL_98;
        if ( v41 == -4096 )
        {
LABEL_105:
          if ( v16 )
            goto LABEL_38;
          v16 = v71;
          goto LABEL_56;
        }
        ++v72;
      }
    }
LABEL_115:
    ++*(_DWORD *)(a2 + 160);
    BUG();
  }
LABEL_9:
  v18 = v16[1];
  v19 = v16 + 1;
LABEL_10:
  *v19 = 0;
  *a1 = v18;
  return a1;
}
