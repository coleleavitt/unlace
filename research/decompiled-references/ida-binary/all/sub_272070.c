__int64 __fastcall sub_272070(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  _QWORD *v7; // r12
  __int64 v8; // r13
  void *v9; // rax

  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v3, a2);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  sub_51B3C0(a1 + 72, a1);
  result = sub_277DF0();
  v5 = result;
  if ( (*(_BYTE *)(result + 128) & 1) == 0 )
  {
    v6 = qalloc_or_throw(24);
    *(_QWORD *)v6 = 0;
    v7 = (_QWORD *)v6;
    *(_OWORD *)(v6 + 8) = 0;
    v8 = *(_QWORD *)(a1 + 80);
    if ( v8 )
    {
      v9 = (void *)qalloc_or_throw(8 * v8);
      *v7 = v9;
      v7[2] = v8;
      memcpy(v9, *(const void **)(a1 + 72), 8 * v8);
      v7[1] = v8;
    }
    return sub_278C70(v5, a1, v7);
  }
  return result;
}
