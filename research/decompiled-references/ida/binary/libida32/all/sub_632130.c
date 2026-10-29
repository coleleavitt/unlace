size_t __fastcall sub_632130(__int64 a1, __int64 a2, const char *a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  const char *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  size_t v9; // rdi
  size_t v10; // rbx

  if ( a3 )
  {
    v4 = a2;
    if ( !a2 )
      v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD *)(v4 + 64);
    if ( (a4 & 1) == 0 )
      v5 = *(_QWORD *)(v4 + 56);
    v6 = a3 - 4;
    v7 = *(_QWORD *)(v5 + 32);
    v8 = v7 + *(unsigned int *)(v5 + 20);
    if ( (unsigned __int64)(a3 - 4) >= v8 || (unsigned __int64)v6 < v7 )
    {
      v6 = sub_631E40(v5, a3, 0);
      if ( v6 )
        goto LABEL_9;
    }
    else if ( a3 != &byte_4 )
    {
LABEL_9:
      v9 = sub_62A040(v6);
      if ( v9 < v8 )
      {
        v10 = *(_QWORD *)(v5 + 32) + *(unsigned int *)(v5 + 20);
        while ( *(_DWORD *)v9 == 2147483646 || *(_BYTE *)(v9 + 4) == 35 && !*(_BYTE *)(v9 + 5) )
        {
          v9 = sub_62A040((const char *)v9);
          if ( v9 >= v10 )
            return 0;
        }
        if ( v9 )
          return v9 + 4;
      }
    }
    return 0;
  }
  return 0;
}

