void __fastcall sub_215E230(__int64 a1, __int64 a2)
{
  void *v2[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(
    v2,
    *(_QWORD *)(a1 + 16),
    *(unsigned int *)(a1 + 8));
  sub_227BF10(a2, v2[0], v2[1]);
  if ( v2[0] != &v3 )
    operator delete(v2[0]);
}
