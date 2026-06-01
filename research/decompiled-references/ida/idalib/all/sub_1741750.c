bool __fastcall sub_1741750(__int64 a1)
{
  unsigned __int8 v1; // cl
  bool v3; // dl

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(a1 + 17) & 4) == 0 )
    return (unsigned __int8)(v1 - 47) <= 1u;
  v3 = 1;
  if ( v1 <= 0x2Au )
    v3 = ((0x4040600007CuLL >> v1) & 1) == 0;
  return v3 && v1 != 33;
}
