/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58040
// Address: 0x00058040

//----- (00058040) --------------------------------------------------------
int __fastcall sub_58040(int a1, int a2)
{
  int v2; // r3
  int v3; // r4
  int result; // r0
  int *v5; // r2
  size_t v6; // r6
  const void **v7; // r7
  const void *v8; // r5
  _BYTE *v9; // r0
  _BYTE *v10; // r4
  size_t v11; // r5
  size_t v12; // r6
  int v13; // r7
  _DWORD *v14; // r0
  void *s; // [sp+4h] [bp-40h]
  int v16; // [sp+8h] [bp-3Ch]
  _DWORD *v17; // [sp+Ch] [bp-38h]
  _DWORD *v18; // [sp+10h] [bp-34h]
  int v19; // [sp+14h] [bp-30h]
  _DWORD *v20; // [sp+18h] [bp-2Ch]
  _DWORD *v21; // [sp+1Ch] [bp-28h]
  int v22; // [sp+20h] [bp-24h]
  _DWORD *v23; // [sp+24h] [bp-20h]
  int v24; // [sp+28h] [bp-1Ch]
  _DWORD *v25; // [sp+2Ch] [bp-18h]
  int v26; // [sp+30h] [bp-14h]
  int *v27; // [sp+34h] [bp-10h]
  int v28; // [sp+38h] [bp-Ch]
  int c; // [sp+3Ch] [bp-8h]
  unsigned __int8 *v30; // [sp+40h] [bp-4h]

  v2 = a1;
  v18 = (_DWORD *)(a1 + 4144);
  v17 = (_DWORD *)(a1 + 4140);
  v3 = *(_DWORD *)(a1 + 4144);
  result = 0;
  if ( 4 * v3 )
  {
    v5 = *(int **)(v2 + 4140);
    v23 = (_DWORD *)(v2 + 4132);
    v22 = v2 + 4124;
    v25 = (_DWORD *)(v2 + 4120);
    v20 = (_DWORD *)(v2 + 4168);
    v21 = (_DWORD *)(v2 + 4128);
    v24 = v2 + 24;
    s = (void *)(v2 + 24 + a2);
    v19 = v2;
    v16 = a2;
    do
    {
      v6 = *v20 - a2;
      v27 = v5;
      v7 = (const void **)(**(_DWORD **)(v2 + 12) + 40 * *v5);
      if ( v6 )
      {
        v30 = (unsigned __int8 *)v7[1];
        c = *(unsigned __int8 *)*v7;
        v8 = s;
        v26 = **(_DWORD **)(v2 + 12) + 40 * *v5;
        do
        {
          v9 = memchr(v8, c, v6);
          if ( !v9 )
            break;
          v10 = v9;
          v11 = (_BYTE *)v8 - v9 + v6;
          v12 = v11;
          if ( v11 >= (unsigned int)v30 )
            v12 = (size_t)v30;
          if ( !memcmp(v9, *v7, v12) )
          {
            v13 = (int)&v10[*v25 - v24];
            if ( v11 >= (unsigned int)v30 )
            {
              **(_DWORD **)(v19 + 4) = v13;
              return 1;
            }
            v28 = *v27;
            v14 = qalloc_or_throw(20);
            v14[2] = v13;
            v14[3] = v28;
            v14[4] = v12;
            *v14 = v22;
            v14[1] = *v21;
            *(_DWORD *)*v21 = v14;
            *v21 = v14;
            ++*v23;
            v7 = (const void **)v26;
          }
          v6 = v11 - 1;
          v8 = v10 + 1;
        }
        while ( v6 );
      }
      v5 = v27 + 1;
      v2 = v19;
      a2 = v16;
    }
    while ( v27 + 1 != (int *)(*v17 + 4 * *v18) );
    return 0;
  }
  return result;
}
