__int64 __fastcall sub_3A25F0(__int64 a1, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1536LL);
  v3 = *(unsigned __int8 *)(v2 + 125);
  *(_BYTE *)(v2 + 125) = a2;
  return v3;
}
