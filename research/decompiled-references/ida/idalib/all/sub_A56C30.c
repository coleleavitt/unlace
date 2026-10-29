__int64 __fastcall sub_A56C30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 <= 2 )
  {
    v3 = *(_QWORD *)(a2 + 128);
    if ( v3 )
    {
      if ( (*(_BYTE *)(v3 + 10) & 0x20) != 0 )
        return (unsigned int)sub_B97150(a2) + 1;
    }
  }
  return result;
}
