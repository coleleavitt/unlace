__int64 __fastcall sub_F46B30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8

  result = sub_F46990(a1, a2, a3, a4, a5);
  if ( !result )
    return 0;
  while ( (*(_BYTE *)(result + 18) & 8) != 0 )
  {
    result = sub_F46990(
               *(_QWORD *)(*(_QWORD *)(result + 24LL * *(unsigned int *)(result + 20) + 48) & 0xFFFFFFFFFFFFFFF0LL),
               a2,
               3LL * *(unsigned int *)(result + 20),
               v6,
               v7);
    if ( !result )
      return 0;
  }
  return result;
}

