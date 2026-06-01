__int64 __fastcall sub_1440F80(__int64 *a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // eax
  __int64 result; // rax
  const char *v5; // rax

  v2 = (_DWORD *)sub_1440A00(a2, *a1);
  if ( !v2 )
    return 0;
  v3 = (unsigned __int16)(*v2 >> 9);
  if ( v3 <= 35 || v3 == 65534 )
    return 0;
  result = (unsigned int)(v3 - 36);
  if ( (_DWORD)result )
  {
    v5 = (const char *)sub_FBD4B0(*(__int64 **)(*a1 + 688), result);
    return strchr(v5, 69) != nullptr;
  }
  return result;
}
