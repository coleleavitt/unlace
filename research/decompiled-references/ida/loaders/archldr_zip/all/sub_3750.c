__int64 __fastcall sub_3750(
        __int64 a1,
        __int64 (__fastcall **a2)(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5),
        __int64 (__fastcall **a3)(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5))
{
  __int64 (__fastcall **v5[7])(__int64, __int64, __int64, __int64, void *); // [rsp+0h] [rbp-38h] BYREF

  v5[3] = (__int64 (__fastcall **)(__int64, __int64, __int64, __int64, void *))__readfsqword(0x28u);
  qlseek(a1, 8, 0);
  v5[1] = a2;
  v5[0] = (__int64 (__fastcall **)(__int64, __int64, __int64, __int64, void *))&off_78D8;
  v5[2] = a3;
  return sub_3030(a1, v5, -1);
}

