__int64 __fastcall sub_58230(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 v5; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  void *v8; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = v2 + (v4 << 7);
        v6 = *(_QWORD **)(v5 + 88);
        while ( v6 )
        {
          v7 = v6;
          v6 = (_QWORD *)*v6;
          qfree(v7[3]);
          operator delete(v7, 0x28u);
        }
        memset(*(void **)(v5 + 72), 0, 8LL * *(_QWORD *)(v5 + 80));
        v8 = *(void **)(v5 + 72);
        *(_QWORD *)(v5 + 96) = 0;
        *(_QWORD *)(v5 + 88) = 0;
        if ( v8 != (void *)(v5 + 120) )
          operator delete(v8, 8LL * *(_QWORD *)(v5 + 80));
        ++v4;
        qfree(*(_QWORD *)(v5 + 56));
        qfree(*(_QWORD *)(v5 + 40));
        v2 = *a1;
      }
      while ( v3 != v4 );
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
