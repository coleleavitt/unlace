__int64 __fastcall sub_1A42950(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  __int64 v8; // rbx
  unsigned int v9; // r12d
  unsigned __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v6 = a4;
    v19 = a3 + 16;
    v8 = a2;
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
        v10 = *(_QWORD *)(v10 + 8);
      LOBYTE(v10) = (*(_BYTE *)(v10 + 8) & 0x7F) == 24 || (*(_BYTE *)(v10 + 8) & 0x7F) == 0;
      v11 = v10;
      if ( (_BYTE)v10 )
      {
        v12 = *(_QWORD *)(v8 + 8) & 6LL;
        if ( v6 )
        {
          if ( !v12 )
            return v11;
          v14 = 1;
        }
        else
        {
          if ( !v12 )
            return v11;
          v14 = 0;
        }
        if ( sub_1A42350(a1, v8, v14, a4, a5, a6) )
          return v11;
        if ( a3 )
        {
          v15 = *(_QWORD *)(v8 + 8) & 7LL;
          if ( *(char *)(v8 + 29) < 0 )
          {
            v16 = 0;
            if ( v15 )
              v16 = sub_B8C660(v8);
          }
          else if ( v15 )
          {
            v16 = *(_QWORD *)(v8 - 8);
          }
          else
          {
            v16 = 0;
          }
          v17 = *(unsigned int *)(a3 + 8);
          if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
          {
            sub_2237220(a3, v19, v17 + 1, 8);
            v17 = *(unsigned int *)(a3 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a3 + 8 * v17) = v16;
          ++*(_DWORD *)(a3 + 8);
        }
        v9 = v11;
      }
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
      v8 = v18;
    }
    while ( a2 != v18 && v18 );
    return v9 ^ 1;
  }
  else
  {
    return 1;
  }
}
