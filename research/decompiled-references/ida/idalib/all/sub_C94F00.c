__int64 __fastcall sub_C94F00(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 (__fastcall *v6)(__int64); // rdx
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-10h] BYREF

  result = *(_QWORD *)(a1 + 8LL * *(unsigned __int16 *)(a1 + 4) + 32);
  if ( result )
  {
    if ( (*(_WORD *)result & 0x1FF) == 0xF6 )
      return *(_QWORD *)(result + 16);
  }
  else
  {
    v2 = sub_F63270(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v3 = (_QWORD *)sub_B96F60(v2);
    v6 = *(__int64 (__fastcall **)(__int64))(*v3 + 64LL);
    if ( v6 == sub_6EF210 )
      v7 = sub_B7F750(v3, &v8, (__int64)v6, (__int64)sub_6EF210, v4, v5);
    else
      v7 = v6((__int64)v3);
    *(_QWORD *)(a1 + 8LL * *(unsigned __int16 *)(a1 + 4) + 32) = v7;
    result = *(_QWORD *)(a1 + 8LL * *(unsigned __int16 *)(a1 + 4) + 32);
    if ( (*(_WORD *)result & 0x1FF) == 0xF6 )
      return *(_QWORD *)(result + 16);
  }
  return result;
}
