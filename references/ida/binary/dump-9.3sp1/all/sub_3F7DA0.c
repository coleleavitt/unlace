__int64 __fastcall sub_3F7DA0(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r12
  unsigned int dtype_by_size; // r13d
  unsigned __int8 v7; // al

  result = a3;
  v4 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v4 + 84) == 8 && (_DWORD)result )
  {
    v5 = *(int *)(v4 + 80);
    if ( (int)result < v5 )
    {
      dtype_by_size = (unsigned __int8)get_dtype_by_size();
      v7 = get_dtype_by_size();
      sub_1D6840(a1, dtype_by_size, v7, a2, a2, 0);
      return (unsigned int)v5;
    }
  }
  return result;
}
