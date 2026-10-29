__int64 __fastcall sub_791E70(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *a1;
  v2 = *a1 & 7;
  if ( (_DWORD)v2 == 7 )
    return *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 24);
  if ( (_DWORD)v2 == 6 )
    return *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  return *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 16);
}

