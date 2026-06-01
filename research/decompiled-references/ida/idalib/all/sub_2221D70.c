unsigned __int64 __fastcall sub_2221D70(__int64 a1, std::random_device *a2, _QWORD *a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  unsigned int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rbp
  unsigned int v13; // eax
  bool v14; // cf
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a3[1] - *a3;
  v5 = v4;
  if ( v4 > 0xFFFFFFFE )
  {
    if ( v4 == 0xFFFFFFFF )
    {
      v9 = (unsigned int)std::random_device::_M_getval(a2);
    }
    else
    {
      v11 = HIDWORD(v4);
      do
      {
        do
        {
          v15[1] = v11;
          v15[0] = 0;
          v12 = sub_2221D70(a1, a2, v15);
          v13 = std::random_device::_M_getval(a2);
          v12 <<= 32;
          v14 = __CFADD__(v12, v13);
          v9 = v12 + v13;
        }
        while ( v5 < v9 );
      }
      while ( v14 );
    }
  }
  else
  {
    v6 = 0xFFFFFFFF / (v4 + 1) * (v4 + 1);
    v7 = 0xFFFFFFFF / (v4 + 1);
    do
      v8 = std::random_device::_M_getval(a2);
    while ( v6 <= v8 );
    v9 = v8 / v7;
  }
  return *a3 + v9;
}
