__int64 __fastcall sub_183E450(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 *v4; // rdx

  if ( a2 && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a3 + 24LL))(a3) )
  {
    v4 = (unsigned __int64 *)(a3[2] & 0xFFFFFFFFFFFFFFF8LL);
    if ( (a3[2] & 4) != 0 )
      sub_17A2FB0(a1, a2, *v4);
    else
      sub_17A2FB0(a1, a2, (unsigned __int64)v4);
  }
  return sub_18C74E0(a1, 6, a3, 3);
}
