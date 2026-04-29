__int64 __fastcall sub_13FD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_23EA0(a2, a3, *(_QWORD *)(a1 + 8) + 168LL);
  if ( (_BYTE)result )
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 736LL) = 0;
  return result;
}
