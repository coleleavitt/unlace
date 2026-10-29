__int64 __fastcall sub_20D1DD0(char **a1)
{
  char *v1; // rdx
  char *v2; // rax
  size_t v3; // rbp
  __int64 result; // rax
  char *v5; // r12
  char v6; // si
  size_t v7; // rax
  __int64 v8; // rdi
  char v9; // dl

  v1 = a1[1];
  if ( *a1 == v1 )
    return 0;
  v2 = *a1 + 1;
  v3 = 0;
  if ( (unsigned __int8)(**a1 - 48) > 9u )
    return 0;
  do
  {
    *a1 = v2;
    v5 = v2;
    v3 = *(v2 - 1) - 48 + 10 * v3;
    if ( v2 == v1 )
      break;
    v6 = *v2++;
  }
  while ( (unsigned __int8)(v6 - 48) <= 9u );
  if ( v1 - v5 < v3 || !v3 )
    return 0;
  *a1 = &v5[v3];
  v7 = j__strlen("_GLOBAL__N");
  v8 = (__int64)(a1 + 102);
  if ( sub_20D1BF0(v3, v5, v7, "_GLOBAL__N") )
    return sub_20D1380(v8, "(anonymous namespace)");
  result = sub_20CF970(v8, 32);
  *(_WORD *)(result + 8) = 16392;
  v9 = *(_BYTE *)(result + 10);
  *(_QWORD *)(result + 16) = v3;
  *(_QWORD *)(result + 24) = v5;
  *(_BYTE *)(result + 10) = v9 & 0xF0 | 5;
  *(_QWORD *)result = off_2BE68A0;
  return result;
}
