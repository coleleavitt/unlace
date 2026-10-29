size_t __fastcall sub_F2E700(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  const char *v4; // rbp
  size_t result; // rax
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdi
  char *v8; // rcx
  const char *v9; // rbp
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rsi

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = *(_BYTE **)(v2 + 32);
  if ( *(_BYTE **)(v2 + 24) == v3 )
  {
    v2 = sub_227BF10(*(_QWORD *)(a1 + 1096), " ", 1);
  }
  else
  {
    *v3 = 32;
    ++*(_QWORD *)(v2 + 32);
  }
  v4 = "__objc_yes";
  if ( !*(_BYTE *)(a2 + 16) )
    v4 = "__objc_no";
  result = strlen(v4);
  v6 = *(_QWORD **)(v2 + 32);
  if ( result > *(_QWORD *)(v2 + 24) - (_QWORD)v6 )
    return sub_227BF10(v2, v4, result);
  v7 = (unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  *v6 = *(_QWORD *)v4;
  *(_QWORD *)((char *)v6 + (unsigned int)result - 8) = *(_QWORD *)&v4[(unsigned int)result - 8];
  v8 = (char *)v6 - v7;
  v9 = (const char *)(v4 - v8);
  v10 = (result + (_DWORD)v8) & 0xFFFFFFF8;
  if ( v10 >= 8 )
  {
    v11 = v10 & 0xFFFFFFF8;
    v12 = 0;
    do
    {
      v13 = v12;
      v12 += 8;
      *(_QWORD *)(v7 + v13) = *(_QWORD *)&v9[v13];
    }
    while ( v12 < v11 );
  }
  *(_QWORD *)(v2 + 32) += result;
  return result;
}
