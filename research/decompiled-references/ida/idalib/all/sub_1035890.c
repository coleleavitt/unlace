unsigned __int64 __fastcall sub_1035890(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = sub_1081560(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
  v2 = 32;
  if ( BYTE4(v1) )
    v2 = (unsigned int)v1 < 0x49 ? 32 : 64;
  return ((unsigned __int64)v2 << 32) | v2;
}
