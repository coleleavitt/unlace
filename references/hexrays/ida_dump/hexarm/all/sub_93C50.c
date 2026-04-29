__int64 __fastcall sub_93C50(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_64180(a1, a2);
  if ( !(_BYTE)result )
    return sub_318830(a1 + 2, a2 + 2);
  return result;
}
