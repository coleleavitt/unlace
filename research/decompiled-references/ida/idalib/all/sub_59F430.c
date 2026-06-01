unsigned __int64 __fastcall sub_59F430(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  __m128i v6; // [rsp+0h] [rbp-58h] BYREF
  __m128i v7; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v1 = a1[1];
  v8 = __readfsqword(0x28u);
  v2 = (_QWORD *)*a1;
  if ( 8 * v1 )
  {
    do
    {
      v3 = *v2;
      v4 = ea2node(*v2);
      if ( (unsigned __int64)netnode_supval(v4, 4, &v6, 16, 83) > 0xF )
      {
        v7 = _mm_load_si128(&v6);
        set_jumptable_info(v3, &v7);
      }
      ++v2;
    }
    while ( v2 != (_QWORD *)(*a1 + 8LL * a1[1]) );
  }
  return v8 - __readfsqword(0x28u);
}
