__int64 __fastcall sub_DEBF80(__int64 a1)
{
  void **v2; // rbx
  void **v3; // r12
  __int64 result; // rax
  void *v5; // rdi
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r12
  _QWORD *v11; // rdx
  _QWORD **v12; // rbx
  _QWORD **v13; // r13
  _QWORD *v14; // r12
  void (__fastcall *v15)(_QWORD *, _QWORD *, __int64); // rax
  char *v16; // rdi
  int v17; // edx
  __int64 v18; // rsi
  char *v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // r12
  _QWORD *v22; // rdx
  _QWORD **v23; // rbx
  _QWORD **v24; // r14
  _QWORD *v25; // r12
  _DWORD *v26; // r13
  char *v28; // rdi
  int v29; // edx
  __int64 v30; // rsi
  char *v31; // rcx
  unsigned int v32; // ebx
  __int64 v33; // r12
  _QWORD *v34; // rdx
  unsigned int v35; // esi
  unsigned int v36; // esi
  unsigned int v37; // esi

  v2 = *(void ***)(a1 + 72);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_7;
    do
    {
      if ( *v2 )
        sub_186B220(*v2);
      ++v2;
    }
    while ( v2 != v3 );
    v3 = *(void ***)(a1 + 72);
    if ( v3 )
LABEL_7:
      *((_DWORD *)v3 - 1) = 0;
  }
  result = *(unsigned int *)(a1 + 12);
  if ( *(_QWORD *)(a1 + 12) )
  {
    v5 = *(void **)a1;
    v6 = 0;
    v7 = *(unsigned int *)(a1 + 8);
    v8 = *(_QWORD *)a1 + 24 * v7;
    result = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 == v8 )
      goto LABEL_21;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( v8 == result )
          goto LABEL_14;
      }
      result += 24;
      ++v6;
    }
    while ( v8 != result );
LABEL_14:
    if ( (unsigned int)v7 <= 0x10 )
      goto LABEL_21;
    result = (unsigned int)(3 * v7);
    if ( (unsigned int)result >= 4 * v6 )
      goto LABEL_21;
    if ( v5 )
    {
      sub_186B220(v5);
      v9 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = 0;
      v9 >>= 1;
      v10 = v9;
      *(_DWORD *)(a1 + 8) = v9;
      result = sub_186B270(24LL * v9);
      if ( !v9 )
      {
LABEL_20:
        *(_QWORD *)a1 = result;
LABEL_21:
        *(_QWORD *)(a1 + 12) = 0;
        goto LABEL_22;
      }
    }
    else
    {
      v36 = (unsigned int)v7 >> 1;
      *(_QWORD *)a1 = 0;
      v10 = v36;
      *(_DWORD *)(a1 + 8) = v36;
      result = sub_186B270(24LL * v36);
    }
    v11 = (_QWORD *)result;
    do
    {
      *v11 = 0;
      v11 += 3;
      *(v11 - 2) = 0;
    }
    while ( v11 != (_QWORD *)(result + 24 * v10) );
    goto LABEL_20;
  }
LABEL_22:
  v12 = *(_QWORD ***)(a1 + 80);
  if ( v12 )
  {
    result = *((unsigned int *)v12 - 1);
    v13 = &v12[result];
    if ( v12 == v13 )
      goto LABEL_30;
    do
    {
      v14 = *v12;
      if ( *v12 )
      {
        v15 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v14[4];
        if ( v15 )
          v15(v14 + 2, v14 + 2, 3);
        result = sub_186B220(v14);
      }
      ++v12;
    }
    while ( v12 != v13 );
    v13 = *(_QWORD ***)(a1 + 80);
    if ( v13 )
LABEL_30:
      *((_DWORD *)v13 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 60) || *(_DWORD *)(a1 + 64) )
  {
    v16 = *(char **)(a1 + 48);
    v17 = 0;
    v18 = *(unsigned int *)(a1 + 56);
    v19 = &v16[24 * v18];
    result = (__int64)v16;
    if ( v16 == v19 )
      goto LABEL_45;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( v19 == (char *)result )
          goto LABEL_38;
      }
      result += 24;
      ++v17;
    }
    while ( v19 != (char *)result );
LABEL_38:
    if ( (unsigned int)v18 <= 0x10 )
      goto LABEL_45;
    result = (unsigned int)(3 * v18);
    if ( (unsigned int)result >= 4 * v17 )
      goto LABEL_45;
    if ( v16 )
    {
      sub_186B220(v16);
      v20 = *(_DWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      v20 >>= 1;
      v21 = v20;
      *(_DWORD *)(a1 + 56) = v20;
      result = sub_186B270(24LL * v20);
      if ( !v20 )
      {
LABEL_44:
        *(_QWORD *)(a1 + 48) = result;
LABEL_45:
        *(_QWORD *)(a1 + 60) = 0;
        goto LABEL_46;
      }
    }
    else
    {
      v35 = (unsigned int)v18 >> 1;
      *(_QWORD *)(a1 + 48) = 0;
      v21 = v35;
      *(_DWORD *)(a1 + 56) = v35;
      result = sub_186B270(24LL * v35);
    }
    v22 = (_QWORD *)result;
    do
    {
      *v22 = 0;
      v22 += 3;
      *(v22 - 2) = 0;
    }
    while ( v22 != (_QWORD *)(result + 24 * v21) );
    goto LABEL_44;
  }
LABEL_46:
  v23 = *(_QWORD ***)(a1 + 88);
  if ( v23 )
  {
    result = *((unsigned int *)v23 - 1);
    v24 = &v23[result];
    if ( v23 == v24 )
      goto LABEL_56;
    do
    {
      v25 = *v23;
      if ( *v23 )
      {
        v26 = (_DWORD *)v25[2];
        if ( v26 )
        {
          if ( v26[2]-- == 1 )
          {
            (**(void (__fastcall ***)(_DWORD *))v26)(v26);
            sub_186B220(v26);
          }
        }
        result = sub_186B220(v25);
      }
      ++v23;
    }
    while ( v24 != v23 );
    v24 = *(_QWORD ***)(a1 + 88);
    if ( v24 )
LABEL_56:
      *((_DWORD *)v24 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 36) || *(_DWORD *)(a1 + 40) )
  {
    v28 = *(char **)(a1 + 24);
    v29 = 0;
    v30 = *(unsigned int *)(a1 + 32);
    v31 = &v28[24 * v30];
    result = (__int64)v28;
    if ( v28 == v31 )
      goto LABEL_71;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( v31 == (char *)result )
          goto LABEL_64;
      }
      result += 24;
      ++v29;
    }
    while ( v31 != (char *)result );
LABEL_64:
    if ( (unsigned int)v30 <= 0x10 )
      goto LABEL_71;
    result = (unsigned int)(3 * v30);
    if ( (unsigned int)result >= 4 * v29 )
      goto LABEL_71;
    if ( v28 )
    {
      sub_186B220(v28);
      v32 = *(_DWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = 0;
      v32 >>= 1;
      v33 = v32;
      *(_DWORD *)(a1 + 32) = v32;
      result = sub_186B270(24LL * v32);
      if ( !v32 )
      {
LABEL_70:
        *(_QWORD *)(a1 + 24) = result;
LABEL_71:
        *(_QWORD *)(a1 + 36) = 0;
        return result;
      }
    }
    else
    {
      v37 = (unsigned int)v30 >> 1;
      *(_QWORD *)(a1 + 24) = 0;
      v33 = v37;
      *(_DWORD *)(a1 + 32) = v37;
      result = sub_186B270(24LL * v37);
    }
    v34 = (_QWORD *)result;
    do
    {
      *v34 = 0;
      v34 += 3;
      *(v34 - 2) = 0;
    }
    while ( v34 != (_QWORD *)(result + 24 * v33) );
    goto LABEL_70;
  }
  return result;
}

