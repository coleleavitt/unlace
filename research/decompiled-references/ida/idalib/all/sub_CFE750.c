__int64 __fastcall sub_CFE750(__int64 a1)
{
  int v1; // eax
  char v2; // dl
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 == 1 )
    return *(_QWORD *)(a1 + 40) + *(_QWORD *)a1;
  if ( v1 == 3 )
    return *(_QWORD *)(a1 + 32) + *(_QWORD *)a1;
  v2 = sub_CFE6D0(a1);
  result = 0xFFFFFFFFLL;
  if ( !v2 )
    return *(_QWORD *)a1;
  return result;
}
