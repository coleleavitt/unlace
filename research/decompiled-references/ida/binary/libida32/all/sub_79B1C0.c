__int64 __fastcall sub_79B1C0(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *v2)(_QWORD); // rax

  v2 = *(__int64 (__fastcall **)(_QWORD))(a1 + 8);
  if ( v2 )
    return v2(a2);
  else
    return 0;
}

