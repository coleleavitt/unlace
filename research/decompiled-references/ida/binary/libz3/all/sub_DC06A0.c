__int64 __fastcall sub_DC06A0(__int64 *a1, int a2, __int64 a3, unsigned __int8 a4, __int64 a5, int a6)
{
  int v6; // r12d
  int v7; // ebp
  __int64 v9; // rdi
  __int64 v10; // r14

  v6 = a4;
  v7 = a3;
  v9 = *a1;
  if ( v9 )
  {
    sub_DDAAA0(v9 + 16, a3, a4);
    v10 = *a1;
  }
  else
  {
    v10 = sub_186B270(0x880u);
    sub_DC7C20(v10, a2, v7, v6, a5, a6, a5);
    *a1 = v10;
  }
  return sub_DD7380(v10);
}

