unsigned __int64 __fastcall sub_FBF0(__int64 a1, __int64 a2)
{
  char *v2; // r13
  char *v3; // rax
  unsigned int v4; // r14d
  __int64 i; // rbp
  unsigned int v6; // ecx
  __int64 *v7; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r15
  unsigned __int64 v11; // r12
  char *v12; // rcx
  size_t v13; // r10
  unsigned __int64 v14; // rax
  int v15; // r9d
  char *v16; // rcx
  unsigned __int64 v17; // rsi
  char *v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  char *v22; // rax
  int v23; // r9d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  _QWORD *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r15
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rax
  int v38; // eax
  __int64 v39; // rsi
  unsigned __int64 v40; // [rsp+8h] [rbp-60h]
  unsigned int v41; // [rsp+8h] [rbp-60h]
  unsigned int v42; // [rsp+8h] [rbp-60h]

  v2 = (char *)((*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL);
  *(_QWORD *)(a1 + 8) = v2;
  if ( !v2 || (v3 = v2 + 32, (unsigned __int64)(v2 + 32) > *(_QWORD *)(a1 + 16)) )
  {
    v24 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v24 < 0x28 )
      v24 = 40;
    *(_QWORD *)(a1 + 32) = v24;
    v25 = v24 + 8;
    v26 = malloc(v24 + 8);
    v27 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v26;
    *v26 = v27;
    v2 = (char *)(((unsigned __int64)v26 + 15) & 0xFFFFFFFFFFFFFFF8LL);
    *(_QWORD *)(a1 + 16) = (char *)v26 + v25;
    v3 = v2 + 32;
  }
  *(_QWORD *)(a1 + 8) = v3;
  v4 = 4;
  for ( i = 0; ; i = v6 )
  {
    v8 = *(_DWORD *)(a1 + 96);
    if ( v8
      && (v9 = (unsigned int)(v8 - 1), v10 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v9), *(_WORD *)(v10 + 16) == 263) )
    {
      *(_DWORD *)(a1 + 96) = v9;
      v11 = sub_FA80(a1);
      if ( !v11 )
        return v11;
    }
    else
    {
      v10 = 0;
      v11 = sub_FA80(a1);
      if ( !v11 )
        return v11;
    }
    if ( v4 <= (unsigned int)i )
    {
      v12 = *(char **)(a1 + 8);
      v13 = 8LL * v4;
      if ( v12 == &v2[v13] && (unsigned __int64)(v12 + 8) <= *(_QWORD *)(a1 + 16) )
      {
        *(_QWORD *)(a1 + 8) = v12 + 8;
        ++v4;
      }
      else
      {
        v14 = 2 * v4;
        v15 = 2 * v4;
        if ( v14 < 4 )
          v14 = 4;
        v16 = (char *)((unsigned __int64)(v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        *(_QWORD *)(a1 + 8) = v16;
        v17 = 8 * (v4 + v14);
        if ( !v16 || (v18 = &v16[v17], (unsigned __int64)&v16[v17] > *(_QWORD *)(a1 + 16)) )
        {
          v19 = 2LL * *(_QWORD *)(a1 + 32);
          if ( v19 < v17 + 8 )
            v19 = v17 + 8;
          *(_QWORD *)(a1 + 32) = v19;
          v40 = v19 + 8;
          v20 = malloc(v19 + 8);
          v21 = *(_QWORD *)(a1 + 24);
          v15 = 2 * v4;
          *(_QWORD *)(a1 + 24) = v20;
          *v20 = v21;
          v13 = 8LL * v4;
          v16 = (char *)(((unsigned __int64)v20 + 15) & 0xFFFFFFFFFFFFFFF8LL);
          *(_QWORD *)(a1 + 16) = (char *)v20 + v40;
          v18 = &v16[v17];
        }
        *(_QWORD *)(a1 + 8) = v18;
        v41 = v15;
        v22 = (char *)memcpy(v16, v2, v13);
        v23 = v41;
        v2 = v22;
        if ( v41 < 4 )
          v23 = 4;
        v4 += v23;
      }
    }
    v6 = i + 1;
    v7 = (__int64 *)&v2[8 * i];
    *v7 = v11;
    if ( v10 )
      break;
  }
  if ( a2 )
  {
    v42 = v6;
    v29 = sub_CD20((_QWORD *)a1, 221, a2);
    v6 = v42;
    v11 = v29;
  }
  else
  {
    v38 = *(_DWORD *)(a1 + 96);
    if ( v38
      && (v39 = (unsigned int)(v38 - 1), v11 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v39), *(_WORD *)(v11 + 16) == 221) )
    {
      *(_DWORD *)(a1 + 96) = v39;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v6 )
  {
    v30 = *v7;
    if ( *v7 )
    {
      do
      {
        v31 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(a1 + 8) = v31;
        if ( !v31 || (v32 = v31 + 24, v31 + 24 > *(_QWORD *)(a1 + 16)) )
        {
          v33 = 2LL * *(_QWORD *)(a1 + 32);
          if ( v33 < 0x20 )
            v33 = 32;
          *(_QWORD *)(a1 + 32) = v33;
          v34 = v33 + 8;
          v35 = malloc(v33 + 8);
          v36 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)(a1 + 24) = v35;
          *v35 = v36;
          v31 = ((unsigned __int64)v35 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)(a1 + 16) = (char *)v35 + v34;
          v32 = v31 + 24;
        }
        *(_QWORD *)(a1 + 8) = v32;
        *(_WORD *)(v31 + 16) = 42;
        *(_BYTE *)(v31 + 18) = 0;
        if ( v31 && v11 )
        {
          *(_QWORD *)v31 = v11;
          *(_QWORD *)(v31 + 8) = 0;
          *(_BYTE *)(v31 + 18) = 3;
          sub_C080(v31, v30, (_QWORD *)a1);
        }
        else
        {
          v31 = 0;
        }
        v11 = sub_CD20((_QWORD *)a1, 221, v31);
        v37 = v7 - 1;
        if ( v7 == (__int64 *)v2 )
          break;
        --v7;
        v30 = *v37;
      }
      while ( *v37 );
    }
  }
  return v11;
}
