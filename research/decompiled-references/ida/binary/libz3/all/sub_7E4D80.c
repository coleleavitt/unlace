__int64 __fastcall sub_7E4D80(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  __int64 result; // rax
  __int64 (__fastcall *v5)(__int64, int); // rax
  __int64 v6; // rcx
  unsigned int v7; // edx

  v2 = *(_DWORD *)(a1 + 104);
  v3 = a2;
  if ( v2 <= a2 )
    v3 = *(_DWORD *)(a1 + 104);
  result = v2 - v3;
  *(_DWORD *)(a1 + 104) = result;
  if ( a2 != v3 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 520LL);
    if ( v5 == sub_7E4990 )
    {
      result = *(_QWORD *)(a1 + 96);
      v6 = *(_QWORD *)(a1 + 88);
      if ( result )
      {
        v7 = *(_DWORD *)(result - 4) + v3 - a2;
        if ( v6 )
          *(_DWORD *)(v6 - 4) = *(_DWORD *)(result + 4LL * v7);
        *(_DWORD *)(result - 4) = v7;
      }
      else if ( v6 )
      {
        result = *(unsigned int *)(4LL * (v3 - a2));
        *(_DWORD *)(v6 - 4) = result;
      }
    }
    else
    {
      return v5(a1, a2 - v3);
    }
  }
  return result;
}

