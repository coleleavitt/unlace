__int64 __fastcall sub_15F3040(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v1 )
    return 0;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v1 - 8);
  if ( (*(_BYTE *)(result + 8) & 7) != 3 )
    return 0;
  return result;
}
