__int64 __fastcall sub_C10220(__int64 a1)
{
  __int64 result; // rax

  result = sub_F57EE0(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !(_BYTE)result )
    return sub_F57F60(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
  return result;
}
