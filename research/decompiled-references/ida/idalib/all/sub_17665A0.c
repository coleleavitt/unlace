__int64 __fastcall sub_17665A0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-90h]
  char v14; // [rsp+1Fh] [rbp-79h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+28h] [rbp-70h]
  _BYTE v17[104]; // [rsp+30h] [rbp-68h] BYREF

  v4 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
  if ( v4 == 1 )
    return 1;
  v5 = v4;
  v6 = sub_17663C0(a1, *(_QWORD *)(a2 + 40), a3);
  if ( v6 == 1 )
    return 1;
  v8 = *(_DWORD *)(a2 + 16);
  v14 = 0;
  ptr = v17;
  v16 = 0x800000000LL;
  if ( (unsigned __int8)sub_175C6E0(
                          a1,
                          (unsigned __int16 **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                          v8,
                          1,
                          (__int64)&ptr,
                          &v14) )
  {
    result = 1;
  }
  else
  {
    v9 = *a1;
    v10 = v5 & 0xFFFFFFFFFFFFFFFELL;
    v11 = *(unsigned int *)(*a1 + 12632);
    if ( (_DWORD)v11 || *(_QWORD *)(a2 + 32) != v10 || v14 )
    {
      v12 = sub_EEC8C0(v10, v11, a3);
      result = sub_19303F0(v9, 0, v10, v12, (_DWORD)ptr, v16, *(_DWORD *)(a2 + 20), v6 & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      result = sub_19A3E40(v9, a2);
    }
  }
  if ( ptr != v17 )
  {
    v13 = result;
    free(ptr);
    return v13;
  }
  return result;
}
