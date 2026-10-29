/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20380
// Address: 0x00020380

//----- (00020380) --------------------------------------------------------
int __fastcall sub_20380(int a1, int a2)
{
  char *v3; // r0
  int v5; // r7
  int i; // r5
  char *v7; // r4
  void *v8; // r0
  void *v9; // r0
  int v10; // r1
  int v12; // r4

  v3 = *(char **)(a1 + 236);
  if ( v3 )
  {
    v5 = *(_DWORD *)(a1 + 240);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v3[40 * i];
        v8 = *((void **)v7 + 5);
        if ( v8 )
        {
          *((_DWORD *)v7 + 6) = 0;
          sub_77F70(v8);
        }
        v9 = *((void **)v7 + 2);
        if ( v9 )
        {
          *((_DWORD *)v7 + 3) = 0;
          sub_77F70(v9);
        }
        v3 = *(char **)(a1 + 236);
      }
    }
    *(_DWORD *)(a1 + 240) = 0;
    sub_77F70(v3);
    *(_DWORD *)(a1 + 236) = 0;
    *(_DWORD *)(a1 + 244) = 0;
  }
  v10 = *(_DWORD *)(a1 + 984);
  *(_BYTE *)(a1 + 1114) = 0;
  sub_19C44(a1 + 976, v10);
  *(_DWORD *)(a1 + 984) = 0;
  *(_DWORD *)(a1 + 996) = 0;
  *(_DWORD *)(a1 + 988) = a1 + 980;
  *(_DWORD *)(a1 + 992) = a1 + 980;
  if ( !sub_55310(a1) )
    return 0;
  v12 = sub_1F188(a1, a2, 2);
  if ( !v12 )
    return 0;
  sub_1FA0C((_DWORD *)a1);
  return v12;
}
