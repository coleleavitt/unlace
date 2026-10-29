char *__fastcall sub_82CD10(__int64 a1, const char *a2, unsigned __int8 a3)
{
  __int64 v3; // rbp
  unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rbx
  int v7; // esi
  char *result; // rax
  const char *i; // rbp

  v3 = a3;
  if ( !a2 )
    a2 = &byte_22CD811;
  v4 = (unsigned __int8 *)(a1 + 5384);
  v5 = (unsigned __int8 *)(a1 + 5128);
  if ( !a3 )
    v4 = v5;
  v6 = v4;
  qstrncpy(v4, a2, 256);
  v7 = *v6;
  result = "\\/:";
  for ( i = &asc_2399DD0[v3]; (_BYTE)v7; ++v6 )
  {
    if ( (unsigned __int8)v7 <= 0x1Fu || (result = strchr(i, v7)) != nullptr )
      *v6 = 95;
    v7 = v6[1];
  }
  return result;
}

