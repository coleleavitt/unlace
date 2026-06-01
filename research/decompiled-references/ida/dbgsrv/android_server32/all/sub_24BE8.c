/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24BE8
// Address: 0x00024BE8

//----- (00024BE8) --------------------------------------------------------
int __fastcall sub_24BE8(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0

  *(_DWORD *)(a1 + 1012) = 0;
  *(_DWORD *)(a1 + 796) = 0;
  *(_DWORD *)(a1 + 960) = 0;
  *(_DWORD *)a1 = &off_D6130;
  v2 = *(void **)(a1 + 1036);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 1040) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 1036) = 0;
    *(_DWORD *)(a1 + 1044) = 0;
  }
  v3 = *(void **)(a1 + 1024);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 1028) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 1024) = 0;
    *(_DWORD *)(a1 + 1032) = 0;
  }
  sub_25078(a1 + 1000, *(_DWORD **)(a1 + 1004));
  v4 = *(void **)(a1 + 980);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 984) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 980) = 0;
    *(_DWORD *)(a1 + 988) = 0;
  }
  v5 = *(void **)(a1 + 948);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 952) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 948) = 0;
    *(_DWORD *)(a1 + 956) = 0;
  }
  v6 = *(void **)(a1 + 936);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 940) = 0;
    qfree(v6);
    *(_DWORD *)(a1 + 936) = 0;
    *(_DWORD *)(a1 + 944) = 0;
  }
  v7 = *(void **)(a1 + 924);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 928) = 0;
    qfree(v7);
    *(_DWORD *)(a1 + 924) = 0;
    *(_DWORD *)(a1 + 932) = 0;
  }
  sub_25098(a1 + 912, *(_DWORD **)(a1 + 916));
  sub_250CA(a1 + 900, *(_DWORD **)(a1 + 904));
  sub_25078(a1 + 888, *(_DWORD **)(a1 + 892));
  v8 = *(void **)(a1 + 876);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 880) = 0;
    qfree(v8);
    *(_DWORD *)(a1 + 876) = 0;
    *(_DWORD *)(a1 + 884) = 0;
  }
  v9 = *(void **)(a1 + 864);
  if ( v9 )
  {
    *(_DWORD *)(a1 + 868) = 0;
    qfree(v9);
    *(_DWORD *)(a1 + 864) = 0;
    *(_DWORD *)(a1 + 872) = 0;
  }
  v10 = *(void **)(a1 + 852);
  if ( v10 )
  {
    *(_DWORD *)(a1 + 856) = 0;
    qfree(v10);
    *(_DWORD *)(a1 + 852) = 0;
    *(_DWORD *)(a1 + 860) = 0;
  }
  v11 = *(void **)(a1 + 840);
  if ( v11 )
  {
    *(_DWORD *)(a1 + 844) = 0;
    qfree(v11);
    *(_DWORD *)(a1 + 840) = 0;
    *(_DWORD *)(a1 + 848) = 0;
  }
  return sub_1AC9C(a1);
}
// D6130: using guessed type _UNKNOWN *off_D6130;
