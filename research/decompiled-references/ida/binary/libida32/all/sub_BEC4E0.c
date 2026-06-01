__int64 __fastcall sub_BEC4E0(__int64 a1)
{
  __int64 result; // rax

  result = sub_F341A0(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !(_BYTE)result )
    return sub_F34220(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
  return result;
}

