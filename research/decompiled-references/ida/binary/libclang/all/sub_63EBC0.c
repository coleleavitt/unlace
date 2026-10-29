void __fastcall sub_63EBC0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v5; // r13
  signed __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  int v11; // edx
  signed __int64 v12; // rdx
  void *v13; // rdi
  __int64 v14; // r13
  unsigned __int64 v15; // rbp
  int v16; // edx
  __int64 v17; // rbx
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 i; // rbp
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rbx
  void *v26; // rdi
  signed __int64 v27; // [rsp+0h] [rbp-48h]

  if ( a2 != a1 )
  {
    v2 = a2[1];
    v3 = *a2;
    v5 = *a1;
    v6 = v2 - *a2;
    v27 = v6;
    if ( a1[2] - *a1 < (unsigned __int64)v6 )
    {
      if ( (unsigned __int64)v6 > 0x7FFFFFFFFFFFFFD0LL )
        sub_555886();
      v20 = operator new(v6);
      for ( i = v20; v2 != v3; *(_QWORD *)(i - 8) = *(_QWORD *)(v3 - 8) )
      {
        v3 += 80;
        *(_QWORD *)i = i + 16;
        sub_63E170((__int64 *)i, *(_BYTE **)(v3 - 80), *(_QWORD *)(v3 - 80) + *(_QWORD *)(v3 - 72));
        v22 = (__int64 *)(i + 40);
        *(_DWORD *)(i + 32) = *(_DWORD *)(v3 - 48);
        v23 = i + 56;
        i += 80;
        *(_QWORD *)(i - 40) = v23;
        sub_63E170(v22, *(_BYTE **)(v3 - 40), *(_QWORD *)(v3 - 40) + *(_QWORD *)(v3 - 32));
      }
      v24 = a1[1];
      v25 = *a1;
      if ( v24 != *a1 )
      {
        do
        {
          v26 = *(void **)(v25 + 40);
          if ( v26 != (void *)(v25 + 56) )
            operator delete(v26, *(_QWORD *)(v25 + 56) + 1LL);
          if ( *(_QWORD *)v25 != v25 + 16 )
            operator delete(*(void **)v25, *(_QWORD *)(v25 + 16) + 1LL);
          v25 += 80;
        }
        while ( v24 != v25 );
        v25 = *a1;
      }
      if ( v25 )
        operator delete((void *)v25, a1[2] - v25);
      *a1 = v20;
      v14 = v27 + v20;
      a1[2] = v14;
      goto LABEL_17;
    }
    v7 = a1[1];
    v8 = v7 - v5;
    if ( v7 - v5 < (unsigned __int64)v6 )
    {
      v15 = 0xCCCCCCCCCCCCCCCDLL * (v8 >> 4);
      if ( v8 > 0 )
      {
        do
        {
          std::string::_M_assign();
          v16 = *(_DWORD *)(v3 + 32);
          v3 += 80;
          v5 += 80;
          *(_DWORD *)(v5 - 48) = v16;
          std::string::_M_assign();
          *(_QWORD *)(v5 - 8) = *(_QWORD *)(v3 - 8);
          --v15;
        }
        while ( v15 );
        v7 = a1[1];
        v5 = *a1;
        v2 = a2[1];
        v3 = *a2;
        v8 = v7 - *a1;
      }
      v17 = v8 + v3;
      v14 = v27 + v5;
      if ( v17 == v2 )
        goto LABEL_17;
      do
      {
        v17 += 80;
        *(_QWORD *)v7 = v7 + 16;
        sub_63E170((__int64 *)v7, *(_BYTE **)(v17 - 80), *(_QWORD *)(v17 - 80) + *(_QWORD *)(v17 - 72));
        v18 = (__int64 *)(v7 + 40);
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v17 - 48);
        v19 = v7 + 56;
        v7 += 80;
        *(_QWORD *)(v7 - 40) = v19;
        sub_63E170(v18, *(_BYTE **)(v17 - 40), *(_QWORD *)(v17 - 40) + *(_QWORD *)(v17 - 32));
        *(_QWORD *)(v7 - 8) = *(_QWORD *)(v17 - 8);
      }
      while ( v17 != v2 );
    }
    else
    {
      if ( v6 > 0 )
      {
        v9 = *a1;
        v10 = 0xCCCCCCCCCCCCCCCDLL * (v6 >> 4);
        do
        {
          std::string::_M_assign();
          v11 = *(_DWORD *)(v3 + 32);
          v3 += 80;
          v9 += 80;
          *(_DWORD *)(v9 - 48) = v11;
          std::string::_M_assign();
          *(_QWORD *)(v9 - 8) = *(_QWORD *)(v3 - 8);
          --v10;
        }
        while ( v10 );
        v12 = v27 - 80;
        if ( !v27 )
          v12 = 0;
        v5 += v12 + 80;
      }
      for ( ; v7 != v5; v5 += 80 )
      {
        v13 = *(void **)(v5 + 40);
        if ( v13 != (void *)(v5 + 56) )
          operator delete(v13, *(_QWORD *)(v5 + 56) + 1LL);
        if ( *(_QWORD *)v5 != v5 + 16 )
          operator delete(*(void **)v5, *(_QWORD *)(v5 + 16) + 1LL);
      }
    }
    v14 = *a1 + v27;
LABEL_17:
    a1[1] = v14;
  }
}

