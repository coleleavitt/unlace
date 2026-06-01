__int64 __fastcall sub_8C5430(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rax
  unsigned __int64 v7; // [rsp+0h] [rbp-10h] BYREF

  result = *(_QWORD *)(a1 + 8LL * *(unsigned __int16 *)(a1 + 4) + 32);
  if ( result )
  {
    if ( (*(_WORD *)result & 0x1FF) == 0xF4 )
      return *(_QWORD *)(result + 16);
  }
  else
  {
    v3 = sub_B0E910(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v4 = (_QWORD *)sub_7A3750(v3);
    v5 = *(__int64 (__fastcall **)(__int64))(*v4 + 64LL);
    if ( v5 == sub_5F7E00 )
      v6 = sub_78BC30(v4, &v7);
    else
      v6 = v5((__int64)v4);
    *(_QWORD *)(a1 + 8LL * *(unsigned __int16 *)(a1 + 4) + 32) = v6;
    result = *(_QWORD *)(a1 + 8LL * *(unsigned __int16 *)(a1 + 4) + 32);
    if ( (*(_WORD *)result & 0x1FF) == 0xF4 )
      return *(_QWORD *)(result + 16);
  }
  return result;
}

