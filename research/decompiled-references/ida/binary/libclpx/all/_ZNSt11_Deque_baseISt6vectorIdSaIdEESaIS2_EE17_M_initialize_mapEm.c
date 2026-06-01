__int64 __fastcall std::_Deque_base<std::vector<double>>::_M_initialize_map(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 *v9; // r14
  __int64 *v10; // r13
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax

  v3 = a2 / 0x15 + 3;
  v4 = a2 / 0x15 + 1;
  if ( v3 > 8 )
  {
    a1[1] = v3;
    v5 = 8 * v3;
  }
  else
  {
    a1[1] = 8;
    v5 = 64;
  }
  v6 = operator new(v5);
  v7 = a1[1];
  *a1 = v6;
  v8 = (v7 - v4) >> 1;
  v9 = (__int64 *)(v6 + 8 * v8);
  v10 = &v9[v4];
  if ( v9 < v10 )
  {
    v11 = (__int64 *)(v6 + 8 * v8);
    do
      *v11++ = operator new(0x1F8u);
    while ( v10 > v11 );
  }
  v12 = *v9;
  v13 = *(v10 - 1);
  a1[5] = (__int64)v9;
  a1[3] = v12;
  a1[2] = v12;
  a1[7] = v13;
  a1[4] = v12 + 504;
  a1[9] = (__int64)(v10 - 1);
  a1[8] = v13 + 504;
  result = v13 + 24 * (a2 % 0x15);
  a1[6] = result;
  return result;
}

