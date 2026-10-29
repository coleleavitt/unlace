__int64 __fastcall sub_4F3810(_QWORD *a1)
{
  __int64 v1; // rbx
  _BYTE *v2; // rsi
  __int64 v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 i; // rbx
  const char *v9; // rcx
  _BYTE v10[2488]; // [rsp+0h] [rbp-B08h]
  __int64 v11; // [rsp+9B8h] [rbp-150h]
  _BYTE *v12; // [rsp+9C0h] [rbp-148h]
  _BYTE *v13; // [rsp+9C8h] [rbp-140h]
  __int64 v14; // [rsp+9D8h] [rbp-130h] BYREF
  void *ptr; // [rsp+9E0h] [rbp-128h] BYREF
  __int128 v16; // [rsp+9E8h] [rbp-120h]
  _BYTE v17[64]; // [rsp+A00h] [rbp-108h] BYREF
  _BYTE v18[136]; // [rsp+A40h] [rbp-C8h] BYREF
  unsigned __int64 v19; // [rsp+AC8h] [rbp-40h]

  v1 = 328;
  v19 = __readfsqword(0x28u);
  v13 = v17;
  if ( getinf_buf(83, v17, 64) == 64 )
  {
    v4 = 0;
    v12 = v18;
    do
    {
      v5 = *a1;
      v6 = *(unsigned int *)&v13[4 * v4];
      v7 = *a1;
      *(_QWORD *)&v12[8 * v4] = v6;
      v11 = v6;
      v14 = v6;
      for ( i = sub_7BEB80(&v14, v7, 65); i != -1; i = sub_7BEBF0(&v14, v5, i, 65) )
      {
        ptr = (void *)(int)sub_7BE710(&v14, v5, i, 65);
        sub_7BE7C0(&v14, v5, i, &ptr, 8, 65);
        ptr = nullptr;
        v16 = 0;
        if ( sub_7BEA80(&v14, v5, &ptr, i, 83) >= 0 )
        {
          v9 = haystack;
          if ( (_QWORD)v16 )
            v9 = (const char *)ptr;
          sub_7BE7C0(&v14, v5, i, v9, 0, 83);
        }
        if ( ptr )
        {
          *(_QWORD *)&v16 = 0;
          qfree(ptr);
        }
      }
      a1[v4++ + 328] = v11;
    }
    while ( v4 != 16 );
  }
  else
  {
    do
    {
      sub_7BF040(&a1[v1], *a1, 0, 0);
      *(_QWORD *)&v10[v1 * 8] = a1[v1];
      ++v1;
    }
    while ( v1 != 344 );
    v12 = v18;
  }
  v2 = v12;
  a1[327] = -1;
  setinf_buf(83, v2, 128);
  return 1;
}
