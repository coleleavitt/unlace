__int64 __fastcall Z3_get_datatype_sort_constructor_accessor(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v5; // r13
  char v6; // r12
  __int64 v7; // r14
  int v8; // eax
  _DWORD *v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-40h]

  v4 = a4;
  v5 = a3;
  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_299B50(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v8 = sub_15F0200(v7);
  v9 = *(_DWORD **)(a2 + 24);
  if ( !v9 || v8 != *v9 || v9[1] )
    goto LABEL_5;
  v11 = *(_QWORD *)sub_15F6BE0(v7, a2);
  if ( !v11 || (unsigned int)v5 >= *(_DWORD *)(v11 - 4) )
  {
    sub_24EA30(a1, 3, 0);
    if ( !v6 )
      return 0;
    goto LABEL_17;
  }
  v12 = *(_QWORD *)(v11 + 8 * v5);
  if ( (unsigned int)v4 >= *(_DWORD *)(v12 + 32)
    || (v13 = *(_QWORD *)sub_15FB1F0(v7, v12)) == 0
    || (unsigned int)v4 >= *(_DWORD *)(v13 - 4) )
  {
LABEL_5:
    sub_24EA30(a1, 3, 0);
    if ( !v6 )
      return 0;
    sub_2BB620(0);
LABEL_17:
    result = 0;
    goto LABEL_18;
  }
  v14 = *(_QWORD *)(v13 + 8 * v4);
  sub_251FD0(a1, v14);
  result = v14;
  if ( v6 )
  {
    sub_2BB620(v14);
    result = v14;
LABEL_18:
    byte_1C7EBA0 = 1;
  }
  return result;
}

