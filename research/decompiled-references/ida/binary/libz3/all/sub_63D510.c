__int64 __fastcall sub_63D510(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  void *v5; // rbx
  char *v6; // rdi
  int v7; // ecx
  char *v8; // rdx
  unsigned int v9; // esi
  char *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // r12
  void *v13; // rcx
  char *v14; // rdi
  int v15; // ecx
  __int64 v16; // rsi
  char *v17; // rax
  char *v18; // rdx
  unsigned int v19; // r12d
  size_t v20; // rbx
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v23; // rdx
  __int64 result; // rax
  char *v25; // rdi
  int v26; // ecx
  __int64 v27; // rsi
  char *v28; // rdx
  unsigned int v29; // r12d
  size_t v30; // rbx
  _OWORD *v31; // rcx
  _OWORD *v32; // rdx
  _QWORD *v33; // rbx
  _QWORD *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned int v38; // esi
  unsigned int v39; // esi
  unsigned int v40; // esi

  v2 = *(__int64 **)(a1 + 24);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_5;
    do
    {
      v4 = *v2++;
      sub_62A410(*(__int64 **)(a1 + 16), v4);
    }
    while ( v2 < v3 );
    v2 = *(__int64 **)(a1 + 24);
    if ( v2 )
LABEL_5:
      *((_DWORD *)v2 - 1) = 0;
  }
  sub_643880(a1 + 32);
  sub_643660(a1 + 56);
  v5 = *(void **)(a1 + 144);
  if ( v5 )
  {
    sub_63CF80(*(_QWORD **)(a1 + 144));
    sub_186B220(v5);
    *(_QWORD *)(a1 + 144) = 0;
  }
  if ( *(_DWORD *)(a1 + 164) || *(_DWORD *)(a1 + 168) )
  {
    v6 = *(char **)(a1 + 152);
    v7 = 0;
    v8 = &v6[8 * *(unsigned int *)(a1 + 160)];
    v9 = *(_DWORD *)(a1 + 160);
    v10 = *(char **)(a1 + 152);
    if ( v6 == v8 )
      goto LABEL_21;
    do
    {
      while ( *(_QWORD *)v10 )
      {
        *(_QWORD *)v10 = 0;
        v10 += 8;
        if ( v8 == v10 )
          goto LABEL_15;
      }
      v10 += 8;
      ++v7;
    }
    while ( v8 != v10 );
LABEL_15:
    if ( v9 <= 0x10 || 3 * v9 >= 4 * v7 )
      goto LABEL_21;
    if ( v6 )
    {
      sub_186B220(v6);
      v11 = *(_DWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 152) = 0;
      v11 >>= 1;
      *(_DWORD *)(a1 + 160) = v11;
      v12 = v11;
      v13 = (void *)sub_186B270(8LL * v11);
      if ( !v11 )
      {
LABEL_20:
        *(_QWORD *)(a1 + 152) = v13;
LABEL_21:
        *(_QWORD *)(a1 + 164) = 0;
        goto LABEL_22;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 152) = 0;
      v39 = v9 >> 1;
      v12 = v39;
      *(_DWORD *)(a1 + 160) = v39;
      v13 = (void *)sub_186B270(8LL * v39);
    }
    v13 = memset(v13, 0, 8 * v12);
    goto LABEL_20;
  }
LABEL_22:
  if ( *(_DWORD *)(a1 + 188) || *(_DWORD *)(a1 + 192) )
  {
    v14 = *(char **)(a1 + 176);
    v15 = 0;
    v16 = *(unsigned int *)(a1 + 184);
    v17 = v14;
    v18 = &v14[16 * v16];
    if ( v14 == v18 )
      goto LABEL_37;
    do
    {
      while ( *(_QWORD *)v17 )
      {
        *(_QWORD *)v17 = 0;
        v17 += 16;
        if ( v18 == v17 )
          goto LABEL_29;
      }
      v17 += 16;
      ++v15;
    }
    while ( v18 != v17 );
LABEL_29:
    if ( (unsigned int)v16 <= 0x10 || 3 * (int)v16 >= (unsigned int)(4 * v15) )
      goto LABEL_37;
    if ( v14 )
    {
      sub_186B220(v14);
      v19 = *(_DWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 176) = 0;
      v19 >>= 1;
      *(_DWORD *)(a1 + 184) = v19;
      v20 = 16LL * v19;
      v21 = (_OWORD *)sub_186B270(v20);
      if ( !v19 )
      {
LABEL_36:
        *(_QWORD *)(a1 + 176) = v21;
LABEL_37:
        *(_QWORD *)(a1 + 188) = 0;
        goto LABEL_38;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 176) = 0;
      v38 = (unsigned int)v16 >> 1;
      *(_DWORD *)(a1 + 184) = v38;
      v20 = 16LL * v38;
      v21 = (_OWORD *)sub_186B270(v20);
    }
    v22 = &v21[v20 / 0x10];
    v23 = v21;
    if ( (v20 & 0x10) == 0 || (v23 = v21 + 1, *v21 = 0, v22 != v21 + 1) )
    {
      do
      {
        *v23 = 0;
        v23 += 2;
        *(v23 - 1) = 0;
      }
      while ( v22 != v23 );
    }
    goto LABEL_36;
  }
LABEL_38:
  if ( !*(_DWORD *)(a1 + 212) )
  {
    result = *(unsigned int *)(a1 + 216);
    if ( !(_DWORD)result )
      goto LABEL_54;
  }
  v25 = *(char **)(a1 + 200);
  v26 = 0;
  v27 = *(unsigned int *)(a1 + 208);
  result = (__int64)v25;
  v28 = &v25[16 * v27];
  if ( v25 != v28 )
  {
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v28 == (char *)result )
          goto LABEL_45;
      }
      result += 16;
      ++v26;
    }
    while ( v28 != (char *)result );
LABEL_45:
    if ( (unsigned int)v27 > 0x10 )
    {
      result = (unsigned int)(3 * v27);
      if ( (unsigned int)result < 4 * v26 )
      {
        if ( v25 )
        {
          sub_186B220(v25);
          v29 = *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 200) = 0;
          v29 >>= 1;
          *(_DWORD *)(a1 + 208) = v29;
          v30 = 16LL * v29;
          result = sub_186B270(v30);
          if ( !v29 )
          {
LABEL_52:
            *(_QWORD *)(a1 + 200) = result;
            goto LABEL_53;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 200) = 0;
          v40 = (unsigned int)v27 >> 1;
          *(_DWORD *)(a1 + 208) = v40;
          v30 = 16LL * v40;
          result = sub_186B270(v30);
        }
        v31 = (_OWORD *)(v30 + result);
        v32 = (_OWORD *)result;
        if ( (v30 & 0x10) == 0 || (v32 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, (_OWORD *)(result + 16) != v31) )
        {
          do
          {
            *v32 = 0;
            v32 += 2;
            *(v32 - 1) = 0;
          }
          while ( v32 != v31 );
        }
        goto LABEL_52;
      }
    }
  }
LABEL_53:
  *(_QWORD *)(a1 + 212) = 0;
LABEL_54:
  v33 = *(_QWORD **)(a1 + 232);
  if ( v33 )
  {
    result = *((unsigned int *)v33 - 1);
    v34 = &v33[result];
    if ( v33 >= v34 )
      goto LABEL_62;
    do
    {
      while ( 1 )
      {
        v35 = *v33;
        if ( *v33 )
        {
          v36 = *(_QWORD *)(a1 + 224);
          if ( (*(_DWORD *)(v35 + 8))-- == 1 )
            break;
        }
        if ( ++v33 >= v34 )
          goto LABEL_61;
      }
      result = sub_15D7BC0(v36, v35);
      ++v33;
    }
    while ( v33 < v34 );
LABEL_61:
    v33 = *(_QWORD **)(a1 + 232);
    if ( v33 )
LABEL_62:
      *((_DWORD *)v33 - 1) = 0;
  }
  return result;
}

