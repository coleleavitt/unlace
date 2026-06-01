bool __fastcall sub_BFE550(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl
  __int64 v3; // rdi
  bool result; // al

  v1 = sub_BFBC70(*(_QWORD *)(a1 + 32));
  if ( !v1 )
    return 0;
  v2 = *(_BYTE *)(v1 + 28);
  v3 = v1;
  result = 0;
  if ( (v2 & 0x7Fu) - 34 <= 5 )
    return (unsigned int)sub_B75A50(v3, 0) == 965;
  return result;
}
