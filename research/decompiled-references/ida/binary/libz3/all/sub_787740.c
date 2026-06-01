__int64 __fastcall sub_787740(__int64 *a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rbx
  __int64 *v5; // r12
  unsigned int *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 result; // rax
  char *v11; // rdi
  int v12; // ecx
  char *v13; // rdx
  unsigned int v14; // esi
  unsigned int v15; // ebx
  __int64 v16; // r12
  void *v17; // rcx
  char *v18; // rdi
  int v19; // ecx
  __int64 v20; // rsi
  char *v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // r12
  _QWORD *v24; // rdx
  char *v25; // rdi
  int v26; // edx
  __int64 v27; // rsi
  char *v28; // rcx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  _QWORD *v31; // rdx
  _QWORD *v32; // rdx

  v3 = *a1;
  if ( a2 )
  {
    v4 = a3;
    v5 = &a3[a2];
    do
    {
      v9 = *v4;
      if ( *(_WORD *)(*v4 + 4) || (v6 = *(unsigned int **)(*(_QWORD *)(v9 + 16) + 24LL)) == nullptr )
      {
        v8 = *v4;
        v7 = 0;
      }
      else
      {
        v7 = *v6;
        v8 = *v4;
        if ( (_DWORD)v7 )
        {
          v7 = 0;
        }
        else if ( v6[1] == 8 && *(_DWORD *)(v9 + 24) == 1 )
        {
          v8 = *(_QWORD *)(v9 + 32);
          v7 = 1;
        }
      }
      sub_7906C0(v3, v9, v8, v7);
      ++v4;
    }
    while ( v5 != v4 );
  }
  result = *(unsigned int *)(v3 + 180);
  if ( *(_QWORD *)(v3 + 180) )
  {
    v11 = *(char **)(v3 + 168);
    v12 = 0;
    v13 = &v11[8 * *(unsigned int *)(v3 + 176)];
    v14 = *(_DWORD *)(v3 + 176);
    result = (__int64)v11;
    if ( v11 == v13 )
      goto LABEL_21;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 8;
        if ( v13 == (char *)result )
          goto LABEL_15;
      }
      result += 8;
      ++v12;
    }
    while ( v13 != (char *)result );
LABEL_15:
    if ( v14 <= 0x10 )
      goto LABEL_21;
    result = 3 * v14;
    if ( (unsigned int)result >= 4 * v12 )
      goto LABEL_21;
    if ( v11 )
    {
      sub_186B220(v11);
      v15 = *(_DWORD *)(v3 + 176);
      *(_QWORD *)(v3 + 168) = 0;
      v15 >>= 1;
      *(_DWORD *)(v3 + 176) = v15;
      v16 = v15;
      result = sub_186B270(8LL * v15);
      v17 = (void *)result;
      if ( !v15 )
      {
LABEL_20:
        *(_QWORD *)(v3 + 168) = v17;
LABEL_21:
        *(_QWORD *)(v3 + 180) = 0;
        goto LABEL_22;
      }
    }
    else
    {
      *(_QWORD *)(v3 + 168) = 0;
      *(_DWORD *)(v3 + 176) = v14 >> 1;
      v16 = v14 >> 1;
      v17 = (void *)sub_186B270(8 * v16);
    }
    result = (__int64)memset(v17, 0, 8 * v16);
    v17 = (void *)result;
    goto LABEL_20;
  }
LABEL_22:
  if ( *(_DWORD *)(v3 + 108) || *(_DWORD *)(v3 + 112) )
  {
    v18 = *(char **)(v3 + 96);
    v19 = 0;
    v20 = *(unsigned int *)(v3 + 104);
    result = (__int64)v18;
    v21 = &v18[16 * v20];
    if ( v18 == v21 )
      goto LABEL_36;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v21 == (char *)result )
          goto LABEL_29;
      }
      result += 16;
      ++v19;
    }
    while ( v21 != (char *)result );
LABEL_29:
    if ( (unsigned int)v20 <= 0x10 )
      goto LABEL_36;
    result = (unsigned int)(3 * v20);
    if ( (unsigned int)result >= 4 * v19 )
      goto LABEL_36;
    if ( v18 )
    {
      sub_186B220(v18);
      v22 = *(_DWORD *)(v3 + 104);
      *(_QWORD *)(v3 + 96) = 0;
      v22 >>= 1;
      v23 = v22;
      *(_DWORD *)(v3 + 104) = v22;
      result = sub_186B270(16LL * v22);
      if ( !v22 )
      {
LABEL_35:
        *(_QWORD *)(v3 + 96) = result;
LABEL_36:
        *(_QWORD *)(v3 + 108) = 0;
        goto LABEL_37;
      }
    }
    else
    {
      *(_QWORD *)(v3 + 96) = 0;
      v23 = (unsigned int)v20 >> 1;
      *(_DWORD *)(v3 + 104) = (unsigned int)v20 >> 1;
      result = sub_186B270(16 * v23);
    }
    v24 = (_QWORD *)result;
    do
    {
      *v24 = 0;
      v24 += 2;
      *((_DWORD *)v24 - 2) = -2;
    }
    while ( v24 != (_QWORD *)(result + 16 * v23) );
    goto LABEL_35;
  }
LABEL_37:
  if ( *(_DWORD *)(v3 + 132) || *(_DWORD *)(v3 + 136) )
  {
    v25 = *(char **)(v3 + 120);
    v26 = 0;
    v27 = *(unsigned int *)(v3 + 128);
    v28 = &v25[24 * v27];
    result = (__int64)v25;
    if ( v25 == v28 )
      goto LABEL_55;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( v28 == (char *)result )
          goto LABEL_44;
      }
      result += 24;
      ++v26;
    }
    while ( v28 != (char *)result );
LABEL_44:
    if ( (unsigned int)v27 <= 0x10 )
      goto LABEL_55;
    result = (unsigned int)(3 * v27);
    if ( (unsigned int)result >= 4 * v26 )
      goto LABEL_55;
    if ( v25 )
    {
      sub_186B220(v25);
      v29 = *(_DWORD *)(v3 + 128);
      *(_QWORD *)(v3 + 120) = 0;
      v30 = v29 >> 1;
      *(_DWORD *)(v3 + 128) = v30;
      result = sub_186B270(24LL * v30);
      if ( !v30 )
      {
LABEL_54:
        *(_QWORD *)(v3 + 120) = result;
LABEL_55:
        *(_QWORD *)(v3 + 132) = 0;
        return result;
      }
      if ( v30 == 1 )
      {
        v32 = (_QWORD *)result;
LABEL_53:
        *v32 = 0;
        goto LABEL_54;
      }
    }
    else
    {
      *(_QWORD *)(v3 + 120) = 0;
      v30 = (unsigned int)v27 >> 1;
      *(_DWORD *)(v3 + 128) = (unsigned int)v27 >> 1;
      result = sub_186B270(24LL * ((unsigned int)v27 >> 1));
    }
    v31 = (_QWORD *)result;
    do
    {
      *v31 = 0;
      v31 += 6;
      *(v31 - 3) = 0;
    }
    while ( (_QWORD *)(result + 48LL * (v30 >> 1)) != v31 );
    if ( (v30 & 1) == 0 )
      goto LABEL_54;
    v32 = (_QWORD *)(result + 24LL * (v30 & 0x7FFFFFFE));
    goto LABEL_53;
  }
  return result;
}

