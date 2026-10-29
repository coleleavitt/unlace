__int64 __fastcall sub_B71890(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  char **exception; // rbx
  __int64 *v6; // r14
  _QWORD *v11; // rdx
  __int64 *v12; // r15
  __int64 v13; // r9
  __int64 v14; // rsi
  unsigned int v15; // r10d
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v27; // rcx
  int v28; // eax
  unsigned int *v29; // rsi
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rcx
  __int64 v42; // r10
  __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned int v48; // [rsp+Ch] [rbp-6Ch]
  __int64 v49[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a5;
  v11 = *(_QWORD **)(a1 + 64);
  if ( v11 )
  {
    *((_DWORD *)v11 - 1) = 0;
    v12 = &a5[a4];
    if ( a4 )
    {
      do
      {
        v31 = *((_DWORD *)v11 - 1);
        if ( v31 == *((_DWORD *)v11 - 2) )
        {
          v32 = (3 * v31 + 1) >> 1;
          v33 = 8 * v32 + 8;
          if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v49, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v49);
            sub_233E40((__int64)v49);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v48 = (3 * v31 + 1) >> 1;
          v34 = (unsigned int *)sub_186B300(v11 - 1, v33);
          v11 = v34 + 2;
          *v34 = v48;
          v35 = v34[1];
          *(_QWORD *)(a1 + 64) = v34 + 2;
          v29 = &v34[2 * v35 + 2];
          v28 = v35 + 1;
        }
        else
        {
          v27 = v31;
          v28 = v31 + 1;
          v29 = (unsigned int *)&v11[v27];
        }
LABEL_20:
        v30 = *v6++;
        *(_QWORD *)v29 = v30;
        *((_DWORD *)v11 - 1) = v28;
      }
      while ( v12 != v6 );
    }
  }
  else if ( a4 )
  {
    v12 = &a5[a4];
    v44 = (_QWORD *)sub_186B270(0x18u);
    v11 = v44 + 1;
    *v44 = 2;
    v28 = 1;
    *(_QWORD *)(a1 + 64) = v11;
    v29 = (unsigned int *)v11;
    goto LABEL_20;
  }
  v13 = *(unsigned int *)(a1 + 16);
  v14 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a1 + 80) = a3;
  v15 = v13 - 1;
  v16 = 16 * v13;
  *(_DWORD *)(a1 + 96) = a4;
  *(_QWORD *)(a1 + 104) = v11;
  v17 = v14 + v16;
  v18 = 16LL * (a3 & v15);
  v19 = v14 + v18;
  if ( v18 == v16 )
  {
    v38 = v14;
    if ( v14 == v19 )
    {
      if ( a4 )
        goto LABEL_10;
      goto LABEL_57;
    }
    while ( 1 )
    {
LABEL_36:
      v39 = *(_QWORD *)(v38 + 8);
      if ( v39 > 1 )
      {
        if ( a3 == *(_DWORD *)v38 && a2 == *(_QWORD *)v39 && a4 == *(_DWORD *)(v39 + 24) )
        {
          if ( !a4 )
            return 1;
          v40 = *(_QWORD *)(v39 + 32);
          v41 = 0;
          while ( *(_QWORD *)(v40 + v41 * 8) == v11[v41] )
          {
            if ( ++v41 == a4 )
              return 1;
          }
        }
      }
      else if ( !v39 )
      {
LABEL_9:
        if ( a4 )
          goto LABEL_10;
LABEL_12:
        if ( v18 != v16 )
          goto LABEL_13;
LABEL_57:
        while ( v19 != v14 )
        {
          v45 = *(_QWORD *)(v14 + 8);
          if ( v45 > 1 )
          {
            if ( a3 == *(_DWORD *)v14 && *(_QWORD *)v45 == *(_QWORD *)(a1 + 72) && a4 == *(_DWORD *)(v45 + 24) )
            {
              if ( !a4 )
                return 1;
              v46 = *(_QWORD *)(v45 + 32);
              v47 = 0;
              while ( *(_QWORD *)(v46 + v47 * 8) == v11[v47] )
              {
                if ( a4 == ++v47 )
                  return 1;
              }
            }
          }
          else if ( !v45 )
          {
            return 0;
          }
          v14 += 16;
        }
        return 0;
      }
      v38 += 16;
      if ( v19 == v38 )
        goto LABEL_9;
    }
  }
  v20 = v14 + v18;
  do
  {
    v21 = *(_QWORD *)(v20 + 8);
    if ( v21 > 1 )
    {
      if ( a3 == *(_DWORD *)v20 && a2 == *(_QWORD *)v21 && a4 == *(_DWORD *)(v21 + 24) )
      {
        if ( !a4 )
          return 1;
        v36 = *(_QWORD *)(v21 + 32);
        v37 = 0;
        while ( *(_QWORD *)(v36 + v37 * 8) == v11[v37] )
        {
          if ( a4 == ++v37 )
            return 1;
        }
      }
    }
    else if ( !v21 )
    {
      goto LABEL_9;
    }
    v20 += 16;
  }
  while ( v17 != v20 );
  if ( v14 != v19 )
  {
    v38 = v14;
    goto LABEL_36;
  }
  if ( a4 )
  {
LABEL_10:
    v22 = v11;
    do
    {
      v23 = *v22++;
      *(v22 - 1) = *(_QWORD *)(v23 + 8);
    }
    while ( v22 != &v11[a4] );
    goto LABEL_12;
  }
  if ( v16 )
  {
LABEL_13:
    v24 = v14 + v18;
    while ( 1 )
    {
      v25 = *(_QWORD *)(v24 + 8);
      if ( v25 > 1 )
      {
        if ( a3 == *(_DWORD *)v24 && *(_QWORD *)v25 == *(_QWORD *)(a1 + 72) && a4 == *(_DWORD *)(v25 + 24) )
        {
          if ( !a4 )
            return 1;
          v42 = *(_QWORD *)(v25 + 32);
          v43 = 0;
          while ( *(_QWORD *)(v42 + v43 * 8) == v11[v43] )
          {
            if ( a4 == ++v43 )
              return 1;
          }
        }
      }
      else if ( !v25 )
      {
        return 0;
      }
      v24 += 16;
      if ( v17 == v24 )
        goto LABEL_57;
    }
  }
  return 0;
}

