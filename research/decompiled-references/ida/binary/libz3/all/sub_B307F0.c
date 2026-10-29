__int64 __fastcall sub_B307F0(_DWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // eax

  result = *(_QWORD *)(*(_QWORD *)(*a2 + 16LL) + 24LL);
  if ( result )
  {
    v3 = a1[2];
    if ( v3 == *(_DWORD *)result )
    {
      result = *(unsigned int *)(result + 4);
      if ( !(_DWORD)result )
      {
        v4 = sub_B39350(a2[14], v3);
        return (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 392LL))(a1, v4);
      }
    }
  }
  return result;
}

