__int64 __fastcall sub_820080(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_B07E10(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2);
  if ( !(_BYTE)result )
    return sub_B07E90(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
  return result;
}

