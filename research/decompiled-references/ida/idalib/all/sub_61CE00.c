__int64 __fastcall sub_61CE00(__int64 a1, int a2)
{
  __int64 v2; // rdx
  _DWORD *v3; // rax
  __int64 v6; // rdx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  _BYTE *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r12
  _BOOL8 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rdi
  char v18; // r14
  __int64 v19; // r13
  char *v20; // r12
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  int v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // ebp
  unsigned __int64 v29; // rcx
  size_t v30; // r15
  int v31; // eax
  unsigned int v32; // edi
  unsigned int v33; // eax
  __int64 v34; // rcx
  char *v35; // r12
  unsigned __int64 v36; // r15
  size_t v37; // rbp
  char *v38; // rbp
  int v39; // eax
  size_t v40; // rax
  int v41; // eax
  unsigned int v42; // edi
  unsigned int v43; // eax
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  size_t v46; // rdx
  size_t v47; // r15
  char *v48; // rsi
  size_t v49; // rbp
  char *v50; // rsi
  size_t v51; // rbp
  int v52; // [rsp+0h] [rbp-58h]
  int v53; // [rsp+0h] [rbp-58h]
  char v54; // [rsp+15h] [rbp-43h]
  unsigned __int16 v55; // [rsp+16h] [rbp-42h]
  unsigned __int64 v56; // [rsp+18h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 120);
  if ( (int)v2 <= 0 )
    return 3;
  v3 = *(_DWORD **)(a1 + 112);
  v6 = (__int64)&v3[2 * (unsigned int)(v2 - 1) + 2];
  while ( *v3 != a2 )
  {
    v3 += 2;
    if ( (_DWORD *)v6 == v3 )
      return 3;
  }
  if ( !v3 )
    return 3;
  v7 = *(_BYTE **)(a1 + 144);
  if ( v7 )
    *v7 = 0;
  v8 = *(_BYTE **)(a1 + 160);
  if ( v8 )
    *v8 = 0;
  v9 = *(_BYTE **)(a1 + 168);
  if ( v9 )
    *v9 = 0;
  v10 = *(unsigned int *)(a1 + 184);
  v11 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 152) = -1;
  *(_DWORD *)(a1 + 176) = 0;
  v12 = *(_QWORD *)(a1 + 88);
  v13 = (unsigned int)v3[1] + v10;
  v14 = v12 + v13;
  v15 = v11 != v13;
  if ( v11 != v13 )
  {
    v16 = 0;
    do
    {
      v17 = v16++;
      *(&v54 + v17) = *(_BYTE *)(v14 + v17);
    }
    while ( v16 < (unsigned int)v15 );
  }
  if ( v13 == v11 )
    return 2;
  v18 = v54;
  v19 = v12 + v11;
  v20 = (char *)(v15 + v14);
  if ( (v54 & 0x10) != 0 )
  {
    v41 = 2;
    if ( (unsigned __int64)(v19 - (_QWORD)v20) <= 2 )
      v41 = v19 - (_DWORD)v20;
    v42 = v41;
    if ( v41 )
    {
      v43 = 0;
      do
      {
        v44 = v43++;
        *((_BYTE *)&v55 + v44) = v20[v44];
      }
      while ( v43 < v42 );
    }
    if ( (unsigned __int64)(v19 - (_QWORD)v20) <= 1 )
      return 2;
    v20 += 2;
    if ( v55 )
    {
      if ( v55 > 0x3FFu )
      {
        v53 = 1023;
        v45 = 1023;
        v55 = 1023;
      }
      else
      {
        v45 = v55;
        v53 = v55;
      }
      v46 = v19 - (_QWORD)v20;
      if ( v19 - (__int64)v20 > v45 )
        v46 = v45;
      v47 = v46;
      *((_BYTE *)memmove(*(void **)(a1 + 144), v20, v46) + v45) = 0;
      if ( v53 != (_DWORD)v47 )
        return 2;
      v20 += v47;
    }
  }
  *(_DWORD *)(a1 + 136) = a2;
  v21 = v18 & 3;
  if ( (v18 & 3) != 0 )
  {
    v50 = v20;
    if ( v21 == 3 )
      v21 = 4;
    v51 = v19 - (_QWORD)v20;
    *(_DWORD *)(a1 + 152) = 0;
    if ( v19 - (__int64)v20 > (unsigned __int64)v21 )
      v51 = v21;
    v20 += v51;
    memmove((void *)(a1 + 152), v50, v51);
  }
  v22 = ((unsigned __int8)v18 >> 2) & 3;
  if ( v22 )
  {
    v48 = v20;
    if ( v22 == 3 )
      v22 = 4;
    v49 = v19 - (_QWORD)v20;
    *(_DWORD *)(a1 + 156) = 0;
    if ( v19 - (__int64)v20 > (unsigned __int64)v22 )
      v49 = v22;
    v20 += v49;
    memmove((void *)(a1 + 156), v48, v49);
  }
  else if ( !*(_DWORD *)(a1 + 152) )
  {
    *(_DWORD *)(a1 + 156) = 0;
    if ( (v18 & 0x20) == 0 )
      goto LABEL_21;
LABEL_26:
    v24 = 2;
    if ( (unsigned __int64)(v19 - (_QWORD)v20) <= 2 )
      v24 = v19 - (_DWORD)v20;
    v25 = v24;
    if ( v24 )
    {
      v26 = 0;
      do
      {
        v27 = v26++;
        *((_BYTE *)&v55 + v27) = v20[v27];
      }
      while ( v26 < v25 );
    }
    if ( (unsigned __int64)(v19 - (_QWORD)v20) <= 1 )
      return 2;
    v28 = v55;
    v20 += 2;
    if ( v55 )
    {
      v29 = v55;
      if ( v55 > 0x3FFu )
      {
        v28 = 1023;
        v29 = 1023;
        v55 = 1023;
      }
      v30 = v19 - (_QWORD)v20;
      if ( v19 - (__int64)v20 > v29 )
        v30 = v29;
      *((_BYTE *)memmove(*(void **)(a1 + 168), v20, v30) + v29) = 0;
      if ( v28 != (_DWORD)v30 )
        return 2;
      v20 += v30;
    }
    goto LABEL_21;
  }
  if ( (v18 & 0x20) != 0 )
    goto LABEL_26;
LABEL_21:
  if ( (v18 & 0x40) == 0 )
    return 0;
  v31 = 2;
  if ( (unsigned __int64)(v19 - (_QWORD)v20) <= 2 )
    v31 = v19 - (_DWORD)v20;
  v32 = v31;
  if ( v31 )
  {
    v33 = 0;
    do
    {
      v34 = v33++;
      *((_BYTE *)&v55 + v34) = v20[v34];
    }
    while ( v33 < v32 );
  }
  if ( (unsigned __int64)(v19 - (_QWORD)v20) <= 1 )
    return 2;
  v35 = v20 + 2;
  if ( !v55 )
    goto LABEL_52;
  if ( v55 > 0x3FFu )
  {
    v52 = 1023;
    v36 = 1023;
    v55 = 1023;
  }
  else
  {
    v52 = v55;
    v36 = v55;
  }
  v37 = v19 - (_QWORD)v35;
  if ( v19 - (__int64)v35 > v36 )
    v37 = v36;
  *((_BYTE *)memmove(*(void **)(a1 + 160), v35, v37) + v36) = 0;
  if ( v52 == (_DWORD)v37 )
  {
    v35 += v37;
LABEL_52:
    v38 = *(char **)(a1 + 160);
    *(_DWORD *)(a1 + 176) = 0;
    v39 = *v38;
    if ( *v38 <= 31 && (_BYTE)v39 )
    {
      *(_DWORD *)(a1 + 176) = v39;
      v40 = strlen(v38);
      memmove(v38, v38 + 1, v40);
    }
    if ( v18 >= 0 )
      return 0;
    if ( (unsigned __int64)(v19 - (_QWORD)v35) > 3 )
    {
      if ( !under_debugger )
        interr(611);
      BUG();
    }
  }
  return 2;
}
