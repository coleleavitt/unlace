__int64 __fastcall sub_9B5690(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    if ( (*(_BYTE *)(a2 + 43) & 0x10) != 0 )
    {
      do
      {
        *(_BYTE *)(v2 + 43) &= ~0x10u;
        result = sub_9B5690(a1, *(_QWORD *)(v2 + 8));
        v2 = *(_QWORD *)(v2 + 16);
      }
      while ( v2 && (*(_BYTE *)(v2 + 43) & 0x10) != 0 );
    }
  }
  return result;
}
