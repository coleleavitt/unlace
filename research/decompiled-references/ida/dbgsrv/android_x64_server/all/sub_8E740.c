/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E740
// Address: 0x000000000008E740

//----- (000000000008E740) ----------------------------------------------------
char __fastcall sub_8E740(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 v3; // rax
  char *v4; // r15
  size_t v5; // rbx
  _QWORD *v6; // rdx
  size_t v7; // r13
  _BYTE *v8; // rax
  char *v9; // rbp
  size_t v10; // rbx
  size_t v11; // r14
  __int64 v12; // rbp
  char *v13; // r12
  __int64 v14; // r15
  _QWORD *v15; // rax
  int *v17; // [rsp+8h] [rbp-70h]
  int c; // [rsp+14h] [rbp-64h]
  _QWORD *v19; // [rsp+40h] [rbp-38h]

  if ( 4LL * a1[524] )
  {
    v2 = a1;
    v3 = a1[530];
    v4 = (char *)a1 + v3 + 48;
    v17 = (int *)a1[523];
    while ( 1 )
    {
      v5 = a2 - v3;
      if ( a2 != v3 )
      {
        v6 = (_QWORD *)(*(_QWORD *)v2[3] + 80LL * *v17);
        v7 = v6[1];
        v19 = v6;
        c = *(unsigned __int8 *)(*v6 + v7 - 1);
        while ( 1 )
        {
          v8 = memrchr(v4, c, v5);
          if ( !v8 )
            break;
          v9 = v8 + 1;
          v10 = v8 + 1 - v4;
          v11 = v10;
          if ( v10 >= v7 )
            v11 = v7;
          if ( !memcmp(&v9[-v11], (const void *)(*v19 + v7 - v11), v11) )
          {
            v12 = v2[518] + v9 - ((char *)a1 + v7 + 48);
            if ( v10 >= v7 )
            {
              *(_QWORD *)v2[1] = v12;
              return 1;
            }
            v13 = v4;
            v14 = *v17;
            v15 = qalloc_or_throw(40);
            v15[2] = v12;
            v15[3] = v14;
            v4 = v13;
            v2 = a1;
            v15[4] = v11;
            *v15 = a1 + 519;
            v15[1] = a1[520];
            *(_QWORD *)a1[520] = v15;
            a1[520] = v15;
            ++a1[521];
            v5 = v10 - 1;
            if ( !v5 )
              break;
          }
          else
          {
            v5 = v10 - 1;
            if ( !v5 )
              break;
          }
        }
      }
      if ( ++v17 == (int *)(v2[523] + 4LL * v2[524]) )
        break;
      v3 = v2[530];
    }
  }
  return 0;
}
