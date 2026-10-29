__int64 __fastcall sub_10F60(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  bool v3; // zf
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 - 1;
  v3 = v1 == 0;
  result = 0;
  if ( !v3 )
    return v2;
  return result;
}

