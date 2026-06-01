__int64 __fastcall sub_524350(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12

  if ( a2 <= 0xFF )
    return 0;
  v3 = sub_51B750((__int64)a1, a2);
  if ( (~*(_BYTE *)(v3 + 68) & 0x70) == 0 )
  {
    result = *(unsigned __int8 *)(v3 + 71);
    if ( (_BYTE)result )
      return result;
    v3 = sub_51B8E0((__int64)a1, a2);
  }
  if ( v3 && sub_524160(v3, *a1, a2, 1) )
    return *(unsigned __int8 *)(v3 + 71);
  else
    return 0;
}

