/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E514
// Address: 0x0001E514

//----- (0001E514) --------------------------------------------------------
int __fastcall sub_1E514(int a1, _DWORD *a2)
{
  _DWORD *v2; // r7
  char *v3; // r0
  int v4; // r6
  const char *v5; // r1
  const void **v6; // r5
  int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r1
  void **v10; // r6
  unsigned int v11; // r3
  size_t v12; // r2
  unsigned int v13; // r5
  void *v14; // r0
  _DWORD *v15; // r5
  size_t v16; // r6
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  bool v19; // zf
  int v20; // r1
  char *v23; // [sp+Ch] [bp-28h]
  size_t v24; // [sp+Ch] [bp-28h]
  char *v25; // [sp+10h] [bp-24h]
  _DWORD *v26; // [sp+10h] [bp-24h]
  int v27; // [sp+14h] [bp-20h]
  const void *v28; // [sp+14h] [bp-20h]
  int v29; // [sp+1Ch] [bp-18h]
  char *s1; // [sp+24h] [bp-10h] BYREF
  int v32; // [sp+28h] [bp-Ch]
  int v33; // [sp+2Ch] [bp-8h]
  int v34; // [sp+30h] [bp-4h]

  v2 = *(_DWORD **)(a1 + 912);
  v29 = a1 + 916;
  while ( v2 != (_DWORD *)v29 )
  {
    v32 = 0;
    s1 = nullptr;
    v33 = 0;
    if ( sub_1E438(a1, &s1, v2[5]) )
    {
      v27 = v32;
      v3 = &byte_B3CBE;
      if ( v32 )
        v3 = s1;
      v25 = s1;
      v4 = v2[14];
      v5 = &byte_B3CBE;
      if ( v4 )
        v5 = (const char *)v2[13];
      v23 = (char *)v2[13];
      v6 = (const void **)(v2 + 13);
      if ( strcmp(v3, v5) )
      {
        v2[13] = v25;
        v2[14] = v27;
        v7 = v2[15];
        v2[15] = v33;
        v32 = v4;
        s1 = v23;
        v33 = v7;
        v8 = sub_1E678(a2);
        v9 = v8;
        *v8 = v2[5];
        v10 = (void **)(v8 + 1);
        if ( v8 + 1 != v6 )
        {
          v11 = v2[14];
          v12 = v11 - 1;
          if ( v11 < 2 )
          {
            v8[2] = 0;
          }
          else
          {
            v28 = *v6;
            if ( v8[3] >= v11 )
            {
              v14 = *v10;
            }
            else
            {
              v24 = v11 - 1;
              v26 = v8;
              v13 = v2[14];
              v14 = qvector_reserve((int)v10, *v10, v11, 1u);
              v9 = v26;
              *v10 = v14;
              v12 = v24;
              v11 = v13;
            }
            v9[2] = v11;
            v15 = v9;
            v16 = v12;
            memmove(v14, v28, v12);
            *(_BYTE *)(v15[1] + v16) = 0;
          }
        }
      }
    }
    if ( s1 )
    {
      v32 = 0;
      qfree(s1);
      v33 = 0;
      s1 = nullptr;
    }
    v17 = (_DWORD *)v2[1];
    if ( v17 )
    {
      do
      {
        v2 = v17;
        v17 = (_DWORD *)*v17;
      }
      while ( v17 );
    }
    else
    {
      v18 = v2 + 2;
      v19 = *(_DWORD *)v2[2] == (_DWORD)v2;
      v2 = (_DWORD *)v2[2];
      if ( !v19 )
      {
        do
        {
          v20 = *v18;
          v18 = (_DWORD *)(*v18 + 8);
          v2 = *(_DWORD **)(v20 + 8);
        }
        while ( *v2 != v20 );
      }
    }
  }
  return _stack_chk_guard - v34;
}
// B3CBE: using guessed type char byte_B3CBE;
