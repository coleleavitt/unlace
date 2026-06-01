__int64 __fastcall sub_69D950(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __m128i *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // [rsp+0h] [rbp-40h] BYREF
  void *ptr; // [rsp+8h] [rbp-38h] BYREF
  __int128 v9; // [rsp+10h] [rbp-30h]
  unsigned __int64 v10; // [rsp+20h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 == 84 )
  {
    v5 = *(__m128i **)(qword_2CCB598 + 1840);
    v6 = node2ea(a4);
    ptr = nullptr;
    v9 = 0;
    get_ea_diffpos_name(&ptr, v6);
    sub_69D860(v5, nullptr, &v7, v6);
    sub_35A790((char **)a1);
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      qfree(ptr);
    }
  }
  return a1;
}
