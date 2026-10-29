__int64 __fastcall sub_50DD60(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  result = *(unsigned int *)(v2 + 64);
  if ( !(_DWORD)result || a2 )
  {
    result = sub_50CCA0(*(__int64 **)(a1 + 8));
    *(_DWORD *)(v2 + 64) = result;
  }
  return result;
}

