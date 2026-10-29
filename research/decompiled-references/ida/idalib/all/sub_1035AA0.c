__int64 __fastcall sub_1035AA0(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi

  if ( *(_DWORD *)(a1 + 260) == 16
    && (unsigned __int8)sub_22B7EA0(a1 + 216)
    && (a2 <= 0x18 ? (v3 = *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4LL * a2)) : (v3 = a2 - 25), v3 == 1) )
  {
    return 32;
  }
  else
  {
    return *(unsigned __int8 *)(a1 + 8);
  }
}
