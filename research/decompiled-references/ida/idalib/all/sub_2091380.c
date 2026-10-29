__int64 __fastcall sub_2091380(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  char v4; // [rsp+10h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32 * (2LL - (*(_DWORD *)(a1 + 4) & 0x7FFFFFF)));
  sub_206DED0((__int64)&v3, *(_QWORD *)(*(_QWORD *)(v1 + 24) + 16LL), *(_QWORD *)(*(_QWORD *)(v1 + 24) + 24LL));
  if ( v4 )
    return v3;
  else
    return sub_206D9B0(*(_QWORD *)(*(_QWORD *)(a1 + 32 * (1LL - (*(_DWORD *)(a1 + 4) & 0x7FFFFFF))) + 24LL));
}
