__int64 __fastcall sub_242B30(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 result; // rax

  result = sub_23F4C0(a4, a1, a2, a3, *(_DWORD *)(a3 + 4), a5);
  if ( !(_BYTE)result )
  {
    if ( a5 )
      return sub_23F4C0(a4, a1, a2, a5, *(_DWORD *)(a3 + 4), 0);
  }
  return result;
}
