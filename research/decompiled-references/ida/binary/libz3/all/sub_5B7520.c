__int64 __fastcall sub_5B7520(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  char *v4; // rdx
  unsigned int v5; // esi
  char *v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // r12
  void *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdi
  char *v15; // r12
  int v16; // ecx
  unsigned int v17; // esi
  char *v18; // rax
  char *v19; // rdx
  char *v20; // rbx
  char *v21; // r13
  __int64 v22; // rdi
  unsigned int v23; // ebx
  __int64 v24; // r12
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rdi
  char *v28; // r12
  int v29; // ecx
  unsigned int v30; // esi
  char *v31; // rax
  char *v32; // rdx
  char *v33; // rbx
  char *v34; // r13
  __int64 v35; // rdi
  unsigned int v36; // r12d
  size_t v37; // rbx
  _OWORD *v38; // rax
  _OWORD *v39; // rcx
  _OWORD *v40; // rdx
  __int64 result; // rax
  char *v42; // rdi
  int v43; // ecx
  __int64 v44; // rsi
  char *v45; // rdx
  unsigned int v46; // r12d
  size_t v47; // rbx
  _OWORD *v48; // rcx
  _OWORD *v49; // rdx
  _QWORD *v50; // rbx
  _QWORD *v51; // r12
  __int64 v52; // rsi
  __int64 v53; // rdi
  unsigned int v55; // esi
  unsigned int v56; // esi
  unsigned int v57; // esi
  unsigned int v58; // esi

  if ( *(_DWORD *)(a1 + 76) || *(_DWORD *)(a1 + 80) )
  {
    v2 = *(char **)(a1 + 64);
    v3 = 0;
    v4 = &v2[8 * *(unsigned int *)(a1 + 72)];
    v5 = *(_DWORD *)(a1 + 72);
    v6 = *(char **)(a1 + 64);
    if ( v2 == v4 )
      goto LABEL_14;
    do
    {
      while ( *(_QWORD *)v6 )
      {
        *(_QWORD *)v6 = 0;
        v6 += 8;
        if ( v4 == v6 )
          goto LABEL_8;
      }
      v6 += 8;
      ++v3;
    }
    while ( v4 != v6 );
LABEL_8:
    if ( v5 <= 0x10 || 3 * v5 >= 4 * v3 )
      goto LABEL_14;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 64) = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 72) = v7;
      v8 = v7;
      v9 = (void *)sub_186B270(8LL * v7);
      if ( !v7 )
      {
LABEL_13:
        *(_QWORD *)(a1 + 64) = v9;
LABEL_14:
        *(_QWORD *)(a1 + 76) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      v55 = v5 >> 1;
      *(_QWORD *)(a1 + 64) = 0;
      v8 = v55;
      *(_DWORD *)(a1 + 72) = v55;
      v9 = (void *)sub_186B270(8LL * v55);
    }
    v9 = memset(v9, 0, 8 * v8);
    goto LABEL_13;
  }
LABEL_15:
  v10 = *(_QWORD *)(a1 + 88);
  if ( v10 )
  {
    v11 = *(unsigned int *)(v10 - 4);
    if ( (_DWORD)v11 )
    {
      v12 = v10 + 16 * v11;
      do
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v10 + 8);
          if ( !v13 )
            break;
          v10 += 16;
          sub_186B220((void *)(v13 - 8));
          if ( v12 == v10 )
          {
            v10 = *(_QWORD *)(a1 + 88);
            goto LABEL_21;
          }
        }
        v10 += 16;
      }
      while ( v10 != v12 );
      v10 = *(_QWORD *)(a1 + 88);
    }
LABEL_21:
    *(_DWORD *)(v10 - 4) = 0;
  }
  if ( *(_DWORD *)(a1 + 108) || *(_DWORD *)(a1 + 112) )
  {
    v14 = *(unsigned int *)(a1 + 104);
    v15 = *(char **)(a1 + 96);
    v16 = 0;
    v17 = *(_DWORD *)(a1 + 104);
    v18 = v15;
    v19 = &v15[32 * v14];
    if ( v15 == v19 )
      goto LABEL_39;
    do
    {
      while ( *((_DWORD *)v18 + 1) )
      {
        *((_DWORD *)v18 + 1) = 0;
        v18 += 32;
        if ( v19 == v18 )
          goto LABEL_29;
      }
      v18 += 32;
      ++v16;
    }
    while ( v19 != v18 );
LABEL_29:
    if ( v17 <= 0x10 || 3 * v17 >= 4 * v16 )
      goto LABEL_39;
    if ( v15 )
    {
      v20 = v15;
      v21 = &v15[32 * v14];
      do
      {
        while ( 1 )
        {
          v22 = *((_QWORD *)v20 + 2);
          if ( !v22 )
            break;
          v20 += 32;
          sub_186B220((void *)(v22 - 8));
          if ( v21 == v20 )
            goto LABEL_35;
        }
        v20 += 32;
      }
      while ( v21 != v20 );
LABEL_35:
      sub_186B220(v15);
      v23 = *(_DWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 96) = 0;
      v23 >>= 1;
      v24 = v23;
      *(_DWORD *)(a1 + 104) = v23;
      v25 = sub_186B270(32LL * v23);
      if ( !v23 )
        goto LABEL_38;
    }
    else
    {
      v57 = v17 >> 1;
      *(_QWORD *)(a1 + 96) = 0;
      v24 = v57;
      *(_DWORD *)(a1 + 104) = v57;
      v25 = sub_186B270(32LL * v57);
    }
    v26 = (_QWORD *)v25;
    do
    {
      *v26 = 0;
      v26 += 4;
      *(v26 - 2) = 0;
    }
    while ( v26 != (_QWORD *)(v25 + 32 * v24) );
LABEL_38:
    *(_QWORD *)(a1 + 96) = v25;
LABEL_39:
    *(_QWORD *)(a1 + 108) = 0;
  }
  if ( *(_DWORD *)(a1 + 132) || *(_DWORD *)(a1 + 136) )
  {
    v27 = *(unsigned int *)(a1 + 128);
    v28 = *(char **)(a1 + 120);
    v29 = 0;
    v30 = *(_DWORD *)(a1 + 128);
    v31 = v28;
    v32 = &v28[16 * v27];
    if ( v28 == v32 )
      goto LABEL_58;
    do
    {
      while ( *(_QWORD *)v31 )
      {
        *(_QWORD *)v31 = 0;
        v31 += 16;
        if ( v32 == v31 )
          goto LABEL_47;
      }
      v31 += 16;
      ++v29;
    }
    while ( v32 != v31 );
LABEL_47:
    if ( v30 <= 0x10 || 3 * v30 >= 4 * v29 )
      goto LABEL_58;
    if ( v28 )
    {
      v33 = v28;
      v34 = &v28[16 * v27];
      do
      {
        while ( 1 )
        {
          v35 = *((_QWORD *)v33 + 1);
          if ( !v35 )
            break;
          v33 += 16;
          sub_186B220((void *)(v35 - 8));
          if ( v34 == v33 )
            goto LABEL_53;
        }
        v33 += 16;
      }
      while ( v33 != v34 );
LABEL_53:
      sub_186B220(v28);
      v36 = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = 0;
      v36 >>= 1;
      *(_DWORD *)(a1 + 128) = v36;
      v37 = 16LL * v36;
      v38 = (_OWORD *)sub_186B270(v37);
      if ( !v36 )
        goto LABEL_57;
    }
    else
    {
      v58 = v30 >> 1;
      *(_QWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 128) = v58;
      v37 = 16LL * v58;
      v38 = (_OWORD *)sub_186B270(v37);
    }
    v39 = &v38[v37 / 0x10];
    v40 = v38;
    if ( (v37 & 0x10) == 0 || (v40 = v38 + 1, *v38 = 0, v39 != v38 + 1) )
    {
      do
      {
        *v40 = 0;
        v40 += 2;
        *(v40 - 1) = 0;
      }
      while ( v39 != v40 );
    }
LABEL_57:
    *(_QWORD *)(a1 + 120) = v38;
LABEL_58:
    *(_QWORD *)(a1 + 132) = 0;
  }
  if ( !*(_DWORD *)(a1 + 156) )
  {
    result = *(unsigned int *)(a1 + 160);
    if ( !(_DWORD)result )
      goto LABEL_75;
  }
  v42 = *(char **)(a1 + 144);
  v43 = 0;
  v44 = *(unsigned int *)(a1 + 152);
  result = (__int64)v42;
  v45 = &v42[16 * v44];
  if ( v42 != v45 )
  {
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v45 == (char *)result )
          goto LABEL_66;
      }
      result += 16;
      ++v43;
    }
    while ( v45 != (char *)result );
LABEL_66:
    if ( (unsigned int)v44 > 0x10 )
    {
      result = (unsigned int)(3 * v44);
      if ( (unsigned int)result < 4 * v43 )
      {
        if ( v42 )
        {
          sub_186B220(v42);
          v46 = *(_DWORD *)(a1 + 152);
          *(_QWORD *)(a1 + 144) = 0;
          v46 >>= 1;
          *(_DWORD *)(a1 + 152) = v46;
          v47 = 16LL * v46;
          result = sub_186B270(v47);
          if ( !v46 )
          {
LABEL_73:
            *(_QWORD *)(a1 + 144) = result;
            goto LABEL_74;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 144) = 0;
          v56 = (unsigned int)v44 >> 1;
          *(_DWORD *)(a1 + 152) = v56;
          v47 = 16LL * v56;
          result = sub_186B270(v47);
        }
        v48 = (_OWORD *)(v47 + result);
        v49 = (_OWORD *)result;
        if ( (v47 & 0x10) == 0 || (v49 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, (_OWORD *)(result + 16) != v48) )
        {
          do
          {
            *v49 = 0;
            v49 += 2;
            *(v49 - 1) = 0;
          }
          while ( v49 != v48 );
        }
        goto LABEL_73;
      }
    }
  }
LABEL_74:
  *(_QWORD *)(a1 + 156) = 0;
LABEL_75:
  v50 = *(_QWORD **)(a1 + 56);
  if ( v50 )
  {
    result = *((unsigned int *)v50 - 1);
    v51 = &v50[result];
    if ( v50 >= v51 )
      goto LABEL_83;
    do
    {
      while ( 1 )
      {
        v52 = *v50;
        if ( *v50 )
        {
          v53 = *(_QWORD *)(a1 + 48);
          if ( (*(_DWORD *)(v52 + 8))-- == 1 )
            break;
        }
        if ( ++v50 >= v51 )
          goto LABEL_82;
      }
      result = sub_15D7BC0(v53, v52);
      ++v50;
    }
    while ( v50 < v51 );
LABEL_82:
    v50 = *(_QWORD **)(a1 + 56);
    if ( v50 )
LABEL_83:
      *((_DWORD *)v50 - 1) = 0;
  }
  return result;
}

