__int64 __fastcall sub_1991F0(void (__fastcall ***a1)(_QWORD, __int64, __int16 *))
{
  void (__fastcall **v1)(_QWORD, __int64, _BYTE *); // rax
  __int64 result; // rax
  _BYTE v3[2]; // [rsp+4h] [rbp-14h] BYREF
  __int16 v4; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v1 = (void (__fastcall **)(_QWORD, __int64, _BYTE *))*a1;
  v5 = __readfsqword(0x28u);
  (*v1)(a1, 3, v3);
  (**a1)(a1, 13, &v4);
  result = 4;
  if ( (v3[0] & 2) != 0 )
  {
    if ( (unsigned __int16)(v4 - 1) > 3u )
      return 0xFFFFFFFFLL;
    else
      return dword_5DEE50[(unsigned __int16)(v4 - 1)];
  }
  return result;
}
