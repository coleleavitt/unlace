__int64 __fastcall sub_3F3ED0(__int64 a1, unsigned int a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  char v5; // cl

  result = sub_3F3B40(a1, a2, a3);
  v4 = a1 + 40LL * (int)a2;
  v5 = *(_BYTE *)(v4 + 65);
  if ( v5 == 11 )
    return *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL) + 4 * (unsigned int)*(unsigned __int16 *)(v4 + 70);
  if ( v5 == 12 )
    return *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL) + (unsigned int)*(unsigned __int16 *)(v4 + 70);
  return result;
}
