__int64 __fastcall sub_287AE0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 **v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rax

  v6 = a1[9];
  v7 = a1[5];
  if ( (v6 == 0)
     + 0xF0F0F0F0F0F0F0F1LL * ((__int64)(a1[4] - a1[2]) >> 4)
     + ((v6 - v7) >> 3)
     - 0xF0F0F0F0F0F0F0FLL * ((__int64)(a1[6] - a1[7]) >> 4) == 0x78787878787879LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( v7 == *a1 )
  {
    sub_2877E0((__int64)a1, 1u, 1u, v6, a5, a6);
    v7 = a1[5];
  }
  *(_QWORD *)(v7 - 8) = operator new(0x110u);
  v9 = (__int64 **)(a1[5] - 8LL);
  a1[5] = v9;
  v10 = *v9;
  v11 = (__int64)(*v9 + 34);
  a1[3] = *v9;
  a1[4] = v11;
  a1[2] = v10;
  return sub_174BB0(v10, a2);
}
