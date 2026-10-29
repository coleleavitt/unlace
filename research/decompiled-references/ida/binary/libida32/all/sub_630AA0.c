__int64 __fastcall sub_630AA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( !a2 )
    a2 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a2 + 64);
  result = 0xFFFFFFFFLL;
  if ( v2 && (*(_BYTE *)(v2 + 8) & 2) != 0 )
  {
    result = *(unsigned int *)(v2 + 48);
    if ( (_DWORD)result == 1 )
      return 0;
  }
  return result;
}

