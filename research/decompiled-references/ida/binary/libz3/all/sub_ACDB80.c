__int64 __fastcall sub_ACDB80(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  unsigned int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // r13
  __int64 v22; // rax
  unsigned int v23; // ecx
  char *v24; // rbx
  __int64 v25; // r9
  char *v26; // rcx
  int v27; // esi
  int v28; // edi
  __int64 v29; // rax
  char *v30; // r8
  char *v31; // rax
  char *v32; // rsi
  int v33; // edx
  int v34; // eax
  int v35; // eax
  char *v36; // rax
  int v37; // edx
  char *v38; // r10
  char *v39; // rax
  char *v40; // r8
  char *v41; // r11
  __int64 v42; // rdx
  char *v43; // rsi
  char *v44; // rdx
  __int64 v45; // rsi
  int v46; // [rsp+8h] [rbp-80h]
  size_t v47; // [rsp+8h] [rbp-80h]
  int v48; // [rsp+10h] [rbp-78h]
  __int64 v49; // [rsp+10h] [rbp-78h]
  char *v50; // [rsp+18h] [rbp-70h]
  int v51; // [rsp+20h] [rbp-68h]
  __int64 v52[8]; // [rsp+48h] [rbp-40h] BYREF

  v10 = *(_DWORD *)(a3 + 12);
  v11 = *(_QWORD *)(a2 + 8);
  v52[0] = 0;
  v12 = *(unsigned int *)(a2 + 16);
  v13 = (((a4 - v10) ^ (v10 << 8) ^ ((v10 - ((a4 - v10) ^ (v10 << 8))) << 16)) + ((a4 - v10) ^ (v10 << 8)) - v10)
      ^ ((v10 - ((a4 - v10) ^ (v10 << 8))) << 10);
  v14 = v12 - 1;
  v12 *= 32;
  v15 = v11 + v12;
  v16 = 32LL * (v13 & v14);
  v17 = v11 + v16;
  if ( v16 != v12 )
  {
    v18 = v11 + v16;
    do
    {
      v19 = *(_DWORD *)(v18 + 4);
      if ( v19 == 2 )
      {
        if ( v13 == *(_DWORD *)v18 && a3 == *(_QWORD *)(v18 + 8) && a4 == *(_DWORD *)(v18 + 16) )
          return *(_QWORD *)(v18 + 24);
      }
      else if ( !v19 )
      {
        goto LABEL_12;
      }
      v18 += 32;
    }
    while ( v15 != v18 );
  }
  for ( ; v17 != v11; v11 += 32 )
  {
    v34 = *(_DWORD *)(v11 + 4);
    if ( v34 == 2 )
    {
      if ( v13 == *(_DWORD *)v11 && a3 == *(_QWORD *)(v11 + 8) && a4 == *(_DWORD *)(v11 + 16) )
      {
        v18 = v11;
        return *(_QWORD *)(v18 + 24);
      }
    }
    else if ( !v34 )
    {
      break;
    }
  }
LABEL_12:
  v22 = sub_186B270(0x50u);
  v23 = *(_DWORD *)(a2 + 16);
  v20 = v22;
  LODWORD(v22) = *(_DWORD *)(a1 + 80);
  *(_WORD *)(v20 + 32) = 0;
  *(_DWORD *)v20 = v22;
  *(_DWORD *)(a1 + 80) = v22 + 1;
  LODWORD(v22) = *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24);
  *(_QWORD *)(v20 + 8) = 0;
  *(_DWORD *)(v20 + 16) = 1;
  *(_QWORD *)(v20 + 24) = a5;
  *(_QWORD *)(v20 + 72) = 0;
  v52[0] = v20;
  *(_OWORD *)(v20 + 40) = 0;
  *(_OWORD *)(v20 + 56) = 0;
  if ( 3 * v23 < 4 * (int)v22 )
  {
    v48 = 2 * v23;
    v47 = 64LL * v23;
    v36 = (char *)sub_186B270(v47);
    v25 = v47;
    v37 = v48;
    v24 = v36;
    v38 = &v36[v47];
    if ( v48 )
    {
      do
      {
        *(_QWORD *)v36 = 0;
        v36 += 32;
        *((_QWORD *)v36 - 3) = 0;
      }
      while ( v38 != v36 );
      v39 = v24;
      if ( (((_BYTE)v38 - (_BYTE)v24) & 0x20) == 0 || (v39 = v24 + 32, *((_DWORD *)v24 + 4) = 0, v38 != v24 + 32) )
      {
        do
        {
          *((_DWORD *)v39 + 4) = 0;
          v39 += 64;
          *((_DWORD *)v39 - 4) = 0;
        }
        while ( v38 != v39 );
      }
    }
    v40 = *(char **)(a2 + 8);
    v26 = v38;
    v46 = v48 - 1;
    v41 = &v40[32 * *(unsigned int *)(a2 + 16)];
    if ( v40 != v41 )
    {
      do
      {
        if ( *((_DWORD *)v40 + 1) == 2 )
        {
          v42 = 32LL * (*(_DWORD *)v40 & (unsigned int)v46);
          v43 = &v24[v42];
          if ( v42 == v25 )
          {
LABEL_63:
            if ( v43 == v24 )
            {
LABEL_70:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v44 = v24;
            while ( *((_DWORD *)v44 + 1) )
            {
              v44 += 32;
              if ( v43 == v44 )
                goto LABEL_70;
            }
          }
          else
          {
            v44 = &v24[v42];
            while ( *((_DWORD *)v44 + 1) )
            {
              v44 += 32;
              if ( v38 == v44 )
                goto LABEL_63;
            }
          }
          v45 = *((_QWORD *)v40 + 1);
          *(_DWORD *)v44 = *(_DWORD *)v40;
          *((_DWORD *)v44 + 1) = 2;
          *((_QWORD *)v44 + 1) = v45;
          *((_DWORD *)v44 + 4) = *((_DWORD *)v40 + 4);
          *((_QWORD *)v44 + 3) = *((_QWORD *)v40 + 3);
        }
        v40 += 32;
      }
      while ( v41 != v40 );
      v41 = *(char **)(a2 + 8);
      v37 = v48;
    }
    if ( v41 )
    {
      v51 = v37;
      v50 = v38;
      v49 = v25;
      sub_186B220(v41);
      v37 = v51;
      v26 = v50;
      v25 = v49;
    }
    *(_QWORD *)(a2 + 8) = v24;
    *(_DWORD *)(a2 + 16) = v37;
    *(_DWORD *)(a2 + 24) = 0;
  }
  else
  {
    v24 = *(char **)(a2 + 8);
    v46 = v23 - 1;
    v25 = 32LL * v23;
    v26 = &v24[v25];
  }
  v27 = *(_DWORD *)(a3 + 12);
  v28 = (((a4 - v27) ^ (v27 << 8) ^ ((v27 - ((a4 - v27) ^ (v27 << 8))) << 16)) + ((a4 - v27) ^ (v27 << 8)) - v27)
      ^ ((v27 - ((a4 - v27) ^ (v27 << 8))) << 10);
  v29 = 32LL * (v28 & (unsigned int)v46);
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
        if ( v28 == *(_DWORD *)v31 && a3 == *((_QWORD *)v31 + 1) && a4 == *((_DWORD *)v31 + 4) )
        {
          *((_QWORD *)v31 + 3) = v20;
          *((_DWORD *)v31 + 1) = 2;
          goto LABEL_61;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_59;
          v32 = v31;
          goto LABEL_60;
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
    if ( v28 == *(_DWORD *)v24 && a3 == *((_QWORD *)v24 + 1) && a4 == *((_DWORD *)v24 + 4) )
    {
      *((_QWORD *)v24 + 3) = v20;
      *((_DWORD *)v24 + 1) = 2;
      goto LABEL_61;
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
LABEL_59:
    --*(_DWORD *)(a2 + 24);
  else
    v32 = v24;
LABEL_60:
  *((_QWORD *)v32 + 1) = a3;
  *((_DWORD *)v32 + 4) = a4;
  *((_QWORD *)v32 + 3) = v20;
  *((_DWORD *)v32 + 1) = 2;
  *(_DWORD *)v32 = v28;
  ++*(_DWORD *)(a2 + 20);
LABEL_61:
  sub_AC8580((_QWORD *)(a1 + 72), v52);
  return v20;
}

