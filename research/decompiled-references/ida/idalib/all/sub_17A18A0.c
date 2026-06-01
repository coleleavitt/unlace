_QWORD *__fastcall sub_17A18A0(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *result; // rax

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 8LL * *((unsigned int *)a1 + 2) - 8);
  v4 = (unsigned int)(*((_DWORD *)a1 + 2) - 1);
  *((_DWORD *)a1 + 2) = v4;
  result = (_QWORD *)(v2 + 8 * v4);
  if ( a2 != result )
    *a2 = v3;
  return result;
}
