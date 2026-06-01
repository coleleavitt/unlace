_QWORD *__fastcall sub_3BE410(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  int v7; // edi
  __int64 v8; // rbx
  __int64 *v9; // rcx
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = *(unsigned int *)(a2 + 16);
  v7 = *(_DWORD *)(a3 + 12);
  v8 = a4;
  v9 = *(__int64 **)(a2 + 8);
  v11 = v4 - 1;
  v4 *= 16;
  v12 = (__int64 *)((char *)v9 + v4);
  v13 = 16LL * (v7 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 == v4 )
  {
LABEL_9:
    while ( v14 != v9 )
    {
      v17 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v7 && a3 == v17 )
        {
          v15 = v9;
          goto LABEL_18;
        }
      }
      else if ( !v17 )
      {
        break;
      }
      v9 += 2;
    }
LABEL_8:
    BUG();
  }
  v15 = &v9[(unsigned __int64)v13 / 8];
  while ( 1 )
  {
    v16 = *v15;
    if ( (unsigned __int64)*v15 > 1 )
      break;
    if ( !v16 )
      goto LABEL_8;
LABEL_5:
    v15 += 2;
    if ( v12 == v15 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v16 + 12) != v7 || a3 != v16 )
    goto LABEL_5;
LABEL_18:
  v18 = *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(v15[1] + 4 * v8));
  *a1 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 76);
  return a1;
}

