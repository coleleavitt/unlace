__int64 __fastcall sub_2A6270(
        unsigned int a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 v9; // xmm4
  __m128 v10; // xmm5
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 func; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+0h] [rbp-1038h] BYREF
  __int64 v18; // [rsp+8h] [rbp-1030h] BYREF
  _BYTE v19[4104]; // [rsp+10h] [rbp-1028h] BYREF
  unsigned __int64 v20; // [rsp+1018h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, &v17, &v18) )
  {
    func = 0;
  }
  else
  {
    func = get_func(xmmword_8CC810);
    if ( !func )
    {
      sub_169630(
        (int)"AUTOHIDE NONE\nPlease move the cursor to a function or select an area to graph",
        (__int64)&v17,
        v11,
        v12,
        v14,
        v15,
        a2,
        a3,
        a4,
        a5,
        v9,
        v10,
        a8,
        a9,
        v17);
      return 1;
    }
  }
  if ( !(unsigned __int8)sub_2A61A0(
                           a1,
                           (__int64)v19,
                           a2,
                           a3,
                           a4,
                           a5,
                           *(double *)v9.m128_u64,
                           *(double *)v10.m128_u64,
                           a8,
                           a9) )
    return 1;
  return (unsigned __int8)gen_flow_graph(v19, &unk_5C2F25, func, v17, v18, a1);
}
