__int64 (__fastcall **__fastcall sub_2B9F30(__int64 a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r12
  __int64 i; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax

  *(_QWORD *)a1 = &off_4B50B0;
  *(_QWORD *)(a1 + 64) = 0;
  switch_dbctx(*(int *)(a1 + 8));
  sub_13B580((_QWORD *)(a1 + 72), a2);
  v3 = *(_QWORD *)(a1 + 40);
  result = &off_4B4FF8;
  *(_QWORD *)a1 = &off_4B4FF8;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(80 * i + v3);
        v8 = v7[3];
        *v7 = off_4B4BF8;
        if ( v8 )
        {
          v7[4] = 0;
          qfree(v8);
        }
        v3 = *(_QWORD *)(a1 + 40);
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
