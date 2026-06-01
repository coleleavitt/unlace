__int64 __fastcall sub_81F070(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFF8LL) + 24);
  result = v1 + 80;
  if ( (*(_BYTE *)(v1 + 60) & 4) == 0 )
    return 0;
  return result;
}

