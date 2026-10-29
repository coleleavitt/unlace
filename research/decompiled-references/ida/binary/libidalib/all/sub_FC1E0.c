__int64 __fastcall sub_FC1E0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 **v4; // rdx
  __int64 *v5; // rdi
  __int64 v6; // rax

  v2 = a1[5];
  if ( 0x8F5C28F5C28F5C29LL * (((__int64)(a1[6] - a1[7]) >> 3) + ((__int64)(a1[4] - a1[2]) >> 3))
     + 2 * ((a1[9] == 0) + ((a1[9] - v2) >> 3) - 1) == 0xA3D70A3D70A3D7LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( v2 == *a1 )
  {
    sub_FBEE0((__int64)a1, 1u, 1);
    v2 = a1[5];
  }
  *(_QWORD *)(v2 - 8) = operator new(0x190u);
  v4 = (__int64 **)(a1[5] - 8LL);
  a1[5] = v4;
  v5 = *v4;
  v6 = (__int64)(*v4 + 50);
  a1[3] = *v4;
  v5 += 25;
  a1[4] = v6;
  a1[2] = v5;
  return sub_909A0(v5, a2);
}

