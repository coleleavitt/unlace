/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41AFF0
// Address: 0x000000000041AFF0

//----- (000000000041AFF0) ----------------------------------------------------
void __fastcall sub_41AFF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx

  v2 = a1[5];
  v3 = (a1[9] == 0) + ((a1[9] - v2) >> 3) - 1;
  if ( 0x8E38E38E38E38E39LL * (((__int64)(a1[6] - a1[7]) >> 3) + ((__int64)(a1[4] - a1[2]) >> 3)) + 8 * v3 - v3 == 0x1C71C71C71C71C7LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( v2 == *a1 )
  {
    sub_41AE00((__int64)a1, 1u, 1);
    v2 = a1[5];
  }
  *(_QWORD *)(v2 - 8) = operator new(0x1F8u);
  v4 = (_QWORD *)(a1[5] - 8LL);
  a1[5] = v4;
  v5 = (_QWORD *)*v4;
  v6 = *v4 + 504LL;
  a1[3] = v5;
  a1[4] = v6;
  a1[2] = v5 + 54;
  v5[54] = 0xFFFFFFFFLL;
  v5[55] = -1;
  v5[56] = 0;
  sub_4788F0((__int64)(v5 + 54), a2);
}
