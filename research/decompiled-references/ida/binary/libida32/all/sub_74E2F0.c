__int64 __fastcall sub_74E2F0(_BYTE *a1)
{
  __int64 result; // rax

  if ( qword_2CAA4F8 >= (unsigned __int64)&byte_2CAA5A0 )
    sub_74E2D0(a1);
  result = qword_2CAA4F8 + 16;
  *(_BYTE *)(qword_2CAA4F8 + 8) = *a1;
  *(_QWORD *)(result - 16) = qword_2CAA5B8;
  qword_2CAA5B8 = (__int64)a1;
  qword_2CAA4F8 = result;
  *a1 = 0;
  return result;
}

