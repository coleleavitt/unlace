_QWORD *__fastcall sub_1180B30(_QWORD *a1, __int64 a2)
{
  *a1 = a1 + 2;
  a1[1] = 0x100000000LL;
  if ( *(_DWORD *)(a2 + 5032) )
    sub_CEFB80((__int64)a1, a2 + 5024);
  return a1;
}
