__int64 __fastcall sub_2128D50(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 200LL))(v2, a2, &v4);
}
