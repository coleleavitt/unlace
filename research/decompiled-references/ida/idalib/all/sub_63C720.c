__int64 __fastcall sub_63C720(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 1664);
  if ( *v1 )
  {
    result = sub_7BE350();
    *v1 = 0;
  }
  return result;
}
