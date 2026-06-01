__int64 __fastcall sub_8B8660(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  _DWORD *v8; // rdi
  __int64 v9; // rdx
  bool (__fastcall *v10)(__int64, __int64, int); // rax

  if ( a4 > 0 )
  {
    for ( i = 0; a4 != i; ++i )
    {
      v8 = *(_DWORD **)(a1 + 8);
      v9 = *(unsigned int *)(a3 + 4 * i);
      v10 = *(bool (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v8 + 24LL);
      if ( v10 == sub_8B84F0 )
      {
        if ( (_DWORD)v9 == v8[2] )
          return i;
      }
      else if ( v10((__int64)v8, a2 + i, v9) )
      {
        return i;
      }
    }
  }
  return -1;
}
