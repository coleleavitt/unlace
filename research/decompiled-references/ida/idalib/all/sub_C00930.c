__int64 __fastcall sub_C00930(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( (v1 & 1) != 0 )
    return v1 & 0xFFFFFFFFFFFFFFFELL;
  v2 = *(_QWORD *)(v1 + 40);
  result = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v2 & 7) != 0 )
    return *(_QWORD *)(a1 + 8) & 1LL;
  return result;
}
