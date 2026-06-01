_BOOL8 __fastcall sub_14BC00(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BOOL8 result; // rax
  _QWORD v4[9]; // [rsp+0h] [rbp-48h] BYREF

  v4[7] = __readfsqword(0x28u);
  result = 1;
  if ( !a2 )
  {
    v4[5] = a1;
    memset(&v4[1], 0, 32);
    v4[0] = off_4DD438;
    if ( (unsigned int)sub_11D320(a3, v4) )
      return 0;
  }
  return result;
}
