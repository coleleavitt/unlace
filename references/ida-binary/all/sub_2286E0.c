_BOOL8 __fastcall undesired_chooser_t__::vfunc_11(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  _QWORD *v4; // rbx
  __int64 v5; // r15
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 *v8; // r14
  __int64 v9; // rdi

  v2 = a2[1];
  if ( v2 )
  {
    v4 = a2;
    v5 = a2[1];
    do
    {
      --v5;
      v6 = *(__int64 **)(a1 + 184);
      v7 = *v6;
      v8 = (__int64 *)(*v6 + 24LL * *(_QWORD *)(*v4 + 8 * v5));
      v9 = *v8;
      if ( *v8 )
      {
        v8[1] = 0;
        qfree(v9, (const char *)a2);
        v7 = *v6;
      }
      a2 = v8 + 3;
      memmove(v8, v8 + 3, v7 + 24 * v6[1]-- - (_QWORD)v8 - 24);
    }
    while ( v5 );
  }
  return v2 != 0;
}
