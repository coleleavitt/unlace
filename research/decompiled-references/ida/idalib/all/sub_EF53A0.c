__int16 __fastcall sub_EF53A0(__int64 a1)
{
  __int16 v1; // dx
  __int16 result; // ax
  __int64 v3; // rdx

  v1 = *(_WORD *)a1 & 0x1FF;
  result = (v1 + 342) & 0x1FF;
  LOBYTE(result) = v1 == 166 || (unsigned __int16)result <= 1u;
  if ( !(_BYTE)result )
  {
    v3 = *(_QWORD *)(a1 + 24);
    result = 1;
    if ( v3 )
      return *(unsigned __int8 *)(v3 + 8) ^ 1;
  }
  return result;
}
