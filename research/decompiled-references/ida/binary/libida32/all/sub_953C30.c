__int64 __fastcall sub_953C30(
        unsigned __int64 a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  int v8; // r14d
  __int64 v9; // rbx
  unsigned __int8 v10; // r11
  char v11; // r13
  char v12; // al
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r14
  __int64 v15; // r11
  void *v16; // rdi
  unsigned __int8 *v17; // rsi
  __int64 v18; // rax
  unsigned int v20; // r15d
  char v21; // r11
  char v22; // al
  unsigned int v23; // r10d
  char v24; // r11
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r15
  int v27; // r11d
  const char *v28; // rdx
  const char *v29; // rcx
  unsigned __int8 *v30; // rdx
  char *v31; // rbp
  __int64 v32; // r9
  unsigned int *v33; // rdi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // r13
  unsigned __int64 v40; // r12
  unsigned __int8 *v41; // rbp
  __int64 v42; // rax
  unsigned int *v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-50h]
  unsigned __int64 v46; // [rsp+8h] [rbp-50h]
  char v47; // [rsp+14h] [rbp-44h]
  unsigned __int64 v48; // [rsp+18h] [rbp-40h]

  if ( a3 <= 1 )
    return -20;
  v8 = *(_DWORD *)(a1 + 30176);
  v9 = a1;
  v10 = *a2;
  LODWORD(a1) = 0x20000;
  v11 = *a2 & 3;
  if ( v8 )
    LODWORD(a1) = *(_DWORD *)(v9 + 29944);
  a1 = (unsigned int)a1;
  switch ( v11 )
  {
    case 2:
LABEL_25:
      if ( a3 <= 4 )
        return -20;
      v20 = *(_DWORD *)a2;
      v21 = (v10 >> 2) & 3;
      v22 = *(_DWORD *)(v9 + 30180) != 0;
      if ( *(_DWORD *)(v9 + 30228) )
        v22 |= 0x10u;
      v23 = v20 >> 4;
      if ( v21 == 2 )
      {
        v25 = v23 & 0x3FFF;
        v26 = v20 >> 18;
        v24 = 0;
        v45 = 4;
      }
      else if ( v21 == 3 )
      {
        v24 = 0;
        v45 = 5;
        v25 = v23 & 0x3FFFF;
        v26 = ((unsigned __int64)a2[4] << 10) + (v20 >> 22);
      }
      else
      {
        v25 = v23 & 0x3FF;
        v45 = 3;
        v24 = v21 ^ 1;
        v26 = (v20 >> 14) & 0x3FF;
      }
      if ( !v25 || (v14 = -70, a4) )
      {
        if ( v25 > (unsigned int)a1 )
          return -20;
        if ( (v24 & 1) == 0 )
        {
          v14 = -24;
          if ( v25 <= 5 )
            return v14;
        }
        v47 = v22;
        v14 = v45 + v26;
        if ( v45 + v26 > a3 )
          return -20;
        if ( a5 <= (unsigned int)a1 )
          a1 = a5;
        if ( v25 > a1 )
          return -70;
        v48 = v25;
        sub_953B50(v9, a4, a5, v25, a6, a1, 0);
        if ( *(_DWORD *)(v9 + 30204) && v48 > 0x300 )
        {
          v28 = *(const char **)(v9 + 24);
          v29 = v28 + 16448;
          do
          {
            _mm_prefetch(v28, 2);
            v28 += 64;
          }
          while ( v29 != v28 );
        }
        v30 = &a2[v45];
        v31 = *(char **)(v9 + 30352);
        if ( v11 == 3 )
        {
          v43 = *(unsigned int **)(v9 + 24);
          if ( v27 )
            sub_9509D0(v31, v48, v30, v26, (__int64)v43, v47);
          else
            v44 = sub_950AC0(v31, v48, (unsigned __int16 *)v30, v26, v43, v47);
          v35 = v48;
          v36 = v44;
        }
        else
        {
          v32 = v9 + 27324;
          v33 = (unsigned int *)(v9 + 10296);
          if ( v27 )
          {
            v34 = sub_950A10(v33, (unsigned __int64)v31, v48, v30, v26, v32, 0xA00u, v47);
            v35 = v48;
            v36 = v34;
          }
          else
          {
            v36 = sub_950AE0(v33, v31, v48, v30, v26, v32, 0xA00u, v47);
            v35 = v48;
          }
        }
        if ( *(_DWORD *)(v9 + 30368) == 2 )
        {
          v46 = v35;
          memcpy((void *)(v9 + 30372), (const void *)(*(_QWORD *)(v9 + 30360) - 0x10000LL), 0x10000u);
          memmove((void *)(*(_QWORD *)(v9 + 30352) + 65504LL), *(const void **)(v9 + 30352), v46 - 0x10000);
          *(_QWORD *)(v9 + 30360) -= 32LL;
          v35 = v46;
          *(_QWORD *)(v9 + 30352) += 65504LL;
        }
        if ( v36 > 0xFFFFFFFFFFFFFF88LL )
          return -20;
        v37 = *(_QWORD *)(v9 + 30352);
        *(_QWORD *)(v9 + 30152) = v35;
        *(_DWORD *)(v9 + 30000) = 1;
        *(_QWORD *)(v9 + 30120) = v37;
        if ( v11 == 2 )
          *(_QWORD *)(v9 + 24) = v9 + 10296;
      }
      return v14;
    case 3:
      v14 = -30;
      if ( !*(_DWORD *)(v9 + 30000) )
        return v14;
      goto LABEL_25;
    case 1:
      v38 = (v10 >> 2) & 3;
      if ( v38 == 1 )
      {
        if ( a3 == 2 )
          return -20;
        v39 = 2;
        v40 = *(_WORD *)a2 >> 4;
      }
      else if ( v38 == 3 )
      {
        if ( a3 <= 3 )
          return -20;
        v39 = 3;
        v40 = (unsigned int)(*(unsigned __int16 *)a2 + (a2[2] << 16)) >> 4;
      }
      else
      {
        v39 = 1;
        v40 = v10 >> 3;
      }
      if ( v40 )
      {
        v14 = -70;
        if ( !a4 )
          return v14;
      }
      if ( v40 <= (unsigned int)a1 )
      {
        v14 = -70;
        if ( a5 <= (unsigned int)a1 )
          a1 = a5;
        if ( v40 <= a1 )
        {
          v41 = &a2[v39];
          sub_953B50(v9, a4, a5, v40, a6, a1, 1);
          if ( *(_DWORD *)(v9 + 30368) == 2 )
          {
            memset(*(void **)(v9 + 30352), *v41, v40 - 0x10000);
            memset((void *)(v9 + 30372), *v41, 0x10000u);
          }
          else
          {
            memset(*(void **)(v9 + 30352), *v41, v40);
          }
          v42 = *(_QWORD *)(v9 + 30352);
          *(_QWORD *)(v9 + 30152) = v40;
          v14 = v39 + 1;
          *(_QWORD *)(v9 + 30120) = v42;
        }
        return v14;
      }
      return -20;
  }
  v12 = (v10 >> 2) & 3;
  if ( v12 == 1 )
  {
    v13 = *(_WORD *)a2 >> 4;
  }
  else if ( v12 == 3 )
  {
    if ( a3 == 2 )
      return -20;
    v13 = (unsigned int)(*(unsigned __int16 *)a2 + (a2[2] << 16)) >> 4;
  }
  else
  {
    v13 = v10 >> 3;
  }
  if ( v13 )
  {
    v14 = -70;
    if ( !a4 )
      return v14;
  }
  if ( v13 > (unsigned int)a1 )
    return -20;
  v14 = -70;
  if ( a5 <= (unsigned int)a1 )
    a1 = a5;
  if ( v13 <= a1 )
  {
    sub_953B50(v9, a4, a5, v13, a6, a1, 1);
    v14 = v13 + v15;
    if ( v13 + v15 + 32 <= a3 )
    {
      *(_QWORD *)(v9 + 30152) = v13;
      *(_QWORD *)(v9 + 30120) = &a2[v15];
      *(_QWORD *)(v9 + 30360) = &a2[v15 + v13];
      *(_DWORD *)(v9 + 30368) = 0;
      return v14;
    }
    if ( v14 <= a3 )
    {
      v16 = *(void **)(v9 + 30352);
      v17 = &a2[v15];
      if ( *(_DWORD *)(v9 + 30368) == 2 )
      {
        memcpy(v16, v17, v13 - 0x10000);
        memcpy((void *)(v9 + 30372), &a2[v14 - 0x10000], 0x10000u);
      }
      else
      {
        memcpy(v16, v17, v13);
      }
      v18 = *(_QWORD *)(v9 + 30352);
      *(_QWORD *)(v9 + 30152) = v13;
      *(_QWORD *)(v9 + 30120) = v18;
      return v14;
    }
    return -20;
  }
  return v14;
}

