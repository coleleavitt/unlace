__int64 __fastcall sub_6BFC60(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r13
  _QWORD *v3; // r12
  int v4; // edx
  int v5; // ebp
  _QWORD *v6; // rsi
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  int v9; // r9d
  __int64 *v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbp
  int v20; // edi
  unsigned int v21; // edx
  __int64 *v22; // r14
  unsigned __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdi
  int v26; // ecx
  __int64 v27; // rdi
  _QWORD *v28; // rsi
  __int64 *v29; // r13
  __int64 *i; // rax
  __int64 v31; // rdx
  int v32; // r8d
  int v33; // r8d
  __int64 v34; // r10
  unsigned int v35; // edi
  _QWORD *v36; // rsi
  __int64 v37; // r9
  int v38; // eax
  int v39; // edx
  unsigned int v40; // edi
  __int64 v41; // r8
  int v42; // r10d
  __int64 *v43; // r9
  __int64 v44; // r14
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rsi
  unsigned __int64 v50; // rax
  _DWORD *v52; // rdx
  __int64 v53; // rdi
  int v54; // eax
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdi
  int v59; // ecx
  __int64 v60; // rdi
  _QWORD *v61; // rsi
  __int64 *v62; // r10
  __int64 *v63; // rax
  __int64 v64; // r11
  int v65; // esi
  int v66; // esi
  __int64 v67; // r8
  unsigned int v68; // r9d
  _QWORD *v69; // rdx
  __int64 v70; // rdi
  int v71; // edx
  int v72; // r9d
  __int64 *v73; // r8
  unsigned int v74; // r13d
  __int64 v75; // rdi
  _QWORD *v76; // r11
  char v77; // [rsp+Fh] [rbp-59h]
  __int64 v79; // [rsp+18h] [rbp-50h]
  unsigned int v80; // [rsp+20h] [rbp-48h]
  unsigned int v81; // [rsp+20h] [rbp-48h]
  int v82; // [rsp+20h] [rbp-48h]
  _QWORD *v83; // [rsp+20h] [rbp-48h]
  __int64 v84; // [rsp+20h] [rbp-48h]
  int v85; // [rsp+28h] [rbp-40h]

  v2 = sub_6A37B0(a2);
  v3 = (_QWORD *)sub_6A37D0(a2);
  v5 = v4;
  v77 = sub_6A37C0(a2);
  v6 = (_QWORD *)(*(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
    v6 = (_QWORD *)*v6;
  if ( v6 )
    v6 -= 8;
  if ( v5 )
  {
    v7 = 0;
    v79 = (__int64)&v3[(unsigned int)(v5 - 1) + 1];
    while ( 1 )
    {
      v14 = (_QWORD *)*v3;
      if ( !v77 )
      {
        v14 = v6;
        v6 = (_QWORD *)*v3;
      }
      v15 = sub_AB4240(a1, v6);
      v16 = v14[16];
      v17 = v15;
      v18 = v16;
      if ( v16 )
      {
LABEL_13:
        v16 = *(_QWORD *)(v18 + 88);
        goto LABEL_14;
      }
      v44 = v14[13];
      v45 = *(_QWORD *)(v44 + 96);
      v46 = v45 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v45 & 1) != 0 )
        break;
      if ( v46 <= 3 || (v45 & 2) == 0 )
        goto LABEL_14;
      v47 = (_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCLL);
      v48 = v47[2275];
      if ( v48 )
      {
        v49 = v47[274];
        v47[284] += 24LL;
        v50 = (v49 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v47[275] >= v50 + 24 && v49 )
        {
          v47[274] = v50 + 24;
        }
        else
        {
          v84 = v48;
          v50 = sub_6A76A0((__int64)(v47 + 274), 24, 3);
          v48 = v84;
        }
        *(_QWORD *)v50 = v48;
        *(_DWORD *)(v50 + 8) = 0;
        v45 = v50 | 5;
        *(_QWORD *)(v50 + 16) = v44;
        *(_QWORD *)(v44 + 96) = v50 | 5;
        goto LABEL_68;
      }
      *(_QWORD *)(v44 + 96) = v44 & 0xFFFFFFFFFFFFFFFALL | 1;
      v18 = v14[16];
LABEL_60:
      if ( v18 )
        goto LABEL_13;
LABEL_14:
      v19 = *(_QWORD *)(v17 + 72);
      v20 = 0;
      v21 = *(_DWORD *)(v19 + 80);
      v22 = *(__int64 **)(v19 + 64);
      if ( !v21 )
        goto LABEL_15;
      v8 = v21 - 1;
      v9 = 1;
      v10 = nullptr;
      LODWORD(v11) = v8 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v12 = &v22[2 * (unsigned int)v11];
      v13 = *v12;
      if ( v16 != *v12 )
      {
        while ( v13 != -4096 )
        {
          if ( v13 == -8192 && !v10 )
            v10 = v12;
          v11 = (unsigned int)v8 & ((_DWORD)v11 + v9);
          v12 = &v22[2 * v11];
          v13 = *v12;
          if ( v16 == *v12 )
            goto LABEL_8;
          ++v9;
        }
        v20 = 2 * v21;
        if ( !v10 )
          v10 = v12;
        v38 = *(_DWORD *)(v19 + 72) + 1;
        if ( 4 * v38 < 3 * v21 )
        {
          if ( v21 >> 3 < v21 - *(_DWORD *)(v19 + 76) - v38 )
          {
LABEL_48:
            *(_DWORD *)(v19 + 72) = v38;
            if ( *v10 != -4096 )
              --*(_DWORD *)(v19 + 76);
            *v10 = v16;
            v10[1] = 0;
            goto LABEL_9;
          }
          v81 = *(_DWORD *)(v19 + 80);
          v55 = ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1);
          v56 = ((((v55 >> 8) | v55) >> 16) | (v55 >> 8) | v55) + 1;
          if ( (unsigned int)v56 < 0x40 )
            LODWORD(v56) = 64;
          *(_DWORD *)(v19 + 80) = v56;
          v57 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v56, 8);
          v58 = *(unsigned int *)(v19 + 80);
          *(_QWORD *)(v19 + 64) = v57;
          v59 = v58;
          v60 = 16 * v58;
          v61 = &v57[(unsigned __int64)v60 / 8];
          if ( v22 )
          {
            *(_QWORD *)(v19 + 72) = 0;
            v62 = &v22[2 * v81];
            if ( v60 )
            {
              if ( (v60 & 0x10) == 0 || (*v57 = -4096, v57 += 2, v57 != v61) )
              {
                do
                {
                  *v57 = -4096;
                  v57 += 4;
                  *(v57 - 2) = -4096;
                }
                while ( v57 != v61 );
              }
            }
            v63 = v22;
            do
            {
              v64 = *v63;
              if ( *v63 != -4096 && v64 != -8192 )
              {
                v65 = *(_DWORD *)(v19 + 80);
                if ( !v65 )
                {
                  *(_QWORD *)&dword_0 = *v63;
                  BUG();
                }
                v66 = v65 - 1;
                v67 = *(_QWORD *)(v19 + 64);
                v68 = v66 & (((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4));
                v69 = (_QWORD *)(v67 + 16LL * v68);
                v70 = *v69;
                if ( *v69 != v64 )
                {
                  v85 = 1;
                  v83 = nullptr;
                  while ( v70 != -4096 )
                  {
                    if ( !v83 )
                    {
                      if ( v70 != -8192 )
                        v69 = nullptr;
                      v83 = v69;
                    }
                    v68 = v66 & (v85 + v68);
                    v69 = (_QWORD *)(v67 + 16LL * v68);
                    v70 = *v69;
                    if ( v64 == *v69 )
                      goto LABEL_83;
                    ++v85;
                  }
                  if ( v83 )
                    v69 = v83;
                }
LABEL_83:
                *v69 = v64;
                v69[1] = v63[1];
                ++*(_DWORD *)(v19 + 72);
              }
              v63 += 2;
            }
            while ( v62 != v63 );
            operator delete();
LABEL_86:
            v61 = *(_QWORD **)(v19 + 64);
            v59 = *(_DWORD *)(v19 + 80);
            v38 = *(_DWORD *)(v19 + 72) + 1;
          }
          else
          {
            *(_QWORD *)(v19 + 72) = 0;
            if ( v57 != v61 )
            {
              if ( (v60 & 0x10) == 0 || (*v57 = -4096, v57 += 2, v57 != v61) )
              {
                do
                {
                  *v57 = -4096;
                  v57 += 4;
                  *(v57 - 2) = -4096;
                }
                while ( v57 != v61 );
              }
              goto LABEL_86;
            }
            v38 = 1;
          }
          if ( !v59 )
          {
LABEL_139:
            *(_DWORD *)(v19 + 72) = v38;
            BUG();
          }
          v71 = v59 - 1;
          v72 = 1;
          v73 = nullptr;
          v74 = (v59 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
          v10 = &v61[2 * v74];
          v75 = *v10;
          if ( v16 != *v10 )
          {
            while ( v75 != -4096 )
            {
              if ( v75 == -8192 && !v73 )
                v73 = v10;
              v74 = v71 & (v72 + v74);
              v10 = &v61[2 * v74];
              v75 = *v10;
              if ( v16 == *v10 )
                goto LABEL_48;
              ++v72;
            }
            if ( v73 )
              v10 = v73;
          }
          goto LABEL_48;
        }
LABEL_15:
        v80 = *(_DWORD *)(v19 + 80);
        v23 = ((((((((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
                   | (unsigned int)(v20 - 1)
                   | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
                 | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
                 | (unsigned int)(v20 - 1)
                 | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 8)
               | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
                 | (unsigned int)(v20 - 1)
                 | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
               | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
               | (unsigned int)(v20 - 1)
               | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 16)
             | (((((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
                 | (unsigned int)(v20 - 1)
                 | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
               | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
               | (unsigned int)(v20 - 1)
               | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
               | (unsigned int)(v20 - 1)
               | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
             | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
             | (unsigned int)(v20 - 1)
             | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1))
            + 1;
        if ( (unsigned int)v23 < 0x40 )
          LODWORD(v23) = 64;
        *(_DWORD *)(v19 + 80) = v23;
        v24 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v23, 8);
        v25 = *(unsigned int *)(v19 + 80);
        *(_QWORD *)(v19 + 64) = v24;
        v26 = v25;
        v27 = 16 * v25;
        v28 = &v24[(unsigned __int64)v27 / 8];
        if ( v22 )
        {
          *(_QWORD *)(v19 + 72) = 0;
          v29 = &v22[2 * v80];
          if ( v27 )
          {
            if ( (v27 & 0x10) == 0 || (*v24 = -4096, v24 += 2, v24 != v28) )
            {
              do
              {
                *v24 = -4096;
                v24 += 4;
                *(v24 - 2) = -4096;
              }
              while ( v24 != v28 );
            }
          }
          for ( i = v22; v29 != i; i += 2 )
          {
            v31 = *i;
            if ( *i != -4096 && v31 != -8192 )
            {
              v32 = *(_DWORD *)(v19 + 80);
              if ( !v32 )
              {
                *(_QWORD *)&dword_0 = *i;
                BUG();
              }
              v33 = v32 - 1;
              v34 = *(_QWORD *)(v19 + 64);
              v35 = v33 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
              v36 = (_QWORD *)(v34 + 16LL * v35);
              v37 = *v36;
              if ( v31 != *v36 )
              {
                v82 = 1;
                v76 = nullptr;
                while ( v37 != -4096 )
                {
                  if ( v37 == -8192 && !v76 )
                    v76 = v36;
                  v35 = v33 & (v82 + v35);
                  v36 = (_QWORD *)(v34 + 16LL * v35);
                  v37 = *v36;
                  if ( v31 == *v36 )
                    goto LABEL_27;
                  ++v82;
                }
                if ( v76 )
                  v36 = v76;
              }
LABEL_27:
              *v36 = v31;
              v36[1] = i[1];
              ++*(_DWORD *)(v19 + 72);
            }
          }
          operator delete();
LABEL_30:
          v28 = *(_QWORD **)(v19 + 64);
          v26 = *(_DWORD *)(v19 + 80);
          v38 = *(_DWORD *)(v19 + 72) + 1;
        }
        else
        {
          *(_QWORD *)(v19 + 72) = 0;
          if ( v24 != v28 )
          {
            if ( (v27 & 0x10) == 0 || (*v24 = -4096, v24 += 2, v24 != v28) )
            {
              do
              {
                *v24 = -4096;
                v24 += 4;
                *(v24 - 2) = -4096;
              }
              while ( v24 != v28 );
            }
            goto LABEL_30;
          }
          v38 = 1;
        }
        if ( !v26 )
          goto LABEL_139;
        v39 = v26 - 1;
        v40 = (v26 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v10 = &v28[2 * v40];
        v41 = *v10;
        if ( v16 != *v10 )
        {
          v42 = 1;
          v43 = nullptr;
          while ( v41 != -4096 )
          {
            if ( v41 == -8192 && !v43 )
              v43 = v10;
            v40 = v39 & (v42 + v40);
            v10 = &v28[2 * v40];
            v41 = *v10;
            if ( v16 == *v10 )
              goto LABEL_48;
            ++v42;
          }
          if ( v43 )
            v10 = v43;
        }
        goto LABEL_48;
      }
LABEL_8:
      v7 += v12[1];
LABEL_9:
      v6 = (_QWORD *)*v3++;
      if ( v3 == (_QWORD *)v79 )
        goto LABEL_63;
    }
    if ( !v46 )
      goto LABEL_14;
    if ( (v45 & 4) != 0 )
    {
LABEL_68:
      v52 = (_DWORD *)(v45 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v52 )
      {
        v53 = *(_QWORD *)v52;
        v54 = *(_DWORD *)(*(_QWORD *)v52 + 12LL);
        if ( v52[2] != v54 )
        {
          v52[2] = v54;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 144LL))(v53, v44);
        }
      }
    }
    v18 = v14[16];
    goto LABEL_60;
  }
  v7 = 0;
LABEL_63:
  if ( v77 )
    return -v7;
  return v7;
}

