/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B866
// Address: 0x0001B866

//----- (0001B866) --------------------------------------------------------
int __fastcall sub_1B866(_DWORD *a1)
{
  _DWORD *v1; // r6
  int v2; // r0
  _DWORD *v3; // r7
  void *v4; // r0
  char *v5; // r5
  _DWORD *v6; // r3
  _DWORD *v7; // r1
  unsigned int v8; // r4
  int i; // r6
  void *v10; // r0
  _DWORD *v11; // r4
  void *v12; // r0
  _DWORD *v13; // r5
  void *v14; // r0
  char *v15; // r5
  _DWORD *v16; // r3
  _DWORD *v17; // r1
  unsigned int v18; // r4
  int j; // r6
  void *v20; // r0
  _DWORD *v21; // r4
  void *v22; // r0
  _DWORD *v23; // r5
  _DWORD *v25; // [sp+4h] [bp-18h]
  _DWORD *v26; // [sp+4h] [bp-18h]
  _DWORD *v27; // [sp+8h] [bp-14h]
  _DWORD *v28; // [sp+Ch] [bp-10h]
  _DWORD *v29; // [sp+Ch] [bp-10h]
  unsigned int v30; // [sp+14h] [bp-8h]
  unsigned int v31; // [sp+14h] [bp-8h]
  unsigned int v32; // [sp+18h] [bp-4h]
  unsigned int v33; // [sp+18h] [bp-4h]

  v1 = a1;
  v2 = a1[69];
  v3 = v1 + 69;
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    v4 = (void *)v1[70];
    if ( v4 )
    {
      v1[71] = 0;
      qfree(v4);
      v1[70] = 0;
      v1[72] = 0;
    }
    v5 = (char *)v1[73];
    v6 = v1 + 73;
    if ( v5 )
    {
      v7 = v1 + 74;
      v30 = v1[74];
      if ( v30 )
      {
        v25 = v1 + 74;
        v27 = v1 + 69;
        v28 = v1;
        v8 = 1;
        for ( i = 8; ; i += 12 )
        {
          v10 = *(void **)&v5[i - 8];
          if ( v10 )
          {
            v32 = v8;
            v11 = v6;
            *(_DWORD *)&v5[i - 4] = 0;
            qfree(v10);
            *(_DWORD *)&v5[i - 8] = 0;
            *(_DWORD *)&v5[i] = 0;
            v6 = v11;
            v8 = v32;
          }
          if ( v8 >= v30 )
            break;
          ++v8;
          v5 = (char *)*v6;
        }
        v12 = (void *)*v6;
        v1 = v28;
        v3 = v27;
        v13 = v6;
        v7 = v25;
      }
      else
      {
        v12 = (void *)v1[73];
        v13 = v1 + 73;
      }
      *v7 = 0;
      qfree(v12);
      *v13 = 0;
      v1[75] = 0;
    }
    v14 = (void *)v1[76];
    if ( v14 )
    {
      v1[77] = 0;
      qfree(v14);
      v1[76] = 0;
      v1[78] = 0;
    }
    v15 = (char *)v1[79];
    v16 = v1 + 79;
    if ( v15 )
    {
      v17 = v1 + 80;
      v31 = v1[80];
      if ( v31 )
      {
        v26 = v1 + 80;
        v29 = v1;
        v18 = 1;
        for ( j = 8; ; j += 12 )
        {
          v20 = *(void **)&v15[j - 8];
          if ( v20 )
          {
            v33 = v18;
            v21 = v16;
            *(_DWORD *)&v15[j - 4] = 0;
            qfree(v20);
            *(_DWORD *)&v15[j - 8] = 0;
            *(_DWORD *)&v15[j] = 0;
            v16 = v21;
            v18 = v33;
          }
          if ( v18 >= v31 )
            break;
          ++v18;
          v15 = (char *)*v16;
        }
        v22 = (void *)*v16;
        v1 = v29;
        v23 = v16;
        v17 = v26;
      }
      else
      {
        v22 = (void *)v1[79];
        v23 = v1 + 79;
      }
      *v17 = 0;
      qfree(v22);
      *v23 = 0;
      v1[81] = 0;
    }
  }
  *v3 = 0;
  return 0;
}
