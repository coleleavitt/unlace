__int64 __fastcall sub_5D820(char *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  char *v4; // rbp
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r12
  char *v8; // rsi
  char v9; // r14

  v4 = (char *)(a2 + a4);
  v5 = *a3;
  result = 3 * a3[1];
  v7 = *a3 + 24 * a3[1];
  if ( v7 != *a3 )
  {
    do
    {
      v8 = (char *)haystack;
      v9 = 1;
      if ( *(_QWORD *)(v5 + 8) )
      {
        v8 = *(char **)v5;
        if ( **(_BYTE **)v5 == 33 )
        {
          ++v8;
          v9 = 0;
        }
      }
      result = sub_94FD0(v4, v8);
      if ( (_BYTE)result )
        *a1 = v9;
      v5 += 24;
    }
    while ( v7 != v5 );
  }
  return result;
}

