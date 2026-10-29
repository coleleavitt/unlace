__int64 __fastcall sub_555B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 v7; // r12
  __int64 v11; // rcx
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  unsigned int v14; // esi
  __int64 v15; // rax
  int v16; // r10d
  int v17; // r11d
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // ebx
  unsigned int v21; // r12d
  unsigned int v22; // r14d
  __int64 v23; // rdx
  char v24; // r9
  int v25; // esi
  __int64 v26; // [rsp+0h] [rbp-70h]
  int v27; // [rsp+8h] [rbp-68h]
  unsigned int v28; // [rsp+Ch] [rbp-64h]
  unsigned int v29; // [rsp+1Ch] [rbp-54h]
  unsigned int v30; // [rsp+28h] [rbp-48h]
  int v31; // [rsp+2Ch] [rbp-44h]
  int *v32; // [rsp+30h] [rbp-40h]

  if ( !*(_DWORD *)(a3 + 8) )
    return 1;
  v7 = 0;
  do
  {
    if ( (unsigned __int8)sub_182A660(a1, a2, *(_QWORD *)(*(_QWORD *)a3 + 8 * v7)) )
      return 0;
    ++v7;
  }
  while ( (unsigned int)v7 < *(_DWORD *)(a3 + 8) );
  v11 = a4;
  v12 = *(_DWORD *)(a3 + 8);
  v27 = *(_DWORD *)(a1 + 520) >> 1;
  if ( !v27 )
    return 1;
  v13 = 0;
  v14 = 0;
  v31 = -1;
  v26 = *(_QWORD *)(v11 + 8);
  v15 = a2;
  v30 = -1;
  v29 = -1;
  v32 = a5;
  do
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v26 + 4LL * (v14 >> 5)) & (1 << v14)) == 0 )
        goto LABEL_8;
      v16 = 1 << v13;
      v17 = 1 << (v13 + 1);
      v18 = v13 >> 5;
      v19 = (v13 + 1) >> 5;
      if ( (((*(_DWORD *)(v15 + 4 * v19) & v17) != 0) | (2 * ((*(_DWORD *)(v15 + 4 * v18) & (1 << v13)) != 0))) != 3 )
        goto LABEL_8;
      v20 = ((*(_DWORD *)(**(_QWORD **)a3 + 4 * v19) & v17) != 0)
          | (2 * ((*(_DWORD *)(**(_QWORD **)a3 + 4 * v18) & v16) != 0));
      if ( v20 == 1 )
      {
        if ( v12 <= 1 )
        {
LABEL_38:
          *v32 = v14;
          return 2;
        }
        v22 = 1;
        v21 = 0;
      }
      else
      {
        v21 = v20 == 2;
        if ( v12 <= 1 )
        {
          v24 = 1;
          v22 = 0;
          goto LABEL_19;
        }
        v22 = 0;
      }
      v28 = v14;
      v23 = 1;
      v24 = 1;
      do
      {
        while ( 1 )
        {
          v25 = (2 * ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 8 * v23) + 4 * v18) & v16) != 0))
              | ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 8 * v23) + 4 * v19) & v17) != 0);
          v24 &= v20 == v25;
          if ( v25 == 1 )
            break;
          ++v23;
          v21 += v25 == 2;
          if ( (unsigned int)v23 >= v12 )
            goto LABEL_18;
        }
        ++v23;
        ++v22;
      }
      while ( (unsigned int)v23 < v12 );
LABEL_18:
      v14 = v28;
LABEL_19:
      if ( v20 == 3 )
      {
        if ( v24 )
          goto LABEL_8;
      }
      else if ( v24 )
      {
        goto LABEL_38;
      }
      if ( !v21 )
      {
        *v32 = v14;
        return 3;
      }
      if ( !v22 )
      {
        *v32 = v14;
        return 4;
      }
      if ( v29 >= v21 && v30 >= v22 || v22 == 1 || v21 == 1 )
        break;
LABEL_8:
      ++v14;
      v13 += 2;
      if ( v14 == v27 )
        goto LABEL_26;
    }
    v31 = v14++;
    v13 += 2;
    v30 = v22;
    v29 = v21;
  }
  while ( v14 != v27 );
LABEL_26:
  if ( v31 == -1 )
    return 1;
  *v32 = v31;
  return 5;
}

