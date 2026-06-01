void __fastcall sub_9B1300(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 *v10; // rsi
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  _QWORD *v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r13
  int v17; // r15d
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  unsigned int v21; // esi
  _QWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // esi
  int v25; // r10d
  __int64 v26; // r8
  int v27; // r10d
  int v28; // esi
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rcx
  _QWORD *v34; // rdx
  __int64 *v35; // r11
  __int64 v36; // r10
  _QWORD *v37; // rsi
  __int64 *v38; // rdx
  int k; // r14d
  __int64 v40; // rsi
  unsigned int v41; // r8d
  __int64 v42; // rdi
  __int64 v43; // r9
  int v44; // edi
  __int64 v45; // rdi
  int v46; // r10d
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 *v50; // rcx
  _QWORD *v51; // r11
  __int64 v52; // rdx
  int v53; // r10d
  __int64 *v54; // r9
  _QWORD *i; // rdx
  __int64 *v56; // rax
  __int64 v57; // rdx
  unsigned int v58; // edi
  _QWORD *v59; // rsi
  __int64 v60; // r8
  int v61; // ecx
  int v62; // eax
  unsigned int v63; // r14d
  _QWORD *v64; // rdi
  __int64 v65; // rcx
  _QWORD *v66; // rcx
  _QWORD *v67; // rdx
  __int64 v68; // rdx
  _QWORD *j; // rdx
  unsigned int v70; // [rsp+8h] [rbp-C0h]
  __int64 v71; // [rsp+8h] [rbp-C0h]
  __int64 *v72; // [rsp+8h] [rbp-C0h]
  int v73; // [rsp+8h] [rbp-C0h]
  __int64 *v74; // [rsp+10h] [rbp-B8h]
  unsigned int v75; // [rsp+10h] [rbp-B8h]
  __int64 v76; // [rsp+10h] [rbp-B8h]
  __int64 v77; // [rsp+10h] [rbp-B8h]
  int v78; // [rsp+18h] [rbp-B0h]
  _QWORD *v79; // [rsp+18h] [rbp-B0h]
  int v80; // [rsp+20h] [rbp-A8h]
  __m128i v81[2]; // [rsp+30h] [rbp-98h] BYREF
  __m128 v82; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v83; // [rsp+60h] [rbp-68h]

  v4 = *(_QWORD *)(a2 + 24);
  if ( (*(_WORD *)v4 & 0x1FF) == 0x3C && (*(_DWORD *)v4 & 0x80000) == 0 )
    v4 = *(_QWORD *)(v4 + 16);
  v5 = sub_BFB9F0(v4);
  v6 = *(unsigned int *)(a1 + 32);
  v7 = a1 + 16;
  v8 = *(_QWORD *)(a1 + 16);
  if ( !(_DWORD)v6 )
    goto LABEL_20;
  v9 = (v6 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
  v10 = (__int64 *)(v8 + ((unsigned __int64)v9 << 6));
  v11 = *v10;
  if ( v5 != *v10 )
  {
    v24 = 1;
    if ( v11 != -4096 )
    {
      do
      {
        v25 = v24 + 1;
        v9 = (v6 - 1) & (v24 + v9);
        v10 = (__int64 *)(v8 + ((unsigned __int64)v9 << 6));
        v26 = *v10;
        if ( v5 == *v10 )
          goto LABEL_6;
        v24 = v25;
      }
      while ( v26 != -4096 );
    }
LABEL_20:
    sub_9AC330(
      &v82,
      (_QWORD *)(v8 + ((unsigned __int64)(unsigned int)v6 << 6)),
      (_QWORD *)(v8 + ((unsigned __int64)(unsigned int)v6 << 6)),
      a1 + 16,
      1);
    v12 = v82.m128_u64[0];
    goto LABEL_7;
  }
LABEL_6:
  sub_9AC330(&v82, v10, (_QWORD *)((v6 << 6) + v8), a1 + 16, 1);
  v12 = v82.m128_u64[0];
LABEL_7:
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
  sub_9AC330(&v82, v13, v13, a1 + 16, 1);
  if ( v82.m128_u64[0] != v12 )
  {
    v15 = *(_DWORD *)(v12 + 8);
    if ( (unsigned int)(v15 - 2) > 1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      if ( v15 == 4 )
      {
        v17 = sub_9ADE40(v16, *(_QWORD *)(v12 + 16));
      }
      else if ( v15 == 5 )
      {
        v17 = sub_9AFF80(v16, *(_QWORD *)(v12 + 16));
      }
      else
      {
        v17 = 0;
        if ( v15 == 1 )
          v17 = *(_DWORD *)(v12 + 16);
      }
      v18 = *(unsigned int *)(v16 + 56);
      v19 = *(_QWORD *)(v16 + 40);
      if ( !(_DWORD)v18 )
        goto LABEL_30;
      v20 = (unsigned int)(v18 - 1);
      v21 = v20 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v22 = (_QWORD *)(v19 + 16LL * v21);
      v23 = *v22;
      if ( a2 == *v22 )
      {
LABEL_16:
        *((_DWORD *)v22 + 2) = v17;
        v82.m128_u64[0] = a2;
        v82.m128_i32[2] = 5;
        v83 = a2;
        sub_9AC3A0(v81, v7, (__int64 *)&v82, (const __m128i *)&v82.m128_u16[4], v18, v14);
        return;
      }
      v27 = 1;
      v14 = 0;
      if ( v23 != -4096 )
      {
        while ( 1 )
        {
          if ( v23 == -8192 && !v14 )
            v14 = (__int64)v22;
          v21 = v20 & (v27 + v21);
          v22 = (_QWORD *)(v19 + 16LL * v21);
          v23 = *v22;
          if ( a2 == *v22 )
            goto LABEL_16;
          if ( v23 == -4096 )
            break;
          ++v27;
        }
        if ( v14 )
          v22 = (_QWORD *)v14;
      }
      v28 = *(_DWORD *)(v16 + 48) + 1;
      v14 = (unsigned int)(4 * v28);
      if ( (unsigned int)v14 < 3 * (int)v18 )
      {
        v14 = (unsigned int)v18 >> 3;
        if ( (int)v18 - *(_DWORD *)(v16 + 52) - v28 > (unsigned int)v14 )
        {
          v29 = *v22;
          goto LABEL_27;
        }
        v75 = *(_DWORD *)(v16 + 56);
        v72 = *(__int64 **)(v16 + 40);
        v47 = (v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2);
        v48 = ((((((v47 >> 4) | v47) >> 8) | (v47 >> 4) | v47) >> 16) | (((v47 >> 4) | v47) >> 8) | (v47 >> 4) | v47)
            + 1;
        if ( (unsigned int)v48 < 0x40 )
          LODWORD(v48) = 64;
        *(_DWORD *)(v16 + 56) = v48;
        v49 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v48, 8, 64, v19, v18, v14);
        v50 = v72;
        v18 = v75;
        v51 = v49;
        *(_QWORD *)(v16 + 40) = v49;
        if ( v72 )
        {
          v52 = *(unsigned int *)(v16 + 56);
          *(_QWORD *)(v16 + 48) = 0;
          v53 = v52;
          v76 = 2LL * v75;
          v54 = &v72[v76];
          for ( i = &v49[2 * v52]; i != v49; v49 += 2 )
            *v49 = -4096;
          v56 = v72;
          v73 = v53 - 1;
          do
          {
            v57 = *v56;
            if ( *v56 != -8192 && v57 != -4096 )
            {
              if ( !v53 )
              {
                *(_QWORD *)&dword_0 = *v56;
                BUG();
              }
              v58 = v73 & (((unsigned int)v57 >> 9) ^ ((unsigned int)v57 >> 4));
              v59 = &v51[2 * v58];
              v60 = *v59;
              if ( v57 != *v59 && v60 != -4096 )
              {
                v80 = 1;
                v79 = nullptr;
                while ( 1 )
                {
                  if ( !v79 )
                  {
                    if ( v60 != -8192 )
                      v59 = nullptr;
                    v79 = v59;
                  }
                  v58 = v73 & (v80 + v58);
                  ++v80;
                  v59 = &v51[2 * v58];
                  v60 = *v59;
                  if ( v57 == *v59 )
                    break;
                  if ( v60 == -4096 )
                  {
                    if ( v79 )
                      v59 = v79;
                    break;
                  }
                }
              }
              *v59 = v57;
              *((_DWORD *)v59 + 2) = *((_DWORD *)v56 + 2);
              ++*(_DWORD *)(v16 + 48);
            }
            v56 += 2;
          }
          while ( v54 != v56 );
          operator delete(v50, v76 * 8, 8);
          v51 = *(_QWORD **)(v16 + 40);
          v61 = *(_DWORD *)(v16 + 56);
          v28 = *(_DWORD *)(v16 + 48) + 1;
        }
        else
        {
          v68 = *(unsigned int *)(v16 + 56);
          *(_QWORD *)(v16 + 48) = 0;
          v61 = v68;
          for ( j = &v49[2 * v68]; j != v49; v49 += 2 )
            *v49 = -4096;
          v28 = 1;
        }
        if ( v61 )
        {
          v62 = v61 - 1;
          v63 = (v61 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v22 = &v51[2 * v63];
          v29 = *v22;
          if ( a2 != *v22 )
          {
            v18 = 1;
            v64 = nullptr;
            if ( v29 != -4096 )
            {
              while ( 1 )
              {
                if ( v29 == -8192 && !v64 )
                  v64 = v22;
                v14 = (unsigned int)(v18 + 1);
                v18 = v63 + (unsigned int)v18;
                v63 = v62 & v18;
                v22 = &v51[2 * (v62 & (unsigned int)v18)];
                v29 = *v22;
                if ( a2 == *v22 )
                  goto LABEL_27;
                if ( v29 == -4096 )
                {
                  if ( !v64 )
                    break;
                  v29 = *v64;
                  v22 = v64;
                  goto LABEL_27;
                }
                LODWORD(v18) = v14;
              }
            }
LABEL_46:
            *(_DWORD *)(v16 + 48) = v28;
LABEL_29:
            *v22 = a2;
            *((_DWORD *)v22 + 2) = 0;
            goto LABEL_16;
          }
          goto LABEL_27;
        }
      }
      else
      {
LABEL_30:
        v74 = *(__int64 **)(v16 + 40);
        v70 = *(_DWORD *)(v16 + 56);
        v30 = (((((((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v18 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v18 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 8)
            | (((((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v18 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v18 - 1) | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v18 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v18 - 1) >> 1);
        v31 = ((v30 >> 16) | v30) + 1;
        if ( (unsigned int)v31 < 0x40 )
          LODWORD(v31) = 64;
        *(_DWORD *)(v16 + 56) = v31;
        v32 = sub_22300B0(16LL * (unsigned int)v31, 8, 64, v19, v18, v14);
        v33 = v74;
        *(_QWORD *)(v16 + 40) = v32;
        if ( v74 )
        {
          *(_QWORD *)(v16 + 48) = 0;
          v34 = (_QWORD *)v32;
          v71 = 2LL * v70;
          v35 = &v74[v71];
          v36 = *(unsigned int *)(v16 + 56);
          v37 = (_QWORD *)(v32 + 16 * v36);
          if ( (_QWORD *)v32 != v37 )
          {
            do
            {
              *v34 = -4096;
              v34 += 2;
            }
            while ( v37 != v34 );
          }
          v38 = v74;
          for ( k = v36 - 1; v35 != v38; v38 += 2 )
          {
            v40 = *v38;
            if ( *v38 != -8192 && v40 != -4096 )
            {
              if ( !(_DWORD)v36 )
              {
                *(_QWORD *)&dword_0 = *v38;
                BUG();
              }
              v41 = k & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
              v42 = v32 + 16LL * v41;
              v43 = *(_QWORD *)v42;
              if ( *(_QWORD *)v42 != v40 && v43 != -4096 )
              {
                v78 = 1;
                v77 = 0;
                while ( 1 )
                {
                  if ( !v77 )
                  {
                    if ( v43 != -8192 )
                      v42 = 0;
                    v77 = v42;
                  }
                  v41 = k & (v78 + v41);
                  v42 = v32 + 16LL * v41;
                  v43 = *(_QWORD *)v42;
                  if ( v40 == *(_QWORD *)v42 )
                    break;
                  if ( v43 == -4096 )
                  {
                    if ( v77 )
                      v42 = v77;
                    break;
                  }
                  ++v78;
                }
              }
              *(_QWORD *)v42 = v40;
              *(_DWORD *)(v42 + 8) = *((_DWORD *)v38 + 2);
              ++*(_DWORD *)(v16 + 48);
            }
          }
          operator delete(v33, v71 * 8, 8);
          v32 = *(_QWORD *)(v16 + 40);
          v44 = *(_DWORD *)(v16 + 56);
          v28 = *(_DWORD *)(v16 + 48) + 1;
        }
        else
        {
          v65 = *(unsigned int *)(v16 + 56);
          *(_QWORD *)(v16 + 48) = 0;
          v44 = v65;
          v66 = (_QWORD *)(v32 + 16 * v65);
          if ( (_QWORD *)v32 != v66 )
          {
            v67 = (_QWORD *)v32;
            do
            {
              *v67 = -4096;
              v67 += 2;
            }
            while ( v66 != v67 );
          }
          v28 = 1;
        }
        if ( v44 )
        {
          v18 = (unsigned int)(v44 - 1);
          LODWORD(v45) = v18 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v22 = (_QWORD *)(v32 + 16LL * (unsigned int)v45);
          v29 = *v22;
          if ( a2 != *v22 )
          {
            v46 = 1;
            v14 = 0;
            if ( v29 != -4096 )
            {
              while ( 1 )
              {
                if ( v29 == -8192 && !v14 )
                  v14 = (__int64)v22;
                v45 = (unsigned int)v18 & ((_DWORD)v45 + v46);
                v22 = (_QWORD *)(v32 + 16 * v45);
                v29 = *v22;
                if ( a2 == *v22 )
                  goto LABEL_27;
                if ( v29 == -4096 )
                {
                  if ( !v14 )
                    goto LABEL_46;
                  v29 = *(_QWORD *)v14;
                  v22 = (_QWORD *)v14;
                  goto LABEL_27;
                }
                ++v46;
              }
            }
            goto LABEL_46;
          }
LABEL_27:
          *(_DWORD *)(v16 + 48) = v28;
          if ( v29 != -4096 )
            --*(_DWORD *)(v16 + 52);
          goto LABEL_29;
        }
      }
      ++*(_DWORD *)(v16 + 48);
      BUG();
    }
  }
}
