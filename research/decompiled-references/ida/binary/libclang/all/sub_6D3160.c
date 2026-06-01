__int64 *__fastcall sub_6D3160(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // r12
  __int64 *v6; // r14
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rdx
  unsigned int v10; // r13d
  int v11; // edi
  __int64 *v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rbp
  int v16; // r9d
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 *v28; // r15
  __int64 *i; // r13
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rdi
  int v34; // r10d
  _QWORD *v35; // r9
  __int64 v36; // rsi
  _QWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdi
  int v40; // edi
  int v41; // r10d
  __int64 *v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  int v46; // edi
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  __int64 *v49; // r12
  __int64 *v50; // r15
  __int64 v51; // rax
  int v52; // ecx
  int v53; // ecx
  __int64 v54; // r9
  int v55; // r11d
  _QWORD *v56; // r10
  __int64 v57; // rsi
  _QWORD *v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rdi
  int v61; // edi
  int v62; // r9d
  unsigned int v63; // r13d
  _QWORD *v64; // rcx
  _QWORD *v65; // rcx
  __int64 v66[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = 0;
  v5 = *(unsigned int *)(a1 + 1936);
  v6 = *(__int64 **)(a1 + 1920);
  if ( !(_DWORD)v5 )
    goto LABEL_23;
  v7 = (unsigned int)(v5 - 1);
  v8 = 1;
  v9 = nullptr;
  v10 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v11 = v7 & v10;
  v12 = &v6[2 * ((unsigned int)v7 & v10)];
  v13 = *v12;
  if ( *v12 == a2 )
  {
LABEL_3:
    v9 = (__int64 *)v12[1];
    v14 = v12 + 1;
    if ( v9 )
      return v9;
    goto LABEL_18;
  }
  while ( v13 != -4096 )
  {
    if ( v13 == -8192 && !v9 )
      v9 = v12;
    v16 = v8 + 1;
    v8 = (unsigned int)(v11 + v8);
    v11 = v7 & v8;
    v12 = &v6[2 * ((unsigned int)v7 & (unsigned int)v8)];
    v13 = *v12;
    if ( *v12 == a2 )
      goto LABEL_3;
    LODWORD(v8) = v16;
  }
  if ( !v9 )
    v9 = v12;
  v17 = *(_DWORD *)(a1 + 1928) + 1;
  v2 = 2 * v5;
  v8 = (unsigned int)(4 * v17);
  if ( (unsigned int)v8 >= 3 * (int)v5 )
  {
LABEL_23:
    v20 = (unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1);
    v21 = (((v20 >> 2) | v20) >> 4) | (v20 >> 2) | v20;
    v22 = ((((v21 >> 8) | v21) >> 16) | (v21 >> 8) | v21) + 1;
    if ( (unsigned int)v22 < 0x40 )
      LODWORD(v22) = 64;
    *(_DWORD *)(a1 + 1936) = v22;
    v23 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v22, 8);
    v24 = *(unsigned int *)(a1 + 1936);
    *(_QWORD *)(a1 + 1920) = v23;
    v25 = v24;
    v26 = 16 * v24;
    v27 = &v23[(unsigned __int64)v26 / 8];
    if ( v6 )
    {
      *(_QWORD *)(a1 + 1928) = 0;
      v28 = &v6[2 * v5];
      if ( v26 )
      {
        if ( (v26 & 0x10) == 0 || (*v23 = -4096, v23 += 2, v23 != v27) )
        {
          do
          {
            *v23 = -4096;
            v23 += 4;
            *(v23 - 2) = -4096;
          }
          while ( v23 != v27 );
        }
      }
      for ( i = v6; v28 != i; i += 2 )
      {
        v30 = *i;
        if ( *i != -4096 && v30 != -8192 )
        {
          v31 = *(_DWORD *)(a1 + 1936);
          if ( !v31 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v32 = (unsigned int)(v31 - 1);
          v33 = *(_QWORD *)(a1 + 1920);
          v34 = 1;
          v35 = nullptr;
          v36 = (unsigned int)v32 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
          v37 = (_QWORD *)(v33 + 16 * v36);
          v38 = *v37;
          if ( *v37 != v30 )
          {
            while ( v38 != -4096 )
            {
              if ( v38 == -8192 && !v35 )
                v35 = v37;
              v36 = (unsigned int)v32 & ((_DWORD)v36 + v34);
              v37 = (_QWORD *)(v33 + 16 * v36);
              v38 = *v37;
              if ( v30 == *v37 )
                goto LABEL_35;
              ++v34;
            }
            if ( v35 )
              v37 = v35;
          }
LABEL_35:
          *v37 = v30;
          v37[1] = i[1];
          i[1] = 0;
          ++*(_DWORD *)(a1 + 1928);
          v39 = i[1];
          if ( v39 )
            (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64, __int64, _QWORD *))(*(_QWORD *)v39 + 8LL))(
              v39,
              v36,
              v37,
              v32,
              v38,
              v35);
          i[1] = 0;
        }
      }
      operator delete();
      v23 = *(_QWORD **)(a1 + 1920);
      v25 = *(_DWORD *)(a1 + 1936);
      v17 = *(_DWORD *)(a1 + 1928) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1928) = 0;
      if ( v23 != v27 )
      {
        v64 = v23;
        if ( (((_BYTE)v27 - (_BYTE)v23) & 0x10) == 0 || (v64 = v23 + 2, *v23 = -4096, v23 + 2 != v27) )
        {
          do
          {
            *v64 = -4096;
            v64 += 4;
            *(v64 - 2) = -4096;
          }
          while ( v64 != v27 );
        }
      }
      v17 = 1;
    }
    if ( v25 )
    {
      v40 = v25 - 1;
      v7 = v40 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v9 = &v23[2 * v7];
      v8 = *v9;
      if ( *v9 != a2 )
      {
        v41 = 1;
        v42 = nullptr;
        while ( v8 != -4096 )
        {
          if ( v8 == -8192 && !v42 )
            v42 = v9;
          v7 = v40 & (unsigned int)(v41 + v7);
          v9 = &v23[2 * (unsigned int)v7];
          v8 = *v9;
          if ( *v9 == a2 )
            goto LABEL_15;
          ++v41;
        }
        if ( v42 )
          v9 = v42;
      }
      goto LABEL_15;
    }
    goto LABEL_110;
  }
  if ( (unsigned int)v5 >> 3 >= (int)v5 - *(_DWORD *)(a1 + 1932) - v17 )
  {
    v43 = (((((((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4) | ((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 8)
           | ((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4)
           | ((v7 | (v7 >> 1)) >> 2)
           | v7
           | (v7 >> 1)) >> 16)
         | ((((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4) | ((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 8)
         | ((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4)
         | ((v7 | (v7 >> 1)) >> 2)
         | v7
         | (v7 >> 1))
        + 1;
    if ( (unsigned int)v43 < 0x40 )
      LODWORD(v43) = 64;
    *(_DWORD *)(a1 + 1936) = v43;
    v44 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v43, 8);
    v45 = *(unsigned int *)(a1 + 1936);
    *(_QWORD *)(a1 + 1920) = v44;
    v46 = v45;
    v47 = 16 * v45;
    v48 = &v44[(unsigned __int64)v47 / 8];
    if ( v6 )
    {
      *(_QWORD *)(a1 + 1928) = 0;
      v49 = &v6[2 * v5];
      if ( v47 )
      {
        if ( (v47 & 0x10) == 0 || (*v44 = -4096, v44 += 2, v44 != v48) )
        {
          do
          {
            *v44 = -4096;
            v44 += 4;
            *(v44 - 2) = -4096;
          }
          while ( v44 != v48 );
        }
      }
      v50 = v6;
      do
      {
        v51 = *v50;
        if ( *v50 != -8192 && v51 != -4096 )
        {
          v52 = *(_DWORD *)(a1 + 1936);
          if ( !v52 )
          {
            *(_QWORD *)&dword_0 = *v50;
            BUG();
          }
          v53 = v52 - 1;
          v54 = *(_QWORD *)(a1 + 1920);
          v55 = 1;
          v56 = nullptr;
          LODWORD(v57) = v53 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
          v58 = (_QWORD *)(v54 + 16LL * (unsigned int)v57);
          v59 = *v58;
          if ( *v58 != v51 )
          {
            while ( v59 != -4096 )
            {
              if ( v59 == -8192 && !v56 )
                v56 = v58;
              v57 = v53 & (unsigned int)(v57 + v55);
              v58 = (_QWORD *)(v54 + 16 * v57);
              v59 = *v58;
              if ( v51 == *v58 )
                goto LABEL_68;
              ++v55;
            }
            if ( v56 )
              v58 = v56;
          }
LABEL_68:
          *v58 = v51;
          v58[1] = v50[1];
          v50[1] = 0;
          ++*(_DWORD *)(a1 + 1928);
          v60 = v50[1];
          if ( v60 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
          v50[1] = 0;
        }
        v50 += 2;
      }
      while ( v49 != v50 );
      operator delete();
      v44 = *(_QWORD **)(a1 + 1920);
      v46 = *(_DWORD *)(a1 + 1936);
      v17 = *(_DWORD *)(a1 + 1928) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1928) = 0;
      if ( v44 != v48 )
      {
        v65 = v44;
        if ( (((_BYTE)v48 - (_BYTE)v44) & 0x10) == 0 || (v65 = v44 + 2, *v44 = -4096, v44 + 2 != v48) )
        {
          do
          {
            *v65 = -4096;
            v65 += 4;
            *(v65 - 2) = -4096;
          }
          while ( v65 != v48 );
        }
      }
      v17 = 1;
    }
    if ( v46 )
    {
      v61 = v46 - 1;
      v62 = 1;
      v8 = 0;
      v63 = v61 & v10;
      v9 = &v44[2 * v63];
      v7 = *v9;
      if ( *v9 != a2 )
      {
        while ( v7 != -4096 )
        {
          if ( !v8 && v7 == -8192 )
            v8 = (__int64)v9;
          v63 = v61 & (v62 + v63);
          v9 = &v44[2 * v63];
          v7 = *v9;
          if ( *v9 == a2 )
            goto LABEL_15;
          ++v62;
        }
        if ( v8 )
          v9 = (__int64 *)v8;
      }
      goto LABEL_15;
    }
LABEL_110:
    *(_DWORD *)(a1 + 1928) = v17;
    BUG();
  }
LABEL_15:
  *(_DWORD *)(a1 + 1928) = v17;
  if ( *v9 != -4096 )
    --*(_DWORD *)(a1 + 1932);
  v9[1] = 0;
  *v9 = a2;
  v14 = v9 + 1;
LABEL_18:
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64 *, unsigned __int64, __int64))(**(_QWORD **)(a1 + 17272) + 40LL))(
    v66,
    *(_QWORD *)(a1 + 17272),
    v9,
    v7,
    v8);
  v18 = v66[0];
  v66[0] = 0;
  v19 = *v14;
  *v14 = v18;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  if ( v66[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v66[0] + 8LL))(v66[0]);
  return (__int64 *)*v14;
}

