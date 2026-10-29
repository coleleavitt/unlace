__int64 __fastcall sub_1022BE0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v7 = a1[3];
  a1[13] += 56LL;
  v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[4] >= (unsigned __int64)(v8 + 56) && v7 )
    a1[3] = v8 + 56;
  else
    v8 = sub_986170((__int64)(a1 + 3), 56, 56, 3, a5, a6);
  v13[0] = v8;
  v9 = (__int64 *)a1[21];
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_BYTE *)(v8 + 48) &= 0xF0u;
  if ( v9 == (__int64 *)a1[22] )
  {
    sub_101E370((__int64)(a1 + 20), v9, v13);
  }
  else
  {
    *v9 = v8;
    a1[21] = v9 + 1;
  }
  result = v13[0];
  v11 = *a2;
  *a2 = 0;
  v12 = *(_QWORD *)result;
  *(_BYTE *)(result + 48) &= ~8u;
  *(_QWORD *)result = v11;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    return v13[0];
  }
  return result;
}
