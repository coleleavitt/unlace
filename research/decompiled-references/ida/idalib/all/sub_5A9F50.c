void __fastcall sub_5A9F50(__int64 a1, __int64 *a2, unsigned int a3)
{
  void *v3; // rbx
  __int64 v4; // rbp
  int v5; // r12d
  __int64 v6; // r13
  unsigned int v7; // edx
  void *encoding_name; // rax
  __int64 v10; // rax
  _QWORD *v11; // r15
  unsigned __int64 v12; // rbp
  const char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // [rsp-38h] [rbp-38h]
  void *v20; // [rsp-30h] [rbp-30h]

  v7 = HIBYTE(a3);
  if ( v7 )
  {
    v20 = v3;
    encoding_name = (void *)get_encoding_name(v7);
    if ( encoding_name )
    {
      v10 = sub_600110(encoding_name, v19, v20, v4, v5, v6);
      v11 = (_QWORD *)v10;
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 8) )
        {
          v12 = 0;
          do
          {
            v13 = haystack;
            v14 = *v11 + 24 * v12;
            if ( *(_QWORD *)(v14 + 8) )
              v13 = *(const char **)v14;
            v15 = sub_8B7120(a1, v13, sub_7A9730);
            if ( v15 )
            {
              v16 = a2[1];
              v17 = *a2;
              if ( a2[2] < (unsigned __int64)(v16 + 1) )
              {
                v18 = qvector_reserve(a2, v17, v16 + 1, 8);
                *a2 = v18;
                v17 = v18;
                v16 = a2[1];
              }
              *(_QWORD *)(v17 + 8 * v16) = v15;
              ++a2[1];
            }
            ++v12;
          }
          while ( v12 < v11[1] );
        }
      }
    }
  }
}
