void (*__fastcall sub_445FE0(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4))()
{
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r13
  void (*result)(); // rax
  __int64 v12; // rdi
  unsigned int v13; // r15d
  void (*v14)(); // rbp
  void (*v15)(); // rdx
  __int64 v16; // rsi
  __int64 v17; // rax

  v8 = switch_dbctx(*(int *)(a1 + 8));
  v9 = *(unsigned __int8 *)(a1 + 92);
  v10 = v8;
  if ( (*(_BYTE *)(a1 + 88) & 0x20) != 0 )
  {
    result = (void (*)())sub_79BAE0(a1 + 72, v8, a2, 1, a3, v9);
  }
  else
  {
    v13 = a3;
    result = (void (*)())sub_79B5C0(a1 + 72, v8, a3, 0, 0, v9);
    v14 = result;
    if ( (__int64)result > 0 )
    {
      v15 = (void (*)())a2[1];
      if ( (unsigned __int64)v15 < (unsigned __int64)result )
      {
        v16 = *a2;
        if ( a2[2] < (unsigned __int64)result )
        {
          v17 = qvector_reserve(a2, v16, result, 1);
          v15 = (void (*)())a2[1];
          *a2 = v17;
          v16 = v17;
        }
        memset((char *)v15 + v16, 0, (char *)v14 - (char *)v15);
        a2[1] = (__int64)v14;
      }
      else if ( result != v15 )
      {
        a2[1] = (__int64)result;
      }
      result = (void (*)())sub_79B5C0(a1 + 72, v10, v13, *a2, v14, *(unsigned __int8 *)(a1 + 92));
    }
  }
  v12 = *(_QWORD *)(a1 + 80);
  if ( v12 && a4 != -1 )
  {
    result = *(void (**)())(*(_QWORD *)v12 + 72LL);
    if ( result != nullsub_47 )
      return (void (*)())((__int64 (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD, _QWORD))result)(
                           v12,
                           a2,
                           *(_QWORD *)(a1 + 64),
                           *(unsigned int *)(a1 + 12),
                           a4);
  }
  return result;
}

