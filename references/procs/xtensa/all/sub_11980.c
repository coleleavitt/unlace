__int64 __fastcall sub_11980(__m128i *a1)
{
  __int32 v1; // eax

  v1 = netnode_altval();
  a1[37].m128i_i32[1] = v1;
  if ( v1 )
  {
    a1[37].m128i_i8[9] = netnode_altval() != 0;
    a1[37].m128i_i8[10] = netnode_altval() != 0;
    a1[37].m128i_i32[0] = netnode_altval();
  }
  else
  {
    a1[37].m128i_i32[1] = 1065334783;
    *(__int16 *)((char *)&a1[37].m128i_i16[4] + 1) = 257;
    a1[37].m128i_i32[0] = 0;
  }
  return sub_118C0(a1);
}
