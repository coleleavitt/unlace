__int64 __fastcall sub_480B0(__int64 *a1, const void **a2, unsigned __int64 a3)
{
  _BYTE *v3; // r13
  char *v4; // rax
  __int64 v6; // r12
  size_t v7; // rbx
  size_t v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax

  v3 = *a2;
  v4 = (char *)*a2;
  do
  {
    if ( (unsigned __int64)v4 >= a3 )
      return 0;
    ++v4;
  }
  while ( *(v4 - 1) );
  *a2 = v4;
  if ( !v3 )
    return 0;
  v6 = a1[1];
  v7 = v4 - v3 - 1;
  v8 = v7;
  if ( v6 )
  {
    --v6;
    v8 = v7 + v6;
  }
  v9 = *a1;
  if ( a1[2] < v8 + 1 )
  {
    v10 = sub_96080(a1, v9, v8 + 1, 1);
    *a1 = v10;
    v9 = v10;
  }
  a1[1] = v8 + 1;
  *(_BYTE *)(v9 + v8) = 0;
  memmove((void *)(v6 + *a1), v3, v7);
  return 1;
}

