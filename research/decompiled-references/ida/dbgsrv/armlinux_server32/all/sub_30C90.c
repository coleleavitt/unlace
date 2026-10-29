/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30C90
// Address: 0x00030C90

//----- (00030C90) --------------------------------------------------------
int __fastcall sub_30C90(int a1)
{
  int v1; // r9
  char *v2; // r0
  int v3; // r7
  int v4; // r6
  int v5; // r11
  char *v6; // r4
  void *v7; // r0
  void *v8; // r0
  _BYTE v10[16]; // [sp+0h] [bp-1F4h] BYREF
  void *v11; // [sp+10h] [bp-1E4h]
  int v12; // [sp+14h] [bp-1E0h]
  void *v13; // [sp+38h] [bp-1BCh]
  int v14; // [sp+3Ch] [bp-1B8h]
  char *v15; // [sp+D8h] [bp-11Ch]
  int v16; // [sp+DCh] [bp-118h]
  int (__fastcall *v17)(int, int, int, int); // [sp+180h] [bp-74h]
  void *v18; // [sp+1CCh] [bp-28h]
  int v19; // [sp+1D0h] [bp-24h]
  int v20; // [sp+1D8h] [bp-1Ch]

  sub_30B7C((int)v10, a1, 0);
  v17 = sub_204B8;
  v1 = sub_2A2D4((int)v10);
  if ( v1 )
    v1 = sub_2A6F8((int)v10);
  if ( v20 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 4))(v20);
  if ( v18 )
  {
    v19 = 0;
    sub_77F70(v18);
  }
  v2 = v15;
  if ( v15 )
  {
    v3 = v16;
    if ( v16 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 12];
        if ( v7 )
        {
          *((_DWORD *)v6 + 4) = 0;
          sub_77F70(v7);
        }
        v8 = *(void **)v6;
        if ( *(_DWORD *)v6 )
        {
          *((_DWORD *)v6 + 1) = 0;
          sub_77F70(v8);
        }
        ++v5;
        v4 += 68;
        v2 = v15;
      }
      while ( v3 != v5 );
    }
    v16 = 0;
    sub_77F70(v2);
  }
  if ( v13 )
  {
    v14 = 0;
    sub_77F70(v13);
  }
  if ( v11 )
  {
    v12 = 0;
    sub_77F70(v11);
  }
  return v1;
}
