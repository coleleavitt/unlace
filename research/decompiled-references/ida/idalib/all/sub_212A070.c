__int64 __fastcall sub_212A070(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  bool v5; // dl
  int v6; // edx

  result = sub_21544B0(a1);
  if ( !(_BYTE)result )
  {
    v5 = 0;
    if ( a3 == 9 )
    {
      if ( *(_QWORD *)a2 != 0x7263616D746C612ELL || (v6 = 0, *(_BYTE *)(a2 + 8) != 111) )
        v6 = 1;
      v5 = v6 == 0;
    }
    *(_BYTE *)(a1 + 863) = v5;
  }
  return result;
}
