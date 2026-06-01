bool __fastcall sub_278450(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 112);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 104) != 0;
  return result;
}
