unsigned __int64 __fastcall sub_2D3F20(__int64 a1, int a2)
{
  __int64 v3; // rsi
  const char *v4; // rsi
  const char *v5; // r12
  const char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-88h] BYREF
  __int128 v14; // [rsp+8h] [rbp-80h]
  const char *v15; // [rsp+18h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  __int128 v17; // [rsp+38h] [rbp-50h]
  unsigned __int64 v18; // [rsp+58h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v14 = 0;
  v13 = 0;
  v16 = 0;
  v17 = 0;
  linearray_t_ctr(&v13, v3);
  v4 = *(const char **)(a1 + 24);
  linearray_t_set_place(&v13, v4);
  v5 = *(const char **)(a1 + 24);
  while ( (unsigned __int8)linearray_t_beginning(&v13) != 1 && a2 > 0 && linearray_t_up(&v13) )
  {
    v5 = v15;
    --a2;
  }
  v6 = *(const char **)(a1 + 24);
  if ( v6 != v5 )
  {
    v4 = v5;
    (*(void (__fastcall **)(const char *, const char *))(*(_QWORD *)v6 + 24LL))(v6, v5);
  }
  linearray_t_dtr(&v13);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, v4);
  }
  v7 = v13;
  if ( v13 )
  {
    v8 = v14;
    if ( (_QWORD)v14 )
    {
      v9 = 0;
      do
      {
        v10 = (__int64 *)(v7 + 24 * v9);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11, v4);
          v7 = v13;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v14 = 0;
    qfree(v7, v4);
  }
  return v18 - __readfsqword(0x28u);
}
