__int64 __fastcall sub_3E01D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_534680(&qword_8D0E20, &off_86A120, 7, 0);
  result = sub_539A10(a2, &qword_8D0E20);
  if ( *(_DWORD *)(a1 + 1116) != -1 )
  {
    sub_534680(&qword_8D0E00, &off_86A0C0, 3, 0);
    return sub_539A10(a2, &qword_8D0E00);
  }
  return result;
}
