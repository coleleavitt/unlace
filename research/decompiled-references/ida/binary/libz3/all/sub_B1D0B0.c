void __fastcall sub_B1D0B0(__int64 a1, unsigned int a2, __int64 a3, unsigned int **a4, int a5, int a6)
{
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ecx
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned int *v14; // [rsp+0h] [rbp-38h] BYREF
  int *v15; // [rsp+8h] [rbp-30h] BYREF

  if ( a2 == 1 )
  {
    sub_B0E5E0(a4, (unsigned int *)a3);
  }
  else if ( a2 == 2 )
  {
    sub_B1C010(a1, 1u, (unsigned int *)a3, 1u, (int *)(a3 + 4), a4);
  }
  else if ( a2 )
  {
    if ( a2 > 9 )
      goto LABEL_5;
    v12 = sub_B1CC50(a1, a2);
    v13 = 1 << (a2 - 1);
    if ( *(_DWORD *)(a1 + 16) >= 2u )
      v13 = 2 << (a2 - 1);
    if ( v13 + 5 * a2 >= 5 * (int)v12 + HIDWORD(v12) )
    {
LABEL_5:
      v15 = nullptr;
      sub_B1D0B0(a1, a2 >> 1, a3, (unsigned int)&v14, a5, a6, 0);
      sub_B1D0B0(a1, a2 - (a2 >> 1), a3 + 4 * (a2 >> 1), (unsigned int)&v15, v8, v9, (__int64)v14);
      if ( v15 )
        v10 = *(v15 - 1);
      else
        v10 = 0;
      if ( v14 )
        v11 = *(v14 - 1);
      else
        v11 = 0;
      sub_B1C010(a1, v11, v14, v10, v15, a4);
      if ( v15 )
        sub_186B220(v15 - 2);
      if ( v14 )
        sub_186B220(v14 - 2);
    }
    else
    {
      sub_B191A0(a1, a2, a2, (unsigned int *)a3, a4);
    }
  }
}

