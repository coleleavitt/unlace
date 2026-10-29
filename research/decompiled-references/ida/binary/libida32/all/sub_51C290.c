__int64 __fastcall sub_51C290(__int64 *a1, __int64 a2, char a3)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 *v7; // rax
  unsigned int v8; // ebp
  __int64 v10; // rcx
  const char *v11; // r14
  __int64 v12; // r15
  __int64 i; // r12
  const char *v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx

  v5 = *a1;
  v6 = a2 << 7;
  v7 = (__int64 *)(*(_QWORD *)v5 + (a2 << 7));
  if ( (*v7
     || (*((_BYTE *)v7 + 116) & 0x20) == 0
     || (unsigned __int64)(a2 + 1) >= *(_QWORD *)(v5 + 8)
     || *(_QWORD *)(*(_QWORD *)v5 + v6 + 128))
    && (!a2
     || *(_BYTE *)(v5 + 51)
     || (v10 = v7[1]) == 0
     || (v7[8] & 0xF) == 0xE
     || a1[5] < (unsigned __int64)(v10 + *v7) >> 3) )
  {
    a1[5] = 0;
    v8 = *((_DWORD *)v7 + 29) & 0x20;
    if ( v8 )
    {
      v15 = v7[1];
      v8 = 3;
      if ( v15 )
      {
        v8 = 2;
        if ( (unsigned __int64)(a2 + 1) < *(_QWORD *)(v5 + 8) && *(_QWORD *)(*(_QWORD *)v5 + v6 + 128) < v15 + *v7 )
        {
          v8 = 4;
          v16 = *v7;
          a1[5] = (int)sub_54FF50(v7 + 8, v15 >> 3) + (v16 >> 3);
        }
      }
    }
    else if ( (unsigned __int64)v7[3] <= 1 )
    {
      return 5;
    }
    else
    {
      v11 = (const char *)v7[2];
      if ( *v11 == 126 )
      {
        return 1;
      }
      else if ( a2 + 1 != *(_QWORD *)(v5 + 8) && (*(_BYTE *)(*(_QWORD *)v5 + v6 + 117) & 4) != 0 )
      {
        return 10;
      }
      else if ( a3 && a2 )
      {
        v12 = 0;
        for ( i = *(_QWORD *)v5 + 16LL; ; i += 128 )
        {
          v14 = haystack;
          if ( *(_QWORD *)(i + 8) )
            v14 = *(const char **)i;
          if ( !strcmp(v14, v11) )
            break;
          if ( a2 == ++v12 )
            return v8;
        }
        return (unsigned int)((*(_BYTE *)(v5 + 45) & 1) == 0) + 6;
      }
    }
  }
  else
  {
    a1[5] = 0;
    return 8;
  }
  return v8;
}

