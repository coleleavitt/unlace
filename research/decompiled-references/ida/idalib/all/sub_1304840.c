volatile signed __int32 **__fastcall sub_1304840(volatile signed __int32 **a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v9; // [rsp+0h] [rbp-28h] BYREF
  volatile signed __int32 *v10; // [rsp+8h] [rbp-20h] BYREF

  sub_22603D0(&v9);
  v5 = v9;
  v9 = nullptr;
  v10 = v5;
  sub_1304620(
    a1,
    *(__int64 **)(*(_QWORD *)(a2 + 48) + 600LL),
    (__int64)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 608LL) - *(_QWORD *)(*(_QWORD *)(a2 + 48) + 600LL)) >> 5,
    a3,
    &v10);
  v6 = v10;
  if ( v10 && !_InterlockedSub(v10 + 2, 1u) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = v9;
  if ( !v9 || _InterlockedSub(v9 + 2, 1u) )
    return a1;
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  return a1;
}
