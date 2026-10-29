/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90440
// Address: 0x0000000000090440

//----- (0000000000090440) ----------------------------------------------------
char __fastcall sub_90440(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 i; // r14
  __int64 v6; // r12
  const char *v7; // rdi
  const char *v8; // rdi
  char v10; // [rsp+1h] [rbp-31h]

  v10 = (*(__int64 (__fastcall **)(__int64))(a1 + 88))(a1);
  if ( v10 )
  {
    v2 = *(_QWORD *)(a1 + 112);
    if ( (int)v2 > 0 )
    {
      v3 = (unsigned int)v2;
      v4 = *(_QWORD *)(a1 + 104) + 16LL;
      for ( i = 0; i != v3; ++i )
      {
        v6 = *(_QWORD *)(v4 + 8);
        v7 = s1;
        if ( v6 )
          v7 = *(const char **)v4;
        if ( !strcmp(v7, ".debug_info") )
        {
          *(_DWORD *)(a1 + 172) = i;
        }
        else
        {
          v8 = s1;
          if ( v6 )
            v8 = *(const char **)v4;
          if ( !strcmp(v8, ".debug_types") )
            *(_DWORD *)(a1 + 176) = i;
        }
        v4 += 120;
      }
    }
  }
  return v10;
}
