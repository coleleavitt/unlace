/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F260
// Address: 0x000000000008F260

//----- (000000000008F260) ----------------------------------------------------
char __fastcall sub_8F260(__int64 a1, __int64 a2)
{
  size_t v2; // r13
  const void **v3; // rbp
  const void *v4; // rbx
  _BYTE *v5; // rax
  _BYTE *v6; // r12
  size_t v7; // r15
  size_t v8; // rbx
  const void **v9; // r13
  __int64 v10; // rbp
  _QWORD *v11; // rax
  int *v13; // [rsp+8h] [rbp-70h]
  unsigned __int8 *v14; // [rsp+10h] [rbp-68h]
  int c; // [rsp+1Ch] [rbp-5Ch]
  void *s; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  if ( 4LL * *(_QWORD *)(a1 + 4192) )
  {
    v13 = *(int **)(a1 + 4184);
    s = (void *)(a1 + a2 + 48);
    v17 = a2;
    do
    {
      v2 = *(_QWORD *)(a1 + 4240) - a2;
      if ( v2 )
      {
        v3 = (const void **)(**(_QWORD **)(a1 + 24) + 80LL * *v13);
        v14 = (unsigned __int8 *)v3[1];
        c = *(unsigned __int8 *)*v3;
        v4 = s;
        do
        {
          v5 = memchr(v4, c, v2);
          if ( !v5 )
            break;
          v6 = v5;
          v7 = v2 + (_BYTE *)v4 - v5;
          v8 = v7;
          if ( v7 >= (unsigned __int64)v14 )
            v8 = (size_t)v14;
          if ( !memcmp(v5, *v3, v8) )
          {
            v9 = v3;
            v10 = (__int64)&v6[*(_QWORD *)(a1 + 4144) - 48 - a1];
            if ( v7 >= (unsigned __int64)v14 )
            {
              **(_QWORD **)(a1 + 8) = v10;
              return 1;
            }
            v18 = *v13;
            v11 = qalloc_or_throw(40);
            v11[2] = v10;
            v11[3] = v18;
            v11[4] = v8;
            *v11 = a1 + 4152;
            v11[1] = *(_QWORD *)(a1 + 4160);
            **(_QWORD **)(a1 + 4160) = v11;
            *(_QWORD *)(a1 + 4160) = v11;
            ++*(_QWORD *)(a1 + 4168);
            v3 = v9;
          }
          v4 = v6 + 1;
          v2 = v7 - 1;
        }
        while ( v7 != 1 );
      }
      ++v13;
      a2 = v17;
    }
    while ( v13 != (int *)(*(_QWORD *)(a1 + 4184) + 4LL * *(_QWORD *)(a1 + 4192)) );
  }
  return 0;
}
