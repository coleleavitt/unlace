void __fastcall sub_E1ED50(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int *v4; // rbp
  __int64 v5; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64); // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 80) + 144LL * a2;
    v4 = *(unsigned int **)v3;
    v5 = *(_QWORD *)v3 + 16LL * *(unsigned int *)(v3 + 8);
    if ( *(_QWORD *)v3 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(a1 + 160);
          v8 = *v4;
          v9 = v7 + v8 - 40;
          v10 = *(_QWORD *)(v9 + 32);
          memset((void *)(v7 + v8), 0, *(unsigned int *)(v10 + 28));
          v11 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64))(v10 + 64);
          if ( !v11 )
            break;
          v4 += 4;
          v11(
            v9,
            v9 + *(unsigned int *)(v10 + 24) + 40,
            *(unsigned __int8 *)(v10 + 56),
            *(unsigned __int8 *)(v10 + 57),
            *(unsigned __int8 *)(v10 + 59),
            1,
            0,
            v10);
          *(_BYTE *)(v9 + 27) = 1;
          if ( (unsigned int *)v5 == v4 )
            return;
        }
        v4 += 4;
        *(_BYTE *)(v9 + 27) = 1;
      }
      while ( (unsigned int *)v5 != v4 );
    }
  }
}
