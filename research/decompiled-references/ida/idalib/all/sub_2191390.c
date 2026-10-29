void __fastcall sub_2191390(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r14
  __int64 v5; // rax
  __int64 i; // rcx
  __int64 v7; // rdx
  void **v8; // rbx
  void **v9; // r13
  void *v10; // rdi

  v2 = *(unsigned int *)(a1 + 8);
  if ( a2 != v2 )
  {
    v3 = 32 * a2;
    if ( a2 < v2 )
    {
      v8 = (void **)(*(_QWORD *)a1 + 32 * v2);
      v9 = (void **)(v3 + *(_QWORD *)a1);
      if ( v8 != v9 )
      {
        while ( 1 )
        {
          v8 -= 4;
          v10 = *v8;
          if ( *v8 != v8 + 2 )
            break;
LABEL_13:
          if ( v9 == v8 )
            goto LABEL_7;
        }
        while ( 1 )
        {
          operator delete(v10);
          if ( v9 == v8 )
            break;
          v8 -= 4;
          v10 = *v8;
          if ( *v8 == v8 + 2 )
            goto LABEL_13;
        }
      }
    }
    else
    {
      if ( a2 > *(unsigned int *)(a1 + 12) )
      {
        sub_A8C1F0(a1, a2);
        v2 = *(unsigned int *)(a1 + 8);
      }
      v5 = *(_QWORD *)a1 + 32 * v2;
      for ( i = v3 + *(_QWORD *)a1; i != v5; *(_BYTE *)(v5 - 16) = 0 )
      {
        v7 = v5 + 16;
        *(_QWORD *)(v5 + 8) = 0;
        v5 += 32;
        *(_QWORD *)(v5 - 32) = v7;
      }
    }
LABEL_7:
    *(_DWORD *)(a1 + 8) = a2;
  }
}
