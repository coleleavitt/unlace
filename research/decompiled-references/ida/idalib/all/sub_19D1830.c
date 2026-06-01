__int64 __fastcall sub_19D1830(__int64 *a1, unsigned __int64 *a2)
{
  char v2; // dl
  __int64 result; // rax

  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL);
  result = 1;
  if ( v2 != 34 )
  {
    result = 40;
    if ( v2 == 11 )
    {
      sub_18C2180(*a1, a2);
      return 41;
    }
  }
  return result;
}
