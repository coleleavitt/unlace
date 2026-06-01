__int64 __fastcall sub_685C90(__int64 *a1, unsigned __int64 a2, char a3, double a4, double a5, double a6)
{
  unsigned __int64 *v7; // r15
  __int64 result; // rax
  char *v9; // r12
  char *v10; // r14
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // esi
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rsi
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v7 = sub_505D70((__int64)(a1 + 203), a2);
  result = 0;
  if ( v7 )
  {
    v9 = (char *)*v7;
    v10 = (char *)v7[1];
    v19 = v7[6];
    v11 = *v7;
    if ( (*((_BYTE *)v7 + 44) & 8) == 0 && (a3 & 4) == 0 )
    {
      sub_39ADA0(0x13u, v11);
      v18 = (unsigned int)(2 * *(_DWORD *)(a1[3] + 24));
      sub_387DF0(1276, v18, (__int64)v9, (unsigned int)v18);
    }
    sub_39ADA0(0x13u, v11);
    if ( (a3 & 2) == 0 )
      sub_684820(a1, v9, v10, a3 & 1, (*((_WORD *)v7 + 22) & 0x18) == 8, a4, a5, a6);
    sub_512600(*a1, (__int64)v9, *((unsigned int *)v7 + 4));
    sub_512970(*a1, *((unsigned int *)v7 + 6), v12);
    sub_505AA0(a1 + 203, (unsigned __int64)v9, 1, a4);
    v13 = ea2node(v9);
    netnode_supdel(v13, 10, 65);
    sub_510270(*a1);
    sub_685AC0((__int64)a1, (__int64)v9, -1);
    v14 = (int)v9;
    sub_4F3340(a1, (__int64)v9, (unsigned __int64)v10);
    if ( (a3 & 0x10) == 0 )
    {
      v14 = v19;
      if ( !(unsigned __int8)sub_50FFA0((__int64)a1, v19) )
      {
        v14 = v19;
        sub_50FF70((__int64)a1, v19);
      }
    }
    callui(1, v14, (int)&callui, v15, v16, v17);
  }
  return result;
}
