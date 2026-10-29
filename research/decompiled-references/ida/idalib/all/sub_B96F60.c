__int64 __fastcall sub_B96F60(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 || (*(_BYTE *)(v1 + 10) & 0x20) == 0 )
    return 0;
  result = sub_B95EB0(a1);
  if ( !result )
    return 0;
  if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x47 )
    return *(_QWORD *)(result + 48);
  return result;
}
