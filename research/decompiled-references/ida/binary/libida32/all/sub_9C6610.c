__int64 __fastcall sub_9C6610(__int64 a1, __int64 a2)
{
  unsigned __int8 (__fastcall ***v2)(_QWORD, int *, __int64, __int64); // r12
  __int64 v3; // r15
  __int64 v4; // r14
  unsigned __int8 (__fastcall *v5)(_QWORD, int *, __int64, __int64); // r13
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+8h] [rbp-60h]

  if ( !a2 )
    return 1;
  v2 = *(unsigned __int8 (__fastcall ****)(_QWORD, int *, __int64, __int64))(a1 + 16);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = **v2;
  v10 = a2;
  v9 = sub_AD64A0(a2);
  if ( !v5(v2, &v9, v4, v3) || (result = *(unsigned __int8 *)(a1 + 24), *(_BYTE *)(a1 + 25) = 1, (_BYTE)result) )
  {
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned __int8)v7 <= 0x27u && (v8 = 0xFC00040100LL, _bittest64(&v8, v7)) )
      return 1;
    else
      return sub_BA3C20(a1, a2);
  }
  return result;
}

