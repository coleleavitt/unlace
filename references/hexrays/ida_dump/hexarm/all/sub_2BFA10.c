__int64 (__fastcall **__fastcall sub_2BFA10(__int64 a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r14
  _QWORD *v8; // rbx

  *(_QWORD *)a1 = &off_4DC850;
  *(_QWORD *)(a1 + 64) = 0;
  switch_dbctx(*(int *)(a1 + 8));
  sub_13FB80((_QWORD *)(a1 + 72), a2);
  v3 = *(_QWORD *)(a1 + 40);
  result = &off_4DC798;
  *(_QWORD *)a1 = &off_4DC798;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v3 + v6);
        ++v7;
        v6 += 264;
        *v8 = off_4DBB20;
        sub_11C7E0((__int64)(v8 + 28));
        sub_11C7E0((__int64)(v8 + 26));
        sub_11C7E0((__int64)(v8 + 24));
        sub_11C7E0((__int64)(v8 + 12));
        sub_11C7E0((__int64)(v8 + 10));
        sub_11C7E0((__int64)(v8 + 8));
        v3 = *(_QWORD *)(a1 + 40);
      }
      while ( v5 != v7 );
    }
    *(_QWORD *)(a1 + 48) = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
