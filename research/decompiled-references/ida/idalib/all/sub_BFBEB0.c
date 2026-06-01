__int64 __fastcall sub_BFBEB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  result = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( result && (*(_BYTE *)(result + 28) & 0x7Fu) - 35 <= 3 && *(char *)(result + 82) < 0 )
    return sub_BFCF90(v4, v3);
  *(_BYTE *)(v4 + 8) = 1;
  return result;
}
