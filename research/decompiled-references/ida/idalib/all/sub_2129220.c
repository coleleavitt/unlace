__int64 __fastcall sub_2129220(__int64 a1, char a2)
{
  bool v2; // zf
  __int64 result; // rax
  char v4; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v2 = *(_BYTE *)(a1 + 861) == 0;
  v4 = a2;
  if ( !v2 || (result = sub_2129170(a1), !(_BYTE)result) )
  {
    v5[0] = a1;
    v5[1] = &v4;
    return sub_2154570(a1, sub_2134AC0, v5, 1);
  }
  return result;
}
