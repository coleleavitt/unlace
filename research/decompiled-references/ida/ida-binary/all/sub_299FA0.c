bool __fastcall sub_299FA0(__int64 a1, _DWORD *a2, double a3)
{
  bool result; // al
  _QWORD v4[3]; // [rsp+0h] [rbp-38h] BYREF
  bool v5; // [rsp+18h] [rbp-20h]
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4[2] = a2;
  v4[0] = drawable_graph_t::calc_bounds;
  v5 = 0;
  sub_298EA0(a1, v4, 1, a3);
  result = v5;
  if ( v5 )
  {
    result = 0;
    if ( a2[2] - *a2 > 0 )
      return a2[3] - a2[1] > 0;
  }
  return result;
}
