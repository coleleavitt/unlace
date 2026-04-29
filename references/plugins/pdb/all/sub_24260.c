_QWORD *__fastcall sub_24260(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx

  result = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * *(int *)(a2 + 48));
  *a1 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  return result;
}
