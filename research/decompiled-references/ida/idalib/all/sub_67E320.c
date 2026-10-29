char __fastcall sub_67E320(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // r12
  char result; // al

  v2 = *(int *)(a1 + 16);
  if ( (int)v2 <= 0 )
    return strcasecmp(*(const char **)a1, a2) == 0;
  v3 = *(_QWORD **)(a1 + 24);
  v4 = &v3[v2];
  while ( 1 )
  {
    result = sub_67E320(*v3, a2);
    if ( result )
      break;
    if ( v4 == ++v3 )
      return strcasecmp(*(const char **)a1, a2) == 0;
  }
  return result;
}
