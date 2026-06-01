__int64 __fastcall sub_6D4A30(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // [rsp+8h] [rbp-E0h]
  __int64 v10; // [rsp+8h] [rbp-E0h]
  __int64 v11; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v13[23]; // [rsp+30h] [rbp-B8h] BYREF

  v13[0] = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 6 | 1;
  ptr[0] = v13;
  ptr[1] = (void *)0x2000000002LL;
  sub_6A0380(a3, (__int64)ptr);
  v4 = sub_25AC3A0(a1 + 1272, ptr, &v11, off_47D05C0);
  result = v4 - 56;
  if ( !v4 )
  {
    v6 = sub_7D9920(a1, a2 | 1, a3);
    v7 = a1 + 1272;
    v8 = v6 + 56;
    v10 = v6;
    if ( !v6 )
      v8 = 0;
    sub_25AC200(v7, v8, v11, off_47D05C0);
    result = v10;
  }
  if ( ptr[0] != v13 )
  {
    v9 = result;
    free(ptr[0]);
    return v9;
  }
  return result;
}

