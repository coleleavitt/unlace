__int64 __fastcall compar(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 result; // rax
  int v5; // ecx

  v2 = a1[1];
  v3 = a2[1];
  if ( v3 != v2 )
    return v2 < v3 ? -1 : 1;
  v5 = *((_DWORD *)a2 + 4);
  result = 0;
  if ( *((_DWORD *)a1 + 4) != v5 )
    return 2 * (unsigned int)(*((_DWORD *)a1 + 4) >= v5) - 1;
  return result;
}
