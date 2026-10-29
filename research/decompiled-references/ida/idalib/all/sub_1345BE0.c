void __fastcall sub_1345BE0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-40h]
  _QWORD v9[2]; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(unsigned int *)(a3 + 8);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v8 = a5;
    sub_2237220(a3, a3 + 16, v7 + 1, 8);
    v7 = *(unsigned int *)(a3 + 8);
    a5 = v8;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = "-cc1";
  ++*(_DWORD *)(a3 + 8);
  v9[0] = a4;
  v10[0] = a3;
  v9[1] = a5;
  v10[1] = v9;
  sub_1345270(a2, (void (__fastcall *)(__int64, __m128i *))sub_12FE870, (__int64)v10);
}
