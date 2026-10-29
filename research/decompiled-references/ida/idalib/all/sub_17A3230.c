unsigned __int64 __fastcall sub_17A3230(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(sub_B8C1B0(*(_QWORD *)(a1 + 544)) + 16);
  if ( (v1 & 4) != 0 )
    result = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    result = v1 & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 544) = result;
  return result;
}
