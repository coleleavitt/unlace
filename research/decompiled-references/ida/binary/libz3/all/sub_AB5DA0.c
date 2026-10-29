__int64 __fastcall sub_AB5DA0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int *v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // r9
  int v12; // r8d
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 i; // rax
  unsigned int v18; // edx
  bool v19; // r10
  _BOOL8 v20; // rdx
  _BYTE *v21; // r10
  __int64 *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 j; // rsi
  int v26; // edx
  __int64 v27; // [rsp+0h] [rbp-40h] BYREF
  _OWORD v28[3]; // [rsp+8h] [rbp-38h] BYREF

  v2 = a1[2];
  if ( qword_1C7ECE8 != *(_QWORD *)(v2 + 8984) || *(_BYTE *)(v2 + 2416) )
    return 1;
  if ( a2 == *(_DWORD *)(a1[58] + 4LL * a2) )
  {
    v6 = 8LL * a2;
    v7 = sub_15D1F10(**(_QWORD **)(a1[4] + v6));
    if ( (unsigned __int8)sub_1673B10(a1 + 10, v7) )
    {
      v8 = a1[4];
      v28[0] = 0;
      v9 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(**(_QWORD **)(v8 + 8LL * a2)) + 24) + 8LL);
      if ( *((_BYTE *)v9 + 8) )
        sub_DBF6E(0);
      v10 = *v9;
      sub_AC4A00(v28, *v9, 0);
      sub_AC4A00((char *)v28 + 8, v10, 0);
      v11 = a1[63];
      v12 = dword_1C7ECF4;
      v13 = a2;
      do
      {
        v14 = v13;
        v15 = *(_QWORD *)(v11 + 8LL * v13);
        if ( v15 )
        {
          v16 = *(unsigned int *)(v15 - 4);
          for ( i = 0; i != v16; ++i )
          {
            v18 = *(_DWORD *)(v15 + 4 * i);
            if ( !(v18 >> 1) )
            {
              v19 = v12 != v18;
              v20 = v12 == v18;
              if ( *(_BYTE *)(*((_QWORD *)v28 + v19) + i) )
              {
                if ( *((_QWORD *)&v28[0] + 1) )
                  sub_186B220((void *)(*((_QWORD *)&v28[0] + 1) - 8LL));
                if ( *(_QWORD *)&v28[0] )
                  sub_186B220((void *)(*(_QWORD *)&v28[0] - 8LL));
                return 1;
              }
              v21 = (_BYTE *)(i + *((_QWORD *)v28 + v20));
              if ( !*v21 )
                *v21 = 1;
            }
          }
        }
        v13 = *(_DWORD *)(a1[60] + 4 * v14);
      }
      while ( a2 != v13 );
      v27 = 0;
      v22 = (__int64 *)(a1[66] + v6);
      sub_AC4A00(&v27, v10, 0);
      v23 = *v22;
      v24 = v27;
      if ( *v22 )
      {
        for ( j = v23 + 8LL * *(unsigned int *)(v23 - 4); v23 != j; *(_BYTE *)(v24 + (v26 & 0x7FFFFFFF)) = 1 )
        {
          v26 = *(_DWORD *)(v23 + 4);
          v23 += 8;
        }
      }
      if ( v24 )
        sub_186B220((void *)(v24 - 8));
      if ( *((_QWORD *)&v28[0] + 1) )
        sub_186B220((void *)(*((_QWORD *)&v28[0] + 1) - 8LL));
      if ( *(_QWORD *)&v28[0] )
        sub_186B220((void *)(*(_QWORD *)&v28[0] - 8LL));
    }
  }
  return 1;
}

