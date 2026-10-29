__int64 __fastcall sub_4409E0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  bool v3; // zf

  if ( *(_DWORD *)(a1 + 8) != -1 )
  {
    *(_DWORD *)(a1 + 8) = -1;
    v1 = *(_QWORD *)(a1 + 16);
    result = (unsigned int)(*(_DWORD *)(v1 + 108) - 1);
    v3 = *(_DWORD *)(v1 + 108) == 1;
    *(_DWORD *)(v1 + 108) = result;
    if ( (int)result < 0 || v3 )
      return sub_43F6D0(v1);
  }
  return result;
}

