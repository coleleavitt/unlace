__int64 __fastcall sub_977970(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  int v8; // r14d
  unsigned __int8 v10; // r11
  unsigned __int64 v11; // rdi
  char v12; // r13
  char v13; // al
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  __int64 v16; // r11
  void *v17; // rdi
  unsigned __int8 *v18; // rsi
  __int64 v19; // rax
  unsigned int v21; // r15d
  char v22; // r11
  char v23; // al
  unsigned int v24; // r10d
  char v25; // r11
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r15
  int v28; // r11d
  const char *v29; // rdx
  const char *v30; // rcx
  unsigned __int8 *v31; // rdx
  char *v32; // rbp
  __int64 v33; // r9
  unsigned int *v34; // rdi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rbp
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // r13
  unsigned __int64 v41; // r12
  unsigned __int8 *v42; // rbp
  __int64 v43; // rax
  unsigned int *v44; // r8
  unsigned __int64 v45; // rax
  __int64 v46; // [rsp+8h] [rbp-50h]
  unsigned __int64 v47; // [rsp+8h] [rbp-50h]
  char v48; // [rsp+14h] [rbp-44h]
  unsigned __int64 v49; // [rsp+18h] [rbp-40h]

  if ( a3 <= 1 )
    return -20;
  v8 = *(_DWORD *)(a1 + 30176);
  v10 = *a2;
  v11 = (unsigned __int64)&stru_20000;
  v12 = *a2 & 3;
  if ( v8 )
    LODWORD(v11) = *(_DWORD *)(a1 + 29944);
  v11 = (unsigned int)v11;
  switch ( v12 )
  {
    case 2:
LABEL_25:
      if ( a3 <= 4 )
        return -20;
      v21 = *(_DWORD *)a2;
      v22 = (v10 >> 2) & 3;
      v23 = *(_DWORD *)(a1 + 30180) != 0;
      if ( *(_DWORD *)(a1 + 30228) )
        v23 |= 0x10u;
      v24 = v21 >> 4;
      if ( v22 == 2 )
      {
        v26 = v24 & 0x3FFF;
        v27 = v21 >> 18;
        v25 = 0;
        v46 = 4;
      }
      else if ( v22 == 3 )
      {
        v25 = 0;
        v46 = 5;
        v26 = v24 & 0x3FFFF;
        v27 = ((unsigned __int64)a2[4] << 10) + (v21 >> 22);
      }
      else
      {
        v26 = v24 & 0x3FF;
        v46 = 3;
        v25 = v22 ^ 1;
        v27 = (v21 >> 14) & 0x3FF;
      }
      if ( !v26 || (v15 = -70, a4) )
      {
        if ( v26 > (unsigned int)v11 )
          return -20;
        if ( (v25 & 1) == 0 )
        {
          v15 = -24;
          if ( v26 <= 5 )
            return v15;
        }
        v48 = v23;
        v15 = v46 + v27;
        if ( v46 + v27 > a3 )
          return -20;
        if ( a5 <= (unsigned int)v11 )
          v11 = a5;
        if ( v26 > v11 )
          return -70;
        v49 = v26;
        sub_977890(a1, a4, a5, v26, a6, v11, 0);
        if ( *(_DWORD *)(a1 + 30204) && v49 > 0x300 )
        {
          v29 = *(const char **)(a1 + 24);
          v30 = v29 + 16448;
          do
          {
            _mm_prefetch(v29, 2);
            v29 += 64;
          }
          while ( v30 != v29 );
        }
        v31 = &a2[v46];
        v32 = *(char **)(a1 + 30352);
        if ( v12 == 3 )
        {
          v44 = *(unsigned int **)(a1 + 24);
          if ( v28 )
            sub_974710(v32, v49, v31, v27, (__int64)v44, v48);
          else
            v45 = sub_974800(v32, v49, (unsigned __int16 *)v31, v27, v44, v48);
          v36 = v49;
          v37 = v45;
        }
        else
        {
          v33 = a1 + 27324;
          v34 = (unsigned int *)(a1 + 10296);
          if ( v28 )
          {
            v35 = sub_974750(v34, (unsigned __int64)v32, v49, v31, v27, v33, 0xA00u, v48);
            v36 = v49;
            v37 = v35;
          }
          else
          {
            v37 = sub_974820(v34, v32, v49, v31, v27, v33, 0xA00u, v48);
            v36 = v49;
          }
        }
        if ( *(_DWORD *)(a1 + 30368) == 2 )
        {
          v47 = v36;
          memcpy((void *)(a1 + 30372), (const void *)(*(_QWORD *)(a1 + 30360) - 0x10000LL), (size_t)&stru_10000);
          memmove((void *)(*(_QWORD *)(a1 + 30352) + 65504LL), *(const void **)(a1 + 30352), v47 - 0x10000);
          *(_QWORD *)(a1 + 30360) -= 32LL;
          v36 = v47;
          *(_QWORD *)(a1 + 30352) += 65504LL;
        }
        if ( v37 > 0xFFFFFFFFFFFFFF88LL )
          return -20;
        v38 = *(_QWORD *)(a1 + 30352);
        *(_QWORD *)(a1 + 30152) = v36;
        *(_DWORD *)(a1 + 30000) = 1;
        *(_QWORD *)(a1 + 30120) = v38;
        if ( v12 == 2 )
          *(_QWORD *)(a1 + 24) = a1 + 10296;
      }
      return v15;
    case 3:
      v15 = -30;
      if ( !*(_DWORD *)(a1 + 30000) )
        return v15;
      goto LABEL_25;
    case 1:
      v39 = (v10 >> 2) & 3;
      if ( v39 == 1 )
      {
        if ( a3 == 2 )
          return -20;
        v40 = 2;
        v41 = *(_WORD *)a2 >> 4;
      }
      else if ( v39 == 3 )
      {
        if ( a3 <= 3 )
          return -20;
        v40 = 3;
        v41 = (unsigned int)(*(unsigned __int16 *)a2 + (a2[2] << 16)) >> 4;
      }
      else
      {
        v40 = 1;
        v41 = v10 >> 3;
      }
      if ( v41 )
      {
        v15 = -70;
        if ( !a4 )
          return v15;
      }
      if ( v41 <= (unsigned int)v11 )
      {
        v15 = -70;
        if ( a5 <= (unsigned int)v11 )
          v11 = a5;
        if ( v41 <= v11 )
        {
          v42 = &a2[v40];
          sub_977890(a1, a4, a5, v41, a6, v11, 1);
          if ( *(_DWORD *)(a1 + 30368) == 2 )
          {
            memset(*(void **)(a1 + 30352), *v42, v41 - 0x10000);
            memset((void *)(a1 + 30372), *v42, (size_t)&stru_10000);
          }
          else
          {
            memset(*(void **)(a1 + 30352), *v42, v41);
          }
          v43 = *(_QWORD *)(a1 + 30352);
          *(_QWORD *)(a1 + 30152) = v41;
          v15 = v40 + 1;
          *(_QWORD *)(a1 + 30120) = v43;
        }
        return v15;
      }
      return -20;
  }
  v13 = (v10 >> 2) & 3;
  if ( v13 == 1 )
  {
    v14 = *(_WORD *)a2 >> 4;
  }
  else if ( v13 == 3 )
  {
    if ( a3 == 2 )
      return -20;
    v14 = (unsigned int)(*(unsigned __int16 *)a2 + (a2[2] << 16)) >> 4;
  }
  else
  {
    v14 = v10 >> 3;
  }
  if ( v14 )
  {
    v15 = -70;
    if ( !a4 )
      return v15;
  }
  if ( v14 > (unsigned int)v11 )
    return -20;
  v15 = -70;
  if ( a5 <= (unsigned int)v11 )
    v11 = a5;
  if ( v14 <= v11 )
  {
    sub_977890(a1, a4, a5, v14, a6, v11, 1);
    v15 = v14 + v16;
    if ( v14 + v16 + 32 <= a3 )
    {
      *(_QWORD *)(a1 + 30152) = v14;
      *(_QWORD *)(a1 + 30120) = &a2[v16];
      *(_QWORD *)(a1 + 30360) = &a2[v16 + v14];
      *(_DWORD *)(a1 + 30368) = 0;
      return v15;
    }
    if ( v15 <= a3 )
    {
      v17 = *(void **)(a1 + 30352);
      v18 = &a2[v16];
      if ( *(_DWORD *)(a1 + 30368) == 2 )
      {
        memcpy(v17, v18, v14 - 0x10000);
        memcpy((void *)(a1 + 30372), &a2[v15 - 0x10000], (size_t)&stru_10000);
      }
      else
      {
        memcpy(v17, v18, v14);
      }
      v19 = *(_QWORD *)(a1 + 30352);
      *(_QWORD *)(a1 + 30152) = v14;
      *(_QWORD *)(a1 + 30120) = v19;
      return v15;
    }
    return -20;
  }
  return v15;
}
