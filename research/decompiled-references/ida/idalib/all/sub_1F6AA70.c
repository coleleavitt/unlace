char __fastcall sub_1F6AA70(size_t *a1, size_t *a2)
{
  size_t i; // rax
  unsigned __int64 v3; // rax
  size_t v4; // rax
  size_t j; // rbx
  unsigned __int64 v6; // rax
  size_t v7; // rbp
  size_t v8; // rdx
  unsigned int v9; // eax
  int v10; // eax

  for ( i = a2[1]; i; i = *(_QWORD *)(v3 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v3 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v3 )
      break;
    a2 = (size_t *)v3;
  }
  v4 = a1[1];
  for ( j = *a2; v4; v4 = *(_QWORD *)(v6 + 8) )
  {
    if ( (v4 & 4) == 0 )
      break;
    v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v6 )
      break;
    a1 = (size_t *)v6;
  }
  v7 = *a1;
  v8 = *a1;
  if ( j <= *a1 )
    v8 = *a2;
  if ( v8 && (v9 = memcmp(a1 + 4, a2 + 4, v8)) != 0 )
  {
    return v9 >> 31;
  }
  else
  {
    LOBYTE(v10) = j > v7;
    if ( j == v7 )
      LOBYTE(v10) = 0;
  }
  return v10;
}
