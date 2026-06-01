void *__fastcall sub_8BC9B0(__int64 a1, __int64 a2)
{
  int *v2; // rax
  int *v3; // r13
  void *result; // rax

  if ( qseek(*(unsigned int *)(a1 + 16), *(_QWORD *)a1 * *(unsigned int *)(a2 + 24), 0) == -1 )
    off_2C820C0(a1, "Seeking", *(_DWORD *)(a2 + 24));
  v2 = __errno_location();
  *v2 = 0;
  v3 = v2;
  result = (void *)qread(*(unsigned int *)(a1 + 16), a2 + 30, *(_QWORD *)a1);
  if ( (int)result != *(_QWORD *)a1 )
  {
    if ( *v3 )
      off_2C820C0(a1, "Reading", *(_DWORD *)(a2 + 24));
    return memset((void *)(a2 + (int)result + 30), 0, *(_QWORD *)a1 - (int)result);
  }
  return result;
}
