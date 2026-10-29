/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_893BC
// Address: 0x00000000000893BC

//----- (00000000000893BC) ----------------------------------------------------
__int64 __fastcall sub_893BC(__int64 a1, __int64 a2)
{
  int *v2; // x25
  __int64 v3; // x26
  __int64 v5; // x8
  size_t v6; // x23
  const void *v7; // x24
  const void **v8; // x29
  unsigned __int8 *v9; // x27
  int v10; // w21
  _BYTE *v11; // x0
  size_t v12; // x24
  size_t v13; // x23
  _BYTE *v14; // x22
  _BYTE *v15; // x20
  __int64 v16; // x28
  _QWORD *v17; // x0
  __int64 v18; // x8
  bool v19; // zf
  void *s; // [xsp+8h] [xbp-78h]
  __int64 v22; // [xsp+10h] [xbp-70h]
  __int64 v23; // [xsp+18h] [xbp-68h]

  if ( 4LL * *(_QWORD *)(a1 + 4192) )
  {
    v2 = *(int **)(a1 + 4184);
    v3 = a1 + 48;
    s = (void *)(a1 + 48 + a2);
    v22 = a2;
    v23 = a1 + 4152;
    do
    {
      v5 = *(_QWORD *)(a1 + 4240);
      v6 = v5 - a2;
      if ( v5 != a2 )
      {
        v7 = s;
        v8 = (const void **)(**(_QWORD **)(a1 + 24) + 80LL * *v2);
        v9 = (unsigned __int8 *)v8[1];
        v10 = *(unsigned __int8 *)*v8;
        do
        {
          v11 = memchr(v7, v10, v6);
          if ( !v11 )
            break;
          v12 = (_BYTE *)v7 - v11 + v6;
          if ( v12 >= (unsigned __int64)v9 )
            v13 = (size_t)v9;
          else
            v13 = v12;
          v14 = v11;
          if ( !memcmp(v11, *v8, v13) )
          {
            v15 = &v14[*(_QWORD *)(a1 + 4144) - v3];
            if ( v12 >= (unsigned __int64)v9 )
            {
              **(_QWORD **)(a1 + 8) = v15;
              return 1;
            }
            v16 = *v2;
            v17 = qalloc_or_throw(40);
            v17[2] = v15;
            v17[3] = v16;
            v17[4] = v13;
            *v17 = v23;
            v17[1] = *(_QWORD *)(a1 + 4160);
            **(_QWORD **)(a1 + 4160) = v17;
            v18 = *(_QWORD *)(a1 + 4168);
            *(_QWORD *)(a1 + 4160) = v17;
            *(_QWORD *)(a1 + 4168) = v18 + 1;
          }
          v6 = v12 - 1;
          v19 = v12 == 1;
          v7 = v14 + 1;
        }
        while ( !v19 );
      }
      a2 = v22;
      ++v2;
    }
    while ( v2 != (int *)(*(_QWORD *)(a1 + 4184) + 4LL * *(_QWORD *)(a1 + 4192)) );
  }
  return 0;
}
