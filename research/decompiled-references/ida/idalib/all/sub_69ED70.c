unsigned __int64 __fastcall sub_69ED70(__int64 a1, char a2)
{
  __int64 v3; // rbp
  __m128i *v4; // r14
  __int64 i; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  void *v8; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+18h] [rbp-50h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( a2 == 84 )
  {
    v3 = qword_2CCB598;
    v4 = *(__m128i **)(qword_2CCB598 + 1840);
    if ( v4->m128i_i64[1] != -1 )
    {
      for ( i = sub_7BEB80(&v4->m128i_u64[1], qword_2CCB598, 84); i != -1; i = sub_7BEBF0(&v4->m128i_u64[1], v3, i, 84) )
      {
        v10 = 0;
        ptr = nullptr;
        if ( sub_7BEED0(&v4->m128i_u64[1], v3, &ptr, 1, i, 84) > 0 )
        {
          v6 = v10;
          v8 = ptr;
          v7 = sub_3BDE50(*(_QWORD **)(v3 + 1672), i);
          sub_69E9F0(v4, v7, (__int64)v8, v6);
          i += v6 >> 10;
        }
        if ( ptr )
        {
          *(_QWORD *)&v10 = 0;
          qfree(ptr);
        }
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}
