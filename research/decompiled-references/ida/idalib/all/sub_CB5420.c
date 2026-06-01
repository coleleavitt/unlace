__int64 __fastcall sub_CB5420(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = sub_CE6170(*(_QWORD *)(a1 + 1264));
  result = ((unsigned int)sub_BFE5A0(a2, v2) >> 3) & 7;
  if ( (_BYTE)result == 7 )
    return 1;
  return result;
}
