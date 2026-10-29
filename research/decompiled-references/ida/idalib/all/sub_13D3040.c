void __fastcall sub_13D3040(unsigned __int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  char v6; // r13
  int v7; // ebp
  __int64 v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-88h] BYREF
  int v11; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v12[15]; // [rsp+10h] [rbp-78h] BYREF

  v6 = a5;
  v7 = a3;
  v9 = *(_QWORD *)(a1 + 32);
  v11 = a4;
  v10 = a3;
  if ( (unsigned __int8)sub_FD3830(v9, 0x529u, a3, a1, a5, a6) != 1 )
  {
    LODWORD(v12[0]) = a2;
    if ( sub_13D2FE0(&byte_2612070[-1968], byte_2612070, v12) )
    {
      if ( v6 )
      {
        if ( sub_13D2FE0(&byte_2611890[-112], byte_2611890, v12) )
        {
          sub_FC70B0((__int64)v12, a1, v7, 1321);
          sub_AEC610((__int64 *)v12, &v10);
          sub_AE9DF0(v12, 1, 2u);
          sub_AEA040((__int64)v12);
        }
      }
    }
    else
    {
      sub_FC70B0((__int64)v12, a1, v7, 1321);
      sub_AEC610((__int64 *)v12, &v10);
      sub_AE9DF0(v12, 0, 2u);
      sub_AEA040((__int64)v12);
    }
  }
}
