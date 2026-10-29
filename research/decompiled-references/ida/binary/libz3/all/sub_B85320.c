__int64 __fastcall sub_B85320(__int64 a1, __int64 a2)
{
  char *v4; // rdi
  int v5; // ecx
  char *v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rbp
  __int64 v17; // r12
  int v18; // edx
  int v19; // ebx
  _DWORD *v20; // r15
  int v21; // ecx
  void *v22; // rbx
  __int64 v23; // rdx
  int v24; // ecx
  _DWORD *v25; // r9
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rsi
  _DWORD *v29; // r11
  _DWORD *v30; // rbx
  int v31; // r12d
  _DWORD *v32; // rbp
  _DWORD *v33; // r15
  unsigned int v34; // esi
  _DWORD *v35; // rbx
  int v36; // r12d
  _DWORD *v37; // rbp
  _DWORD *v38; // r15
  unsigned int v39; // esi
  __int64 v40; // r12
  __int64 v42; // rax
  int v43; // r10d
  char *v44; // r8
  size_t v45; // r15
  _DWORD *v46; // rbx
  _DWORD *v47; // r11
  __int64 v48; // rcx
  char *v49; // r12
  __int64 v50; // r8
  _DWORD *v51; // rbp
  __int64 v52; // rax
  char *v53; // rdx
  char *v54; // rax
  __int64 v55; // rdx
  int v56; // ecx
  __int64 v57; // rax
  _DWORD *v58; // r9
  unsigned int v59; // esi
  __int64 v60; // [rsp+8h] [rbp-A0h]
  unsigned int v61; // [rsp+10h] [rbp-98h]
  size_t v62; // [rsp+10h] [rbp-98h]
  char *v63; // [rsp+10h] [rbp-98h]
  __int64 *v64; // [rsp+18h] [rbp-90h]
  int v65; // [rsp+28h] [rbp-80h]
  __int64 v66; // [rsp+28h] [rbp-80h]
  __int64 v67; // [rsp+28h] [rbp-80h]
  int v68; // [rsp+28h] [rbp-80h]
  __int64 v69; // [rsp+30h] [rbp-78h]
  __int64 v70; // [rsp+30h] [rbp-78h]
  _DWORD *v71; // [rsp+38h] [rbp-70h]
  unsigned __int8 v72; // [rsp+4Bh] [rbp-5Dh]
  _BYTE v73[16]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v74[72]; // [rsp+60h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 28) || *(_DWORD *)(a2 + 32) )
  {
    v4 = *(char **)(a2 + 16);
    v5 = 0;
    v6 = &v4[8 * *(unsigned int *)(a2 + 24)];
    v7 = *(_DWORD *)(a2 + 24);
    v8 = *(_QWORD *)(a2 + 16);
    if ( v4 == v6 )
      goto LABEL_16;
    do
    {
      while ( *(_DWORD *)(v8 + 4) != 0x80000000 )
      {
        *(_DWORD *)(v8 + 4) = 0x80000000;
        v8 += 8;
        if ( v6 == (char *)v8 )
          goto LABEL_8;
      }
      v8 += 8;
      ++v5;
    }
    while ( v6 != (char *)v8 );
LABEL_8:
    if ( v7 <= 0x10 || 3 * v7 >= 4 * v5 )
      goto LABEL_16;
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 16) = 0;
      v9 >>= 1;
      *(_DWORD *)(a2 + 24) = v9;
      v10 = v9;
      v11 = sub_186B270(8LL * v9);
      if ( !v9 )
      {
LABEL_15:
        *(_QWORD *)(a2 + 16) = v11;
LABEL_16:
        *(_QWORD *)(a2 + 28) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v59 = v7 >> 1;
      *(_QWORD *)(a2 + 16) = 0;
      v10 = v59;
      *(_DWORD *)(a2 + 24) = v59;
      v11 = sub_186B270(8LL * v59);
    }
    v12 = v11 + 8 * v10;
    v13 = v11;
    if ( (v10 & 1) == 0 || (v13 = v11 + 8, *(_DWORD *)(v11 + 4) = 0x80000000, v11 + 8 != v12) )
    {
      do
      {
        *(_DWORD *)(v13 + 4) = 0x80000000;
        v13 += 16;
        *(_DWORD *)(v13 - 4) = 0x80000000;
      }
      while ( v13 != v12 );
    }
    goto LABEL_15;
  }
LABEL_17:
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 - 4);
    if ( v15 > 0 )
    {
      v72 = 0;
      v16 = 0;
      v60 = (unsigned int)v15;
      v64 = (__int64 *)(a2 + 8);
      while ( 1 )
      {
        v17 = *(_QWORD *)(v14 + 8 * v16);
        if ( !v17 || !(unsigned __int8)sub_966310(a1, *(__int64 **)(v14 + 8 * v16)) )
          goto LABEL_20;
        v18 = *(_DWORD *)(a2 + 24);
        if ( 3 * v18 < (unsigned int)(4 * (*(_DWORD *)(a2 + 28) + *(_DWORD *)(a2 + 32))) )
        {
          v68 = 2 * v18;
          v62 = 8LL * (unsigned int)(2 * v18);
          v42 = sub_186B270(v62);
          v43 = v68;
          v44 = (char *)v42;
          v45 = v42 + v62;
          if ( v68 )
          {
            if ( (v62 & 8) == 0 || (*(_DWORD *)(v42 + 4) = 0x80000000, v42 += 8, v42 != v45) )
            {
              do
              {
                *(_DWORD *)(v42 + 4) = 0x80000000;
                v42 += 16;
                *(_DWORD *)(v42 - 4) = 0x80000000;
              }
              while ( v42 != v45 );
            }
          }
          v46 = *(_DWORD **)(a2 + 16);
          v47 = &v46[2 * *(unsigned int *)(a2 + 24)];
          if ( v46 != v47 )
          {
            v48 = v17;
            v49 = v44;
            v50 = v16;
            v51 = &v46[2 * *(unsigned int *)(a2 + 24)];
            do
            {
              while ( v46[1] + 0x80000000 <= 1 )
              {
                v46 += 2;
                if ( v51 == v46 )
                  goto LABEL_60;
              }
              v52 = 8LL * (*v46 & (unsigned int)(v68 - 1));
              v53 = &v49[v52];
              if ( v62 == v52 )
              {
LABEL_64:
                if ( v49 == v53 )
                {
LABEL_74:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v54 = v49;
                while ( *((_DWORD *)v54 + 1) != 0x80000000 )
                {
                  v54 += 8;
                  if ( v53 == v54 )
                    goto LABEL_74;
                }
              }
              else
              {
                v54 = &v49[v52];
                while ( *((_DWORD *)v54 + 1) != 0x80000000 )
                {
                  v54 += 8;
                  if ( (char *)v45 == v54 )
                    goto LABEL_64;
                }
              }
              v55 = *(_QWORD *)v46;
              v46 += 2;
              *(_QWORD *)v54 = v55;
            }
            while ( v51 != v46 );
LABEL_60:
            v47 = *(_DWORD **)(a2 + 16);
            v16 = v50;
            v44 = v49;
            v17 = v48;
          }
          if ( v47 )
          {
            v63 = v44;
            sub_186B220(v47);
            v43 = v68;
            v44 = v63;
          }
          *(_QWORD *)(a2 + 16) = v44;
          *(_DWORD *)(a2 + 24) = v43;
          *(_DWORD *)(a2 + 32) = 0;
        }
        v61 = v16;
        sub_B7BFB0((__int64)v73, *(_QWORD *)a2, v16);
        v19 = sub_182DB30(v73);
        v20 = nullptr;
        v21 = v19 + 3 * sub_182DB30(v74);
        v22 = qword_1C7F2C0;
        v65 = v21;
        sub_182CBA0(qword_1C7F2C0, v73);
        sub_182CBA0(v22, v74);
        v23 = *(unsigned int *)(a2 + 24);
        v24 = v65;
        v25 = *(_DWORD **)(a2 + 16);
        v26 = v23 - 1;
        v27 = 8 * v23;
        v28 = 8LL * (v65 & v26);
        v29 = &v25[(unsigned __int64)v28 / 4];
        v30 = &v25[(unsigned __int64)v28 / 4];
        if ( v28 == v27 )
        {
LABEL_33:
          if ( v29 == v25 )
          {
LABEL_40:
            sub_1872CE0("");
            sub_1873130(114, 461);
          }
          v67 = v17;
          v35 = v29;
          v36 = v24;
          v70 = v16;
          v37 = v20;
          v38 = v25;
          while ( 1 )
          {
            while ( 1 )
            {
              v39 = v38[1];
              if ( v39 + 0x80000000 <= 1 )
                break;
              if ( *v38 == v36 && (unsigned __int8)sub_B7C4D0(v64, v39, v61) )
              {
                v40 = v67;
                v16 = v70;
                goto LABEL_72;
              }
              v38 += 2;
              if ( v35 == v38 )
                goto LABEL_40;
            }
            if ( v39 == 0x80000000 )
              break;
            v37 = v38;
            v38 += 2;
            if ( v35 == v38 )
              goto LABEL_40;
          }
          v58 = v38;
          v38 = v37;
          v56 = v36;
          v16 = v70;
          v40 = v67;
          if ( v38 )
            goto LABEL_70;
          v38 = v58;
        }
        else
        {
          v66 = v17;
          v31 = v24;
          v69 = v16;
          v32 = nullptr;
          v33 = &v25[(unsigned __int64)v27 / 4];
          v71 = &v25[(unsigned __int64)v28 / 4];
          while ( 1 )
          {
            while ( 1 )
            {
              v34 = v30[1];
              if ( v34 + 0x80000000 <= 1 )
                break;
              if ( *v30 == v31 && (unsigned __int8)sub_B7C4D0(v64, v34, v61) )
              {
                v40 = v66;
                v16 = v69;
                v38 = v30;
                goto LABEL_72;
              }
              v30 += 2;
              if ( v33 == v30 )
                goto LABEL_32;
            }
            if ( v34 == 0x80000000 )
              break;
            v32 = v30;
            v30 += 2;
            if ( v33 == v30 )
            {
LABEL_32:
              v20 = v32;
              v24 = v31;
              v29 = v71;
              v17 = v66;
              v16 = v69;
              v25 = *(_DWORD **)(a2 + 16);
              goto LABEL_33;
            }
          }
          v38 = v32;
          v56 = v31;
          v16 = v69;
          v40 = v66;
          if ( v38 )
          {
LABEL_70:
            --*(_DWORD *)(a2 + 32);
            goto LABEL_71;
          }
          v38 = v30;
        }
LABEL_71:
        *v38 = v56;
        v38[1] = v61;
        ++*(_DWORD *)(a2 + 28);
LABEL_72:
        v57 = (unsigned int)v38[1];
        if ( (_DWORD)v57 != (_DWORD)v16 )
          v72 |= sub_966370(a1, v40, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v57));
LABEL_20:
        if ( v60 == ++v16 )
          return v72;
        v14 = *(_QWORD *)(a1 + 32);
      }
    }
  }
  return 0;
}

