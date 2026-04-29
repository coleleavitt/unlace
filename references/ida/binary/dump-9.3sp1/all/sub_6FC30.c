__int64 __fastcall sub_6FC30(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  int v6; // r12d
  unsigned int v7; // ebp

  if ( a3 == a4 )
    return 1;
  v6 = 0;
  sub_64190(a2, a3);
  while ( v6 < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, a3) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, a3, (unsigned int)v6);
    if ( !sub_64930(a2, v7) && (unsigned __int8)sub_6FC30(a1, a2, v7, a4) )
      return 1;
    ++v6;
  }
  return 0;
}
