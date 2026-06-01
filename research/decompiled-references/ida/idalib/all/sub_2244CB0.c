__int64 __fastcall sub_2244CB0(__int64 a1, const void *a2, size_t a3, unsigned int a4)
{
  const void *v4; // r8
  __int64 v7; // rax
  _QWORD *v8; // rbp
  int v9; // ecx
  __int64 v10; // r12
  char *v11; // r12
  unsigned int v12; // ebx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v16; // rax
  int v17; // r9d
  int v18; // r10d
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // esi
  unsigned int v22; // ebx
  const void *v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+14h] [rbp-44h]
  int v25; // [rsp+18h] [rbp-40h]
  int v26; // [rsp+1Ch] [rbp-3Ch]

  v4 = a2;
  v7 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v7 )
  {
    v8 = *(_QWORD **)a1;
    v9 = v7 - 1;
    v10 = 8 * v7 + 8;
  }
  else
  {
    *(_QWORD *)(a1 + 12) = 0;
    v16 = calloc(0x11u, 0xCu);
    v4 = a2;
    v8 = v16;
    if ( !v16 )
      sub_2221CE0("Allocation failed", 1u);
    *(_QWORD *)a1 = v16;
    v10 = 136;
    v9 = 15;
    v16[16] = 2;
    *(_DWORD *)(a1 + 8) = 16;
  }
  v11 = (char *)v8 + v10;
  v12 = v9 & a4;
  v13 = v9 & a4;
  v14 = (_QWORD *)v8[v13];
  if ( !v14 )
    goto LABEL_4;
  v17 = -1;
  if ( a3 )
  {
    v18 = 1;
    while ( 1 )
    {
      if ( v14 == (_QWORD *)-8LL )
      {
        if ( v17 == -1 )
          v17 = v12;
      }
      else if ( a4 == *(_DWORD *)&v11[4 * v13] && a3 == *v14 )
      {
        v26 = v17;
        v25 = v18;
        v24 = v9;
        v23 = v4;
        v19 = memcmp(v4, (char *)v14 + *(unsigned int *)(a1 + 20), a3);
        v4 = v23;
        v9 = v24;
        v18 = v25;
        v17 = v26;
        if ( !v19 )
          return v12;
      }
      v20 = v18 + v12;
      ++v18;
      v12 = v9 & v20;
      v13 = v12;
      v14 = (_QWORD *)v8[v12];
      if ( !v14 )
        goto LABEL_15;
    }
  }
  v21 = 1;
  do
  {
    if ( v14 == (_QWORD *)-8LL )
    {
      if ( v17 == -1 )
        v17 = v12;
    }
    else if ( *(_DWORD *)&v11[4 * v13] == a4 && !*v14 )
    {
      return v12;
    }
    v22 = v21 + v12;
    ++v21;
    v12 = v9 & v22;
    v13 = v12;
    v14 = (_QWORD *)v8[v12];
  }
  while ( v14 );
LABEL_15:
  if ( v17 == -1 )
  {
LABEL_4:
    *(_DWORD *)&v11[4 * v13] = a4;
  }
  else
  {
    v12 = v17;
    *(_DWORD *)&v11[4 * v17] = a4;
  }
  return v12;
}
