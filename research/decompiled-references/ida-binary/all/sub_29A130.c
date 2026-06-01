__int64 __fastcall sub_29A130(__int64 a1, int *a2, __m128d *a3, double a4)
{
  unsigned int v5; // ebp
  __int128 v7; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v8[3]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int8 v9; // [rsp+28h] [rbp-50h]
  unsigned __int64 v10; // [rsp+38h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v8[2] = &v7;
  v8[0] = drawable_graph_t::calc_bounds;
  v9 = 0;
  v7 = 0;
  sub_298EA0(a1, v8, 1, 0.0);
  v5 = v9;
  if ( v9 && DWORD2(v7) - (int)v7 > 0 && HIDWORD(v7) - DWORD1(v7) > 0 )
    sub_29A020((__m128)*(unsigned __int64 *)&a4, a1, a2, (int *)&v7, a3);
  else
    return 0;
  return v5;
}
