__int64 __fastcall sub_22450D0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  unsigned int v4; // r12d
  int v5; // eax
  int v7; // eax
  int v8; // r13d
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  unsigned int v11; // r13d
  __int64 v12; // r9
  __int64 v13; // r14
  unsigned int v14; // r11d
  char *v15; // rbx
  __int64 v16; // r10
  int v17; // r12d
  unsigned int v18; // edx
  __int64 v19; // rsi
  _QWORD *v20; // r8
  int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // [rsp+4h] [rbp-44h]
  __int64 v24; // [rsp+8h] [rbp-40h]
  _QWORD *v25; // [rsp+8h] [rbp-40h]

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 12);
  if ( 4 * v5 > 3 * v4 )
  {
    v23 = 2 * v4;
    v7 = 2 * v4;
  }
  else
  {
    if ( v4 - (*(_DWORD *)(a1 + 16) + v5) > v4 >> 3 )
      return v2;
    v23 = *(_DWORD *)(a1 + 8);
    v7 = v23;
  }
  v8 = v7 + 1;
  v9 = calloc((unsigned int)(v7 + 1), 0xCu);
  if ( !v9 && (v8 || (v9 = malloc(1u)) == nullptr) )
    sub_2221CE0("Allocation failed", 1u);
  v10 = *(_QWORD **)a1;
  v9[v23] = 2;
  if ( v4 )
  {
    v24 = v3;
    v11 = a2;
    v12 = 0;
    v13 = v4 - 1;
    v14 = v23 - 1;
    v15 = (char *)&v10[v4 + 1];
    while ( 1 )
    {
      v16 = v10[v12];
      if ( v16 != -8 && v16 )
      {
        v17 = *(_DWORD *)&v15[4 * v12];
        v18 = v17 & v14;
        v19 = v17 & v14;
        v20 = &v9[v19];
        if ( *v20 )
        {
          v21 = 1;
          do
          {
            v22 = v21 + v18;
            ++v21;
            v18 = v14 & v22;
            v19 = v18;
            v20 = &v9[v18];
          }
          while ( *v20 );
        }
        *v20 = v16;
        *((_DWORD *)&v9[v23 + 1] + v19) = v17;
        if ( v2 == (_DWORD)v12 )
          v11 = v18;
      }
      if ( v13 == v12 )
        break;
      ++v12;
    }
    v3 = v24;
  }
  else
  {
    v11 = a2;
  }
  v25 = v9;
  v2 = v11;
  free(v10);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)v3 = v25;
  *(_DWORD *)(v3 + 8) = v23;
  return v2;
}
