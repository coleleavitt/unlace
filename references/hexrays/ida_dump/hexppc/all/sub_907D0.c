__int64 __fastcall sub_907D0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_60D40(a1, a2);
  if ( !(_BYTE)result )
    return sub_3142F0(a1 + 2, a2 + 2);
  return result;
}
