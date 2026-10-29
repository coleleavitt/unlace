__int64 __fastcall sub_DA6390(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( !(unsigned __int8)sub_DA4680(a1, (__int64)a2, a3, 5) )
    return 0;
  if ( *(_DWORD *)(a3 + 24)
    || (v4 = *(_QWORD *)(a3 + 32)) == 0
    || (result = *(unsigned __int8 *)(*(_QWORD *)(v4 + 32) + 61LL), !(_BYTE)result) )
  {
    if ( (unsigned __int8)sub_DA4460(a1, a2, a3) )
      return sub_DA4EC0(a1, (__int64)a2, a3, 5);
    return 0;
  }
  return result;
}

