__int64 __fastcall sub_7A9FA0(__int64 a1)
{
  __int64 result; // rax

  result = sub_79DAE0(*(_QWORD *)(a1 + 32));
  if ( !(_BYTE)result )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}

