__int64 __fastcall Z3_get_tuple_sort_num_fields(__int64 a1, __int64 a2)
{
  char v2; // r13
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2999D0();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v4 = sub_15F0200(v3);
  v6 = *(_DWORD **)(a2 + 24);
  if ( !v6
    || v4 != *v6
    || v6[1]
    || (unsigned __int8)sub_15FD0A0(v3, a2, v6, v5)
    || (unsigned int)sub_15F10D0(v3, a2) != 1
    || (v8 = *(_QWORD **)sub_15F6BE0(v3, a2)) == nullptr
    || *((_DWORD *)v8 - 1) != 1 )
  {
    sub_24EA30(a1, 3, 0);
LABEL_6:
    result = 0;
    goto LABEL_7;
  }
  v9 = *(_QWORD *)sub_15FB1F0(v3, *v8);
  if ( !v9 )
    goto LABEL_6;
  result = *(unsigned int *)(v9 - 4);
LABEL_7:
  if ( v2 )
    byte_1C7EBA0 = 1;
  return result;
}

