/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003EDD0
// Address: 0x000000014003EDD0

//----- (000000014003EDD0) ----------------------------------------------------
__int64 __fastcall sub_14003EDD0(unsigned __int8 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  if ( a2 <= 0 )
  {
    if ( a2 < 0 )
    {
      if ( !a3 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(1834);
      }
      v4 = -a2;
      do
      {
        sub_1400618A0(nullptr, (unsigned __int64 *)&v6, a3);
        --v4;
      }
      while ( v4 );
    }
  }
  else
  {
    sub_140061BD0(&v6, a2);
  }
  return sub_1400615C0(&v6);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
