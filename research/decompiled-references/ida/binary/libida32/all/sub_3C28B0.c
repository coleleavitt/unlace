__int64 __fastcall sub_3C28B0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1529) )
  {
    result = sub_4EF9B0(*(_QWORD *)(a1 + 1400), a1 + 1360);
    *(_BYTE *)(a1 + 1529) = 0;
  }
  return result;
}

