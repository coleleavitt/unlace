void __fastcall sub_48A4A0(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v3, a2);
  }
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = -1;
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = (__int64 *)(*(_QWORD *)a1 + 40 * i);
      v7 = *v6;
      if ( *v6 )
      {
        v6[1] = 0;
        qfree(v7, a2);
      }
    }
  }
  *(_QWORD *)(a1 + 8) = 0;
}
