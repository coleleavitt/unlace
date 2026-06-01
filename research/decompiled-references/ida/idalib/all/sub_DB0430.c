_DWORD *__fastcall sub_DB0430(_QWORD *a1, _QWORD *a2, int a3, int a4, char a5, __int64 a6)
{
  unsigned __int64 v7; // rdx
  __int64 v10; // rax
  __int64 *v11; // rbx
  unsigned __int64 v13[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = 2;
  if ( (*a2 & 2) != 0 )
    v7 = *a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v13[0] = v7;
  a1[13] += 88LL;
  v10 = a1[3];
  v11 = (__int64 *)((v10 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a1[4] >= (unsigned __int64)(v11 + 11) && v10 )
    a1[3] = v11 + 11;
  else
    v11 = (__int64 *)sub_986170((__int64)(a1 + 3), 88, 88, 4, 0x100000010LL, a6);
  sub_CEF340((__int64)v11, (__int64 *)v13, 0, (__int64)a2, 0x100000010LL, a3, 0, 0, 0);
  return sub_DAF690((__int64)a1, v11, a4, a5);
}
