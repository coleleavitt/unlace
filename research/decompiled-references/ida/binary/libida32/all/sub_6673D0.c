__int64 __fastcall sub_6673D0(__int64 *a1, double a2, double a3, double a4)
{
  unsigned int *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax

  while ( 1 )
  {
    v4 = sub_4EEB90((__int64)(a1 + 194), 0xFFFFFFFF);
    if ( !v4 )
      break;
    sub_666DD0((__int64)a1, *v4, 0, a2, a3, a4);
  }
  v9 = sub_614FB0(*a1, 21, v5, v6, v7, v8);
  sub_3D0FA0(a1, 0, v9);
  v14 = sub_614FB0(*a1, 22, v10, v11, v12, v13);
  return sub_3D0FA0(a1, v14, 0xFFFFFFFFLL);
}

