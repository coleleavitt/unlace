bool __fastcall sub_21F8C40(_QWORD *a1)
{
  int v1; // eax
  _QWORD *v3; // rdi
  __int64 v4; // rsi

  if ( (unsigned int)(*(_DWORD *)(*a1 + 16LL) - 1) <= 1 )
    return 0;
  v1 = *(_DWORD *)(*a1 + 8LL);
  v3 = a1 + 1;
  v4 = (unsigned int)(v1 - 2);
  if ( (unsigned int)(v1 + 64) > 0x7F )
    return (unsigned int)sub_22097E0(a1[1], v4) == 0;
  else
    return (unsigned int)sub_22097E0(v3, v4) == 0;
}
