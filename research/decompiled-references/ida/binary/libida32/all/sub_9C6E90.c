__int64 __fastcall sub_9C6E90(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64, __int64); // r8
  _BOOL4 v4; // ecx
  __int64 v5; // rbp
  unsigned __int8 (__fastcall ***v6)(_QWORD, int *, __int64, __int64); // r12
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int8 (__fastcall *v9)(_QWORD, int *, __int64, __int64); // r13
  int v10; // eax
  int v11; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+8h] [rbp-60h]

  result = *(unsigned __int8 *)(a1 + 26);
  if ( !(_BYTE)result )
    return sub_BAC500();
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
  v4 = (*(_BYTE *)(a2 + 19) & 0x40) != 0;
  v5 = *(_QWORD *)(a2 + 8LL * (v4 + ((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFFu)) + 32);
  if ( v3 != sub_9C6270 )
    return v3(a1, *(_QWORD *)(a2 + 8LL * (v4 + ((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFFu)) + 32));
  if ( v5 )
  {
    v6 = *(unsigned __int8 (__fastcall ****)(_QWORD, int *, __int64, __int64))(a1 + 16);
    v7 = *(_QWORD *)(a1 + 40);
    v8 = *(_QWORD *)(a1 + 32);
    v9 = **v6;
    v10 = sub_AD6A60(*(_QWORD *)(a2 + 8LL * (v4 + ((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFFu)) + 32));
    v12 = v5;
    v11 = v10;
    if ( !v9(v6, &v11, v8, v7) )
      return sub_BA5AA0(a1, v5);
    result = *(unsigned __int8 *)(a1 + 24);
    *(_BYTE *)(a1 + 25) = 1;
    if ( (_BYTE)result )
      return sub_BA5AA0(a1, v5);
  }
  return result;
}

