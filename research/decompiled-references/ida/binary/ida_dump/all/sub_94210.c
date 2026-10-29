__int64 __fastcall sub_94210(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_64780(a1, a2);
  if ( !(_BYTE)result )
    return sub_318470(a1 + 2, a2 + 2);
  return result;
}
