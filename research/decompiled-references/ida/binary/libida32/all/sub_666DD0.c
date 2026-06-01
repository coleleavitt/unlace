__int64 __fastcall sub_666DD0(__int64 a1, __int64 a2, char a3, double a4, double a5, double a6)
{
  unsigned int *v7; // r15
  __int64 result; // rax
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // esi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rsi
  unsigned int v18; // [rsp+Ch] [rbp-3Ch]

  v7 = sub_4EE820(a1 + 1552, a2);
  result = 0;
  if ( v7 )
  {
    v9 = *v7;
    v10 = v7[1];
    v18 = v7[7];
    if ( (v7[6] & 8) == 0 && (a3 & 4) == 0 )
    {
      sub_396090(0x13u, v9);
      v17 = (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
      sub_3840D0(1276, v17, v9, (unsigned int)v17);
    }
    sub_396090(0x13u, v9);
    if ( (a3 & 2) == 0 )
      sub_665A00((__int64 *)a1, v9, v10, a3 & 1, (v7[6] & 0x18) == 8, a4, a5, a6);
    sub_4FAB30(*(_QWORD *)a1, v9, v7[2]);
    sub_4FAEC0(*(_QWORD *)a1, v7[3], v11);
    sub_4EE550((unsigned int *)(a1 + 1552), v9, 1, a4);
    v12 = ea2node(v9);
    netnode_supdel(v12, 10, 65);
    sub_4F8940(*(_QWORD *)a1);
    sub_666C00(a1, v9, 0xFFFFFFFF);
    v13 = v9;
    sub_4DBD20((int *)a1, v9, v10);
    if ( (a3 & 0x10) == 0 )
    {
      v13 = v18;
      if ( !(unsigned __int8)sub_4F86C0(a1, v18) )
      {
        v13 = v18;
        sub_4F8690(a1, v18);
      }
    }
    callui(1, v13, (int)&callui, v14, v15, v16);
  }
  return result;
}

