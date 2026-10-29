_QWORD *__fastcall sub_2222F10(__int64 a1, char a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  v2 = (unsigned int)(1 << a2);
  *(_DWORD *)(a1 + 8) = v2;
  result = calloc((unsigned int)(v2 + 1), 8u);
  if ( !result && ((_DWORD)v2 != -1 || (result = malloc(1u)) == nullptr) )
    sub_2221CE0("Allocation failed", 1u);
  result[v2] = -1;
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
