__int64 __fastcall sub_3AFA10(__int64 *a1, unsigned __int64 a2, __m128 a3)
{
  __int64 v4; // r12
  bool v6; // zf
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 *v11; // r12
  __int64 *v12; // r15
  __int64 i; // [rsp+0h] [rbp-78h]
  __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  char v17; // [rsp+30h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 77 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( (unsigned __int8)is_enum(*(_QWORD *)(v4 + 104), (unsigned int)*(char *)(v4 + 76)) )
    {
      v6 = *(_QWORD *)(v4 + 88) == 0;
      v17 = 0;
      v7 = s1;
      v15 = 0;
      v16 = 0;
      if ( !v6 )
        v7 = *(const char **)(v4 + 80);
      sub_325D80(&v14, (__int64)v7);
      copy_tinfo_t(&v16, &v14);
      clear_tinfo_t(&v14);
      if ( (get_tinfo_property(v16, 2) & 0x3F) == 0x2D )
      {
        sub_3A4470(&v16);
        v8 = *(_QWORD *)(a2 + 24);
        v9 = *(_QWORD *)(v8 + 112);
        for ( i = v9 + 56LL * *(_QWORD *)(v8 + 120); i != v9; v9 += 56 )
        {
          v10 = *(__int64 **)(v9 + 32);
          v11 = &v10[*(_QWORD *)(v9 + 40)];
          if ( v11 != v10 )
          {
            v12 = *(__int64 **)(v9 + 32);
            do
            {
              v15 = *v12;
              sub_3AEFA0(a1, a2, (__int64)&v15, 0, nullptr, a3);
              ++v12;
            }
            while ( v11 != v12 );
          }
        }
      }
      clear_tinfo_t(&v16);
    }
  }
  return 0;
}
