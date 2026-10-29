__int64 __fastcall sub_B4F040(__int64 a1, unsigned int *a2, unsigned __int8 a3)
{
  unsigned int v3; // ecx
  unsigned int v8; // r9d
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // edx
  unsigned int v18; // r9d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // esi
  unsigned __int8 v23; // r10
  char *v24; // rbx
  __int64 v25; // r8
  char *v26; // r14
  unsigned int v27; // edx
  int v28; // esi
  __int64 v29; // rax
  char *v30; // rdi
  char *v31; // rax
  char *v32; // rcx
  int v33; // edx
  int v34; // eax
  int v35; // eax
  char *v36; // rax
  int v37; // edx
  char *v38; // r11
  char *v39; // r15
  char *v40; // rdi
  int v41; // r9d
  __int64 v42; // rdx
  char *v43; // rsi
  char *v44; // rdx
  __int64 v45; // rsi
  unsigned int v46; // [rsp+8h] [rbp-70h]
  int v47; // [rsp+8h] [rbp-70h]
  size_t v48; // [rsp+8h] [rbp-70h]
  unsigned __int8 v49; // [rsp+10h] [rbp-68h]
  __int64 v50; // [rsp+10h] [rbp-68h]
  unsigned __int8 v51; // [rsp+18h] [rbp-60h]
  unsigned __int8 v52; // [rsp+18h] [rbp-60h]
  unsigned __int8 v53; // [rsp+20h] [rbp-58h]
  unsigned int v54; // [rsp+2Ch] [rbp-4Ch]
  int v55; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v56; // [rsp+38h] [rbp-40h]

  v3 = a3;
  v8 = a2[3];
  v9 = *(_QWORD *)(a1 + 120);
  v10 = *(unsigned int *)(a1 + 128);
  v11 = (((a3 - v8) ^ (v8 << 8) ^ ((v8 - ((a3 - v8) ^ (v8 << 8))) << 16)) + ((a3 - v8) ^ (v8 << 8)) - v8)
      ^ ((v8 - ((a3 - v8) ^ (v8 << 8))) << 10);
  v12 = v10 - 1;
  v10 *= 32;
  v13 = v9 + v10;
  v14 = 32LL * (v11 & v12);
  v15 = v9 + v14;
  if ( v14 != v10 )
  {
    v16 = v9 + v14;
    do
    {
      v17 = *(_DWORD *)(v16 + 4);
      if ( v17 == 2 )
      {
        if ( v11 == *(_DWORD *)v16 && a2 == *(unsigned int **)(v16 + 8) && a3 == *(_BYTE *)(v16 + 16) )
          return *(unsigned __int8 *)(v16 + 24);
      }
      else if ( !v17 )
      {
        goto LABEL_12;
      }
      v16 += 32;
    }
    while ( v13 != v16 );
  }
  for ( ; v15 != v9; v9 += 32 )
  {
    v34 = *(_DWORD *)(v9 + 4);
    if ( v34 == 2 )
    {
      if ( v11 == *(_DWORD *)v9 && a2 == *(unsigned int **)(v9 + 8) && a3 == *(_BYTE *)(v9 + 16) )
      {
        v16 = v9;
        return *(unsigned __int8 *)(v16 + 24);
      }
    }
    else if ( !v34 )
    {
      break;
    }
  }
LABEL_12:
  v49 = a3;
  v46 = v3;
  LOBYTE(v20) = sub_B4EAC0((__int64 *)a1, a2, v3, v3, v11, v15);
  v21 = v46;
  v22 = *(_DWORD *)(a1 + 128);
  v18 = v20;
  v23 = v49;
  if ( 3 * v22 < 4 * (*(_DWORD *)(a1 + 132) + *(_DWORD *)(a1 + 136)) )
  {
    v54 = v46;
    v51 = v20;
    v48 = 64LL * v22;
    v36 = (char *)sub_186B270(v48);
    v37 = 2 * v22;
    v25 = v48;
    v18 = v51;
    v23 = v49;
    v24 = v36;
    v21 = v54;
    v38 = &v36[v48];
    if ( 2 * v22 )
    {
      do
      {
        *(_QWORD *)v36 = 0;
        v36 += 32;
        *((_QWORD *)v36 - 3) = 0;
        *(v36 - 16) = 0;
      }
      while ( v36 != v38 );
    }
    v39 = *(char **)(a1 + 120);
    v26 = v38;
    v47 = v37 - 1;
    v40 = &v39[32 * *(unsigned int *)(a1 + 128)];
    if ( v39 != v40 )
    {
      v41 = 2 * v22;
      do
      {
        if ( *((_DWORD *)v39 + 1) == 2 )
        {
          v42 = 32LL * (*(_DWORD *)v39 & (unsigned int)v47);
          v43 = &v24[v42];
          if ( v42 == v25 )
          {
LABEL_59:
            if ( v43 == v24 )
            {
LABEL_66:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v44 = v24;
            while ( *((_DWORD *)v44 + 1) )
            {
              v44 += 32;
              if ( v43 == v44 )
                goto LABEL_66;
            }
          }
          else
          {
            v44 = &v24[v42];
            while ( *((_DWORD *)v44 + 1) )
            {
              v44 += 32;
              if ( v38 == v44 )
                goto LABEL_59;
            }
          }
          v45 = *((_QWORD *)v39 + 1);
          *(_DWORD *)v44 = *(_DWORD *)v39;
          *((_DWORD *)v44 + 1) = 2;
          *((_QWORD *)v44 + 1) = v45;
          v44[16] = v39[16];
          v44[24] = v39[24];
        }
        v39 += 32;
      }
      while ( v40 != v39 );
      v37 = v41;
      v40 = *(char **)(a1 + 120);
      v18 = v51;
    }
    if ( v40 )
    {
      v56 = v54;
      v55 = v37;
      v53 = v49;
      v52 = v18;
      v50 = v25;
      sub_186B220(v40);
      v21 = v56;
      v37 = v55;
      v23 = v53;
      v18 = v52;
      v25 = v50;
    }
    *(_QWORD *)(a1 + 120) = v24;
    *(_DWORD *)(a1 + 128) = v37;
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    v24 = *(char **)(a1 + 120);
    v47 = v22 - 1;
    v25 = 32LL * v22;
    v26 = &v24[v25];
  }
  v27 = a2[3];
  v28 = (((v21 - v27) ^ (v27 << 8) ^ ((v27 - ((v21 - v27) ^ (v27 << 8))) << 16)) + ((v21 - v27) ^ (v27 << 8)) - v27)
      ^ ((v27 - ((v21 - v27) ^ (v27 << 8))) << 10);
  v29 = 32LL * (v28 & (unsigned int)v47);
  v30 = &v24[v29];
  if ( v29 != v25 )
  {
    v31 = &v24[v29];
    v32 = nullptr;
    while ( 1 )
    {
      v33 = *((_DWORD *)v31 + 1);
      if ( v33 == 2 )
      {
        if ( v28 == *(_DWORD *)v31 && a2 == *((unsigned int **)v31 + 1) && v23 == v31[16] )
        {
          v31[24] = v18;
          *((_DWORD *)v31 + 1) = 2;
          return v18;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_56;
          v32 = v31;
          goto LABEL_57;
        }
        v32 = v31;
      }
      v31 += 32;
      if ( v31 == v26 )
        goto LABEL_34;
    }
  }
  v32 = nullptr;
  while ( 1 )
  {
LABEL_34:
    if ( v30 == v24 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v35 = *((_DWORD *)v24 + 1);
    if ( v35 != 2 )
      break;
    if ( v28 == *(_DWORD *)v24 && a2 == *((unsigned int **)v24 + 1) && v23 == v24[16] )
    {
      v24[24] = v18;
      *((_DWORD *)v24 + 1) = 2;
      return v18;
    }
LABEL_33:
    v24 += 32;
  }
  if ( v35 )
  {
    v32 = v24;
    goto LABEL_33;
  }
  if ( v32 )
LABEL_56:
    --*(_DWORD *)(a1 + 136);
  else
    v32 = v24;
LABEL_57:
  *((_QWORD *)v32 + 1) = a2;
  v32[16] = a3;
  v32[24] = v18;
  *((_DWORD *)v32 + 1) = 2;
  *(_DWORD *)v32 = v28;
  ++*(_DWORD *)(a1 + 132);
  return v18;
}

