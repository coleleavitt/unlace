bool __fastcall sub_B7F990(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  bool result; // al
  __int64 v10; // rax
  _QWORD v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(__int64 (__fastcall **)(__int64))(*a1 + 64LL);
  if ( v6 == sub_6EF210 )
  {
    if ( (unsigned __int8)sub_B7F5F0(a1, v11, (__int64)sub_6EF210, a4, a5, a6) )
    {
      v7 = v11[0];
      if ( (*(_BYTE *)(v11[0] + 128LL) & 1) != 0 )
      {
        v10 = sub_B8C330(a1);
        *(_QWORD *)(v7 + 128) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 18360) + 40LL))(
                                  *(_QWORD *)(v10 + 18360),
                                  *(_QWORD *)(v7 + 128) >> 1);
        goto LABEL_5;
      }
      if ( *(_QWORD *)(v11[0] + 128LL) )
      {
LABEL_5:
        v8 = *(_QWORD *)(v7 + 128);
        goto LABEL_6;
      }
    }
    return 0;
  }
  v8 = ((__int64 (*)(void))v6)();
LABEL_6:
  if ( !v8 )
    return 0;
  result = 0;
  if ( (*(_WORD *)v8 & 0x1FF) == 0xF9 )
    return *(_DWORD *)(v8 + 4) == 0;
  return result;
}
