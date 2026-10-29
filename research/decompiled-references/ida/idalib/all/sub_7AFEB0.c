unsigned __int64 __fastcall sub_7AFEB0(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 1736);
  if ( *v2 )
    result = sub_7AF490((__int64)v2);
  *(_QWORD *)(a1 + 1520) = -1;
  return result;
}
