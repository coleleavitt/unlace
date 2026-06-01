__int64 sub_3EE190()
{
  __m128i *v0; // rbx
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  v0 = *(__m128i **)(qword_2CCB598 + 1672);
  netnode_check(v2, "$ sourcefiles", 0, 0);
  if ( v2[0] != -1 )
  {
    sub_3C7310(v0);
    sub_504B40(&v0[82].m128i_u64[1]);
  }
  return 1;
}
