_BYTE *__fastcall sub_3B8560(__int64 a1, int a2, _BYTE *a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // rbp
  _BYTE *v5; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  _DWORD *range; // rax
  unsigned __int64 v14; // rdi

  v4 = *a4;
  if ( !*a4 )
    return nullptr;
  v5 = a3;
  if ( !a2 || *a3 || (range = (_DWORD *)rangeset_t_find_range(a1 + 1152, (unsigned int)(a2 - 1))) == nullptr )
  {
    v7 = 1024;
LABEL_4:
    if ( v4 >= v7 )
      goto LABEL_5;
LABEL_16:
    *a4 = 0;
    return nullptr;
  }
  v14 = (unsigned int)(range[1] - *range);
  if ( v14 <= 0x3FF )
  {
    v7 = 1024 - v14;
    goto LABEL_4;
  }
  v7 = 1;
LABEL_5:
  v8 = 0;
  while ( 1 )
  {
    if ( !*v5 )
    {
      v9 = v8 + 1;
      v10 = (int)v8 + 1;
      if ( v10 < v4 )
      {
        while ( 1 )
        {
          v11 = v10 - v8;
          if ( v5[v10 - v8] )
            break;
          v10 = ++v9;
          if ( v9 >= v4 )
            goto LABEL_15;
        }
        v8 = v10;
      }
      else
      {
LABEL_15:
        v11 = v10 - v8;
        v8 = v10;
      }
      if ( v11 >= v7 )
        break;
    }
    ++v8;
    ++v5;
    if ( v4 - v7 < v8 )
      goto LABEL_16;
  }
  *a4 = v11;
  return v5;
}

