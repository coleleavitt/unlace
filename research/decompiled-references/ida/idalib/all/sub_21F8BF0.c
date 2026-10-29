__int64 __fastcall sub_21F8BF0(_DWORD *a1, int a2)
{
  void *v3; // rdi
  __int64 result; // rax

  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
    v3 = *((void **)a1 + 1);
  else
    v3 = a1 + 2;
  result = sub_220A060(v3);
  a1[4] -= a2;
  return result;
}
