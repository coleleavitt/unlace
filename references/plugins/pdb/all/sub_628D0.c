__int64 __fastcall sub_628D0(__int64 a1)
{
  unsigned int v1; // esi

  v1 = *(unsigned __int16 *)(a1 + 112);
  if ( v1 > 0xFFF && !sub_5F700((_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL), v1) )
    return 0;
  return v1;
}
