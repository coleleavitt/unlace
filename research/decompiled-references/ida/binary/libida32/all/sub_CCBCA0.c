char __fastcall sub_CCBCA0(__int64 a1)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *(_QWORD *)(a1 + 32);
  result = (v1 != 0) & (*(_BYTE *)(a1 + 60) ^ 1);
  if ( result )
    return *(_BYTE *)(v1 + 648);
  return result;
}

