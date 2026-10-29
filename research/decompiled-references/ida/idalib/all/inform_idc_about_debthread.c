__int64 __fastcall inform_idc_about_debthread(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(qword_2CCB598 + 1608);
  *(_QWORD *)(result + 16) = a1;
  return result;
}
