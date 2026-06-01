__int64 __fastcall sub_8F9430(__int64 a1)
{
  unsigned int v1; // esi
  __int64 result; // rax
  char *v4; // rdi
  int v5; // ecx
  char *v6; // rdx
  unsigned int v7; // esi
  char *v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // r12
  void *v11; // rcx
  char *v12; // rdi
  int v13; // ecx
  __int64 v14; // rsi
  char *v15; // rdx
  unsigned int v16; // ebp
  __int64 v17; // r12
  _QWORD *v18; // rdx
  unsigned int v19; // esi
  unsigned int v20; // esi

  v1 = *(_DWORD *)(a1 + 9464);
  result = *(unsigned int *)(a1 + 9472);
  if ( (unsigned int)result < v1 )
  {
    sub_8F73F0(a1, v1 - result);
    if ( !*(_DWORD *)(a1 + 9068) && !*(_DWORD *)(a1 + 9072) )
    {
LABEL_15:
      if ( !*(_DWORD *)(a1 + 9044) )
      {
        result = *(unsigned int *)(a1 + 9048);
        if ( !(_DWORD)result )
          return result;
      }
      v12 = *(char **)(a1 + 9032);
      v13 = 0;
      v14 = *(unsigned int *)(a1 + 9040);
      result = (__int64)v12;
      v15 = &v12[16 * v14];
      if ( v12 == v15 )
        goto LABEL_28;
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
        ++v13;
      }
      while ( v15 != (char *)result );
LABEL_21:
      if ( (unsigned int)v14 <= 0x10 || (result = (unsigned int)(3 * v14), (unsigned int)result >= 4 * v13) )
      {
LABEL_28:
        *(_QWORD *)(a1 + 9044) = 0;
        return result;
      }
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
LABEL_27:
          *(_QWORD *)(a1 + 9032) = result;
          goto LABEL_28;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 9032) = 0;
        v20 = (unsigned int)v14 >> 1;
        v17 = v20;
        *(_DWORD *)(a1 + 9040) = v20;
        result = sub_186B270(16LL * v20);
      }
      v18 = (_QWORD *)result;
      do
      {
        *v18 = 0;
        v18 += 2;
        *((_DWORD *)v18 - 2) = 0;
      }
      while ( v18 != (_QWORD *)(result + 16 * v17) );
      goto LABEL_27;
    }
    v4 = *(char **)(a1 + 9056);
    v5 = 0;
    v6 = &v4[8 * *(unsigned int *)(a1 + 9064)];
    v7 = *(_DWORD *)(a1 + 9064);
    v8 = *(char **)(a1 + 9056);
    if ( v4 == v6 )
      goto LABEL_14;
    do
    {
      while ( *(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = 0;
        v8 += 8;
        if ( v6 == v8 )
          goto LABEL_8;
      }
      v8 += 8;
      ++v5;
    }
    while ( v6 != v8 );
LABEL_8:
    if ( v7 <= 0x10 || 3 * v7 >= 4 * v5 )
    {
LABEL_14:
      *(_QWORD *)(a1 + 9068) = 0;
      goto LABEL_15;
    }
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(a1 + 9064);
      *(_QWORD *)(a1 + 9056) = 0;
      v9 >>= 1;
      *(_DWORD *)(a1 + 9064) = v9;
      v10 = v9;
      v11 = (void *)sub_186B270(8LL * v9);
      if ( !v9 )
      {
LABEL_13:
        *(_QWORD *)(a1 + 9056) = v11;
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 9056) = 0;
      v19 = v7 >> 1;
      v10 = v19;
      *(_DWORD *)(a1 + 9064) = v19;
      v11 = (void *)sub_186B270(8LL * v19);
    }
    v11 = memset(v11, 0, 8 * v10);
    goto LABEL_13;
  }
  return result;
}

