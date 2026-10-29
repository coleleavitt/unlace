void __fastcall sub_C6F500(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // r9d
  bool v6; // r13
  __int64 v8; // rbx
  __int64 v9; // r11
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // r12
  _QWORD **v16; // r12
  _QWORD *v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // r12
  _QWORD *v20; // r8
  __int64 v21; // rbx
  _QWORD *v22; // r10
  __int64 v23; // r9
  char v24; // al
  int v25; // esi
  int v26; // r10d
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // edi
  __int64 v31; // r15
  bool v32; // al
  __int64 v33; // r14
  __int64 v34; // r14
  __int64 v35; // rdx
  void *v36; // rdi
  int v37; // eax
  char v38; // r11
  __int64 v39; // rax
  __int64 v40; // rdi
  unsigned int v41; // esi
  __int64 v42; // rdi
  int v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  void *v46; // rdi
  bool v47; // al
  bool v48; // al
  unsigned int v49; // r11d
  __int64 v50; // r14
  __int64 v51; // r9
  __int64 v52; // rdi
  int v53; // edx
  char v54; // di
  __int64 v55; // r11
  unsigned int v56; // esi
  int v57; // eax
  int v58; // eax
  unsigned int v59; // eax
  int v60; // eax
  int v61; // eax
  unsigned int v62; // eax
  _QWORD *v63; // [rsp+0h] [rbp-60h]
  void *v64; // [rsp+0h] [rbp-60h]
  _QWORD *v65; // [rsp+0h] [rbp-60h]
  void *v66; // [rsp+0h] [rbp-60h]
  _QWORD *v67; // [rsp+0h] [rbp-60h]
  _QWORD *v68; // [rsp+0h] [rbp-60h]
  __int64 v69; // [rsp+8h] [rbp-58h]
  __int64 v70; // [rsp+8h] [rbp-58h]
  __int64 v71; // [rsp+8h] [rbp-58h]
  _QWORD *v72; // [rsp+8h] [rbp-58h]
  __int64 v73; // [rsp+8h] [rbp-58h]
  __int64 v74; // [rsp+8h] [rbp-58h]
  _QWORD *v75; // [rsp+10h] [rbp-50h]
  __int64 v76; // [rsp+10h] [rbp-50h]
  __int64 v77; // [rsp+18h] [rbp-48h]
  _QWORD *v78; // [rsp+20h] [rbp-40h]

  v2 = *(unsigned int *)(a2 + 8);
  if ( !(_DWORD)v2 )
    return;
  v3 = a1;
  v4 = 0;
  v5 = -1;
  v6 = 0;
  v8 = 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(a2 + 24);
  do
  {
    v12 = *(unsigned int *)(v9 + 4 * v4);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 608) + v12) )
      goto LABEL_7;
    v13 = 8 * v12;
    v14 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32 * v4);
    if ( v14 >= 0 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 672) + v13);
      if ( v10 )
        goto LABEL_4;
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 664) + v13);
      if ( v10 )
      {
LABEL_4:
        v11 = *(_DWORD *)(v10 - 4);
        goto LABEL_5;
      }
    }
    v11 = 0;
LABEL_5:
    if ( v11 < v5 )
    {
      v5 = v11;
      v8 = *(unsigned int *)(v9 + 4 * v4);
      v6 = v14 < 0;
    }
LABEL_7:
    ++v4;
  }
  while ( v4 != v2 );
  if ( (_DWORD)v8 == -1 || v5 == 0 )
    return;
  v15 = 8 * v8;
  v16 = (_QWORD **)(v6 ? *(_QWORD *)(a1 + 664) + v15 : *(_QWORD *)(a1 + 672) + v15);
  v78 = v16;
  v17 = *v16;
  if ( !*v16 )
    return;
  *(_DWORD *)(a1 + 768) += *((_DWORD *)v17 - 1);
  v18 = *((unsigned int *)v17 - 1);
  v19 = &v17[v18];
  if ( v19 != v17 )
  {
    v20 = v17;
    while ( 1 )
    {
      v21 = *v20;
      if ( (*(_BYTE *)(*v20 + 7LL) & 0x40) == 0 )
        break;
LABEL_23:
      if ( ++v20 == v19 )
      {
        v22 = (_QWORD *)*v78;
        if ( *v78 )
        {
          v23 = v17 - v22;
          goto LABEL_26;
        }
        return;
      }
    }
    if ( a2 == v21
      || (*(_DWORD *)(v21 + 4) & 0x1FFFFFFFu) < (*(_DWORD *)(a2 + 4) & 0x1FFFFFFFu)
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)(v21 + 8) )
    {
LABEL_22:
      *v17++ = v21;
      goto LABEL_23;
    }
    if ( (*(_BYTE *)(v21 + 60) & 1) != 0
      || *(_DWORD *)(v21 + 56) != 1
      || (*(_BYTE *)(a2 + 60) & 1) != 0
      || *(_DWORD *)(a2 + 56) != 1 )
    {
      v69 = v3;
      v63 = v20;
      v24 = sub_1848D40(qword_1C7F2C0, v21 + 40, a2 + 40);
      v20 = v63;
      v3 = v69;
      if ( !v24 )
        goto LABEL_33;
    }
    else
    {
      if ( (*(_BYTE *)(v21 + 44) & 1) != 0 || (*(_BYTE *)(a2 + 44) & 1) != 0 )
      {
        v74 = v3;
        v68 = v20;
        v62 = sub_182C7B0(qword_1C7F2C0, v21 + 40, a2 + 40);
        v20 = v68;
        v3 = v74;
        v59 = v62 >> 31;
      }
      else
      {
        LOBYTE(v59) = *(_DWORD *)(v21 + 40) < *(_DWORD *)(a2 + 40);
      }
      if ( (_BYTE)v59 )
        goto LABEL_74;
LABEL_33:
      if ( (*(_BYTE *)(a2 + 7) & 0x20) != 0
        || (*(_BYTE *)(v21 + 7) & 0x20) == 0
        || ((v46 = qword_1C7F2C0, (*(_BYTE *)(a2 + 44) & 1) != 0) || (*(_BYTE *)(v21 + 44) & 1) != 0
          ? (v76 = v3,
             v72 = v20,
             v66 = qword_1C7F2C0,
             v60 = sub_182C7B0(qword_1C7F2C0, a2 + 40, v21 + 40),
             v46 = v66,
             v20 = v72,
             v3 = v76,
             v47 = v60 == 0)
          : (v47 = *(_DWORD *)(a2 + 40) == *(_DWORD *)(v21 + 40)),
            !v47
         || ((*(_BYTE *)(a2 + 60) & 1) != 0 || (*(_BYTE *)(v21 + 60) & 1) != 0
           ? (v73 = v3, v67 = v20, v61 = sub_182C7B0(v46, a2 + 56, v21 + 56), v20 = v67, v3 = v73, v48 = v61 == 0)
           : (v48 = *(_DWORD *)(a2 + 56) == *(_DWORD *)(v21 + 56)),
             !v48)) )
      {
        v25 = *(_DWORD *)(v21 + 4);
        v26 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)(v3 + 768) += (v25 & 0x1FFFFFFF) + (*(_DWORD *)(a2 + 4) & 0x1FFFFFFF);
        if ( v26 )
        {
          v27 = *(_QWORD *)(a2 + 24);
          v28 = *(_QWORD *)(v3 + 656);
          v29 = 0;
          do
          {
            *(_DWORD *)(v28 + 4LL * *(unsigned int *)(v27 + 4 * v29)) = v29;
            v30 = *(_DWORD *)(a2 + 8);
            ++v29;
          }
          while ( (unsigned int)v29 < v30 );
          if ( *(_DWORD *)(v21 + 8) )
            goto LABEL_39;
          if ( v30 )
          {
            v38 = 0;
LABEL_53:
            v39 = 0;
            do
            {
              v40 = *(unsigned int *)(v27 + 4 * v39++);
              *(_DWORD *)(v28 + 4 * v40) = -1;
            }
            while ( (unsigned int)v39 < *(_DWORD *)(a2 + 8) );
            if ( v38 )
              goto LABEL_74;
          }
LABEL_56:
          v25 = *(_DWORD *)(v21 + 4);
        }
        else if ( *(_DWORD *)(v21 + 8) )
        {
          v28 = *(_QWORD *)(v3 + 656);
LABEL_39:
          v31 = 0;
          while ( 1 )
          {
            v33 = *(unsigned int *)(v28 + 4LL * *(unsigned int *)(*(_QWORD *)(v21 + 24) + 4 * v31));
            if ( (_DWORD)v33 == -1 )
              break;
            v34 = *(_QWORD *)(a2 + 32) + 32 * v33;
            v35 = *(_QWORD *)(v21 + 32) + 32 * v31;
            v36 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v34 + 4) & 1) != 0 || (*(_BYTE *)(v35 + 4) & 1) != 0 )
            {
              v77 = v3;
              v75 = v20;
              v70 = *(_QWORD *)(v21 + 32) + 32 * v31;
              v64 = qword_1C7F2C0;
              v37 = sub_182C7B0(qword_1C7F2C0, v34, v35);
              v36 = v64;
              v35 = v70;
              v20 = v75;
              v3 = v77;
              if ( v37 )
                break;
            }
            else if ( *(_DWORD *)v34 != *(_DWORD *)v35 )
            {
              break;
            }
            if ( (*(_BYTE *)(v34 + 20) & 1) != 0 || (*(_BYTE *)(v35 + 20) & 1) != 0 )
            {
              v71 = v3;
              v65 = v20;
              v45 = sub_182C7B0(v36, v34 + 16, v35 + 16);
              v20 = v65;
              v3 = v71;
              v32 = v45 == 0;
            }
            else
            {
              v32 = *(_DWORD *)(v34 + 16) == *(_DWORD *)(v35 + 16);
            }
            if ( !v32 )
              break;
            if ( (unsigned int)++v31 >= *(_DWORD *)(v21 + 8) )
            {
              v38 = 0;
              if ( !*(_DWORD *)(a2 + 8) )
                goto LABEL_56;
LABEL_52:
              v27 = *(_QWORD *)(a2 + 24);
              v28 = *(_QWORD *)(v3 + 656);
              goto LABEL_53;
            }
            v28 = *(_QWORD *)(v3 + 656);
          }
          v38 = 1;
          if ( !*(_DWORD *)(a2 + 8) )
            goto LABEL_74;
          goto LABEL_52;
        }
        v41 = v25 & 0x1FFFFFFF;
        if ( !v41 )
        {
          v49 = *(_DWORD *)(a2 + 4) & 0x1FFFFFFF;
          if ( v49 )
          {
LABEL_76:
            v50 = *(_QWORD *)(a2 + 16);
            v51 = *(_QWORD *)(v3 + 568);
            v52 = 0;
            do
            {
              v53 = -*(_DWORD *)(v50 + 4 * v52);
              if ( *(int *)(v50 + 4 * v52) > 0 )
                v53 = *(_DWORD *)(v50 + 4 * v52);
              if ( *(_BYTE *)(v51 + v53) != ((unsigned __int8)(*(int *)(v50 + 4 * v52) >> 31) | 1) )
              {
                v54 = 1;
                if ( !v41 )
                  goto LABEL_74;
                goto LABEL_82;
              }
              ++v52;
            }
            while ( (unsigned int)v52 < v49 );
            v54 = 0;
            if ( v41 )
              goto LABEL_82;
          }
LABEL_89:
          *(_BYTE *)(v21 + 7) |= 0x40u;
          goto LABEL_23;
        }
        v42 = 0;
        do
        {
          v43 = -*(_DWORD *)(*(_QWORD *)(v21 + 16) + 4 * v42);
          if ( *(int *)(*(_QWORD *)(v21 + 16) + 4 * v42) > 0 )
            v43 = *(_DWORD *)(*(_QWORD *)(v21 + 16) + 4 * v42);
          v44 = *(_QWORD *)(v3 + 568);
          if ( *(int *)(*(_QWORD *)(v21 + 16) + 4 * v42) >= 0 )
            *(_BYTE *)(v44 + v43) = 1;
          else
            *(_BYTE *)(v44 + v43) = -1;
          ++v42;
          v41 = *(_DWORD *)(v21 + 4) & 0x1FFFFFFF;
        }
        while ( (unsigned int)v42 < v41 );
        v49 = *(_DWORD *)(a2 + 4) & 0x1FFFFFFF;
        if ( v49 )
          goto LABEL_76;
        if ( !v41 )
          goto LABEL_89;
        v51 = *(_QWORD *)(v3 + 568);
        v54 = 0;
LABEL_82:
        v55 = 4;
        v56 = 1;
        v57 = -**(_DWORD **)(v21 + 16);
        if ( **(int **)(v21 + 16) > 0 )
          v57 = **(_DWORD **)(v21 + 16);
        *(_BYTE *)(v51 + v57) = 0;
        if ( (*(_DWORD *)(v21 + 4) & 0x1FFFFFFFu) > 1 )
        {
          do
          {
            v58 = -*(_DWORD *)(*(_QWORD *)(v21 + 16) + v55);
            if ( *(int *)(*(_QWORD *)(v21 + 16) + v55) > 0 )
              v58 = *(_DWORD *)(*(_QWORD *)(v21 + 16) + v55);
            ++v56;
            v55 += 4;
            *(_BYTE *)(*(_QWORD *)(v3 + 568) + v58) = 0;
          }
          while ( v56 < (*(_DWORD *)(v21 + 4) & 0x1FFFFFFFu) );
        }
        if ( !v54 )
          goto LABEL_89;
      }
    }
LABEL_74:
    v21 = *v20;
    goto LABEL_22;
  }
  v22 = &v17[v18];
  LODWORD(v23) = 0;
LABEL_26:
  *((_DWORD *)v22 - 1) = v23;
}

