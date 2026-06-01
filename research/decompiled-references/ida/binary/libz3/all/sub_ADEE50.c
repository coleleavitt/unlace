__int64 __fastcall sub_ADEE50(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 40) = a2;
  result = sub_952B70(a2);
  *(_QWORD *)(a1 + 48) = result;
  return result;
}

