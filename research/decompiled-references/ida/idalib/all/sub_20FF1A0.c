_DWORD *__fastcall sub_20FF1A0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  _DWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 280);
  if ( a2 >= 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 288) - v2) >> 4) )
    return nullptr;
  result = (_DWORD *)(v2 + 48LL * a2);
  if ( !*result )
    return nullptr;
  return result;
}
