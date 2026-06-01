__int64 __fastcall sub_F38670(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *a1;
  v2 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v2 + 16) == 38 )
    return *(_QWORD *)(v2 + 32);
  return result;
}

