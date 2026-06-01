__int64 __fastcall sub_A0B050(__int64 a1, __int64 *a2)
{
  char v2; // dl
  __int64 result; // rax

  sub_A0B030((__int64 *)a1);
  v2 = a2[1] & 1;
  *(_BYTE *)(a1 + 8) = v2 | *(_BYTE *)(a1 + 8) & 0xFE;
  result = *a2;
  if ( v2 )
    *a2 = 0;
  *(_QWORD *)a1 = result;
  return result;
}
