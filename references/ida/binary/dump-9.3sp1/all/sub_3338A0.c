__int64 __fastcall sub_3338A0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v2 + v4);
        clear_tinfo_t();
        v7 = *(_QWORD *)(v2 + v4 + 56);
        if ( v7 )
        {
          v6[8] = 0;
          qfree(v7);
        }
        v8 = v6[4];
        if ( v8 )
        {
          v6[5] = 0;
          qfree(v8);
        }
        ++v5;
        v4 += 104;
        cleanup_argloc();
        v2 = *a1;
      }
      while ( v3 != v5 );
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
