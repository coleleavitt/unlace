__int64 __fastcall sub_7F6960(unsigned int *src, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned int *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r13
  unsigned int *v11; // rdi
  __int64 v12; // rsi

  v5 = 0xE21A291C077975B9LL * (((char *)a2 - (char *)src) >> 4);
  v6 = 2 * a4;
  v8 = src;
  if ( 2 * a4 <= v5 )
  {
    v9 = 4384 * a4;
    v10 = -548 * a4;
    do
    {
      v11 = v8;
      v8 = (unsigned int *)((char *)v8 + v9);
      a3 = (unsigned int *)sub_7F6860(v11, &v8[v10], &v8[v10], v8, a3);
      v5 = 0xE21A291C077975B9LL * (((char *)a2 - (char *)v8) >> 4);
    }
    while ( v6 <= v5 );
  }
  v12 = a4;
  if ( a4 > v5 )
    v12 = v5;
  return sub_7F6860(v8, &v8[548 * v12], &v8[548 * v12], a2, a3);
}
