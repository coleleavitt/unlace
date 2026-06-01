/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F868
// Address: 0x0001F868

//----- (0001F868) --------------------------------------------------------
bool __fastcall sub_1F868(_DWORD *a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r5
  char *v5; // r0
  _BOOL4 v6; // r8
  int v7; // r9
  int v8; // r5
  int v9; // r6
  char *v10; // r4
  void *v11; // r0
  void *v12; // r0
  void *ptr; // [sp+0h] [bp-10h] BYREF
  int v15; // [sp+4h] [bp-Ch]
  int v16; // [sp+8h] [bp-8h]

  v2 = 11 * (((a1[23] - a1[19]) >> 2) - 1);
  v3 = ((a1[20] - a1[21]) >> 2) + ((a1[18] - a1[16]) >> 2);
  ptr = nullptr;
  v4 = v2 - 1171354717 * v3;
  v15 = 0;
  v16 = 0;
  if ( sub_1EBEC((int)a1, (int *)&ptr, 0) == 1 )
    sub_1E6FC((int)a1, &ptr);
  v5 = (char *)ptr;
  v6 = 11 * (((a1[23] - a1[19]) >> 2) - 1) - 1171354717 * (((a1[20] - a1[21]) >> 2) + ((a1[18] - a1[16]) >> 2)) != v4;
  if ( ptr )
  {
    v7 = v15;
    if ( v15 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = &v5[v8];
        v11 = *(void **)&v5[v8 + 20];
        if ( v11 )
        {
          *((_DWORD *)v10 + 6) = 0;
          sub_77E08(v11);
        }
        v12 = *((void **)v10 + 2);
        if ( v12 )
        {
          *((_DWORD *)v10 + 3) = 0;
          sub_77E08(v12);
        }
        ++v9;
        v8 += 40;
        v5 = (char *)ptr;
      }
      while ( v7 != v9 );
    }
    v15 = 0;
    sub_77E08(v5);
  }
  return v6;
}
