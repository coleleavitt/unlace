__int64 __fastcall sub_157D940(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // r13
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  v2 = (__int64 *)(a2 + 32);
  v3 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32;
  v4 = sub_C95130(a2);
  if ( v3 != a2 + 32 )
  {
    v6 = v5;
    v7 = (_QWORD *)v4;
    if ( (_QWORD *)v4 != v5 )
    {
      do
      {
        v8 = *v2;
        v9 = v7;
        v7 += 2;
        ++v2;
        sub_BC84C0(a1, a2, v9, v8);
      }
      while ( v3 != (_QWORD)v2 && v6 != v7 );
    }
  }
  return 1;
}
