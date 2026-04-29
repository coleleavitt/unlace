__int64 *__fastcall sub_146670(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v8; // rdi
  __int64 v10; // [rsp-10h] [rbp-48h]

  sub_1458B0(a1, a2, a3, a5, nullptr, 0, a6, 9);
  v8 = *a1;
  if ( *a1 )
  {
    sub_261C20(v8, a4, v10);
    *(_DWORD *)(a2 + 1004) = time(nullptr);
  }
  return a1;
}
