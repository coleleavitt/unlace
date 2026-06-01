/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61F10
// Address: 0x0000000000061F10

//----- (0000000000061F10) ----------------------------------------------------
__int64 __fastcall sub_61F10(_QWORD *a1, double a2, __m128 a3)
{
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 v5; // rbp
  const char *v6; // rbx
  __int64 v7; // r14
  const char *v8; // rdi
  __int64 v9; // r15
  const char *v10; // rsi
  __int64 v13; // [rsp+10h] [rbp-78h]
  void *ptr[3]; // [rsp+18h] [rbp-70h] BYREF
  char v15[8]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+48h] [rbp-40h]
  unsigned __int64 v18; // [rsp+50h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v13 = a1[6];
  v3 = a1[13];
  v4 = 56LL * *(_QWORD *)(v3 + 96);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v3 + 88);
    v6 = s1;
    if ( v13 )
      v6 = (const char *)a1[5];
    v7 = 0;
    while ( 1 )
    {
      v8 = s1;
      if ( *(_QWORD *)(v5 + v7 + 8) )
        v8 = *(const char **)(v5 + v7);
      if ( !strcmp(v8, v6) )
        break;
      v7 += 56;
      if ( v4 == v7 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v9 = v3 + 88;
    if ( v13 )
      v10 = (const char *)a1[5];
    else
      v10 = s1;
    sub_37F60((__int64)ptr, v10);
    v15[0] = 2;
    v16 = 0;
    v17 = 0;
    sub_620A0(v9, (unsigned __int64)ptr, 0.0, a3);
    free_idcv(v15, 0.0, a3);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
  }
  return 0;
}
