__int64 *__fastcall sub_6D3880(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v6; // r12
  __int64 *v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // r13d
  __int64 *v12; // rdx
  int v13; // r13d
  int v14; // edi
  __int64 *v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rbp
  int v19; // r9d
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 *v31; // r15
  __int64 *i; // r13
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rdi
  int v37; // r10d
  _QWORD *v38; // r9
  __int64 v39; // rsi
  _QWORD *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdi
  int v43; // edi
  int v44; // r10d
  __int64 *v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  int v49; // edi
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  __int64 *v52; // r12
  __int64 *v53; // r15
  __int64 v54; // rax
  int v55; // ecx
  int v56; // ecx
  __int64 v57; // r9
  int v58; // r11d
  _QWORD *v59; // r10
  __int64 v60; // rsi
  _QWORD *v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rdi
  int v64; // edi
  int v65; // r9d
  unsigned int v66; // r13d
  _QWORD *v67; // rcx
  _QWORD *v68; // rcx
  __int64 v69[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = 0;
  v6 = *(unsigned int *)(a1 + 1960);
  v7 = *(__int64 **)(a1 + 1944);
  if ( !(_DWORD)v6 )
    goto LABEL_23;
  v8 = (unsigned int)(v6 - 1);
  v9 = 1;
  v10 = (unsigned int)a3 >> 9;
  v11 = (unsigned int)a3 >> 4;
  v12 = nullptr;
  v13 = v10 ^ v11;
  v14 = v8 & v13;
  v15 = &v7[2 * ((unsigned int)v8 & v13)];
  v16 = *v15;
  if ( *v15 == a3 )
  {
LABEL_3:
    v12 = (__int64 *)v15[1];
    v17 = v15 + 1;
    if ( v12 )
      return v12;
    goto LABEL_18;
  }
  while ( v16 != -4096 )
  {
    if ( v16 == -8192 && !v12 )
      v12 = v15;
    v19 = v9 + 1;
    v9 = (unsigned int)(v14 + v9);
    v14 = v8 & v9;
    v15 = &v7[2 * ((unsigned int)v8 & (unsigned int)v9)];
    v16 = *v15;
    if ( *v15 == a3 )
      goto LABEL_3;
    LODWORD(v9) = v19;
  }
  if ( !v12 )
    v12 = v15;
  v20 = *(_DWORD *)(a1 + 1952) + 1;
  v3 = 2 * v6;
  v9 = (unsigned int)(4 * v20);
  if ( (unsigned int)v9 >= 3 * (int)v6 )
  {
LABEL_23:
    v23 = (unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1);
    v24 = (((v23 >> 2) | v23) >> 4) | (v23 >> 2) | v23;
    v25 = ((((v24 >> 8) | v24) >> 16) | (v24 >> 8) | v24) + 1;
    if ( (unsigned int)v25 < 0x40 )
      LODWORD(v25) = 64;
    *(_DWORD *)(a1 + 1960) = v25;
    v26 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v25, 8);
    v27 = *(unsigned int *)(a1 + 1960);
    *(_QWORD *)(a1 + 1944) = v26;
    v28 = v27;
    v29 = 16 * v27;
    v30 = &v26[(unsigned __int64)v29 / 8];
    if ( v7 )
    {
      *(_QWORD *)(a1 + 1952) = 0;
      v31 = &v7[2 * v6];
      if ( v29 )
      {
        if ( (v29 & 0x10) == 0 || (*v26 = -4096, v26 += 2, v26 != v30) )
        {
          do
          {
            *v26 = -4096;
            v26 += 4;
            *(v26 - 2) = -4096;
          }
          while ( v26 != v30 );
        }
      }
      for ( i = v7; v31 != i; i += 2 )
      {
        v33 = *i;
        if ( *i != -4096 && v33 != -8192 )
        {
          v34 = *(_DWORD *)(a1 + 1960);
          if ( !v34 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v35 = (unsigned int)(v34 - 1);
          v36 = *(_QWORD *)(a1 + 1944);
          v37 = 1;
          v38 = nullptr;
          v39 = (unsigned int)v35 & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
          v40 = (_QWORD *)(v36 + 16 * v39);
          v41 = *v40;
          if ( *v40 != v33 )
          {
            while ( v41 != -4096 )
            {
              if ( v41 == -8192 && !v38 )
                v38 = v40;
              v39 = (unsigned int)v35 & ((_DWORD)v39 + v37);
              v40 = (_QWORD *)(v36 + 16 * v39);
              v41 = *v40;
              if ( v33 == *v40 )
                goto LABEL_35;
              ++v37;
            }
            if ( v38 )
              v40 = v38;
          }
LABEL_35:
          *v40 = v33;
          v40[1] = i[1];
          i[1] = 0;
          ++*(_DWORD *)(a1 + 1952);
          v42 = i[1];
          if ( v42 )
            (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64, __int64, _QWORD *))(*(_QWORD *)v42 + 8LL))(
              v42,
              v39,
              v40,
              v35,
              v41,
              v38);
          i[1] = 0;
        }
      }
      operator delete();
      v26 = *(_QWORD **)(a1 + 1944);
      v28 = *(_DWORD *)(a1 + 1960);
      v20 = *(_DWORD *)(a1 + 1952) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1952) = 0;
      if ( v26 != v30 )
      {
        v67 = v26;
        if ( (((_BYTE)v30 - (_BYTE)v26) & 0x10) == 0 || (v67 = v26 + 2, *v26 = -4096, v26 + 2 != v30) )
        {
          do
          {
            *v67 = -4096;
            v67 += 4;
            *(v67 - 2) = -4096;
          }
          while ( v67 != v30 );
        }
      }
      v20 = 1;
    }
    if ( v28 )
    {
      v43 = v28 - 1;
      v8 = v43 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
      v12 = &v26[2 * v8];
      v9 = *v12;
      if ( *v12 != a3 )
      {
        v44 = 1;
        v45 = nullptr;
        while ( v9 != -4096 )
        {
          if ( v9 == -8192 && !v45 )
            v45 = v12;
          v8 = v43 & (unsigned int)(v44 + v8);
          v12 = &v26[2 * (unsigned int)v8];
          v9 = *v12;
          if ( *v12 == a3 )
            goto LABEL_15;
          ++v44;
        }
        if ( v45 )
          v12 = v45;
      }
      goto LABEL_15;
    }
    goto LABEL_110;
  }
  if ( (unsigned int)v6 >> 3 >= (int)v6 - *(_DWORD *)(a1 + 1956) - v20 )
  {
    v46 = (((((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
           | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
           | ((v8 | (v8 >> 1)) >> 2)
           | v8
           | (v8 >> 1)) >> 16)
         | ((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
         | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
         | ((v8 | (v8 >> 1)) >> 2)
         | v8
         | (v8 >> 1))
        + 1;
    if ( (unsigned int)v46 < 0x40 )
      LODWORD(v46) = 64;
    *(_DWORD *)(a1 + 1960) = v46;
    v47 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v46, 8);
    v48 = *(unsigned int *)(a1 + 1960);
    *(_QWORD *)(a1 + 1944) = v47;
    v49 = v48;
    v50 = 16 * v48;
    v51 = &v47[(unsigned __int64)v50 / 8];
    if ( v7 )
    {
      *(_QWORD *)(a1 + 1952) = 0;
      v52 = &v7[2 * v6];
      if ( v50 )
      {
        if ( (v50 & 0x10) == 0 || (*v47 = -4096, v47 += 2, v47 != v51) )
        {
          do
          {
            *v47 = -4096;
            v47 += 4;
            *(v47 - 2) = -4096;
          }
          while ( v47 != v51 );
        }
      }
      v53 = v7;
      do
      {
        v54 = *v53;
        if ( *v53 != -8192 && v54 != -4096 )
        {
          v55 = *(_DWORD *)(a1 + 1960);
          if ( !v55 )
          {
            *(_QWORD *)&dword_0 = *v53;
            BUG();
          }
          v56 = v55 - 1;
          v57 = *(_QWORD *)(a1 + 1944);
          v58 = 1;
          v59 = nullptr;
          LODWORD(v60) = v56 & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
          v61 = (_QWORD *)(v57 + 16LL * (unsigned int)v60);
          v62 = *v61;
          if ( *v61 != v54 )
          {
            while ( v62 != -4096 )
            {
              if ( v62 == -8192 && !v59 )
                v59 = v61;
              v60 = v56 & (unsigned int)(v60 + v58);
              v61 = (_QWORD *)(v57 + 16 * v60);
              v62 = *v61;
              if ( v54 == *v61 )
                goto LABEL_68;
              ++v58;
            }
            if ( v59 )
              v61 = v59;
          }
LABEL_68:
          *v61 = v54;
          v61[1] = v53[1];
          v53[1] = 0;
          ++*(_DWORD *)(a1 + 1952);
          v63 = v53[1];
          if ( v63 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 8LL))(v63);
          v53[1] = 0;
        }
        v53 += 2;
      }
      while ( v52 != v53 );
      operator delete();
      v47 = *(_QWORD **)(a1 + 1944);
      v49 = *(_DWORD *)(a1 + 1960);
      v20 = *(_DWORD *)(a1 + 1952) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1952) = 0;
      if ( v47 != v51 )
      {
        v68 = v47;
        if ( (((_BYTE)v51 - (_BYTE)v47) & 0x10) == 0 || (v68 = v47 + 2, *v47 = -4096, v47 + 2 != v51) )
        {
          do
          {
            *v68 = -4096;
            v68 += 4;
            *(v68 - 2) = -4096;
          }
          while ( v68 != v51 );
        }
      }
      v20 = 1;
    }
    if ( v49 )
    {
      v64 = v49 - 1;
      v65 = 1;
      v9 = 0;
      v66 = v64 & v13;
      v12 = &v47[2 * v66];
      v8 = *v12;
      if ( *v12 != a3 )
      {
        while ( v8 != -4096 )
        {
          if ( !v9 && v8 == -8192 )
            v9 = (__int64)v12;
          v66 = v64 & (v65 + v66);
          v12 = &v47[2 * v66];
          v8 = *v12;
          if ( *v12 == a3 )
            goto LABEL_15;
          ++v65;
        }
        if ( v9 )
          v12 = (__int64 *)v9;
      }
      goto LABEL_15;
    }
LABEL_110:
    *(_DWORD *)(a1 + 1952) = v20;
    BUG();
  }
LABEL_15:
  *(_DWORD *)(a1 + 1952) = v20;
  if ( *v12 != -4096 )
    --*(_DWORD *)(a1 + 1956);
  v12[1] = 0;
  *v12 = a3;
  v17 = v12 + 1;
LABEL_18:
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64 *, unsigned __int64, __int64))(**(_QWORD **)(a1 + 17272) + 40LL))(
    v69,
    *(_QWORD *)(a1 + 17272),
    v12,
    v8,
    v9);
  v21 = v69[0];
  v69[0] = 0;
  v22 = *v17;
  *v17 = v21;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  if ( v69[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69[0] + 8LL))(v69[0]);
  return (__int64 *)*v17;
}

