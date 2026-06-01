__int64 __fastcall sub_2136290(__int64 a1)
{
  bool v1; // zf
  unsigned int v2; // r12d
  __m128i *v4; // rax
  _DWORD v5[8]; // [rsp+0h] [rbp-58h] BYREF
  void *v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-30h]
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_BYTE *)(a1 + 861) == 0;
  v8[0] = 0;
  v7 = nullptr;
  v6 = v8;
  if ( v1 && (unsigned __int8)sub_2129170(a1) || (v2 = sub_2135140(a1, &v6), (_BYTE)v2) )
  {
    v2 = 1;
  }
  else
  {
    v4 = sub_2102F60(*(_QWORD *)(a1 + 16));
    sub_20FFD30((__int64)v5, (__int64)v4, (__int64 *)v6, v7);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 536LL))(*(_QWORD *)(a1 + 24), v5[4], 4);
  }
  if ( v6 != v8 )
    operator delete(v6);
  return v2;
}
