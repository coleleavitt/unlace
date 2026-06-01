__int64 __fastcall sub_3B4910(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // r12
  bool v5; // zf
  const char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 *v10; // r12
  __int64 *v11; // r15
  __int64 i; // [rsp+0h] [rbp-78h]
  __int64 v13; // [rsp+18h] [rbp-60h] BYREF
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  char v16; // [rsp+30h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 77 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( (unsigned __int8)is_enum() )
    {
      v5 = *(_QWORD *)(v3 + 88) == 0;
      v16 = 0;
      v6 = s1;
      v14 = 0;
      v15 = 0;
      if ( !v5 )
        v6 = *(const char **)(v3 + 80);
      sub_32ACB0(&v13, (__int64)v6);
      copy_tinfo_t();
      clear_tinfo_t();
      if ( (get_tinfo_property() & 0x3F) == 0x2D )
      {
        sub_3A9370(&v15);
        v7 = *(_QWORD *)(a2 + 24);
        v8 = *(_QWORD *)(v7 + 112);
        for ( i = v8 + 56LL * *(_QWORD *)(v7 + 120); i != v8; v8 += 56 )
        {
          v9 = *(__int64 **)(v8 + 32);
          v10 = &v9[*(_QWORD *)(v8 + 40)];
          if ( v10 != v9 )
          {
            v11 = *(__int64 **)(v8 + 32);
            do
            {
              v14 = *v11;
              sub_3B3EA0(a1, a2, (__int64)&v14, 0, nullptr);
              ++v11;
            }
            while ( v10 != v11 );
          }
        }
      }
      clear_tinfo_t();
    }
  }
  return 0;
}
