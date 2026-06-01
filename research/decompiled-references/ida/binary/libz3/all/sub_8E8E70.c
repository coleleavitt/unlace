__int64 __fastcall sub_8E8E70(__int64 a1)
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
  __int64 v13; // rsi
  char *v14; // rdx
  unsigned int v15; // ebp
  __int64 v16; // r12
  _QWORD *v17; // rdx
  unsigned int v18; // esi
  unsigned int v19; // esi

  if ( *(_DWORD *)(a1 + 9068) || *(_DWORD *)(a1 + 9072) )
  {
    v2 = *(char **)(a1 + 9056);
    v3 = 0;
    v4 = &v2[8 * *(unsigned int *)(a1 + 9064)];
    v5 = *(_DWORD *)(a1 + 9064);
    v6 = *(char **)(a1 + 9056);
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
      v7 = *(_DWORD *)(a1 + 9064);
      *(_QWORD *)(a1 + 9056) = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 9064) = v7;
      v8 = v7;
      v9 = (void *)sub_186B270(8LL * v7);
      if ( !v7 )
      {
LABEL_13:
        *(_QWORD *)(a1 + 9056) = v9;
LABEL_14:
        *(_QWORD *)(a1 + 9068) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 9056) = 0;
      v19 = v5 >> 1;
      v8 = v19;
      *(_DWORD *)(a1 + 9064) = v19;
      v9 = (void *)sub_186B270(8LL * v19);
    }
    v9 = memset(v9, 0, 8 * v8);
    goto LABEL_13;
  }
LABEL_15:
  if ( *(_DWORD *)(a1 + 9044) || (result = *(unsigned int *)(a1 + 9048), (_DWORD)result) )
  {
    v11 = *(char **)(a1 + 9032);
    v12 = 0;
    v13 = *(unsigned int *)(a1 + 9040);
    result = (__int64)v11;
    v14 = &v11[16 * v13];
    if ( v11 == v14 )
      goto LABEL_29;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v14 == (char *)result )
          goto LABEL_22;
      }
      result += 16;
      ++v12;
    }
    while ( v14 != (char *)result );
LABEL_22:
    if ( (unsigned int)v13 <= 0x10 )
      goto LABEL_29;
    result = (unsigned int)(3 * v13);
    if ( (unsigned int)result >= 4 * v12 )
      goto LABEL_29;
    if ( v11 )
    {
      sub_186B220(v11);
      v15 = *(_DWORD *)(a1 + 9040);
      *(_QWORD *)(a1 + 9032) = 0;
      v15 >>= 1;
      v16 = v15;
      *(_DWORD *)(a1 + 9040) = v15;
      result = sub_186B270(16LL * v15);
      if ( !v15 )
      {
LABEL_28:
        *(_QWORD *)(a1 + 9032) = result;
LABEL_29:
        *(_QWORD *)(a1 + 9044) = 0;
        return result;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 9032) = 0;
      v18 = (unsigned int)v13 >> 1;
      v16 = v18;
      *(_DWORD *)(a1 + 9040) = v18;
      result = sub_186B270(16LL * v18);
    }
    v17 = (_QWORD *)result;
    do
    {
      *v17 = 0;
      v17 += 2;
      *((_DWORD *)v17 - 2) = 0;
    }
    while ( v17 != (_QWORD *)(result + 16 * v16) );
    goto LABEL_28;
  }
  return result;
}

