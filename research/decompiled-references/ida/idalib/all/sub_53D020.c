__int64 __fastcall sub_53D020(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12

  if ( a2 <= 0xFF )
    return 0;
  v3 = sub_5340D0((__int64)a1, a2);
  if ( (~*(_BYTE *)(v3 + 68) & 0x70) == 0 )
  {
    result = *(unsigned __int8 *)(v3 + 71);
    if ( (_BYTE)result )
      return result;
    v3 = sub_534260((__int64)a1, a2);
  }
  if ( v3 && sub_53CE30(v3, *a1, a2, 1) )
    return *(unsigned __int8 *)(v3 + 71);
  else
    return 0;
}
