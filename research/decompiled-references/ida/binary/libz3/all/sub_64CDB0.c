__int64 __fastcall sub_64CDB0(__int64 a1)
{
  unsigned int *v2; // rax
  int v3; // r12d
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int i; // ebx
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  char *v24; // r12
  int v25; // ecx
  unsigned int v26; // esi
  char *v27; // rax
  char *v28; // rdx
  char *v29; // rbx
  char *v30; // r13
  __int64 v31; // rdi
  unsigned int v32; // r12d
  size_t v33; // rbx
  _OWORD *v34; // rax
  _OWORD *v35; // rcx
  _OWORD *v36; // rdx
  char *v37; // rdi
  int v38; // ecx
  char *v39; // rdx
  unsigned int v40; // esi
  char *v41; // rax
  unsigned int v42; // ebx
  __int64 v43; // r12
  void *v44; // rcx
  char *v45; // rdi
  int v46; // edx
  __int64 v47; // rsi
  char *v48; // rcx
  char *v49; // rax
  unsigned int v50; // ebx
  __int64 v51; // r12
  __int64 v52; // rax
  _QWORD *v53; // rdx
  __int64 result; // rax
  void (__fastcall ***v55)(_QWORD); // rbx
  unsigned int v56; // esi
  unsigned int v57; // esi
  unsigned int v58; // esi

  v2 = *(unsigned int **)(a1 + 2080);
  if ( v2 )
  {
    v3 = *(v2 - 1);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 2072);
      v5 = *v2;
      v6 = 8 * v5;
      v7 = v4 + 8 * v5;
      if ( v4 )
      {
        v8 = 8LL * *(unsigned int *)(v4 - 4);
        v9 = v4 + v8;
        if ( v6 != v8 )
          goto LABEL_5;
        *(_DWORD *)(v4 - 4) = v5;
      }
      else
      {
        v9 = 0;
        if ( v6 )
        {
          do
          {
LABEL_5:
            v10 = *(_QWORD *)(v9 - 8);
            v9 -= 8;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          while ( v7 != v9 );
          v11 = *(_QWORD *)(a1 + 2072);
          v2 = *(unsigned int **)(a1 + 2080);
          if ( v11 )
            *(_DWORD *)(v11 - 4) = v5;
          if ( !v2 )
            goto LABEL_10;
        }
      }
      *(v2 - 1) = 0;
LABEL_10:
      for ( i = 0; i != v3; ++i )
        sub_180C2E0(a1 + 2088);
    }
  }
  v13 = *(_QWORD *)(a1 + 2072);
  if ( v13 )
  {
    v14 = v13 + 8LL * *(unsigned int *)(v13 - 4);
    if ( v13 == v14 )
      goto LABEL_16;
    do
    {
      v15 = *(_QWORD *)(v14 - 8);
      v14 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    while ( v13 != v14 );
    v14 = *(_QWORD *)(a1 + 2072);
    if ( v14 )
LABEL_16:
      *(_DWORD *)(v14 - 4) = 0;
  }
  sub_63D510(a1 + 2360);
  v16 = *(_QWORD **)(a1 + 2912);
  *(_DWORD *)(a1 + 2896) = 0;
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 >= v17 )
      goto LABEL_25;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = *(_QWORD *)(a1 + 2904);
          if ( (*(_DWORD *)(v18 + 8))-- == 1 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_24;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_24:
    v16 = *(_QWORD **)(a1 + 2912);
    if ( v16 )
LABEL_25:
      *((_DWORD *)v16 - 1) = 0;
  }
  v21 = *(_QWORD *)(a1 + 2920);
  if ( v21 )
    *(_DWORD *)(v21 - 4) = 0;
  v22 = *(_QWORD *)(a1 + 2928);
  if ( v22 )
    *(_DWORD *)(v22 - 4) = 0;
  if ( *(_DWORD *)(a1 + 2348) || *(_DWORD *)(a1 + 2352) )
  {
    v23 = *(unsigned int *)(a1 + 2344);
    v24 = *(char **)(a1 + 2336);
    v25 = 0;
    v26 = *(_DWORD *)(a1 + 2344);
    v27 = v24;
    v28 = &v24[16 * v23];
    if ( v24 == v28 )
      goto LABEL_48;
    do
    {
      while ( *(_QWORD *)v27 )
      {
        *(_QWORD *)v27 = 0;
        v27 += 16;
        if ( v28 == v27 )
          goto LABEL_37;
      }
      v27 += 16;
      ++v25;
    }
    while ( v28 != v27 );
LABEL_37:
    if ( v26 <= 0x10 || 3 * v26 >= 4 * v25 )
      goto LABEL_48;
    if ( v24 )
    {
      v29 = v24;
      v30 = &v24[16 * v23];
      do
      {
        while ( 1 )
        {
          v31 = *((_QWORD *)v29 + 1);
          if ( !v31 )
            break;
          v29 += 16;
          sub_186B220((void *)(v31 - 8));
          if ( v30 == v29 )
            goto LABEL_43;
        }
        v29 += 16;
      }
      while ( v29 != v30 );
LABEL_43:
      sub_186B220(v24);
      v32 = *(_DWORD *)(a1 + 2344);
      *(_QWORD *)(a1 + 2336) = 0;
      v32 >>= 1;
      *(_DWORD *)(a1 + 2344) = v32;
      v33 = 16LL * v32;
      v34 = (_OWORD *)sub_186B270(v33);
      if ( !v32 )
        goto LABEL_47;
    }
    else
    {
      *(_QWORD *)(a1 + 2336) = 0;
      v58 = v26 >> 1;
      *(_DWORD *)(a1 + 2344) = v58;
      v33 = 16LL * v58;
      v34 = (_OWORD *)sub_186B270(v33);
    }
    v35 = &v34[v33 / 0x10];
    v36 = v34;
    if ( (v33 & 0x10) == 0 || (v36 = v34 + 1, *v34 = 0, v34 + 1 != v35) )
    {
      do
      {
        *v36 = 0;
        v36 += 2;
        *(v36 - 1) = 0;
      }
      while ( v36 != v35 );
    }
LABEL_47:
    *(_QWORD *)(a1 + 2336) = v34;
LABEL_48:
    *(_QWORD *)(a1 + 2348) = 0;
  }
  if ( *(_DWORD *)(a1 + 2300) || *(_DWORD *)(a1 + 2304) )
  {
    v37 = *(char **)(a1 + 2288);
    v38 = 0;
    v39 = &v37[8 * *(unsigned int *)(a1 + 2296)];
    v40 = *(_DWORD *)(a1 + 2296);
    v41 = v37;
    if ( v37 == v39 )
      goto LABEL_62;
    do
    {
      while ( *(_QWORD *)v41 )
      {
        *(_QWORD *)v41 = 0;
        v41 += 8;
        if ( v39 == v41 )
          goto LABEL_56;
      }
      v41 += 8;
      ++v38;
    }
    while ( v39 != v41 );
LABEL_56:
    if ( v40 <= 0x10 || 3 * v40 >= 4 * v38 )
      goto LABEL_62;
    if ( v37 )
    {
      sub_186B220(v37);
      v42 = *(_DWORD *)(a1 + 2296);
      *(_QWORD *)(a1 + 2288) = 0;
      v42 >>= 1;
      *(_DWORD *)(a1 + 2296) = v42;
      v43 = v42;
      v44 = (void *)sub_186B270(8LL * v42);
      if ( !v42 )
      {
LABEL_61:
        *(_QWORD *)(a1 + 2288) = v44;
LABEL_62:
        *(_QWORD *)(a1 + 2300) = 0;
        goto LABEL_63;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 2288) = 0;
      v56 = v40 >> 1;
      v43 = v56;
      *(_DWORD *)(a1 + 2296) = v56;
      v44 = (void *)sub_186B270(8LL * v56);
    }
    v44 = memset(v44, 0, 8 * v43);
    goto LABEL_61;
  }
LABEL_63:
  if ( *(_DWORD *)(a1 + 2324) || *(_DWORD *)(a1 + 2328) )
  {
    v45 = *(char **)(a1 + 2312);
    v46 = 0;
    v47 = *(unsigned int *)(a1 + 2320);
    v48 = &v45[24 * v47];
    v49 = v45;
    if ( v45 == v48 )
      goto LABEL_77;
    do
    {
      while ( *((_DWORD *)v49 + 1) )
      {
        *((_DWORD *)v49 + 1) = 0;
        v49 += 24;
        if ( v48 == v49 )
          goto LABEL_70;
      }
      v49 += 24;
      ++v46;
    }
    while ( v48 != v49 );
LABEL_70:
    if ( (unsigned int)v47 <= 0x10 || 3 * (int)v47 >= (unsigned int)(4 * v46) )
      goto LABEL_77;
    if ( v45 )
    {
      sub_186B220(v45);
      v50 = *(_DWORD *)(a1 + 2320);
      *(_QWORD *)(a1 + 2312) = 0;
      v50 >>= 1;
      v51 = v50;
      *(_DWORD *)(a1 + 2320) = v50;
      v52 = sub_186B270(24LL * v50);
      if ( !v50 )
      {
LABEL_76:
        *(_QWORD *)(a1 + 2312) = v52;
LABEL_77:
        *(_QWORD *)(a1 + 2324) = 0;
        goto LABEL_78;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 2312) = 0;
      v57 = (unsigned int)v47 >> 1;
      v51 = v57;
      *(_DWORD *)(a1 + 2320) = v57;
      v52 = sub_186B270(24LL * v57);
    }
    v53 = (_QWORD *)v52;
    do
    {
      *v53 = 0;
      v53 += 3;
      *(v53 - 2) = 0;
    }
    while ( v53 != (_QWORD *)(v52 + 24 * v51) );
    goto LABEL_76;
  }
LABEL_78:
  result = sub_6561A0(a1 + 2264);
  v55 = *(void (__fastcall ****)(_QWORD))(a1 + 2976);
  if ( v55 )
  {
    (**v55)(*(_QWORD *)(a1 + 2976));
    result = sub_186B220(v55);
    *(_QWORD *)(a1 + 2976) = 0;
  }
  *(_QWORD *)(a1 + 2968) = 0;
  return result;
}

