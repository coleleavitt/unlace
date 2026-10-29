__int64 __fastcall sub_B9AE60(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_DWORD *)(v1 + 28);
  result = v1 + 32;
  if ( !v2 )
    return 0;
  return result;
}
