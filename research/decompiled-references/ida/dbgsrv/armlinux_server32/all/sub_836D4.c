/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_836D4
// Address: 0x000836D4

//----- (000836D4) --------------------------------------------------------
unsigned int *__fastcall sub_836D4(unsigned int *a1, size_t a2, unsigned int a3, _BYTE *a4, unsigned int a5)
{
  unsigned int v6; // r1
  size_t v7; // r4
  int v8; // r7
  unsigned int *v9; // r6
  int v11; // r2
  unsigned int v12; // r4
  _BYTE *v13; // r4
  unsigned int *v14; // [sp+Ch] [bp-4h] BYREF

  v6 = *a1;
  v7 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v7 )
    sub_83E54(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2,
      *(_DWORD *)(*a1 - 12));
  v8 = v7 - a2;
  if ( v7 - a2 >= a3 )
    v8 = a3;
  if ( a5 > v8 - v7 + 1073741820 )
    sub_83DCC("basic_string::replace");
  v9 = a1;
  if ( (unsigned int)a4 < v6 )
    return sub_8291C(a1, a2, v8, a4, a5);
  if ( (unsigned int)a4 > v7 + v6 )
    return sub_8291C(a1, a2, v8, a4, a5);
  v11 = *(_DWORD *)(v6 - 4);
  __dmb(0xBu);
  if ( v11 > 0 )
    return sub_8291C(a1, a2, v8, a4, a5);
  v12 = *a1;
  if ( (unsigned int)&a4[a5] <= *a1 + a2 )
  {
    v13 = &a4[-v12];
    goto LABEL_12;
  }
  if ( (unsigned int)a4 >= a2 + v8 + v12 )
  {
    v13 = &a4[a5 - v12 - v8];
LABEL_12:
    sub_82490(a1, a2, v8, a5);
    if ( a5 == 1 )
    {
      *(_BYTE *)(*v9 + a2) = v13[*v9];
    }
    else if ( a5 )
    {
      memcpy((void *)(*v9 + a2), &v13[*v9], a5);
    }
    return v9;
  }
  sub_836B8((int **)&v14, a4, a5);
  v9 = sub_8291C(v9, a2, v8, v14, a5);
  if ( v14 - 3 != (unsigned int *)std::string::_Rep::_S_empty_rep_storage )
    sub_822E8(v14 - 3);
  return v9;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
