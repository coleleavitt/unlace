void __fastcall sub_98D5C0(__int64 a1, unsigned __int64 a2)
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
  _QWORD *v33; // rdx
  __int64 *v34; // r11
  __int64 v35; // r10
  _QWORD *v36; // rsi
  __int64 *v37; // rdx
  int k; // r14d
  __int64 v39; // rsi
  unsigned int v40; // r8d
  __int64 v41; // rdi
  __int64 v42; // r9
  int v43; // edi
  __int64 v44; // rdi
  int v45; // r10d
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // r11
  __int64 v50; // rdx
  int v51; // r10d
  __int64 *v52; // r9
  _QWORD *i; // rdx
  __int64 *v54; // rax
  __int64 v55; // rdx
  unsigned int v56; // edi
  _QWORD *v57; // rsi
  __int64 v58; // r8
  int v59; // ecx
  int v60; // eax
  unsigned int v61; // r14d
  _QWORD *v62; // rdi
  __int64 v63; // rcx
  _QWORD *v64; // rcx
  _QWORD *v65; // rdx
  __int64 v66; // rdx
  _QWORD *j; // rdx
  unsigned int v68; // [rsp+8h] [rbp-C0h]
  __int64 *v69; // [rsp+8h] [rbp-C0h]
  int v70; // [rsp+8h] [rbp-C0h]
  __int64 *v71; // [rsp+10h] [rbp-B8h]
  unsigned int v72; // [rsp+10h] [rbp-B8h]
  __int64 v73; // [rsp+10h] [rbp-B8h]
  int v74; // [rsp+18h] [rbp-B0h]
  _QWORD *v75; // [rsp+18h] [rbp-B0h]
  int v76; // [rsp+20h] [rbp-A8h]
  __m128i v77[2]; // [rsp+30h] [rbp-98h] BYREF
  __m128 v78; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v79; // [rsp+60h] [rbp-68h]

  v4 = *(_QWORD *)(a2 + 24);
  if ( (*(_WORD *)v4 & 0x1FF) == 0x3C && (*(_DWORD *)v4 & 0x80000) == 0 )
    v4 = *(_QWORD *)(v4 + 16);
  v5 = sub_BD7CB0(v4);
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
    sub_9885F0(
      &v78,
      (_QWORD *)(v8 + ((unsigned __int64)(unsigned int)v6 << 6)),
      (_QWORD *)(v8 + ((unsigned __int64)(unsigned int)v6 << 6)),
      a1 + 16,
      1);
    v12 = v78.m128_u64[0];
    goto LABEL_7;
  }
LABEL_6:
  sub_9885F0(&v78, v10, (_QWORD *)((v6 << 6) + v8), a1 + 16, 1);
  v12 = v78.m128_u64[0];
LABEL_7:
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
  sub_9885F0(&v78, v13, v13, a1 + 16, 1);
  if ( v78.m128_u64[0] != v12 )
  {
    v15 = *(_DWORD *)(v12 + 8);
    if ( (unsigned int)(v15 - 2) > 1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      if ( v15 == 4 )
      {
        v17 = sub_98A100(v16, *(_QWORD *)(v12 + 16));
      }
      else if ( v15 == 5 )
      {
        v17 = sub_98C240(v16, *(_QWORD *)(v12 + 16));
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
        v78.m128_u64[0] = a2;
        v78.m128_i32[2] = 5;
        v79 = a2;
        sub_988660(v77, v7, (__int64 *)&v78, (const __m128i *)&v78.m128_u16[4], v18, v14);
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
        v72 = *(_DWORD *)(v16 + 56);
        v69 = *(__int64 **)(v16 + 40);
        v46 = (v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2);
        v47 = ((((((v46 >> 4) | v46) >> 8) | (v46 >> 4) | v46) >> 16) | (((v46 >> 4) | v46) >> 8) | (v46 >> 4) | v46)
            + 1;
        if ( (unsigned int)v47 < 0x40 )
          LODWORD(v47) = 64;
        *(_DWORD *)(v16 + 56) = v47;
        v48 = (_QWORD *)sub_220C370(16LL * (unsigned int)v47, 8, 64, v19, v18, v14);
        v18 = v72;
        v49 = v48;
        *(_QWORD *)(v16 + 40) = v48;
        if ( v69 )
        {
          v50 = *(unsigned int *)(v16 + 56);
          *(_QWORD *)(v16 + 48) = 0;
          v51 = v50;
          v52 = &v69[2 * v72];
          for ( i = &v48[2 * v50]; i != v48; v48 += 2 )
            *v48 = -4096;
          v54 = v69;
          v70 = v51 - 1;
          do
          {
            v55 = *v54;
            if ( *v54 != -8192 && v55 != -4096 )
            {
              if ( !v51 )
              {
                *(_QWORD *)&dword_0 = *v54;
                BUG();
              }
              v56 = v70 & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
              v57 = &v49[2 * v56];
              v58 = *v57;
              if ( v55 != *v57 && v58 != -4096 )
              {
                v76 = 1;
                v75 = nullptr;
                while ( 1 )
                {
                  if ( !v75 )
                  {
                    if ( v58 != -8192 )
                      v57 = nullptr;
                    v75 = v57;
                  }
                  v56 = v70 & (v76 + v56);
                  ++v76;
                  v57 = &v49[2 * v56];
                  v58 = *v57;
                  if ( v55 == *v57 )
                    break;
                  if ( v58 == -4096 )
                  {
                    if ( v75 )
                      v57 = v75;
                    break;
                  }
                }
              }
              *v57 = v55;
              *((_DWORD *)v57 + 2) = *((_DWORD *)v54 + 2);
              ++*(_DWORD *)(v16 + 48);
            }
            v54 += 2;
          }
          while ( v52 != v54 );
          operator delete();
          v49 = *(_QWORD **)(v16 + 40);
          v59 = *(_DWORD *)(v16 + 56);
          v28 = *(_DWORD *)(v16 + 48) + 1;
        }
        else
        {
          v66 = *(unsigned int *)(v16 + 56);
          *(_QWORD *)(v16 + 48) = 0;
          v59 = v66;
          for ( j = &v48[2 * v66]; j != v48; v48 += 2 )
            *v48 = -4096;
          v28 = 1;
        }
        if ( v59 )
        {
          v60 = v59 - 1;
          v61 = (v59 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v22 = &v49[2 * v61];
          v29 = *v22;
          if ( a2 != *v22 )
          {
            v18 = 1;
            v62 = nullptr;
            if ( v29 != -4096 )
            {
              while ( 1 )
              {
                if ( v29 == -8192 && !v62 )
                  v62 = v22;
                v14 = (unsigned int)(v18 + 1);
                v18 = v61 + (unsigned int)v18;
                v61 = v60 & v18;
                v22 = &v49[2 * (v60 & (unsigned int)v18)];
                v29 = *v22;
                if ( a2 == *v22 )
                  goto LABEL_27;
                if ( v29 == -4096 )
                {
                  if ( !v62 )
                    break;
                  v29 = *v62;
                  v22 = v62;
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
        v71 = *(__int64 **)(v16 + 40);
        v68 = *(_DWORD *)(v16 + 56);
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
        v32 = sub_220C370(16LL * (unsigned int)v31, 8, 64, v19, v18, v14);
        *(_QWORD *)(v16 + 40) = v32;
        if ( v71 )
        {
          *(_QWORD *)(v16 + 48) = 0;
          v33 = (_QWORD *)v32;
          v34 = &v71[2 * v68];
          v35 = *(unsigned int *)(v16 + 56);
          v36 = (_QWORD *)(v32 + 16 * v35);
          if ( (_QWORD *)v32 != v36 )
          {
            do
            {
              *v33 = -4096;
              v33 += 2;
            }
            while ( v36 != v33 );
          }
          v37 = v71;
          for ( k = v35 - 1; v34 != v37; v37 += 2 )
          {
            v39 = *v37;
            if ( *v37 != -8192 && v39 != -4096 )
            {
              if ( !(_DWORD)v35 )
              {
                *(_QWORD *)&dword_0 = *v37;
                BUG();
              }
              v40 = k & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
              v41 = v32 + 16LL * v40;
              v42 = *(_QWORD *)v41;
              if ( *(_QWORD *)v41 != v39 && v42 != -4096 )
              {
                v74 = 1;
                v73 = 0;
                while ( 1 )
                {
                  if ( !v73 )
                  {
                    if ( v42 != -8192 )
                      v41 = 0;
                    v73 = v41;
                  }
                  v40 = k & (v74 + v40);
                  v41 = v32 + 16LL * v40;
                  v42 = *(_QWORD *)v41;
                  if ( v39 == *(_QWORD *)v41 )
                    break;
                  if ( v42 == -4096 )
                  {
                    if ( v73 )
                      v41 = v73;
                    break;
                  }
                  ++v74;
                }
              }
              *(_QWORD *)v41 = v39;
              *(_DWORD *)(v41 + 8) = *((_DWORD *)v37 + 2);
              ++*(_DWORD *)(v16 + 48);
            }
          }
          operator delete();
          v32 = *(_QWORD *)(v16 + 40);
          v43 = *(_DWORD *)(v16 + 56);
          v28 = *(_DWORD *)(v16 + 48) + 1;
        }
        else
        {
          v63 = *(unsigned int *)(v16 + 56);
          *(_QWORD *)(v16 + 48) = 0;
          v43 = v63;
          v64 = (_QWORD *)(v32 + 16 * v63);
          if ( (_QWORD *)v32 != v64 )
          {
            v65 = (_QWORD *)v32;
            do
            {
              *v65 = -4096;
              v65 += 2;
            }
            while ( v64 != v65 );
          }
          v28 = 1;
        }
        if ( v43 )
        {
          v18 = (unsigned int)(v43 - 1);
          LODWORD(v44) = v18 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v22 = (_QWORD *)(v32 + 16LL * (unsigned int)v44);
          v29 = *v22;
          if ( a2 != *v22 )
          {
            v45 = 1;
            v14 = 0;
            if ( v29 != -4096 )
            {
              while ( 1 )
              {
                if ( v29 == -8192 && !v14 )
                  v14 = (__int64)v22;
                v44 = (unsigned int)v18 & ((_DWORD)v44 + v45);
                v22 = (_QWORD *)(v32 + 16 * v44);
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
                ++v45;
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

