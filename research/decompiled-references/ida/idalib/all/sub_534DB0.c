__int64 __fastcall sub_534DB0(__int64 **a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 *v7; // r13
  __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v13; // rsi
  const char *v14; // r14
  __int64 v15; // r15
  __int64 i; // r12
  const char *v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx

  v6 = 144 * a2;
  v7 = *a1;
  v8 = **a1;
  v9 = (__int64 *)(v8 + v6);
  v10 = *(_QWORD *)(v8 + v6);
  if ( (v10 || (*((_BYTE *)v9 + 132) & 0x20) == 0 || a2 + 1 >= (unsigned __int64)v7[1] || *(_QWORD *)(v8 + v6 + 144))
    && (!a2
     || *((_BYTE *)v7 + 51)
     || (v13 = v9[1]) == 0
     || (v9[8] & 0xF) == 0xE
     || (unsigned __int64)a1[5] < (unsigned __int64)(v13 + v10) >> 3) )
  {
    a1[5] = nullptr;
    v11 = *((_DWORD *)v9 + 33) & 0x20;
    if ( v11 )
    {
      v18 = v9[1];
      v11 = 3;
      if ( v18 )
      {
        v11 = 2;
        if ( a2 + 1 < (unsigned __int64)v7[1] && *(_QWORD *)(*v7 + v6 + 144) < v18 + *v9 )
        {
          v11 = 4;
          v19 = *v9;
          a1[5] = (__int64 *)((int)sub_5696F0(v9 + 8, v18 >> 3) + (v19 >> 3));
        }
      }
    }
    else if ( (unsigned __int64)v9[3] <= 1 )
    {
      return 5;
    }
    else
    {
      v14 = (const char *)v9[2];
      if ( *v14 == 126 )
      {
        return 1;
      }
      else if ( a2 + 1 != v7[1] && (*(_BYTE *)(*v7 + v6 + 133) & 4) != 0 )
      {
        return 10;
      }
      else if ( a3 && a2 )
      {
        v15 = 0;
        for ( i = *v7 + 16; ; i += 144 )
        {
          v17 = haystack;
          if ( *(_QWORD *)(i + 8) )
            v17 = *(const char **)i;
          if ( !strcmp(v17, v14) )
            break;
          if ( a2 == ++v15 )
            return v11;
        }
        return (unsigned int)((*((_BYTE *)v7 + 45) & 1) == 0) + 6;
      }
    }
  }
  else
  {
    a1[5] = nullptr;
    return 8;
  }
  return v11;
}
