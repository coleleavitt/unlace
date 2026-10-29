__int64 *__fastcall sub_14A7A0(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v8; // rdi
  __int64 v10; // [rsp-10h] [rbp-48h]

  sub_1499E0(a1, a2, a3, a5, 0, 0, a6, 9);
  v8 = *a1;
  if ( *a1 )
  {
    sub_2662B0(v8, a4, v10);
    *(_DWORD *)(a2 + 996) = time(0);
  }
  return a1;
}
