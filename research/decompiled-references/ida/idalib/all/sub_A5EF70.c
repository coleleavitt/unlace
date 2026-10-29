bool __fastcall sub_A5EF70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  bool result; // al

  v1 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v1 )
    return 0;
  v2 = v1;
  result = 0;
  if ( *(_BYTE *)(v2 + 16) == 16 )
    return *(_QWORD *)(v2 + 32) != 0;
  return result;
}
