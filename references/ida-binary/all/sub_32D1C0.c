__int64 __fastcall sub_32D1C0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  double v8; // xmm4_8
  double v9; // xmm5_8
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  _QWORD *hidden_range; // rdx
  unsigned __int64 *next_hidden_range; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v16[5]; // [rsp+10h] [rbp-28h] BYREF

  v16[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, (__int64 *)&v15, v16) )
  {
    sub_1FDB10(a1, a2, a3, a4, v8, v9, a7, a8, 0, (const char *)&v15);
    v10 = v16[0];
    v11 = v15;
    if ( v15 < v16[0] )
    {
      del_hidden_range(v15);
      while ( 1 )
      {
        next_hidden_range = (unsigned __int64 *)get_next_hidden_range(v11);
        if ( !next_hidden_range || *next_hidden_range >= v10 )
          break;
        if ( !(unsigned __int8)del_hidden_range(*next_hidden_range) )
          return 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    hidden_range = (_QWORD *)get_hidden_range(xmmword_8CC810);
    result = 0;
    if ( hidden_range )
      return (unsigned __int8)del_hidden_range(*hidden_range);
  }
  return result;
}
