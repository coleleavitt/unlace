__int64 __fastcall sub_B74600(__int64 a1)
{
  __int64 *v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = (__int64 *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 56) & 4) != 0 )
    v1 = (__int64 *)v1[4];
  if ( v1 )
    result = *v1;
  else
    result = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v3 + 16) == 1 )
    return *(_QWORD *)(v3 + 32);
  return result;
}
