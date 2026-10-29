/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BE934
// Address: 0x00000000000BE934

//----- (00000000000BE934) ----------------------------------------------------
__int64 __fastcall sub_BE934(__int64 result, int status)
{
  char v3; // w21
  _QWORD *v4; // x19

  v3 = result;
  byte_168DD4 = 1;
  if ( qword_168DE8 )
  {
    if ( qword_168DF8 )
    {
      v4 = operator new(0x20u);
      v4[1] = 0;
      v4[2] = 0;
      *((_DWORD *)v4 + 6) = status;
      *v4 = off_160420;
      *((_BYTE *)v4 + 28) = v3 & 1;
      if ( is_main_thread() )
        sub_BFB04((__int64)v4);
      else
        callui(86, v4, 2);
      return (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  }
  else if ( (result & 1) != 0 )
  {
    exit(status);
  }
  return result;
}
// 160420: using guessed type __int64 (__fastcall *off_160420[2])();
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
// 167DD0: using guessed type __int64[512];
// 168DD4: using guessed type char byte_168DD4;
// 168DE8: using guessed type __int64 qword_168DE8;
// 168DF8: using guessed type __int64 qword_168DF8;
