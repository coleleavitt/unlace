__int64 __fastcall sub_76E7B0(_BYTE *a1)
{
  __int64 result; // rax

  if ( qword_2CD43F8 >= (unsigned __int64)&byte_2CD44A0 )
    sub_76E790(a1);
  result = qword_2CD43F8 + 16;
  *(_BYTE *)(qword_2CD43F8 + 8) = *a1;
  *(_QWORD *)(result - 16) = qword_2CD44B8;
  qword_2CD44B8 = (__int64)a1;
  qword_2CD43F8 = result;
  *a1 = 0;
  return result;
}
