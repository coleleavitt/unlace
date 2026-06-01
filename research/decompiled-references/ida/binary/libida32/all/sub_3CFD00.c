__int64 __fastcall sub_3CFD00(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x400) != 0 )
    return sub_3CFC40(a1, a2, 0x44444404400000LL, a3);
  result = create_16bit_data(a2, 2);
  if ( (_BYTE)result )
    return sub_3CFC40(a1, a2, 0x44444404400000LL, a3);
  return result;
}

