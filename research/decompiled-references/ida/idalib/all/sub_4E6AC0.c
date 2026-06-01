__int64 __fastcall sub_4E6AC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v4; // rdi
  char *v5; // rdx
  char *v7; // rcx
  char *v8; // rsi
  char *v9; // rax

  result = *(_QWORD *)(a1 + 24);
  v4 = *(char **)(a1 + 16);
  v5 = &v4[16 * result];
  if ( v4 != v5 )
  {
    v7 = v4;
    do
    {
      while ( 1 )
      {
        v8 = v7 + 16;
        if ( *(_QWORD *)(*(_QWORD *)v7 + 48LL) == a2 )
          break;
        result = *(_QWORD *)(a1 + 24);
        v7 += 16;
        v5 = &v4[16 * result];
        if ( v5 == v8 )
          goto LABEL_6;
      }
      v9 = (char *)memmove(v7, v8, v5 - v7 - 16);
      v4 = *(char **)(a1 + 16);
      v7 = v9;
      result = *(_QWORD *)(a1 + 24) - 1LL;
      *(_QWORD *)(a1 + 24) = result;
      v5 = &v4[16 * result];
    }
    while ( v5 != v7 );
  }
LABEL_6:
  if ( !result )
    *(_BYTE *)(a1 + 40) = 0;
  return result;
}
