/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_889D8
// Address: 0x00000000000889D8

//----- (00000000000889D8) ----------------------------------------------------
__int64 __fastcall sub_889D8(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  int *v3; // x24
  const void *v5; // x21
  size_t v6; // x2
  _QWORD *v7; // x28
  size_t v8; // x29
  int v9; // w22
  _BYTE *v10; // x0
  char *v11; // x20
  unsigned __int64 v12; // x25
  size_t v13; // x23
  char *v14; // x20
  __int64 v15; // x26
  _QWORD *v16; // x0
  __int64 v17; // x8
  __int64 v19; // [xsp+8h] [xbp-78h]
  __int64 v21; // [xsp+18h] [xbp-68h]

  if ( 4LL * *(_QWORD *)(a1 + 4192) )
  {
    v2 = *(_QWORD *)(a1 + 4240);
    v3 = *(int **)(a1 + 4184);
    v19 = a1 + 48;
    v21 = a1 + 4152;
    v5 = (const void *)(a1 + v2 + 48);
    while ( 1 )
    {
      v6 = a2 - v2;
      if ( a2 != v2 )
      {
        v7 = (_QWORD *)(**(_QWORD **)(a1 + 24) + 80LL * *v3);
        v8 = v7[1];
        v9 = *(unsigned __int8 *)(*v7 + v8 - 1);
        while ( 1 )
        {
          v10 = memrchr(v5, v9, v6);
          if ( !v10 )
            break;
          v11 = v10 + 1;
          v12 = v10 + 1 - (_BYTE *)v5;
          if ( v12 >= v8 )
            v13 = v8;
          else
            v13 = v10 + 1 - (_BYTE *)v5;
          if ( !memcmp(&v11[-v13], (const void *)(*v7 + v8 - v13), v13) )
          {
            v14 = &v11[-v8 - v19 + *(_QWORD *)(a1 + 4144)];
            if ( v12 >= v8 )
            {
              **(_QWORD **)(a1 + 8) = v14;
              return 1;
            }
            v15 = *v3;
            v16 = qalloc_or_throw(40);
            v16[2] = v14;
            v16[3] = v15;
            v16[4] = v13;
            *v16 = v21;
            v16[1] = *(_QWORD *)(a1 + 4160);
            **(_QWORD **)(a1 + 4160) = v16;
            v17 = *(_QWORD *)(a1 + 4168);
            *(_QWORD *)(a1 + 4160) = v16;
            *(_QWORD *)(a1 + 4168) = v17 + 1;
            v6 = v12 - 1;
            if ( v12 == 1 )
              break;
          }
          else
          {
            v6 = v12 - 1;
            if ( v12 == 1 )
              break;
          }
        }
      }
      if ( ++v3 == (int *)(*(_QWORD *)(a1 + 4184) + 4LL * *(_QWORD *)(a1 + 4192)) )
        break;
      v2 = *(_QWORD *)(a1 + 4240);
    }
  }
  return 0;
}
