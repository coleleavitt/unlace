__int64 __fastcall sub_B61BA0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int *v3; // rdx
  int v4; // ecx
  __int64 result; // rax
  unsigned __int64 v6; // rax

  v1 = *a1;
  v2 = *a1 & 7;
  if ( (_DWORD)v2 == 7 )
  {
    v3 = (int *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
    LOBYTE(v4) = 3;
    if ( (unsigned int)*v3 <= 3 )
      v4 = *v3;
    result = 0;
    if ( ((1LL << ((unsigned __int8)v4 + 8)) & 0xF47) == 0 )
    {
      v6 = a1[2];
      if ( v6 )
        return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
      return *(_BYTE *)(*(_QWORD *)v6 + 17LL) & 1;
    }
  }
  else
  {
    result = 0;
    if ( ((1LL << v2) & 0xF47) == 0 )
    {
      v6 = a1[2];
      if ( v6 )
        return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
      if ( (unsigned int)(v2 - 3) <= 2 )
        v6 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL;
      return *(_BYTE *)(*(_QWORD *)v6 + 17LL) & 1;
    }
  }
  return result;
}

