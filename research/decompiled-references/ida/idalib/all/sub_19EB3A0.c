__int64 __fastcall sub_19EB3A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 40 > 6 )
    return 1;
  if ( (unsigned int)sub_B73370(v2) )
    sub_19EAE00(a1, 32, 4, *(_DWORD *)(a2 + 4));
  return 1;
}
