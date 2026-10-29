_QWORD *__fastcall sub_5D65B0(__int64 a1, void *src, __int64 a3)
{
  size_t v3; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rbx

  if ( !src )
    return nullptr;
  v3 = 8 * a3;
  v5 = (_QWORD *)qalloc(8 * a3);
  v6 = v5;
  if ( !v5 )
    sub_3B74D0((int)"h2ti");
  memcpy(v5, src, v3);
  if ( a3 )
  {
    v7 = 0;
    do
    {
      v6[v7] = sub_5D5940(a1, *((const __m128i **)src + v7));
      ++v7;
    }
    while ( a3 != v7 );
  }
  return v6;
}

