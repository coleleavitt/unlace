__int64 __fastcall sub_A57070(unsigned __int8 *a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 944LL);
  if ( (char *)v1 == (char *)sub_A55F40 )
    return a1[9];
  else
    return v1();
}
