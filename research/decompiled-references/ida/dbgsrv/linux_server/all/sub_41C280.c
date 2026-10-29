/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C280
// Address: 0x000000000041C280

//----- (000000000041C280) ----------------------------------------------------
__int64 __fastcall sub_41C280(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  _QWORD *v5; // rdi
  __int64 *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx

  v2 = a1[9];
  v3 = (v2 == 0) + ((v2 - a1[5]) >> 3) - 1;
  if ( 0x8E38E38E38E38E39LL * (((__int64)(a1[6] - a1[7]) >> 3) + ((__int64)(a1[4] - a1[2]) >> 3)) + 8 * v3 - v3 == 0x1C71C71C71C71C7LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( (unsigned __int64)(a1[1] - ((v2 - *a1) >> 3)) <= 1 )
  {
    sub_41AE00((__int64)a1, 1u, 0);
    v2 = a1[9];
  }
  *(_QWORD *)(v2 + 8) = operator new(0x1F8u);
  v5 = (_QWORD *)a1[6];
  *v5 = 0xFFFFFFFFLL;
  v5[1] = -1;
  v5[2] = 0;
  sub_4788F0((__int64)v5, a2);
  v6 = (__int64 *)(a1[9] + 8LL);
  a1[9] = v6;
  result = *v6;
  v8 = *v6 + 504;
  a1[7] = result;
  a1[8] = v8;
  a1[6] = result;
  return result;
}
