__int64 __fastcall sub_2879D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  v6 = *(_QWORD *)(a1 + 72);
  if ( (v6 == 0)
     + 0xF0F0F0F0F0F0F0F1LL * ((__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) >> 4)
     + ((v6 - *(_QWORD *)(a1 + 40)) >> 3)
     - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 56)) >> 4) == 0x78787878787879LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 8) - ((v6 - *(_QWORD *)a1) >> 3)) <= 1 )
  {
    sub_2877E0(a1, 1u, 0, 0xF0F0F0F0F0F0F0F1LL, a5, a6);
    v6 = *(_QWORD *)(a1 + 72);
  }
  *(_QWORD *)(v6 + 8) = operator new(0x110u);
  sub_174BB0(*(__int64 **)(a1 + 48), a2);
  v7 = (__int64 *)(*(_QWORD *)(a1 + 72) + 8LL);
  *(_QWORD *)(a1 + 72) = v7;
  result = *v7;
  v9 = *v7 + 272;
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a1 + 64) = v9;
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
