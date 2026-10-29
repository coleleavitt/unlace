__int64 __fastcall sub_7C7D40(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r13
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v8[0] = 0;
  sub_7C7230(a1, a2, v8);
  v4 = v8[0];
  result = sub_7C7B20(a1, a2, v8, a3, v5, v6);
  if ( v4 )
    return sub_186B220((void *)(v4 - 8));
  return result;
}

