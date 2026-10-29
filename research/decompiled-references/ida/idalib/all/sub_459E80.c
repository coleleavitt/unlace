void (*__fastcall sub_459E80(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4))()
{
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r12
  void (*result)(); // rax
  __int64 v12; // rdi
  void (*v13)(); // r8
  void (*v14)(); // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  void (*v17)(); // [rsp+8h] [rbp-40h]
  void (*v18)(); // [rsp+8h] [rbp-40h]

  v8 = switch_dbctx(*(int *)(a1 + 8));
  v9 = *(unsigned __int8 *)(a1 + 92);
  v10 = v8;
  if ( (*(_BYTE *)(a1 + 88) & 0x20) != 0 )
  {
    result = (void (*)())sub_7BEED0(a1 + 72, v8, a2, 1, a3, v9);
  }
  else
  {
    result = (void (*)())sub_7BE950(a1 + 72, v8, a3, 0, 0, v9);
    v13 = result;
    if ( (__int64)result > 0 )
    {
      v14 = (void (*)())a2[1];
      if ( (unsigned __int64)v14 < (unsigned __int64)result )
      {
        v15 = *a2;
        if ( a2[2] < (unsigned __int64)result )
        {
          v18 = result;
          v16 = qvector_reserve(a2, v15, result, 1);
          v14 = (void (*)())a2[1];
          v13 = v18;
          *a2 = v16;
          v15 = v16;
        }
        v17 = v13;
        memset((char *)v14 + v15, 0, (char *)v13 - (char *)v14);
        v13 = v17;
        a2[1] = (__int64)v17;
      }
      else if ( result != v14 )
      {
        a2[1] = (__int64)result;
      }
      result = (void (*)())sub_7BE950(a1 + 72, v10, a3, *a2, v13, *(unsigned __int8 *)(a1 + 92));
    }
  }
  v12 = *(_QWORD *)(a1 + 80);
  if ( v12 && a4 != -1 )
  {
    result = *(void (**)())(*(_QWORD *)v12 + 72LL);
    if ( result != nullsub_68 )
      return (void (*)())((__int64 (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD, _QWORD))result)(
                           v12,
                           a2,
                           *(_QWORD *)(a1 + 64),
                           *(unsigned int *)(a1 + 12),
                           a4);
  }
  return result;
}
