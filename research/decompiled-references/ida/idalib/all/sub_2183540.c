__int64 __fastcall sub_2183540(__int64 a1, __int64 a2)
{
  int v2; // eax

  sub_22B0340(a1, &byte_22F0C30, 0);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 536LL))(a2) & 7;
  if ( v2 == 2 )
    goto LABEL_4;
  if ( v2 == 3 )
  {
    sub_22B0360(a1, "d", 1, 1);
LABEL_4:
    sub_22B0360(a1, "f", 1, 1);
  }
  return a1;
}
