__int64 __fastcall sub_789B40(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rbp
  char *v5; // rdi
  char *v6; // rdx
  unsigned int v7; // esi
  int v8; // ecx
  unsigned int v9; // ebp
  __int64 v10; // r13
  void *v11; // rcx
  __int64 v12; // rbx
  char *v13; // rdi
  __int64 v14; // rsi
  char *v15; // rdx
  int v16; // ecx
  unsigned int v17; // ebx
  __int64 v18; // r13
  _QWORD *v19; // rdx
  char *v20; // rdi
  int v21; // edx
  __int64 v22; // rsi
  char *v23; // rcx
  unsigned int v24; // ebp
  unsigned int v25; // ebp
  _QWORD *v26; // rdx
  _QWORD *v27; // rdx
  unsigned int v28; // esi
  unsigned int v29; // esi
  unsigned int v30; // esi

  v2 = *a1;
  result = *(unsigned int *)(*a1 + 180);
  if ( (_DWORD)result || (v4 = *a1, *(_DWORD *)(v2 + 184)) )
  {
    result = *(unsigned int *)(v2 + 176);
    v5 = *(char **)(v2 + 168);
    v6 = &v5[8 * result];
    v7 = *(_DWORD *)(v2 + 176);
    if ( v5 == v6 )
      goto LABEL_49;
    result = *(_QWORD *)(v2 + 168);
    v8 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 8;
        if ( v6 == (char *)result )
          goto LABEL_8;
      }
      result += 8;
      ++v8;
    }
    while ( v6 != (char *)result );
LABEL_8:
    if ( v7 <= 0x10 || (result = 3 * v7, (unsigned int)result >= 4 * v8) )
    {
LABEL_49:
      *(_QWORD *)(v2 + 180) = 0;
      v4 = v2;
      goto LABEL_14;
    }
    if ( v5 )
    {
      sub_186B220(v5);
      v9 = *(_DWORD *)(v2 + 176);
      *(_QWORD *)(v2 + 168) = 0;
      v9 >>= 1;
      *(_DWORD *)(v2 + 176) = v9;
      v10 = v9;
      result = sub_186B270(8LL * v9);
      v11 = (void *)result;
      if ( !v9 )
      {
LABEL_13:
        v4 = *a1;
        *(_QWORD *)(v2 + 168) = v11;
        *(_QWORD *)(v2 + 180) = 0;
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)(v2 + 168) = 0;
      v28 = v7 >> 1;
      v10 = v28;
      *(_DWORD *)(v2 + 176) = v28;
      v11 = (void *)sub_186B270(8LL * v28);
    }
    result = (__int64)memset(v11, 0, 8 * v10);
    v11 = (void *)result;
    goto LABEL_13;
  }
LABEL_14:
  if ( *(_DWORD *)(v4 + 108) || (v12 = v4, *(_DWORD *)(v4 + 112)) )
  {
    v13 = *(char **)(v4 + 96);
    v14 = *(unsigned int *)(v4 + 104);
    v15 = &v13[16 * v14];
    if ( v13 == v15 )
      goto LABEL_48;
    result = *(_QWORD *)(v4 + 96);
    v16 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v15 == (char *)result )
          goto LABEL_21;
      }
      result += 16;
      ++v16;
    }
    while ( v15 != (char *)result );
LABEL_21:
    if ( (unsigned int)v14 <= 0x10 || (result = (unsigned int)(3 * v14), (unsigned int)result >= 4 * v16) )
    {
LABEL_48:
      *(_QWORD *)(v4 + 108) = 0;
      v12 = v4;
      goto LABEL_28;
    }
    if ( v13 )
    {
      sub_186B220(v13);
      v17 = *(_DWORD *)(v4 + 104);
      *(_QWORD *)(v4 + 96) = 0;
      v17 >>= 1;
      v18 = v17;
      *(_DWORD *)(v4 + 104) = v17;
      result = sub_186B270(16LL * v17);
      if ( !v17 )
      {
LABEL_27:
        v12 = *a1;
        *(_QWORD *)(v4 + 96) = result;
        *(_QWORD *)(v4 + 108) = 0;
        goto LABEL_28;
      }
    }
    else
    {
      v30 = (unsigned int)v14 >> 1;
      *(_QWORD *)(v4 + 96) = 0;
      v18 = v30;
      *(_DWORD *)(v4 + 104) = v30;
      result = sub_186B270(16LL * v30);
    }
    v19 = (_QWORD *)result;
    do
    {
      *v19 = 0;
      v19 += 2;
      *((_DWORD *)v19 - 2) = -2;
    }
    while ( v19 != (_QWORD *)(result + 16 * v18) );
    goto LABEL_27;
  }
LABEL_28:
  if ( *(_DWORD *)(v12 + 132) || *(_DWORD *)(v12 + 136) )
  {
    v20 = *(char **)(v12 + 120);
    v21 = 0;
    v22 = *(unsigned int *)(v12 + 128);
    v23 = &v20[24 * v22];
    result = (__int64)v20;
    if ( v20 == v23 )
      goto LABEL_46;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( v23 == (char *)result )
          goto LABEL_35;
      }
      result += 24;
      ++v21;
    }
    while ( v23 != (char *)result );
LABEL_35:
    if ( (unsigned int)v22 <= 0x10 )
      goto LABEL_46;
    result = (unsigned int)(3 * v22);
    if ( (unsigned int)result >= 4 * v21 )
      goto LABEL_46;
    if ( v20 )
    {
      sub_186B220(v20);
      v24 = *(_DWORD *)(v12 + 128);
      *(_QWORD *)(v12 + 120) = 0;
      v25 = v24 >> 1;
      *(_DWORD *)(v12 + 128) = v25;
      result = sub_186B270(24LL * v25);
      if ( !v25 )
      {
LABEL_45:
        *(_QWORD *)(v12 + 120) = result;
LABEL_46:
        *(_QWORD *)(v12 + 132) = 0;
        return result;
      }
      if ( v25 == 1 )
      {
        v27 = (_QWORD *)result;
LABEL_44:
        *v27 = 0;
        goto LABEL_45;
      }
    }
    else
    {
      v29 = (unsigned int)v22 >> 1;
      *(_QWORD *)(v12 + 120) = 0;
      *(_DWORD *)(v12 + 128) = v29;
      v25 = v29;
      result = sub_186B270(24LL * v29);
    }
    v26 = (_QWORD *)result;
    do
    {
      *v26 = 0;
      v26 += 6;
      *(v26 - 3) = 0;
    }
    while ( (_QWORD *)(result + 48LL * (v25 >> 1)) != v26 );
    if ( (v25 & 1) == 0 )
      goto LABEL_45;
    v27 = (_QWORD *)(result + 24LL * (v25 & 0x7FFFFFFE));
    goto LABEL_44;
  }
  return result;
}

