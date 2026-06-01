__int64 __fastcall sub_8BD990(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d

  v3 = *(unsigned __int8 *)(a1 + 552);
  if ( (_BYTE)v3 )
  {
    if ( (unsigned int)sub_8BD730((_QWORD *)a1, a2) != -1 )
      return v3;
    sub_8AC840(a1, a2, a3);
  }
  return 0;
}

