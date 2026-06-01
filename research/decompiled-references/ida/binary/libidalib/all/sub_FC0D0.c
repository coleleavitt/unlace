__int64 __fastcall sub_FC0D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 72);
  if ( 0x8F5C28F5C28F5C29LL
     * (((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 56)) >> 3)
      + ((__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) >> 3))
     + 2 * ((v2 == 0) + ((v2 - *(_QWORD *)(a1 + 40)) >> 3) - 1) == 0xA3D70A3D70A3D7LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 8) - ((v2 - *(_QWORD *)a1) >> 3)) <= 1 )
  {
    sub_FBEE0(a1, 1u, 0);
    v2 = *(_QWORD *)(a1 + 72);
  }
  *(_QWORD *)(v2 + 8) = operator new(0x190u);
  sub_909A0(*(__int64 **)(a1 + 48), a2);
  v3 = (__int64 *)(*(_QWORD *)(a1 + 72) + 8LL);
  *(_QWORD *)(a1 + 72) = v3;
  result = *v3;
  v5 = *v3 + 400;
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a1 + 64) = v5;
  *(_QWORD *)(a1 + 48) = result;
  return result;
}

