__int64 __fastcall sub_B73FA0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 result; // rax

  v1 = (__int64 *)sub_B73ED0(a1);
  if ( v1 )
    return ((unsigned int)(*v1 >> 1) & 3) + 1;
  result = 0;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 41 <= 1 )
    return *(_BYTE *)(a1 + 140) & 7;
  return result;
}
