__int64 __fastcall sub_22365E0(__int64 a1, unsigned int a2)
{
  char v3; // r13
  __int64 *v4; // r12
  __int64 v5; // rax
  __int64 *v6; // rbp
  void *v7; // rax
  __int64 *v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 *v11; // r8
  unsigned int v12; // ecx
  __int64 *v13; // rsi
  __int64 v14; // rdi
  __int64 result; // rax
  int v16; // r9d
  __int64 *v17; // r11

  v3 = *(_BYTE *)(a1 + 20);
  v4 = *(__int64 **)a1;
  if ( v3 )
    v5 = *(unsigned int *)(a1 + 12);
  else
    v5 = *(unsigned int *)(a1 + 8);
  v6 = &v4[v5];
  v7 = malloc(8LL * a2);
  if ( !v7 && (8LL * a2 || (v7 = malloc(1u)) == nullptr) )
    sub_2221CE0("Allocation failed", 1u);
  *(_QWORD *)a1 = v7;
  *(_DWORD *)(a1 + 8) = a2;
  memset(v7, -1, 8LL * a2);
  if ( v4 != v6 )
  {
    v8 = v4;
    v9 = a2 - 1;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( (unsigned __int64)(*v8 + 2) > 1 )
          break;
        if ( ++v8 == v6 )
          goto LABEL_13;
      }
      v11 = *(__int64 **)a1;
      v12 = v9 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v13 = (__int64 *)(*(_QWORD *)a1 + 8LL * v12);
      v14 = *v13;
      if ( *v13 != -1 )
      {
        v16 = 1;
        v17 = nullptr;
        if ( v10 != v14 )
        {
          while ( 1 )
          {
            if ( v17 || v14 != -2 )
              v13 = v17;
            v12 = v9 & (v16 + v12);
            v14 = v11[v12];
            if ( v14 == -1 )
              break;
            if ( v10 == v14 )
            {
              v13 = &v11[v12];
              goto LABEL_12;
            }
            ++v16;
            v17 = v13;
            v13 = &v11[v12];
          }
          if ( !v13 )
            v13 = &v11[v12];
        }
      }
LABEL_12:
      ++v8;
      *v13 = v10;
    }
    while ( v8 != v6 );
  }
LABEL_13:
  if ( !v3 )
    free(v4);
  result = *(unsigned int *)(a1 + 16);
  *(_BYTE *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) -= result;
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
