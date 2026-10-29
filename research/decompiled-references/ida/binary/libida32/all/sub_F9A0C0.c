__int64 __fastcall sub_F9A0C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // edx
  void *ptr[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars10; // [rsp+10h] [rbp+10h] BYREF

  (*(void (__fastcall **)(void **))(*(_QWORD *)a2 + 272LL))(ptr);
  sub_F99F40((char ***)(a1 + 56), (char ***)ptr);
  if ( ptr[0] != &vars10 )
    free(ptr[0]);
  result = *(_QWORD *)(a1 + 56);
  v5 = result + 40LL * *(unsigned int *)(a1 + 64);
  if ( v5 != result )
  {
    v6 = *(_DWORD *)(a1 + 168);
    do
    {
      v6 += *(_DWORD *)(result + 16);
      result += 40;
      *(_DWORD *)(a1 + 168) = v6;
    }
    while ( v5 != result );
  }
  if ( a3 )
  {
    (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a3 + 272LL))(ptr, a3);
    sub_F99F40((char ***)(a1 + 112), (char ***)ptr);
    if ( ptr[0] != ptr )
      free(ptr[0]);
    result = *(_QWORD *)(a1 + 112);
    v7 = result + 40LL * *(unsigned int *)(a1 + 120);
    if ( result != v7 )
    {
      v8 = *(_DWORD *)(a1 + 172);
      do
      {
        v8 += *(_DWORD *)(result + 16);
        result += 40;
        *(_DWORD *)(a1 + 172) = v8;
      }
      while ( result != v7 );
    }
  }
  return result;
}

