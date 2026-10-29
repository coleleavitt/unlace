_BYTE *__fastcall sub_3E3600(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rdi
  int v9; // eax
  unsigned __int16 *v10; // rbx
  unsigned __int16 *v11; // r13
  __int64 v12; // rdx

  v5 = a1 + a2;
  v6 = pack_dw(a1, a1 + a2, *a3);
  v7 = 0;
  v8 = (_BYTE *)v6;
  v9 = 0;
  do
  {
    if ( a3[v7 + 1] != 0xFFFF )
      v9 |= 1 << v7;
    ++v7;
  }
  while ( v7 != 8 );
  if ( (unsigned __int64)v8 < v5 )
    *v8++ = v9;
  v10 = a3 + 1;
  v11 = a3 + 9;
  do
  {
    v12 = *v10;
    if ( (_WORD)v12 != 0xFFFF )
      v8 = (_BYTE *)pack_dw(v8, v5, v12);
    ++v10;
  }
  while ( v11 != v10 );
  return &v8[-a1];
}

