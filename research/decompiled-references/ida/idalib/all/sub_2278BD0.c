size_t __fastcall sub_2278BD0(_BYTE *a1, __int64 a2, __int64 a3)
{
  const char *v4; // rbx
  size_t result; // rax
  _DWORD *v6; // rsi
  unsigned __int64 v7; // rdi
  char *v8; // rsi
  const char *v9; // rbx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // rsi

  v4 = "true";
  if ( !*a1 )
    v4 = "false";
  result = strlen(v4);
  v6 = *(_DWORD **)(a3 + 32);
  if ( result > *(_QWORD *)(a3 + 24) - (_QWORD)v6 )
    return sub_227BF10(a3, v4, result);
  if ( (unsigned int)result < 8 )
  {
    if ( (result & 4) != 0 )
    {
      *v6 = *(_DWORD *)v4;
      *(_DWORD *)((char *)v6 + (unsigned int)result - 4) = *(_DWORD *)&v4[(unsigned int)result - 4];
    }
    else if ( (_DWORD)result )
    {
      *(_BYTE *)v6 = *v4;
      if ( (result & 2) != 0 )
        *(_WORD *)((char *)v6 + (unsigned int)result - 2) = *(_WORD *)&v4[(unsigned int)result - 2];
    }
  }
  else
  {
    v7 = (unsigned __int64)(v6 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v6 = *(_QWORD *)v4;
    *(_QWORD *)((char *)v6 + (unsigned int)result - 8) = *(_QWORD *)&v4[(unsigned int)result - 8];
    v8 = (char *)v6 - v7;
    v9 = (const char *)(v4 - v8);
    if ( (((_DWORD)result + (_DWORD)v8) & 0xFFFFFFF8) >= 8 )
    {
      v10 = (result + (_DWORD)v8) & 0xFFFFFFF8;
      v11 = 0;
      do
      {
        v12 = v11;
        v11 += 8;
        *(_QWORD *)(v7 + v12) = *(_QWORD *)&v9[v12];
      }
      while ( v11 < v10 );
    }
  }
  *(_QWORD *)(a3 + 32) += result;
  return result;
}
