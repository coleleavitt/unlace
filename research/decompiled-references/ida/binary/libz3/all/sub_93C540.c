__int64 __fastcall sub_93C540(__int64 a1, __int64 a2)
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
  __int64 v17; // r14
  __int64 v18; // r8
  int v19; // r9d
  _DWORD *v20; // rbx
  unsigned int v21; // edx
  __int64 v22; // r8
  _DWORD *v23; // r13
  int v24; // ecx
  __int64 v25; // rdx
  _DWORD *v26; // rdi
  _DWORD *v27; // rax
  _DWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v31; // rax
  int v32; // r10d
  size_t v33; // r9
  char *v34; // rcx
  char *v35; // r11
  _DWORD *v36; // r13
  char *v37; // rbx
  __int64 v38; // rdx
  _DWORD *v39; // rsi
  _DWORD *v40; // rdx
  __int64 v41; // rsi
  unsigned int v42; // esi
  __int64 v43; // [rsp+8h] [rbp-70h]
  _DWORD *v44; // [rsp+10h] [rbp-68h]
  size_t v45; // [rsp+10h] [rbp-68h]
  unsigned int v46; // [rsp+10h] [rbp-68h]
  int v47; // [rsp+18h] [rbp-60h]
  __int64 v48; // [rsp+18h] [rbp-60h]
  int v49; // [rsp+20h] [rbp-58h]
  unsigned __int8 v50; // [rsp+3Bh] [rbp-3Dh]

  if ( !*(_DWORD *)(a2 + 28) && !*(_DWORD *)(a2 + 32) )
    goto LABEL_17;
  v4 = *(char **)(a2 + 16);
  v5 = 0;
  v6 = &v4[8 * *(unsigned int *)(a2 + 24)];
  v7 = *(_DWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a2 + 16);
  if ( v4 != v6 )
  {
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
    if ( v7 > 0x10 && 3 * v7 < 4 * v5 )
    {
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
          goto LABEL_16;
        }
      }
      else
      {
        *(_QWORD *)(a2 + 16) = 0;
        v42 = v7 >> 1;
        v10 = v42;
        *(_DWORD *)(a2 + 24) = v42;
        v11 = sub_186B270(8LL * v42);
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
  }
LABEL_16:
  *(_QWORD *)(a2 + 28) = 0;
LABEL_17:
  v14 = *(_QWORD *)(a1 + 32);
  if ( !v14 )
    return 0;
  v15 = *(_DWORD *)(v14 - 4);
  if ( v15 <= 0 )
    return 0;
  v50 = 0;
  v16 = 0;
  v43 = (unsigned int)v15;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v14 + 8 * v16);
    if ( !v17 || !(unsigned __int8)sub_966310(a1, *(_QWORD *)(v14 + 8 * v16)) )
      break;
    v18 = *(unsigned int *)(a2 + 24);
    v19 = *(_DWORD *)(a2 + 32);
    if ( 3 * (int)v18 < (unsigned int)(4 * (v19 + *(_DWORD *)(a2 + 28))) )
    {
      v47 = 2 * v18;
      v45 = 8LL * (unsigned int)(2 * v18);
      v31 = sub_186B270(v45);
      v22 = v45;
      v32 = v47;
      v20 = (_DWORD *)v31;
      v33 = v31 + v45;
      if ( v47 )
      {
        if ( (v45 & 8) == 0 || (*(_DWORD *)(v31 + 4) = 0x80000000, v31 += 8, v31 != v33) )
        {
          do
          {
            *(_DWORD *)(v31 + 4) = 0x80000000;
            v31 += 16;
            *(_DWORD *)(v31 - 4) = 0x80000000;
          }
          while ( v31 != v33 );
        }
      }
      v34 = *(char **)(a2 + 16);
      v21 = v47 - 1;
      v23 = (_DWORD *)v33;
      v35 = &v34[8 * *(unsigned int *)(a2 + 24)];
      if ( v34 != v35 )
      {
        v36 = v20;
        v37 = *(char **)(a2 + 16);
        do
        {
          while ( *((_DWORD *)v37 + 1) + 0x80000000 <= 1 )
          {
            v37 += 8;
            if ( v35 == v37 )
              goto LABEL_59;
          }
          v38 = 8LL * (*(_DWORD *)v37 & (unsigned int)(v47 - 1));
          v39 = &v36[(unsigned __int64)v38 / 4];
          if ( v45 == v38 )
          {
LABEL_63:
            if ( v36 == v39 )
            {
LABEL_71:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v40 = v36;
            while ( v40[1] != 0x80000000 )
            {
              v40 += 2;
              if ( v39 == v40 )
                goto LABEL_71;
            }
          }
          else
          {
            v40 = &v36[(unsigned __int64)v38 / 4];
            while ( v40[1] != 0x80000000 )
            {
              v40 += 2;
              if ( (_DWORD *)v33 == v40 )
                goto LABEL_63;
            }
          }
          v41 = *(_QWORD *)v37;
          v37 += 8;
          *(_QWORD *)v40 = v41;
        }
        while ( v35 != v37 );
LABEL_59:
        v35 = *(char **)(a2 + 16);
        v20 = v36;
        v21 = v47 - 1;
        v23 = (_DWORD *)v33;
        v22 = v45;
      }
      if ( v35 )
      {
        v49 = v47;
        v48 = v22;
        v46 = v21;
        sub_186B220(v35);
        v32 = v49;
        v22 = v48;
        v21 = v46;
      }
      *(_QWORD *)(a2 + 16) = v20;
      v19 = 0;
      *(_DWORD *)(a2 + 24) = v32;
      *(_DWORD *)(a2 + 32) = 0;
    }
    else
    {
      v20 = *(_DWORD **)(a2 + 16);
      v21 = v18 - 1;
      v22 = 8 * v18;
      v23 = (_DWORD *)((char *)v20 + v22);
    }
    v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 280LL) + 4 * v16);
    v25 = 8LL * (v24 & v21);
    v26 = &v20[(unsigned __int64)v25 / 4];
    if ( v25 != v22 )
    {
      v44 = &v20[(unsigned __int64)v25 / 4];
      v27 = &v20[(unsigned __int64)v25 / 4];
      v28 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = (unsigned int)v27[1];
          if ( (unsigned int)v29 + 0x80000000 <= 1 )
            break;
          if ( v24 == *v27
            && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 280LL) + 4LL * (unsigned int)v29) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 280LL) + 4 * v16) )
          {
            goto LABEL_41;
          }
          v27 += 2;
          if ( v27 == v23 )
            goto LABEL_33;
        }
        if ( (_DWORD)v29 == 0x80000000 )
          break;
        v28 = v27;
        v27 += 2;
        if ( v27 == v23 )
        {
LABEL_33:
          v26 = v44;
          goto LABEL_36;
        }
      }
      if ( !v28 )
      {
        v28 = v27;
        goto LABEL_70;
      }
      goto LABEL_69;
    }
    v28 = nullptr;
    while ( 1 )
    {
LABEL_36:
      if ( v26 == v20 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v29 = (unsigned int)v20[1];
      if ( (unsigned int)v29 + 0x80000000 <= 1 )
        break;
      if ( v24 == *v20
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 280LL) + 4LL * (unsigned int)v29) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 280LL) + 4 * v16) )
      {
        goto LABEL_41;
      }
LABEL_35:
      v20 += 2;
    }
    if ( (_DWORD)v29 != 0x80000000 )
    {
      v28 = v20;
      goto LABEL_35;
    }
    if ( !v28 )
    {
      v28 = v20;
      goto LABEL_70;
    }
LABEL_69:
    *(_DWORD *)(a2 + 32) = v19 - 1;
LABEL_70:
    v28[1] = v16;
    *v28 = v24;
    ++*(_DWORD *)(a2 + 28);
    v29 = (unsigned int)v28[1];
LABEL_41:
    if ( (_DWORD)v29 == (_DWORD)v16 )
      break;
    ++v16;
    v50 |= sub_966370(a1, v17, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v29));
    if ( v43 == v16 )
      return v50;
LABEL_21:
    v14 = *(_QWORD *)(a1 + 32);
  }
  if ( v43 != ++v16 )
    goto LABEL_21;
  return v50;
}

