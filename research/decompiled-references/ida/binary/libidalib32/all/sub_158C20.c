const char *__fastcall sub_158C20(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // edx
  const char *v5; // rcx

  v1 = *(_QWORD *)(a1 + 600);
  if ( !v1 )
    return nullptr;
  v2 = *(_QWORD *)(a1 + 592);
  v3 = v2 + 72 * v1;
  if ( v2 == v3 )
    return nullptr;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 64);
    if ( (v4 & 4) == 0 )
      break;
    v2 += 72;
    if ( v3 == v2 )
      return nullptr;
  }
  v5 = nullptr;
  if ( v2 && (v4 & 2) != 0 && (v5 = s1, *(_QWORD *)(v2 + 40)) )
    return *(const char **)(v2 + 32);
  else
    return v5;
}

