_QWORD *__fastcall sub_12E9E90(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a2 + 168);
  result = a1;
  *a1 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 32);
  return result;
}
