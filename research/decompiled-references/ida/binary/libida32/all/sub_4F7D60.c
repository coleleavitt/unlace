unsigned int *__fastcall sub_4F7D60(__int64 a1, unsigned int a2)
{
  unsigned int *result; // rax
  int v3; // edx
  __int64 v4; // r9
  unsigned int *v5; // r10
  unsigned int *dest; // [rsp+8h] [rbp-10h]

  result = sub_4F5910(*(_DWORD **)(a1 + 16), *(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24), a2);
  if ( result != v5 && *result == v3 )
  {
    dest = result;
    sub_4F6210(((__int64)result - v4) >> 3, result, nullptr, 0x7Cu);
    result = (unsigned int *)memmove(
                               dest,
                               dest + 2,
                               *(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - (_QWORD)dest - 8);
    --*(_QWORD *)(a1 + 24);
  }
  return result;
}

