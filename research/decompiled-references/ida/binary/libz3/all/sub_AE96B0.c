__int64 __fastcall sub_AE96B0(int a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rcx
  __int64 *v4; // rbp
  __int64 *v5; // r15
  int v6; // r12d
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // r14
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v17; // [rsp+0h] [rbp-38h]
  char v18; // [rsp+8h] [rbp-30h]

  v3 = *(__int64 **)(a3 + 8);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v4 != v3 )
    {
      v5 = *(__int64 **)(a3 + 8);
      v6 = a1 + 88;
      do
      {
        while ( 1 )
        {
          v10 = *v5;
          if ( !*(_WORD *)(*v5 + 4) )
          {
            v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
            if ( v11 )
            {
              if ( !*v11 && v11[1] == 8 && *(_DWORD *)(v10 + 24) == 1 )
                break;
            }
          }
          ++v5;
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_168BF80(v6, a2, v10, v7, v8, v9, v17, v18);
          if ( v4 == v5 )
            return a2;
        }
        v12 = *(_QWORD *)(v10 + 32);
        ++v5;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_168BF80(v6, a2, v12, v13, v14, v15, v17, v18);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v4 != v5 );
    }
  }
  return a2;
}

