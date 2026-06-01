__int64 __fastcall sub_657BE0(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbp
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  _QWORD *v7; // rbp
  _QWORD *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // rbp
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  char *v15; // rdi
  int v16; // ecx
  __int64 v17; // rsi
  char *v18; // rax
  char *v19; // rdx
  unsigned int v20; // r12d
  size_t v21; // rbp
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  _OWORD *v24; // rdx
  __int64 result; // rax
  char *v26; // rdi
  int v27; // ecx
  __int64 v28; // rsi
  char *v29; // rdx
  unsigned int v30; // r12d
  size_t v31; // rbp
  _OWORD *v32; // rcx
  _OWORD *v33; // rdx
  _QWORD *v34; // rbp
  _QWORD *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned int v38; // esi
  unsigned int v39; // esi

  v1 = *a1;
  v2 = *(_QWORD **)(*a1 + 24);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = *(_QWORD *)(v1 + 16);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(_QWORD **)(v1 + 24);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = *(_QWORD **)(v1 + 40);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(v1 + 32);
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = *(_QWORD **)(v1 + 40);
    if ( v7 )
LABEL_18:
      *((_DWORD *)v7 - 1) = 0;
  }
  v11 = *(_QWORD **)(v1 + 56);
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = *(_QWORD *)(v1 + 48);
          v6 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_26;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_26:
    v11 = *(_QWORD **)(v1 + 56);
    if ( v11 )
LABEL_27:
      *((_DWORD *)v11 - 1) = 0;
  }
  if ( *(_DWORD *)(v1 + 108) || *(_DWORD *)(v1 + 112) )
  {
    v15 = *(char **)(v1 + 96);
    v16 = 0;
    v17 = *(unsigned int *)(v1 + 104);
    v18 = v15;
    v19 = &v15[16 * v17];
    if ( v15 == v19 )
      goto LABEL_43;
    do
    {
      while ( *(_QWORD *)v18 )
      {
        *(_QWORD *)v18 = 0;
        v18 += 16;
        if ( v19 == v18 )
          goto LABEL_35;
      }
      v18 += 16;
      ++v16;
    }
    while ( v19 != v18 );
LABEL_35:
    if ( (unsigned int)v17 <= 0x10 || 3 * (int)v17 >= (unsigned int)(4 * v16) )
      goto LABEL_43;
    if ( v15 )
    {
      sub_186B220(v15);
      v20 = *(_DWORD *)(v1 + 104);
      *(_QWORD *)(v1 + 96) = 0;
      v20 >>= 1;
      *(_DWORD *)(v1 + 104) = v20;
      v21 = 16LL * v20;
      v22 = (_OWORD *)sub_186B270(v21);
      if ( !v20 )
      {
LABEL_42:
        *(_QWORD *)(v1 + 96) = v22;
LABEL_43:
        *(_QWORD *)(v1 + 108) = 0;
        goto LABEL_44;
      }
    }
    else
    {
      v39 = (unsigned int)v17 >> 1;
      *(_QWORD *)(v1 + 96) = 0;
      *(_DWORD *)(v1 + 104) = v39;
      v21 = 16LL * v39;
      v22 = (_OWORD *)sub_186B270(v21);
    }
    v23 = &v22[v21 / 0x10];
    v24 = v22;
    if ( (v21 & 0x10) == 0 || (v24 = v22 + 1, *v22 = 0, v22 + 1 != v23) )
    {
      do
      {
        *v24 = 0;
        v24 += 2;
        *(v24 - 1) = 0;
      }
      while ( v24 != v23 );
    }
    goto LABEL_42;
  }
LABEL_44:
  if ( !*(_DWORD *)(v1 + 132) )
  {
    result = *(unsigned int *)(v1 + 136);
    if ( !(_DWORD)result )
      goto LABEL_60;
  }
  v26 = *(char **)(v1 + 120);
  v27 = 0;
  v28 = *(unsigned int *)(v1 + 128);
  result = (__int64)v26;
  v29 = &v26[16 * v28];
  if ( v26 != v29 )
  {
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v29 == (char *)result )
          goto LABEL_51;
      }
      result += 16;
      ++v27;
    }
    while ( v29 != (char *)result );
LABEL_51:
    if ( (unsigned int)v28 > 0x10 )
    {
      result = (unsigned int)(3 * v28);
      if ( (unsigned int)result < 4 * v27 )
      {
        if ( v26 )
        {
          sub_186B220(v26);
          v30 = *(_DWORD *)(v1 + 128);
          *(_QWORD *)(v1 + 120) = 0;
          v30 >>= 1;
          *(_DWORD *)(v1 + 128) = v30;
          v31 = 16LL * v30;
          result = sub_186B270(v31);
          if ( !v30 )
          {
LABEL_58:
            *(_QWORD *)(v1 + 120) = result;
            goto LABEL_59;
          }
        }
        else
        {
          v38 = (unsigned int)v28 >> 1;
          *(_QWORD *)(v1 + 120) = 0;
          *(_DWORD *)(v1 + 128) = v38;
          v31 = 16LL * v38;
          result = sub_186B270(v31);
        }
        v32 = (_OWORD *)(result + v31);
        v33 = (_OWORD *)result;
        if ( (v31 & 0x10) == 0 || (v33 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, (_OWORD *)(result + 16) != v32) )
        {
          do
          {
            *v33 = 0;
            v33 += 2;
            *(v33 - 1) = 0;
          }
          while ( v33 != v32 );
        }
        goto LABEL_58;
      }
    }
  }
LABEL_59:
  *(_QWORD *)(v1 + 132) = 0;
LABEL_60:
  v34 = *(_QWORD **)(v1 + 152);
  if ( v34 )
  {
    result = *((unsigned int *)v34 - 1);
    v35 = &v34[result];
    if ( v34 >= v35 )
      goto LABEL_68;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v37 = *(_QWORD *)(v1 + 144);
          v6 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v34 >= v35 )
          goto LABEL_67;
      }
      result = sub_15D7BC0(v37, v36);
      ++v34;
    }
    while ( v34 < v35 );
LABEL_67:
    v34 = *(_QWORD **)(v1 + 152);
    if ( v34 )
LABEL_68:
      *((_DWORD *)v34 - 1) = 0;
  }
  return result;
}

