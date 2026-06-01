unsigned __int64 __fastcall sub_6C1F40(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdi
  _DWORD *v10; // rdi
  int v11; // edx

  v7 = *a1;
  result = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) == 0 )
  {
    if ( result <= 3 || (v7 & 2) == 0 )
      return result;
    v9 = sub_6C1EC0((_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL), a2, a3, a4, a5, a6);
    result = v9 & 0xFFFFFFFFFFFFFFFELL;
    v7 = v9 | 1;
    *a1 = v7;
  }
  if ( result )
  {
    if ( (result & 4) != 0 )
    {
      v10 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v10 )
      {
        result = *(_QWORD *)v10;
        v11 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
        if ( v10[2] != v11 )
        {
          v10[2] = v11;
          return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)result + 152LL))(result, a2);
        }
      }
    }
  }
  return result;
}

