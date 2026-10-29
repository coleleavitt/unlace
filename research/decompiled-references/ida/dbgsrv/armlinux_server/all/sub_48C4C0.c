/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C4C0
// Address: 0x000000000048C4C0

//----- (000000000048C4C0) ----------------------------------------------------
size_t __fastcall sub_48C4C0(_QWORD *a1, unsigned __int64 a2, void *a3, size_t a4)
{
  unsigned __int64 v7; // x2
  __int64 v9; // x1
  size_t v10; // x2

  if ( (a2 & 0x8000000000000000LL) != 0 || (v7 = a1[1], v7 <= a2) )
  {
    sub_4869C8(3);
    if ( a1[1] == a2 )
      return 0;
    else
      return -1;
  }
  else
  {
    v9 = a1[4];
    if ( v9 != -1 )
    {
      if ( a1[5] < v9 )
      {
        sub_4869C8(4);
        return -1;
      }
      if ( a2 + v9 != sub_48C428(a1[3], a2 + v9, 0) )
        return -1;
      v7 = a1[1];
    }
    v10 = v7 - a2;
    if ( v10 > a4 )
      v10 = a4;
    return sub_48C160(a1[3], a3, v10);
  }
}
