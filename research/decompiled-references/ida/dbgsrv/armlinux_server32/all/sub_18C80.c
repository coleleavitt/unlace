/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18C80
// Address: 0x00018C80

//----- (00018C80) --------------------------------------------------------
void __fastcall sub_18C80(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  void *v4; // r0
  _DWORD *v5; // r5
  void *v6; // r0
  void *v7; // r0

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_18C80(a1, v3[3]);
      v4 = (void *)v3[10];
      v5 = (_DWORD *)v3[2];
      if ( v4 )
      {
        v3[11] = 0;
        sub_77F70(v4);
      }
      v6 = (void *)v3[6];
      if ( v6 )
      {
        v3[7] = 0;
        sub_77F70(v6);
      }
      v7 = v3;
      v3 = v5;
      sub_809EC(v7);
    }
    while ( v5 );
  }
}
