__int64 __fastcall sub_43C4D0(__int64 a1)
{
  int v1; // r13d
  size_t v2; // r12
  int v3; // eax
  __int64 result; // rax
  void *v5; // rbx

  v1 = 2 * *(_DWORD *)(a1 + 12) + 2;
  v2 = 16LL * *(int *)(a1 + 8);
  v3 = 16 * v1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    result = sub_40FC10(*(void **)a1, v3);
    *(_QWORD *)a1 = result;
  }
  else
  {
    v5 = (void *)sub_40FB00(v3);
    result = (__int64)memcpy(v5, *(const void **)a1, v2);
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 16) = 1;
  }
  *(_DWORD *)(a1 + 12) = v1;
  return result;
}

