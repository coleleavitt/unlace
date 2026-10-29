_QWORD *__fastcall sub_399250(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a2 + 56);
  v3 = *(_QWORD *)(a2 + 336);
  result = a1;
  *a1 = v3;
  a1[1] = v2;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  return result;
}

