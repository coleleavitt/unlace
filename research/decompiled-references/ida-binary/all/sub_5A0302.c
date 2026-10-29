__int64 __fastcall sub_5A0302(unsigned int *a1)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 4) + 16LL))(*((_QWORD *)a1 + 4)) != 1 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 4) + 40LL))(*((_QWORD *)a1 + 4)) != 1
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 4) + 24LL))(*((_QWORD *)a1 + 4)) != 1 )
  {
    return 0;
  }
  if ( *((_BYTE *)a1 + 144) )
  {
    *((_QWORD *)a1 + 20) = sub_59B77E(*((_QWORD *)a1 + 4), *((_QWORD *)a1 + 19));
    if ( (unsigned __int8)sub_5A04B8(a1) != 1 )
      return 0;
  }
  if ( *a1 == -1 )
  {
    if ( (unsigned __int8)sub_5A7D32(a1 + 10, *((_QWORD *)a1 + 1)) != 1 )
      return 0;
  }
  else
  {
    sub_5A7D98(a1 + 10, *a1);
  }
  return 1;
}
