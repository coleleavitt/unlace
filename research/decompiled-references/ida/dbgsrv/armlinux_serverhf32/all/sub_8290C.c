/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8290C
// Address: 0x0008290C

//----- (0008290C) --------------------------------------------------------
unsigned int *__fastcall sub_8290C(unsigned int *a1, size_t a2, _BYTE *a3, unsigned int a4)
{
  unsigned int v5; // r6
  size_t v7; // r2
  int v11; // r2
  _BYTE *v12; // r5
  unsigned int v13; // r3
  _BYTE *v14; // r1
  unsigned int v15; // r6
  size_t v16; // r9
  size_t v17; // r2

  v5 = *a1;
  v7 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v7 )
    sub_83B6C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::insert",
      a2,
      *(_DWORD *)(*a1 - 12));
  if ( 1073741820 - v7 < a4 )
    sub_83AE4("basic_string::insert");
  if ( (unsigned int)a3 < v5 )
    return sub_82780(a1, a2, 0, a3, a4);
  if ( (unsigned int)a3 > v7 + v5 )
    return sub_82780(a1, a2, 0, a3, a4);
  v11 = *(_DWORD *)(v5 - 4);
  __dmb(0xBu);
  if ( v11 > 0 )
    return sub_82780(a1, a2, 0, a3, a4);
  v12 = &a3[-*a1];
  sub_822F4(a1, a2, 0, a4);
  v13 = *a1;
  v14 = &v12[*a1];
  v15 = *a1 + a2;
  if ( (unsigned int)&v14[a4] <= v15 )
  {
    if ( a4 == 1 )
    {
      *(_BYTE *)(v13 + a2) = v12[v13];
      return a1;
    }
    else
    {
      if ( !a4 )
        return a1;
      memcpy((void *)(*a1 + a2), v14, a4);
      return a1;
    }
  }
  else if ( (unsigned int)v14 < v15 )
  {
    v16 = a2 - (_DWORD)v12;
    if ( a2 - (_DWORD)v12 == 1 )
    {
      *(_BYTE *)(v13 + a2) = v12[v13];
    }
    else if ( v16 )
    {
      memcpy((void *)(*a1 + a2), v14, a2 - (_DWORD)v12);
    }
    v17 = a4 - v16;
    if ( a4 - v16 == 1 )
    {
      *(_BYTE *)(v15 + v16) = *(_BYTE *)(v15 + a4);
      return a1;
    }
    else
    {
      if ( !v17 )
        return a1;
      memcpy((void *)(v15 + v16), (const void *)(v15 + a4), v17);
      return a1;
    }
  }
  else if ( a4 == 1 )
  {
    *(_BYTE *)(v13 + a2) = v14[1];
    return a1;
  }
  else
  {
    if ( !a4 )
      return a1;
    memcpy((void *)(*a1 + a2), &v14[a4], a4);
    return a1;
  }
}
