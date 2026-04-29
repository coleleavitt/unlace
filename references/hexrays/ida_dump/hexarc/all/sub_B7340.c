__int64 __fastcall sub_B7340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // edx
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-78h] BYREF
  char v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  unsigned __int64 v14; // [rsp+58h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v8[0] = &off_4A8998;
  v10 = a1;
  v11 = a1 + 64;
  memset(&v8[1], 0, 32);
  v9 = 0;
  v12 = a1 + 16;
  v13 = 0;
  v6 = sub_118240(a2, v8, a3, a4, a5, a6);
  result = 0;
  if ( !v6 )
  {
    sub_1555B0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), 0, 0, 0, 0, 0);
    return 1;
  }
  return result;
}
