int *__fastcall sub_B25700(__int64 a1, int a2, _DWORD *a3)
{
  int *result; // rax
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  int v6; // [rsp+10h] [rbp-28h] BYREF
  void *v7; // [rsp+18h] [rbp-20h]
  void *v8; // [rsp+20h] [rbp-18h]

  v4 = a1;
  v5 = a2;
  v7 = nullptr;
  v8 = nullptr;
  result = sub_B246F0((__int64)&v4, (__int64)&v6, a3);
  if ( v8 )
    return (int *)sub_186B220(v8);
  return result;
}

