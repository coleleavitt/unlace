__int64 __fastcall sub_AEDA0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = a1[9];
  if ( 16 * ((v2 == 0) + ((v2 - a1[5]) >> 3) - 1) + ((__int64)(a1[4] - a1[2]) >> 5) + ((__int64)(a1[6] - a1[7]) >> 5) == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( (unsigned __int64)(a1[1] - ((v2 - *a1) >> 3)) <= 1 )
  {
    sub_AE720((__int64)a1, 1u, 0);
    v2 = a1[9];
  }
  *(_QWORD *)(v2 + 8) = operator new(0x200u);
  sub_9F240(a1[6], a2);
  v3 = (__int64 *)(a1[9] + 8LL);
  a1[9] = v3;
  result = *v3;
  v5 = *v3 + 512;
  a1[7] = result;
  a1[8] = v5;
  a1[6] = result;
  return result;
}

