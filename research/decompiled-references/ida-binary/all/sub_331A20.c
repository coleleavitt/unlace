__int64 __fastcall sub_331A20(
        __int64 a1,
        unsigned int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 custom_data_format; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  _DWORD v17[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v11 = *(_DWORD *)(a1 + 8);
  v17[0] = a2;
  LOBYTE(v10) = v11 == 58 || v11 == 25;
  if ( (_BYTE)v10 )
    return (unsigned int)sub_3BCC70();
  v12 = v10;
  custom_data_format = get_custom_data_format(a2);
  if ( !custom_data_format )
    return v12;
  return sub_331480(
           *(const char **)(custom_data_format + 32),
           (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_32E660,
           (__int64)v17,
           0,
           0,
           a3,
           a4,
           a5,
           a6,
           v15,
           v16,
           a9,
           a10)
       & 1;
}
