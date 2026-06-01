void __fastcall sub_F62B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 *i; // rax
  __int64 *v4; // r12

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 != a2 )
  {
    *(_QWORD *)(a1 + 96) = a2;
    for ( i = *(__int64 **)(a1 + 8); (__int64 *)(a1 + 8) != i; i = v4 )
    {
      v4 = (__int64 *)*i;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)i[2] + 24LL))(i[2], v2, a2);
    }
  }
}

