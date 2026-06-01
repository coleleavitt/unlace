__int64 __fastcall sub_95C40(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  bool v6; // zf

  result = a3;
  if ( *(_DWORD *)(a3 + 4) < (signed int)a4 )
  {
    sub_122C80(a2);
    v6 = (unsigned __int8)sub_12F260(a2, a1, a4, 0, 0) == 0;
    result = 0;
    if ( !v6 )
      return a2;
  }
  return result;
}
