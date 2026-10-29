__int64 __fastcall Z3_get_tuple_sort_field_decl(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  char v4; // r12
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-40h]

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_299A10(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v6 = sub_15F0200(v5);
  v8 = *(_DWORD **)(a2 + 24);
  if ( !v8
    || v6 != *v8
    || v8[1]
    || (unsigned __int8)sub_15FD0A0(v5, a2, v8, v7)
    || (unsigned int)sub_15F10D0(v5, a2) != 1
    || (v10 = *(_QWORD **)sub_15F6BE0(v5, a2)) == nullptr
    || *((_DWORD *)v10 - 1) != 1 )
  {
    sub_24EA30(a1, 3, 0);
LABEL_6:
    if ( !v4 )
      return 0;
    sub_2BB620(0);
    result = 0;
LABEL_18:
    byte_1C7EBA0 = 1;
    return result;
  }
  v11 = *(_QWORD *)sub_15FB1F0(v5, *v10);
  if ( !v11 || (unsigned int)v3 >= *(_DWORD *)(v11 - 4) )
  {
    sub_24EA30(a1, 2, 0);
    goto LABEL_6;
  }
  v12 = *(_QWORD *)(v11 + 8 * v3);
  sub_251FD0(a1, v12);
  result = v12;
  if ( v4 )
  {
    sub_2BB620(v12);
    result = v12;
    goto LABEL_18;
  }
  return result;
}

