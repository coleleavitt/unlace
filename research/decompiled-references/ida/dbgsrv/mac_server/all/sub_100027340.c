/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027340
// Address: 0x0000000100027340

//----- (0000000100027340) ----------------------------------------------------
__int64 __fastcall sub_100027340(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // r13
  const char *v4; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  const char *v7; // rdi
  const char *v8; // r14
  __int64 v9; // rbx
  size_t v10; // rax
  size_t v11; // r15
  size_t v12; // r12
  void *v13; // rdi
  __int64 v15; // [rsp+8h] [rbp-88h]
  __int64 v16; // [rsp+10h] [rbp-80h]
  __int64 v17; // [rsp+18h] [rbp-78h]
  __int128 v18; // [rsp+20h] [rbp-70h] BYREF
  __int64 v19; // [rsp+30h] [rbp-60h]
  unsigned __int8 v20[8]; // [rsp+38h] [rbp-58h] BYREF
  __int128 v21; // [rsp+40h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-40h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 104);
  v3 = 56LL * *(_QWORD *)(v2 + 96);
  if ( !v3 )
  {
    if ( *(_QWORD *)(v1 + 48) )
    {
LABEL_12:
      v8 = *(const char **)(v1 + 40);
      v18 = 0;
      v19 = 0;
      if ( !v8 )
      {
LABEL_17:
        v20[0] = 2;
        v21 = 0;
        v22 = 0;
        sub_100027520((unsigned __int64 *)(v2 + 88), (unsigned __int64)&v18);
        free_idcv(v20);
        if ( (_QWORD)v18 )
        {
          *((_QWORD *)&v18 + 1) = 0;
          qfree((void *)v18);
        }
        return 0;
      }
    }
    else
    {
LABEL_10:
      v18 = 0;
      v19 = 0;
      v8 = _s1;
    }
    v9 = v2;
    v10 = strlen(v8);
    v11 = v10;
    v12 = v10 + 1;
    if ( v10 == -1 )
    {
      v13 = nullptr;
    }
    else
    {
      v13 = qvector_reserve((__int64)&v18, nullptr, v10 + 1, 1u);
      *(_QWORD *)&v18 = v13;
    }
    *((_QWORD *)&v18 + 1) = v12;
    memmove(v13, v8, v11);
    *(_BYTE *)(v18 + v11) = 0;
    v2 = v9;
    goto LABEL_17;
  }
  v4 = _s1;
  v17 = *(_QWORD *)(v1 + 48);
  if ( v17 )
    v4 = *(const char **)(v1 + 40);
  v16 = v1;
  v15 = v2;
  v5 = *(_QWORD *)(v2 + 88);
  v6 = 0;
  while ( 1 )
  {
    v7 = _s1;
    if ( *(_QWORD *)(v5 + v6 + 8) )
      v7 = *(const char **)(v5 + v6);
    if ( !strcmp(v7, v4) )
      return 0;
    v6 += 56;
    if ( v3 == v6 )
    {
      v2 = v15;
      v1 = v16;
      if ( v17 )
        goto LABEL_12;
      goto LABEL_10;
    }
  }
}
