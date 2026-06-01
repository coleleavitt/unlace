__int64 __fastcall sub_50DD90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 1592);
  result = *(unsigned int *)(v2 + 64);
  if ( !(_DWORD)result )
  {
    result = sub_50CCA0(*(__int64 **)(a2 + 1592));
    *(_DWORD *)(v2 + 64) = result;
  }
  return result;
}

