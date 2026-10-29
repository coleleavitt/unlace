__int64 __fastcall sub_45B180(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdx
  unsigned int v7; // r12d
  size_t v8; // rbx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  _OWORD *v11; // rdx
  char *v12; // rdi
  int v13; // ecx
  __int64 v14; // rsi
  char *v15; // rax
  char *v16; // rdx
  unsigned int v17; // r12d
  size_t v18; // rbx
  _OWORD *v19; // rax
  _OWORD *v20; // rcx
  _OWORD *v21; // rdx
  __int64 result; // rax
  char *v23; // rdi
  int v24; // ecx
  __int64 v25; // rsi
  char *v26; // rdx
  unsigned int v27; // r12d
  size_t v28; // rbx
  _OWORD *v29; // rcx
  _OWORD *v30; // rdx
  _QWORD **v31; // rbx
  _QWORD **v32; // r13
  _QWORD *v33; // r12
  _QWORD *v34; // rbx
  _QWORD *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  unsigned int v42; // esi
  unsigned int v43; // esi
  unsigned int v44; // esi

  if ( *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 104) )
  {
    v2 = *(char **)(a1 + 88);
    v3 = 0;
    v4 = *(unsigned int *)(a1 + 96);
    v5 = v2;
    v6 = &v2[16 * v4];
    if ( v2 == v6 )
      goto LABEL_16;
    do
    {
      while ( *(_QWORD *)v5 )
      {
        *(_QWORD *)v5 = 0;
        v5 += 16;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      v5 += 16;
      ++v3;
    }
    while ( v6 != v5 );
LABEL_8:
    if ( (unsigned int)v4 <= 0x10 || 3 * (int)v4 >= (unsigned int)(4 * v3) )
      goto LABEL_16;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 96) = v7;
      v8 = 16LL * v7;
      v9 = (_OWORD *)sub_186B270(v8);
      if ( !v7 )
      {
LABEL_15:
        *(_QWORD *)(a1 + 88) = v9;
LABEL_16:
        *(_QWORD *)(a1 + 100) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v43 = (unsigned int)v4 >> 1;
      *(_QWORD *)(a1 + 88) = 0;
      *(_DWORD *)(a1 + 96) = v43;
      v8 = 16LL * v43;
      v9 = (_OWORD *)sub_186B270(v8);
    }
    v10 = &v9[v8 / 0x10];
    v11 = v9;
    if ( (v8 & 0x10) == 0 || (v11 = v9 + 1, *v9 = 0, v10 != v9 + 1) )
    {
      do
      {
        *v11 = 0;
        v11 += 2;
        *(v11 - 1) = 0;
      }
      while ( v10 != v11 );
    }
    goto LABEL_15;
  }
LABEL_17:
  if ( *(_DWORD *)(a1 + 76) || *(_DWORD *)(a1 + 80) )
  {
    v12 = *(char **)(a1 + 64);
    v13 = 0;
    v14 = *(unsigned int *)(a1 + 72);
    v15 = v12;
    v16 = &v12[16 * v14];
    if ( v12 == v16 )
      goto LABEL_32;
    do
    {
      while ( *(_QWORD *)v15 )
      {
        *(_QWORD *)v15 = 0;
        v15 += 16;
        if ( v16 == v15 )
          goto LABEL_24;
      }
      v15 += 16;
      ++v13;
    }
    while ( v16 != v15 );
LABEL_24:
    if ( (unsigned int)v14 <= 0x10 || 3 * (int)v14 >= (unsigned int)(4 * v13) )
      goto LABEL_32;
    if ( v12 )
    {
      sub_186B220(v12);
      v17 = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 64) = 0;
      v17 >>= 1;
      *(_DWORD *)(a1 + 72) = v17;
      v18 = 16LL * v17;
      v19 = (_OWORD *)sub_186B270(v18);
      if ( !v17 )
      {
LABEL_31:
        *(_QWORD *)(a1 + 64) = v19;
LABEL_32:
        *(_QWORD *)(a1 + 76) = 0;
        goto LABEL_33;
      }
    }
    else
    {
      v42 = (unsigned int)v14 >> 1;
      *(_QWORD *)(a1 + 64) = 0;
      *(_DWORD *)(a1 + 72) = v42;
      v18 = 16LL * v42;
      v19 = (_OWORD *)sub_186B270(v18);
    }
    v20 = &v19[v18 / 0x10];
    v21 = v19;
    if ( (v18 & 0x10) == 0 || (v21 = v19 + 1, *v19 = 0, v19 + 1 != v20) )
    {
      do
      {
        *v21 = 0;
        v21 += 2;
        *(v21 - 1) = 0;
      }
      while ( v21 != v20 );
    }
    goto LABEL_31;
  }
LABEL_33:
  if ( *(_DWORD *)(a1 + 52) || (result = *(unsigned int *)(a1 + 56), (_DWORD)result) )
  {
    v23 = *(char **)(a1 + 40);
    v24 = 0;
    v25 = *(unsigned int *)(a1 + 48);
    result = (__int64)v23;
    v26 = &v23[16 * v25];
    if ( v23 == v26 )
      goto LABEL_48;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v26 == (char *)result )
          goto LABEL_40;
      }
      result += 16;
      ++v24;
    }
    while ( v26 != (char *)result );
LABEL_40:
    if ( (unsigned int)v25 <= 0x10 )
      goto LABEL_48;
    result = (unsigned int)(3 * v25);
    if ( (unsigned int)result >= 4 * v24 )
      goto LABEL_48;
    if ( v23 )
    {
      sub_186B220(v23);
      v27 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = 0;
      v27 >>= 1;
      *(_DWORD *)(a1 + 48) = v27;
      v28 = 16LL * v27;
      result = sub_186B270(v28);
      if ( !v27 )
      {
LABEL_47:
        *(_QWORD *)(a1 + 40) = result;
LABEL_48:
        *(_QWORD *)(a1 + 52) = 0;
        goto LABEL_49;
      }
    }
    else
    {
      v44 = (unsigned int)v25 >> 1;
      *(_QWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 48) = v44;
      v28 = 16LL * v44;
      result = sub_186B270(v28);
    }
    v29 = (_OWORD *)(result + v28);
    v30 = (_OWORD *)result;
    if ( (v28 & 0x10) == 0 || (v30 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, v29 != (_OWORD *)(result + 16)) )
    {
      do
      {
        *v30 = 0;
        v30 += 2;
        *(v30 - 1) = 0;
      }
      while ( v29 != v30 );
    }
    goto LABEL_47;
  }
LABEL_49:
  v31 = *(_QWORD ***)(a1 + 32);
  if ( v31 )
  {
    result = *((unsigned int *)v31 - 1);
    v32 = &v31[result];
    if ( v32 == v31 )
      goto LABEL_57;
    do
    {
      v33 = *v31;
      if ( *v31 )
      {
        if ( *v33 )
          sub_186B220((void *)(*v33 - 8LL));
        result = sub_186B220(v33);
      }
      ++v31;
    }
    while ( v32 != v31 );
    v31 = *(_QWORD ***)(a1 + 32);
    if ( v31 )
LABEL_57:
      *((_DWORD *)v31 - 1) = 0;
  }
  v34 = *(_QWORD **)(a1 + 24);
  if ( v34 )
  {
    result = *((unsigned int *)v34 - 1);
    v35 = &v34[result];
    if ( v34 >= v35 )
      goto LABEL_66;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v37 = *(_QWORD *)(a1 + 16);
          if ( (*(_DWORD *)(v36 + 8))-- == 1 )
            break;
        }
        if ( ++v34 >= v35 )
          goto LABEL_65;
      }
      result = sub_15D7BC0(v37, v36);
      ++v34;
    }
    while ( v34 < v35 );
LABEL_65:
    v34 = *(_QWORD **)(a1 + 24);
    if ( v34 )
LABEL_66:
      *((_DWORD *)v34 - 1) = 0;
  }
  v39 = *(void **)(a1 + 128);
  if ( v39 )
    result = (__int64)memset(v39, 0, 4LL * *(unsigned int *)(a1 + 124));
  v40 = *(void **)(a1 + 152);
  *(_DWORD *)(a1 + 120) = 0;
  if ( v40 )
    result = (__int64)memset(v40, 0, 4LL * *(unsigned int *)(a1 + 148));
  v41 = *(void **)(a1 + 176);
  *(_DWORD *)(a1 + 144) = 0;
  if ( v41 )
    result = (__int64)memset(v41, 0, 4LL * *(unsigned int *)(a1 + 172));
  *(_DWORD *)(a1 + 168) = 0;
  return result;
}

