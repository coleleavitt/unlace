__int64 __fastcall sub_1365A40(_DWORD **a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
  {
    if ( v1[2]-- == 1 )
      return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return result;
}
