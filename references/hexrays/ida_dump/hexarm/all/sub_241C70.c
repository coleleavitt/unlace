__int64 __fastcall sub_241C70(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbp
  int v3; // eax
  __int64 v4; // r12
  int v5; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 != 1 && (unsigned int)(v1 - 17) > 1 )
    return *(_QWORD *)a1;
  if ( (v2 = *(_QWORD *)(a1 + 32), v3 = *(_DWORD *)(v2 + 8), v3 != 1) && (unsigned int)(v3 - 17) > 1
    || ((v4 = *(_QWORD *)(v2 + 32), v5 = *(_DWORD *)(v4 + 8), v5 != 1) && (unsigned int)(v5 - 17) > 1
     || (result = sub_241C70(*(_QWORD *)(v4 + 32)), result == -1))
    && (result = *(_QWORD *)v4, *(_QWORD *)v4 == -1) )
  {
    result = *(_QWORD *)v2;
    if ( *(_QWORD *)v2 == -1 )
      return *(_QWORD *)a1;
  }
  return result;
}
