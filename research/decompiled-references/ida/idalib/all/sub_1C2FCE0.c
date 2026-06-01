char __fastcall sub_1C2FCE0(__int64 a1, _QWORD *a2)
{
  if ( *(_DWORD *)(a1 + 8) <= 0x40u )
    return *(_QWORD *)a1 == *a2;
  else
    return sub_2205D70(a1, a2);
}
