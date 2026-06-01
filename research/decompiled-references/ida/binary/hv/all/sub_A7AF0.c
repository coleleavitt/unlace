__int64 __fastcall sub_A7AF0(char *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  char *v5; // rdi
  __int64 v6; // rdx
  __int64 i; // rax
  char *v8; // rdx
  char *v9; // r8
  unsigned __int64 v10; // r10
  char *v11; // r9
  char *v12; // rax
  char *v13; // rdx
  __int64 v14; // r9
  __int64 v17; // r11
  __int64 v18; // r9

  result = 1;
  v3 = a2 & 0x1F;
  if ( a2 == 1 )
    return result;
  if ( (a2 & 0x1F) != 0 )
  {
    v8 = &a1[v3];
    v9 = a1 + 1;
    v10 = (unsigned __int64)&a1[v3 - 7];
    if ( (unsigned __int64)(a1 + 1) < v10 )
    {
      v14 = *(_QWORD *)(a1 + 1);
      if ( *(_QWORD *)a1 != v14 )
      {
        _RAX = v14 ^ *(_QWORD *)a1;
        __asm { tzcnt   rax, rax }
        v13 = (char *)((unsigned int)_RAX >> 3);
        goto LABEL_25;
      }
      v12 = a1 + 9;
      v11 = a1 + 8;
      if ( v10 > (unsigned __int64)(a1 + 9) )
      {
        v17 = *((_QWORD *)a1 + 1);
        v18 = *(_QWORD *)(a1 + 9);
        if ( v18 != v17 )
        {
LABEL_29:
          _R9 = v17 ^ v18;
          __asm { tzcnt   r9, r9 }
          v13 = (char *)(&v12[(unsigned int)_R9 >> 3] - v9);
          goto LABEL_25;
        }
        while ( 1 )
        {
          v12 += 8;
          v11 = v12 - 1;
          if ( v10 <= (unsigned __int64)v12 )
            break;
          v18 = *(_QWORD *)(v12 - 1);
          v17 = *(_QWORD *)v12;
          if ( v18 != *(_QWORD *)v12 )
            goto LABEL_29;
        }
      }
    }
    else
    {
      v11 = a1;
      v12 = a1 + 1;
    }
    if ( v12 < v8 - 3 && *(_DWORD *)v11 == *(_DWORD *)v12 )
    {
      v12 += 4;
      v11 += 4;
    }
    if ( v12 < v8 - 1 && *(_WORD *)v11 == *(_WORD *)v12 )
    {
      v12 += 2;
      v11 += 2;
    }
    if ( v8 > v12 )
      v12 += *v11 == *v12;
    v13 = (char *)(v12 - v9);
LABEL_25:
    result = 0;
    if ( (char *)(v3 - 1) != v13 )
      return result;
  }
  if ( a2 != v3 )
  {
    v4 = (unsigned __int8)*a1;
    v5 = &a1[v3];
    v6 = 0x101010101010101LL * v4;
    while ( 2 )
    {
      for ( i = 0; i != 32; i += 8 )
      {
        if ( v6 != *(_QWORD *)&v5[i] )
          return 0;
      }
      v3 += 32;
      v5 += 32;
      if ( a2 != v3 )
        continue;
      break;
    }
  }
  return 1;
}

