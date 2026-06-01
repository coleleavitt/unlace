__int64 __fastcall sub_21B1290(_DWORD *a1, __int64 a2)
{
  unsigned __int8 (*v2)(void); // rax

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_21B1110 )
  {
    if ( a1[2] == 12 )
      return *(unsigned __int8 *)(a2 + 13);
    else
      return *(unsigned __int8 *)(a2 + 9);
  }
  else if ( v2() )
  {
    return *(unsigned __int8 *)(a2 + 13);
  }
  else
  {
    return *(unsigned __int8 *)(a2 + 9);
  }
}
