/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19C44
// Address: 0x00019C44

//----- (00019C44) --------------------------------------------------------
void __fastcall sub_19C44(int a1, int a2)
{
  int v3; // r4
  void *v4; // r0
  int v5; // r6
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_19C44(a1, *(_DWORD *)(v3 + 12));
      v4 = *(void **)(v3 + 88);
      v5 = *(_DWORD *)(v3 + 8);
      if ( v4 )
      {
        *(_DWORD *)(v3 + 92) = 0;
        sub_77F70(v4);
      }
      v6 = *(void **)(v3 + 76);
      if ( v6 )
      {
        *(_DWORD *)(v3 + 80) = 0;
        sub_77F70(v6);
      }
      sub_18D00(v3 + 52, *(_DWORD **)(v3 + 60));
      v7 = *(void **)(v3 + 40);
      if ( v7 )
      {
        *(_DWORD *)(v3 + 44) = 0;
        sub_77F70(v7);
      }
      v8 = *(void **)(v3 + 28);
      if ( v8 )
      {
        *(_DWORD *)(v3 + 32) = 0;
        sub_77F70(v8);
      }
      v9 = (void *)v3;
      v3 = v5;
      sub_809EC(v9);
    }
    while ( v5 );
  }
}
