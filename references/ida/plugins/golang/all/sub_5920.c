__int64 __fastcall sub_5920(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rax

  v1 = *a1;
  if ( (unsigned __int64)a1[2] <= 6 )
  {
    v3 = qvector_reserve();
    *a1 = v3;
    v1 = v3;
  }
  a1[1] = 7;
  *(_DWORD *)v1 = 1931812865;
  *(_WORD *)(v1 + 4) = 8194;
  result = *a1;
  *(_BYTE *)(*a1 + 6) = 0;
  return result;
}
