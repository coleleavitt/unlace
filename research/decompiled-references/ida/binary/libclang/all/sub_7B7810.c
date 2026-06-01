__int64 __fastcall sub_7B7810(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a1 + 80);
  v2 = sub_798D40(a1);
  v6[0] = sub_B0FEA0(&v5, v2);
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v3 = (_QWORD *)*v3;
  return sub_B12F10(v6, a2, v3, 1);
}

