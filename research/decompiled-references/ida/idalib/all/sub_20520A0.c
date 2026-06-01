__int64 __fastcall sub_20520A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 8) == 16 )
    return sub_20C2F40(*(_QWORD *)(v2 + 24), a2);
  else
    return 0;
}
