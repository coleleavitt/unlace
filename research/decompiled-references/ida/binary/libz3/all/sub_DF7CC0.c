__int64 __fastcall sub_DF7CC0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 872);
  if ( !v1 )
    return 3;
  v2 = *(_DWORD *)(v1 + 52);
  result = 0;
  if ( v2 != -1 )
    return (unsigned int)(v2 != 1) + 1;
  return result;
}

