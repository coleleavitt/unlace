void __fastcall sub_53A950(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rax
  __int64 v6; // rdi

  v2 = xmmword_8D2578;
  if ( (_QWORD)xmmword_8D2578 )
  {
    v3 = 0;
    do
    {
      v4 = qword_8D2570 + 48 * v3;
      v5 = *(volatile signed __int32 **)(v4 + 24);
      if ( v5 && !_InterlockedSub(v5, 1u) )
        free(*(void **)(v4 + 24));
      v6 = *(_QWORD *)v4;
      if ( *(_QWORD *)v4 )
      {
        *(_QWORD *)(v4 + 8) = 0;
        qfree(v6, a2);
      }
      ++v3;
    }
    while ( v2 != v3 );
  }
  *(_QWORD *)&xmmword_8D2578 = 0;
}
