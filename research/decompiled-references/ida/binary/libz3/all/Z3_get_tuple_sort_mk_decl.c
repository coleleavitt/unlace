__int64 __fastcall Z3_get_tuple_sort_mk_decl(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // r13
  int v4; // eax
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-30h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_299990();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v4 = sub_15F0200(v3);
  v6 = *(_DWORD **)(a2 + 24);
  if ( v6
    && v4 == *v6
    && !v6[1]
    && !(unsigned __int8)sub_15FD0A0(v3, a2, v6, v5)
    && (unsigned int)sub_15F10D0(v3, a2) == 1 )
  {
    result = sub_24BA30(a1, a2, 0);
    if ( v2 )
    {
      v8 = result;
      sub_2BB620(result);
      result = v8;
LABEL_14:
      byte_1C7EBA0 = 1;
    }
  }
  else
  {
    sub_24EA30(a1, 3, 0);
    if ( v2 )
    {
      sub_2BB620(0);
      result = 0;
      goto LABEL_14;
    }
    return 0;
  }
  return result;
}

