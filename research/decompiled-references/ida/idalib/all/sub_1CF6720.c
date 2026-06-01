_QWORD *__fastcall sub_1CF6720(__int64 a1, _QWORD *a2, int a3, __int64 a4, __m128 a5, __m128 a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  __int64 v10; // [rsp+10h] [rbp-28h]
  unsigned int v11; // [rsp+18h] [rbp-20h]
  int v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+28h] [rbp-10h]

  if ( !a2 || (*(_BYTE *)(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) == 0 )
    return a2;
  v8 = a1;
  v12 = a3;
  v13 = a4;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v7 = sub_1CF6590((__int64)&v8, (__int64)a2, a5, a6);
  operator delete(v9, 16LL * v11, 8);
  return v7;
}
