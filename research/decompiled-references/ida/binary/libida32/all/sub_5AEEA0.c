__int64 __fastcall sub_5AEEA0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int *v3; // rax
  __int64 result; // rax

  if ( !a2 || a3 == -1 )
    return 0xFFFFFFFFLL;
  if ( a3 < *(_DWORD *)a2 || (result = 0, a3 >= *(_DWORD *)(a2 + 4)) )
  {
    v3 = sub_5AE770(a1, a2, a3);
    if ( v3 )
      return (unsigned int)(((__int64)v3 - *(_QWORD *)(a2 + 112)) >> 3) + 1;
    else
      return 0xFFFFFFFFLL;
  }
  return result;
}

