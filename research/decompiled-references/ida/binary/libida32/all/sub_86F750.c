__int64 __fastcall sub_86F750(unsigned __int64 a1, int a2, __int64 a3, __int64 a4, size_t *a5)
{
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r11
  _BYTE *v8; // r10
  unsigned __int8 *v9; // rdi
  size_t v10; // rbx
  unsigned __int8 *v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int8 *v13; // rax
  unsigned int v14; // ebp
  unsigned __int8 *v16; // rbx
  int v17; // eax
  size_t *v18; // [rsp+8h] [rbp-20h]

  if ( a1 >= *(_QWORD *)(a3 + 128) || (v5 = *(_QWORD *)(a3 + 8 * a1 + 136), v5 == -1) )
  {
    if ( (*(_BYTE *)(a4 + 225) & 2) == 0 )
      return (unsigned int)-1;
    v10 = 0;
    goto LABEL_13;
  }
  v6 = *(_QWORD *)(a3 + 8 * a1 + 144);
  v7 = *(_QWORD *)(a4 + 128);
  v8 = *(_BYTE **)(a3 + 80);
  v9 = (unsigned __int8 *)(v7 + v5);
  v10 = v6 - v5;
  if ( a2 )
  {
    if ( v10 )
    {
      v16 = &v8[v10];
      v13 = *(unsigned __int8 **)(a3 + 80);
      while ( (unsigned __int64)v13 < *(_QWORD *)(a4 + 144) )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a4 + 64) + *v9) != *(_BYTE *)(*(_QWORD *)(a4 + 64) + *v13) )
          return (unsigned int)-1;
        ++v13;
        ++v9;
        if ( v13 == v16 )
        {
LABEL_25:
          v10 = v13 - v8;
          goto LABEL_13;
        }
      }
      return 1;
    }
LABEL_13:
    *a5 = v10;
    return 0;
  }
  if ( !*(_WORD *)(a4 + 104) )
  {
    v18 = a5;
    v14 = -1;
    if ( *(_QWORD *)(a4 + 144) - (_QWORD)v8 < v10 )
      return v14;
    v17 = memcmp(v9, v8, v10);
    a5 = v18;
    if ( v17 )
      return v14;
    goto LABEL_13;
  }
  if ( !v10 )
    goto LABEL_13;
  v11 = (unsigned __int8 *)(v7 + v6);
  v12 = *(_QWORD *)(a4 + 144);
  v13 = v8;
  while ( (unsigned __int64)v13 < v12 )
  {
    if ( *v9++ != *v13++ )
      return (unsigned int)-1;
    if ( v9 == v11 )
      goto LABEL_25;
  }
  return 1;
}

