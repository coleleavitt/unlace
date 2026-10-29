/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C478
// Address: 0x0008C478

//----- (0008C478) --------------------------------------------------------
_DWORD *__fastcall sub_8C478(_DWORD *a1, size_t a2, int a3, size_t n, unsigned __int8 c)
{
  int v6; // r12
  size_t v8; // r4
  _DWORD *v10; // r3
  unsigned int v11; // r4
  unsigned int v12; // r1
  size_t v13; // r12
  bool v14; // zf
  size_t v15; // r3

  v6 = a1[1];
  if ( n > a3 + 0x7FFFFFFF - v6 )
    sub_83AE4("basic_string::_M_replace_aux");
  v8 = n - a3;
  v10 = (_DWORD *)*a1;
  v11 = v8 + v6;
  if ( (_DWORD *)*a1 == a1 + 2 )
    v12 = 15;
  else
    v12 = a1[2];
  if ( v12 < v11 )
  {
    sub_8BECC(a1, a2, a3, nullptr, n);
    v10 = (_DWORD *)*a1;
  }
  else
  {
    v13 = v6 - a2;
    v14 = v13 == a3;
    if ( v13 != a3 )
      v14 = a3 == n;
    if ( !v14 )
    {
      v15 = (size_t)v10 + a2;
      if ( v13 - a3 == 1 )
        *(_BYTE *)(v15 + n) = *(_BYTE *)(v15 + a3);
      else
        memmove((void *)(v15 + n), (const void *)(v15 + a3), v13 - a3);
      v10 = (_DWORD *)*a1;
    }
  }
  if ( n )
  {
    if ( n == 1 )
      *((_BYTE *)v10 + a2) = c;
    else
      memset((char *)v10 + a2, c, n);
    v10 = (_DWORD *)*a1;
  }
  a1[1] = v11;
  *((_BYTE *)v10 + v11) = 0;
  return a1;
}
