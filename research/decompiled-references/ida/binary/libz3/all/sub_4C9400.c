_QWORD *__fastcall sub_4C9400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r15
  unsigned int v9; // r14d
  _QWORD *v10; // rbp
  __int64 v12; // rdi
  __int64 v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 )
    v7 = *(unsigned int *)(v6 - 4);
  else
    v7 = 0;
  v13[0] = 0;
  sub_647A70(0, v7, v13);
  v8 = v13[0];
  if ( v13[0] )
    v9 = *(_DWORD *)(v13[0] - 4);
  else
    v9 = 0;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8)
                                                                                                + 176LL))(
                    *(_QWORD *)(a2 + 8),
                    a2,
                    a3,
                    v9,
                    v13[0],
                    v13[0]);
  if ( !v10 )
  {
    v12 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(a2 + 8) == v12
      || (v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v12 + 176LL))(
                            v12,
                            a2,
                            a3,
                            v9,
                            v8,
                            v8)) == nullptr )
    {
      v10 = sub_4C9190(a1, (_QWORD *)a2, a3, v9, v8, v8);
    }
  }
  if ( v13[0] )
    sub_186B220((void *)(v13[0] - 8));
  return v10;
}

