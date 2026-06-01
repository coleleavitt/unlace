__int64 __fastcall sub_6862C0(__int64 *a1, double a2, double a3, double a4)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  while ( 1 )
  {
    v4 = sub_5060F0((__int64)(a1 + 203), 0xFFFFFFFFFFFFFFFFLL);
    if ( !v4 )
      break;
    sub_685C90(a1, *v4, 0, a2, a3, a4);
  }
  v9 = sub_631AD0(*a1, 21, v5, v6, v7, v8);
  sub_3D6B90(a1, 0, v9);
  v14 = sub_631AD0(*a1, 22, v10, v11, v12, v13);
  return sub_3D6B90(a1, v14, -1);
}
