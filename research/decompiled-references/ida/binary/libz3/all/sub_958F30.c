__int64 __fastcall sub_958F30(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  char *v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // r12d
  size_t v8; // rbp
  __int64 v9; // rax
  _OWORD *v10; // rdx
  _OWORD *v11; // rcx
  char *v12; // rdi
  int v13; // ecx
  __int64 v14; // rsi
  char *v15; // rdx
  char *v16; // rax
  unsigned int v17; // ebp
  unsigned int v18; // ebp
  __int64 v19; // rax
  _OWORD *v20; // rdx
  __int64 v21; // rdx
  char *v22; // rdi
  int v23; // ecx
  __int64 v24; // rsi
  char *v25; // rax
  char *v26; // rdx
  unsigned int v27; // ebp
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 result; // rax
  char *v32; // rdi
  int v33; // esi
  __int64 v34; // rcx
  char *v35; // rdx
  unsigned int v36; // r12d
  size_t v37; // rbp
  _OWORD *v38; // rdx
  unsigned int v39; // esi
  __int64 v40; // rcx
  unsigned int v41; // esi
  unsigned int v42; // esi

  sub_958C20(a1);
  if ( *(_DWORD *)(a1 + 92) || *(_DWORD *)(a1 + 96) )
  {
    v2 = *(char **)(a1 + 80);
    v3 = 0;
    v4 = *(unsigned int *)(a1 + 88);
    v5 = &v2[24 * v4];
    v6 = *(_QWORD *)(a1 + 80);
    if ( v2 == v5 )
      goto LABEL_16;
    do
    {
      while ( *(_QWORD *)(v6 + 8) )
      {
        *(_QWORD *)(v6 + 8) = 0;
        v6 += 24;
        if ( v5 == (char *)v6 )
          goto LABEL_8;
      }
      v6 += 24;
      ++v3;
    }
    while ( v5 != (char *)v6 );
LABEL_8:
    if ( (unsigned int)v4 <= 0x10 || 3 * (int)v4 >= (unsigned int)(4 * v3) )
      goto LABEL_16;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *(_DWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 88) = v7;
      v8 = 24LL * v7;
      v9 = sub_186B270(v8);
      if ( !v7 )
      {
LABEL_15:
        *(_QWORD *)(a1 + 80) = v9;
LABEL_16:
        *(_QWORD *)(a1 + 92) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v42 = (unsigned int)v4 >> 1;
      *(_QWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 88) = v42;
      v8 = 24LL * v42;
      v9 = sub_186B270(v8);
    }
    v10 = (_OWORD *)(v9 + 8);
    v11 = (_OWORD *)(v9 + 8 + v8);
    if ( (v8 & 8) == 0 || (*v10 = 0, v10 = (_OWORD *)(v9 + 32), (_OWORD *)(v9 + 32) != v11) )
    {
      do
      {
        *v10 = 0;
        v10 += 3;
        *(_OWORD *)((char *)v10 - 24) = 0;
      }
      while ( v10 != v11 );
    }
    goto LABEL_15;
  }
LABEL_17:
  if ( *(_DWORD *)(a1 + 116) || *(_DWORD *)(a1 + 120) )
  {
    v12 = *(char **)(a1 + 104);
    v13 = 0;
    v14 = *(unsigned int *)(a1 + 112);
    v15 = &v12[24 * v14];
    v16 = v12;
    if ( v12 == v15 )
      goto LABEL_35;
    do
    {
      while ( *(_QWORD *)v16 )
      {
        *(_QWORD *)v16 = 0;
        v16 += 24;
        if ( v15 == v16 )
          goto LABEL_24;
      }
      v16 += 24;
      ++v13;
    }
    while ( v15 != v16 );
LABEL_24:
    if ( (unsigned int)v14 <= 0x10 || 3 * (int)v14 >= (unsigned int)(4 * v13) )
      goto LABEL_35;
    if ( v12 )
    {
      sub_186B220(v12);
      v17 = *(_DWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 104) = 0;
      v18 = v17 >> 1;
      *(_DWORD *)(a1 + 112) = v18;
      v19 = sub_186B270(24LL * v18);
      if ( !v18 )
      {
LABEL_34:
        *(_QWORD *)(a1 + 104) = v19;
LABEL_35:
        *(_QWORD *)(a1 + 116) = 0;
        goto LABEL_36;
      }
      if ( v18 == 1 )
      {
        v21 = v19;
LABEL_33:
        *(_QWORD *)(v21 + 16) = 0;
        *(_OWORD *)v21 = 0;
        goto LABEL_34;
      }
    }
    else
    {
      v41 = (unsigned int)v14 >> 1;
      *(_QWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 112) = v41;
      v18 = v41;
      v19 = sub_186B270(24LL * v41);
    }
    v20 = (_OWORD *)v19;
    do
    {
      *v20 = 0;
      v20 += 3;
      *(v20 - 2) = 0;
      *(v20 - 1) = 0;
    }
    while ( (_OWORD *)(v19 + 48LL * (v18 >> 1)) != v20 );
    if ( (v18 & 1) == 0 )
      goto LABEL_34;
    v21 = v19 + 24LL * (v18 & 0x7FFFFFFE);
    goto LABEL_33;
  }
LABEL_36:
  if ( *(_DWORD *)(a1 + 196) || *(_DWORD *)(a1 + 200) )
  {
    v22 = *(char **)(a1 + 184);
    v23 = 0;
    v24 = *(unsigned int *)(a1 + 192);
    v25 = v22;
    v26 = &v22[32 * v24];
    if ( v22 == v26 )
      goto LABEL_50;
    do
    {
      while ( *((_QWORD *)v25 + 1) )
      {
        *((_QWORD *)v25 + 1) = 0;
        v25 += 32;
        if ( v26 == v25 )
          goto LABEL_43;
      }
      v25 += 32;
      ++v23;
    }
    while ( v26 != v25 );
LABEL_43:
    if ( (unsigned int)v24 <= 0x10 || 3 * (int)v24 >= (unsigned int)(4 * v23) )
      goto LABEL_50;
    if ( v22 )
    {
      sub_186B220(v22);
      v27 = *(_DWORD *)(a1 + 192);
      *(_QWORD *)(a1 + 184) = 0;
      v27 >>= 1;
      v28 = v27;
      *(_DWORD *)(a1 + 192) = v27;
      v29 = sub_186B270(32LL * v27);
      if ( !v27 )
      {
LABEL_49:
        *(_QWORD *)(a1 + 184) = v29;
LABEL_50:
        *(_QWORD *)(a1 + 196) = 0;
        goto LABEL_51;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 184) = 0;
      v39 = (unsigned int)v24 >> 1;
      v28 = v39;
      *(_DWORD *)(a1 + 192) = v39;
      v29 = sub_186B270(32LL * v39);
    }
    v30 = v29;
    do
    {
      *(_QWORD *)(v30 + 24) = 0;
      v30 += 32;
      *(_OWORD *)(v30 - 24) = 0;
    }
    while ( v30 != v29 + 32 * v28 );
    goto LABEL_49;
  }
LABEL_51:
  if ( *(_DWORD *)(a1 + 220) || (result = *(unsigned int *)(a1 + 224), (_DWORD)result) )
  {
    v32 = *(char **)(a1 + 208);
    v33 = 0;
    v34 = *(unsigned int *)(a1 + 216);
    result = (__int64)v32;
    v35 = &v32[32 * v34];
    if ( v32 == v35 )
      goto LABEL_65;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 32;
        if ( v35 == (char *)result )
          goto LABEL_58;
      }
      result += 32;
      ++v33;
    }
    while ( v35 != (char *)result );
LABEL_58:
    if ( (unsigned int)v34 <= 0x10 )
      goto LABEL_65;
    result = (unsigned int)(3 * v34);
    if ( (unsigned int)result >= 4 * v33 )
      goto LABEL_65;
    if ( v32 )
    {
      sub_186B220(v32);
      v36 = *(_DWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 208) = 0;
      v36 >>= 1;
      *(_DWORD *)(a1 + 216) = v36;
      v37 = 32LL * v36;
      result = sub_186B270(v37);
      if ( !v36 )
      {
LABEL_64:
        *(_QWORD *)(a1 + 208) = result;
LABEL_65:
        *(_QWORD *)(a1 + 220) = 0;
        return result;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 208) = 0;
      v40 = (unsigned int)v34 >> 1;
      *(_DWORD *)(a1 + 216) = v40;
      v37 = 32 * v40;
      result = sub_186B270(32 * v40);
    }
    v38 = (_OWORD *)result;
    do
    {
      *v38 = 0;
      v38 += 2;
      *(v38 - 1) = 0;
    }
    while ( (_OWORD *)(result + v37) != v38 );
    goto LABEL_64;
  }
  return result;
}

