__int64 __fastcall sub_B04D20(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // esi
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rdi
  bool v21; // al
  __int64 v22; // rdx
  int v23; // eax
  unsigned int i; // r14d
  __int64 v25; // rbp
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rbp
  int v29; // eax
  bool v30; // al
  int v31; // edx
  int v32; // eax
  __int64 v34; // rax
  int *v35; // rdx
  int *v36; // rax
  int v37; // ecx
  int v38; // esi
  int v39; // ecx
  __int64 v40; // rsi
  __int64 v41; // rcx
  char v42; // di
  char v43; // di
  __int64 v44; // rsi
  __int64 v45; // rcx
  char v46; // di
  __int64 v47; // [rsp+0h] [rbp-48h]
  _QWORD v48[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = *a2;
  v8 = *(_DWORD *)(*a2 - 4);
  v9 = v8 - 1;
  if ( a3 < v8 )
  {
    v10 = (__int64 *)(v7 + 8LL * v9);
    v11 = (__int64 *)(v7 + 8LL * a3);
    v12 = *v11;
    *v11 = *v10;
    *v10 = v12;
  }
  *(_DWORD *)(v7 - 4) = v9;
  v13 = a1 + 72;
  v14 = *(_DWORD *)(a4 + 8);
  v47 = v13;
  v48[0] = 0;
  v15 = 40LL * a5;
  v48[1] = 0;
  v16 = v15 + *(_QWORD *)(a4 + 40LL * (v14 & 1) + 16);
  if ( (*(_BYTE *)(v16 + 12) & 1) != 0 )
  {
    sub_182EA00(v13, v48, v16 + 8);
    v18 = *(_DWORD *)(a4 + 120);
    if ( a5 + 1 >= v18 )
      goto LABEL_5;
LABEL_32:
    v34 = *(_QWORD *)(a4 + 40LL * (*(_DWORD *)(a4 + 8) & 1) + 16);
    v35 = (int *)(v34 + 40LL * (v18 - 1));
    v36 = (int *)(v15 + v34);
    v37 = *v36;
    *v36 = *v35;
    v38 = v35[2];
    *v35 = v37;
    v39 = v36[2];
    v36[2] = v38;
    v40 = *((_QWORD *)v35 + 2);
    v35[2] = v39;
    v41 = *((_QWORD *)v36 + 2);
    *((_QWORD *)v36 + 2) = v40;
    v42 = *((_BYTE *)v35 + 12);
    *((_QWORD *)v35 + 2) = v41;
    LOBYTE(v40) = *((_BYTE *)v36 + 12);
    *((_BYTE *)v36 + 12) = v42 & 2 | v40 & 0xFD;
    LOBYTE(v41) = v40 & 2 | v35[3] & 0xFD;
    *((_BYTE *)v35 + 12) = v41;
    v43 = *((_BYTE *)v36 + 12);
    *((_BYTE *)v36 + 12) = v41 & 1 | v43 & 0xFE;
    LODWORD(v40) = v35[6];
    *((_BYTE *)v35 + 12) = v43 & 1 | v35[3] & 0xFE;
    LODWORD(v41) = v36[6];
    v36[6] = v40;
    v44 = *((_QWORD *)v35 + 4);
    v35[6] = v41;
    v45 = *((_QWORD *)v36 + 4);
    *((_QWORD *)v36 + 4) = v44;
    *((_QWORD *)v35 + 4) = v45;
    LOBYTE(v45) = *((_BYTE *)v36 + 28);
    *((_BYTE *)v36 + 28) = v35[7] & 2 | v45 & 0xFD;
    LOBYTE(v45) = v45 & 2 | v35[7] & 0xFD;
    *((_BYTE *)v35 + 28) = v45;
    v46 = v36[7] & 1;
    *((_BYTE *)v36 + 28) = v45 & 1 | v36[7] & 0xFE;
    *((_BYTE *)v35 + 28) = v46 | v35[7] & 0xFE;
    v18 = *(_DWORD *)(a4 + 120);
    goto LABEL_5;
  }
  v17 = *(_DWORD *)(v16 + 8);
  v18 = *(_DWORD *)(a4 + 120);
  LODWORD(v48[0]) = v17;
  if ( a5 + 1 < v18 )
    goto LABEL_32;
LABEL_5:
  v19 = *(_QWORD *)(a4 + 128);
  *(_DWORD *)(a4 + 120) = v18 - 1;
  sub_183A580(v19, a4 + 136, v48, a4 + 136);
  v20 = v47;
  if ( (v48[0] & 0x100000000LL) != 0 || (*(_BYTE *)(a4 + 108) & 1) != 0 )
  {
    v20 = v47;
    v21 = (unsigned int)sub_182EB00(v47, v48, a4 + 104) == 0;
  }
  else
  {
    v21 = LODWORD(v48[0]) == *(_DWORD *)(a4 + 104);
  }
  if ( v21 )
  {
    v22 = *(_QWORD *)(a4 + 40LL * (*(_DWORD *)(a4 + 8) & 1) + 16);
    if ( (*(_BYTE *)(v22 + 12) & 1) != 0 )
    {
      sub_182EA00(v20, v48, v22 + 8);
      v20 = v47;
    }
    else
    {
      v23 = *(_DWORD *)(v22 + 8);
      BYTE4(v48[0]) &= ~1u;
      LODWORD(v48[0]) = v23;
    }
    for ( i = 1; ; ++i )
    {
      if ( (v48[0] & 0x100000000LL) != 0 || (v30 = (*(_BYTE *)(a4 + 108) & 1) == 0, (*(_BYTE *)(a4 + 108) & 1) != 0) )
      {
        v31 = sub_182EB00(v20, v48, a4 + 104);
        v30 = (v48[0] & 0x100000000LL) == 0;
        if ( !v31 )
        {
LABEL_24:
          if ( v30 )
          {
            v32 = v48[0];
            *(_BYTE *)(a4 + 108) &= ~1u;
            v20 = v47;
            *(_DWORD *)(a4 + 104) = v32;
          }
          else
          {
            sub_182EA00(*(_QWORD *)(a4 + 96), a4 + 104, v48);
            v20 = v47;
          }
          return sub_182EF00(v20, v48);
        }
      }
      else if ( LODWORD(v48[0]) == *(_DWORD *)(a4 + 104) )
      {
        goto LABEL_24;
      }
      if ( i >= *(_DWORD *)(a4 + 120) )
        goto LABEL_24;
      v20 = v47;
      v25 = 40LL * i;
      v26 = v25 + *(_QWORD *)(a4 + 40LL * (*(_DWORD *)(a4 + 8) & 1) + 16);
      if ( !v30 || (*(_BYTE *)(v26 + 12) & 1) != 0 )
      {
        v20 = v47;
        v27 = (unsigned int)sub_182EB00(v47, v48, v25 + *(_QWORD *)(a4 + 40LL * (*(_DWORD *)(a4 + 8) & 1) + 16) + 8) >> 31;
      }
      else
      {
        LOBYTE(v27) = SLODWORD(v48[0]) < *(_DWORD *)(v26 + 8);
      }
      if ( (_BYTE)v27 )
      {
        v28 = *(_QWORD *)(a4 + 40LL * (*(_DWORD *)(a4 + 8) & 1) + 16) + v25;
        if ( (*(_BYTE *)(v28 + 12) & 1) != 0 )
        {
          sub_182EA00(v20, v48, v28 + 8);
          v20 = v47;
        }
        else
        {
          v29 = *(_DWORD *)(v28 + 8);
          BYTE4(v48[0]) &= ~1u;
          LODWORD(v48[0]) = v29;
        }
      }
    }
  }
  return sub_182EF00(v20, v48);
}

