unsigned __int64 __fastcall sub_6D3000(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
    return *(_QWORD *)result;
  return result;
}

