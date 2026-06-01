__int64 __fastcall sub_8F7780(__int64 a1, unsigned int a2)
{
  char *v3; // rdi
  int v4; // ecx
  char *v5; // rdx
  unsigned int v6; // esi
  char *v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // r12
  void *v10; // rcx
  __int64 result; // rax
  char *v12; // rdi
  int v13; // ecx
  __int64 v14; // rsi
  char *v15; // rdx
  unsigned int v16; // ebp
  __int64 v17; // r12
  _QWORD *v18; // rdx
  unsigned int v19; // esi
  unsigned int v20; // esi

  sub_8F73F0(a1, a2);
  if ( *(_DWORD *)(a1 + 9068) || *(_DWORD *)(a1 + 9072) )
  {
    v3 = *(char **)(a1 + 9056);
    v4 = 0;
    v5 = &v3[8 * *(unsigned int *)(a1 + 9064)];
    v6 = *(_DWORD *)(a1 + 9064);
    v7 = *(char **)(a1 + 9056);
    if ( v3 == v5 )
      goto LABEL_14;
    do
    {
      while ( *(_QWORD *)v7 )
      {
        *(_QWORD *)v7 = 0;
        v7 += 8;
        if ( v5 == v7 )
          goto LABEL_8;
      }
      v7 += 8;
      ++v4;
    }
    while ( v5 != v7 );
LABEL_8:
    if ( v6 <= 0x10 || 3 * v6 >= 4 * v4 )
      goto LABEL_14;
    if ( v3 )
    {
      sub_186B220(v3);
      v8 = *(_DWORD *)(a1 + 9064);
      *(_QWORD *)(a1 + 9056) = 0;
      v8 >>= 1;
      *(_DWORD *)(a1 + 9064) = v8;
      v9 = v8;
      v10 = (void *)sub_186B270(8LL * v8);
      if ( !v8 )
      {
LABEL_13:
        *(_QWORD *)(a1 + 9056) = v10;
LABEL_14:
        *(_QWORD *)(a1 + 9068) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 9056) = 0;
      v20 = v6 >> 1;
      v9 = v20;
      *(_DWORD *)(a1 + 9064) = v20;
      v10 = (void *)sub_186B270(8LL * v20);
    }
    v10 = memset(v10, 0, 8 * v9);
    goto LABEL_13;
  }
LABEL_15:
  if ( *(_DWORD *)(a1 + 9044) || (result = *(unsigned int *)(a1 + 9048), (_DWORD)result) )
  {
    v12 = *(char **)(a1 + 9032);
    v13 = 0;
    v14 = *(unsigned int *)(a1 + 9040);
    result = (__int64)v12;
    v15 = &v12[16 * v14];
    if ( v12 == v15 )
      goto LABEL_29;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v15 == (char *)result )
          goto LABEL_22;
      }
      result += 16;
      ++v13;
    }
    while ( v15 != (char *)result );
LABEL_22:
    if ( (unsigned int)v14 <= 0x10 )
      goto LABEL_29;
    result = (unsigned int)(3 * v14);
    if ( (unsigned int)result >= 4 * v13 )
      goto LABEL_29;
    if ( v12 )
    {
      sub_186B220(v12);
      v16 = *(_DWORD *)(a1 + 9040);
      *(_QWORD *)(a1 + 9032) = 0;
      v16 >>= 1;
      v17 = v16;
      *(_DWORD *)(a1 + 9040) = v16;
      result = sub_186B270(16LL * v16);
      if ( !v16 )
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
      v19 = (unsigned int)v14 >> 1;
      v17 = v19;
      *(_DWORD *)(a1 + 9040) = v19;
      result = sub_186B270(16LL * v19);
    }
    v18 = (_QWORD *)result;
    do
    {
      *v18 = 0;
      v18 += 2;
      *((_DWORD *)v18 - 2) = 0;
    }
    while ( v18 != (_QWORD *)(result + 16 * v17) );
    goto LABEL_28;
  }
  return result;
}

