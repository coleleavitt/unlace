__int64 __fastcall sub_E00340(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 result; // rax

  result = sub_15DA890(*(_QWORD *)(a1 + 296), a2, a3);
  if ( a4 )
  {
    sub_E00280(a1, a3);
    return sub_DF9B00(a1, a3);
  }
  return result;
}

