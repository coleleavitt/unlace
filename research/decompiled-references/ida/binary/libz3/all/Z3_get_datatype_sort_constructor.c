__int64 __fastcall Z3_get_datatype_sort_constructor(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // eax
  _DWORD *v8; // rdx
  __int64 v10; // rax

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_299AD0(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3, "not a valid ast");
      v5 = 0;
LABEL_5:
      sub_2BB620(v5);
      byte_1C7EBA0 = 1;
      return v5;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3, "not a valid ast");
      return 0;
    }
  }
  v6 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v7 = sub_15F0200(v6);
  v8 = *(_DWORD **)(a2 + 24);
  if ( v8
    && v7 == *v8
    && !v8[1]
    && (v10 = *(_QWORD *)sub_15F6BE0(v6, a2)) != 0
    && (unsigned int)v3 < *(_DWORD *)(v10 - 4) )
  {
    v5 = *(_QWORD *)(v10 + 8 * v3);
    sub_251FD0(a1, v5);
  }
  else
  {
    sub_24EA30(a1, 3, 0);
    v5 = 0;
  }
  if ( v4 )
    goto LABEL_5;
  return v5;
}

