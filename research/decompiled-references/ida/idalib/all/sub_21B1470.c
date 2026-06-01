__int64 __fastcall sub_21B1470(_DWORD *a1)
{
  unsigned __int8 (*v1)(void); // rax

  v1 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v1 == (char *)sub_21B1110 )
    return a1[2] != 12 ? 21 : 23;
  else
    return v1() == 0 ? 21 : 23;
}
