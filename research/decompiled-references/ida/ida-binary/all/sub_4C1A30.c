unsigned __int64 __fastcall sub_4C1A30(
        __int64 ****a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rbp
  __int64 ***v10; // rbx
  __int64 **v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  const char *v19; // rsi
  __int64 v20; // rdi
  char v22; // [rsp+0h] [rbp-58h]
  __int64 v23; // [rsp+7h] [rbp-51h] BYREF
  char v24; // [rsp+Fh] [rbp-49h]
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  __int128 v26; // [rsp+18h] [rbp-40h]
  __int128 v27; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-20h]

  v9 = &s1;
  v28 = __readfsqword(0x28u);
  v10 = *a1;
  v26 = 0;
  v27 = -1;
  v25 = 0;
  v11 = v10[2];
  if ( v11[42] )
    v9 = (const char *)v11[41];
  if ( (unsigned __int8)dirtree_findfirst(***v10, &v25, v9) )
  {
    v12 = ***v10;
    v24 = 0;
    v23 = -1;
    dirtree_resolve_cursor(&v23, v12, &v27);
    if ( v23 == -1 || !v24 )
    {
      v19 = v9;
      sub_169630(
        (int)"Path \"%s\" already exists, and points to a leaf",
        (__int64)v9,
        v13,
        v14,
        v15,
        v16,
        (__m128)-1LL,
        a3,
        a4,
        a5,
        v17,
        v18,
        a8,
        a9,
        v22);
      v20 = v25;
      if ( !v25 )
        return v28 - __readfsqword(0x28u);
      goto LABEL_7;
    }
  }
  else
  {
    v19 = "Create new directory \"%s\"?";
    if ( (unsigned int)sub_1698A0(1, (int)"Create new directory \"%s\"?", v9) != 1 )
    {
      v20 = v25;
      if ( !v25 )
        return v28 - __readfsqword(0x28u);
      goto LABEL_7;
    }
  }
  v19 = (const char *)v10[3];
  *(_BYTE *)v10[1] = (unsigned __int8)dirtree_bulk_move(***v10, v19, v9, 0xFFFFFFFFLL, *v10[4], 0) == 0;
  v20 = v25;
  if ( v25 )
  {
LABEL_7:
    *(_QWORD *)&v26 = 0;
    qfree(v20, v19);
  }
  return v28 - __readfsqword(0x28u);
}
