char *__fastcall sub_50F4D0(__int64 a1, unsigned __int64 a2)
{
  char *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r10
  char *v5; // r9
  char *dest; // [rsp+8h] [rbp-10h]

  result = (char *)sub_50D020(*(_QWORD **)(a1 + 24), *(_QWORD *)(a1 + 24) + 16LL * *(_QWORD *)(a1 + 32), a2);
  if ( result != v5 && *(_QWORD *)result == v3 )
  {
    dest = result;
    sub_50D950((__int64)&result[-v4] >> 4, result, nullptr, 0x7Cu);
    result = (char *)memmove(dest, dest + 16, *(_QWORD *)(a1 + 24) + 16LL * *(_QWORD *)(a1 + 32) - (_QWORD)dest - 16);
    --*(_QWORD *)(a1 + 32);
  }
  return result;
}
