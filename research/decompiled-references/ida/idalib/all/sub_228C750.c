__int64 __fastcall sub_228C750(__int64 a1, int a2, int a3, size_t a4, __off_t a5, __int64 a6)
{
  int v8; // ecx
  int v9; // edx
  void *v10; // rax
  __int64 result; // rax
  __int64 v12; // r12

  *(_QWORD *)a1 = a4;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = a3;
  if ( a3 == 1 )
  {
    v8 = 16385;
    v9 = 3;
  }
  else
  {
    v8 = 16386;
    v9 = a3 == 0 ? 1 : 3;
  }
  v10 = mmap(nullptr, a4, v9, v8, a2, a5);
  *(_QWORD *)(a1 + 8) = v10;
  if ( v10 == (void *)-1LL )
  {
    v12 = std::_V2::generic_category(nullptr);
    result = (unsigned int)*__errno_location();
    *(_QWORD *)(a6 + 8) = v12;
    *(_DWORD *)a6 = result;
    if ( (_DWORD)result )
    {
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    result = std::_V2::system_category(nullptr);
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = result;
  }
  return result;
}
