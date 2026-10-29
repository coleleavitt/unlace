__int64 __fastcall sub_2196120(_DWORD *a1)
{
  unsigned __int8 (*v1)(void); // rax

  v1 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v1 == (char *)sub_2195C40 )
  {
    if ( (unsigned int)(a1[2] - 19) > 1 )
      return 4;
    else
      return 8;
  }
  else if ( v1() )
  {
    return 8;
  }
  else
  {
    return 4;
  }
}
