__int64 __fastcall sub_3D5870(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  if ( (sub_3BE900(a1, a2, 4) & 0x400) != 0 )
    return sub_3D57A0(a1, a2, 0x44444404400000LL, a3);
  result = create_16bit_data(a2);
  if ( (_BYTE)result )
    return sub_3D57A0(a1, a2, 0x44444404400000LL, a3);
  return result;
}
