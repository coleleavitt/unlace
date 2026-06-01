/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CF50
// Address: 0x0045CF50

//----- (0045CF50) --------------------------------------------------------
int __stdcall sub_45CF50(_DWORD *a1, __m128i *a2, signed int a3)
{
  int v4; // ebx
  int v5; // eax

  if ( a3 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( a1 )
  {
    v4 = a3;
    if ( a3 )
    {
      v4 = sub_4754D1(a3, (int)a1, a2, 1u, a3, a1);
      if ( v4 != a3 )
      {
        v5 = sub_4752BF(v4, (int)a1, (int)a1);
        sub_45CC20(v5 != 0 ? 3 : 1);
      }
    }
    return v4;
  }
  else
  {
    sub_45CC20(1);
    *sub_46B984() = 9;
    sub_45CC20(1);
    return -1;
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
