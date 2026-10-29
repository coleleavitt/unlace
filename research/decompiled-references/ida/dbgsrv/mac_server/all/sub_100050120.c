/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050120
// Address: 0x0000000100050120

//----- (0000000100050120) ----------------------------------------------------
char __fastcall sub_100050120(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // r8
  unsigned __int64 v8; // rax
  char v9; // r15
  unsigned __int64 v10; // rax
  _BYTE *v11; // rcx
  size_t v12; // r12
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v17; // [rsp+0h] [rbp-80h]
  __int64 v19; // [rsp+10h] [rbp-70h]
  __int64 v20; // [rsp+18h] [rbp-68h]
  __int64 v21; // [rsp+20h] [rbp-60h]
  __int64 v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-40h]
  unsigned __int64 v25; // [rsp+48h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-30h]

  if ( 4LL * *(_QWORD *)(a1 + 4192) )
  {
    v2 = *(_QWORD *)(a1 + 4240);
    v3 = a1 + v2 + 48;
    v4 = *(int **)(a1 + 4184);
    v22 = a1 + 4152;
    v5 = a1 + v2;
    v23 = v2;
    v20 = v2 + 1;
    v24 = a1;
    do
    {
      v6 = a2 - *(_QWORD *)(a1 + 4240);
      if ( a2 != *(_QWORD *)(a1 + 4240) )
      {
        v7 = (_QWORD *)(**(_QWORD **)(a1 + 24) + 80LL * *v4);
        v8 = v7[1];
        v9 = *(_BYTE *)(*v7 + v8 - 1);
        v25 = v8;
        v19 = v20 - v8;
LABEL_6:
        v10 = v6 + 1;
        while ( 1 )
        {
          v11 = (_BYTE *)(v5 + v6 + 47);
          if ( (unsigned __int64)v11 < v3 )
            break;
          --v10;
          --v6;
          if ( *v11 == v9 )
          {
            v12 = v25;
            if ( v6 + 1 < v25 )
              v12 = v6 + 1;
            if ( v25 < v10 )
              v10 = v25;
            v17 = v7;
            a1 = v24;
            if ( !memcmp((const void *)(v5 - v10 + v6 + 49), (const void *)(*v7 + v25 - v12), v12) )
            {
              v13 = *(_QWORD *)(v24 + 4144);
              if ( v25 <= v6 + 1 )
              {
                **(_QWORD **)(v24 + 8) = v6 + v13 + v23 - v25 + 1;
                return 1;
              }
              v21 = v6 + v19 + v13;
              v26 = *v4;
              v14 = qalloc_or_throw(40);
              a1 = v24;
              v14[2] = v21;
              v14[3] = v26;
              v14[4] = v12;
              *v14 = v22;
              v15 = *(_QWORD **)(v24 + 4160);
              v14[1] = v15;
              *v15 = v14;
              *(_QWORD *)(v24 + 4160) = v14;
              ++*(_QWORD *)(v24 + 4168);
            }
            v7 = v17;
            if ( v6 )
              goto LABEL_6;
            break;
          }
        }
      }
      ++v4;
    }
    while ( v4 != (int *)(*(_QWORD *)(a1 + 4184) + 4LL * *(_QWORD *)(a1 + 4192)) );
  }
  return 0;
}
