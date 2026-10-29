__int64 __fastcall sub_B5DD60(__int64 a1, __int64 a2)
{
  bool v2; // bl
  unsigned __int8 v3; // cl
  __int64 v4; // rax
  unsigned int v5; // edx

  v2 = 1;
  v3 = (*(_BYTE *)(a2 + 28) + 108) & 0x7F;
  if ( v3 <= 0x34u )
    v2 = ((0x10FFC000000001uLL >> v3) & 1) == 0;
  v4 = sub_B685F0(a2);
  v5 = v2;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 2320) + 105LL) & 4) != 0 )
    v5 = 7;
  return sub_B5D9A0(a1, a2, v5);
}

