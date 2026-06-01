__int64 __fastcall sub_7335C0(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  char *v4; // rdx
  unsigned int v5; // esi
  char *v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // r12
  void *v9; // rcx
  __int64 result; // rax
  char *v11; // rdi
  int v12; // ecx
  char *v13; // rdx
  unsigned int v14; // esi
  unsigned int v15; // ebp
  __int64 v16; // r12
  void *v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // esi

  if ( *(_DWORD *)(a1 + 92) || *(_DWORD *)(a1 + 96) )
  {
    v2 = *(char **)(a1 + 80);
    v3 = 0;
    v4 = &v2[8 * *(unsigned int *)(a1 + 88)];
    v5 = *(_DWORD *)(a1 + 88);
    v6 = *(char **)(a1 + 80);
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
      v7 = *(_DWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 88) = v7;
      v8 = v7;
      v9 = (void *)sub_186B270(8LL * v7);
      if ( !v7 )
      {
LABEL_13:
        *(_QWORD *)(a1 + 80) = v9;
LABEL_14:
        *(_QWORD *)(a1 + 92) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      v19 = v5 >> 1;
      *(_QWORD *)(a1 + 80) = 0;
      v8 = v19;
      *(_DWORD *)(a1 + 88) = v19;
      v9 = (void *)sub_186B270(8LL * v19);
    }
    v9 = memset(v9, 0, 8 * v8);
    goto LABEL_13;
  }
LABEL_15:
  if ( *(_DWORD *)(a1 + 116) || (result = *(unsigned int *)(a1 + 120), (_DWORD)result) )
  {
    v11 = *(char **)(a1 + 104);
    v12 = 0;
    v13 = &v11[8 * *(unsigned int *)(a1 + 112)];
    v14 = *(_DWORD *)(a1 + 112);
    result = (__int64)v11;
    if ( v11 == v13 )
      goto LABEL_28;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 8;
        if ( v13 == (char *)result )
          goto LABEL_22;
      }
      result += 8;
      ++v12;
    }
    while ( v13 != (char *)result );
LABEL_22:
    if ( v14 <= 0x10 )
      goto LABEL_28;
    result = 3 * v14;
    if ( (unsigned int)result >= 4 * v12 )
      goto LABEL_28;
    if ( v11 )
    {
      sub_186B220(v11);
      v15 = *(_DWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 104) = 0;
      v15 >>= 1;
      *(_DWORD *)(a1 + 112) = v15;
      v16 = v15;
      result = sub_186B270(8LL * v15);
      v17 = (void *)result;
      if ( !v15 )
      {
LABEL_27:
        *(_QWORD *)(a1 + 104) = v17;
LABEL_28:
        *(_QWORD *)(a1 + 116) = 0;
        return result;
      }
    }
    else
    {
      v18 = v14 >> 1;
      *(_QWORD *)(a1 + 104) = 0;
      v16 = v18;
      *(_DWORD *)(a1 + 112) = v18;
      v17 = (void *)sub_186B270(8LL * v18);
    }
    result = (__int64)memset(v17, 0, 8 * v16);
    v17 = (void *)result;
    goto LABEL_27;
  }
  return result;
}

