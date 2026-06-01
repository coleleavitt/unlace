__int64 __fastcall sub_8B86E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  bool (__fastcall *v9)(__int64, __int64, int); // rax

  while ( --a4 >= 0 )
  {
    v7 = *(_DWORD **)(a1 + 8);
    v8 = *(unsigned int *)(a3 + 4 * a4);
    v9 = *(bool (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v7 + 24LL);
    if ( v9 == sub_8B84F0 )
    {
      if ( (_DWORD)v8 == v7[2] )
        return a4;
    }
    else if ( v9((__int64)v7, a2 + a4, v8) )
    {
      return a4;
    }
  }
  return a4;
}
