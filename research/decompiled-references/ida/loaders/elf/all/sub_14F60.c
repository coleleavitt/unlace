__int64 __fastcall sub_14F60(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_WORD *)(a2 + 16) == 0xFFA0 )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_QWORD *)(a2 + 24) == 0xFFFFFFFFLL )
      *(_QWORD *)(a2 + 24) = 0;
  }
  return result;
}

