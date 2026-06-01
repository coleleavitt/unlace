__int64 __fastcall Z3_get_datatype_sort_recognizer(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  char v4; // bp
  __int64 v5; // r13
  int v6; // eax
  _DWORD *v7; // rdx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-40h]

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_299B10(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v6 = sub_15F0200(v5);
  v7 = *(_DWORD **)(a2 + 24);
  if ( v7 && v6 == *v7 && !v7[1] && (v9 = *(_QWORD *)sub_15F6BE0(v5, a2)) != 0 && (unsigned int)v3 < *(_DWORD *)(v9 - 4) )
  {
    v10 = sub_15F0A30(v5, *(_QWORD *)(v9 + 8 * v3));
    sub_251FD0(a1, v10);
    result = v10;
    if ( v4 )
    {
      sub_2BB620(v10);
      result = v10;
LABEL_14:
      byte_1C7EBA0 = 1;
    }
  }
  else
  {
    sub_24EA30(a1, 3, 0);
    if ( v4 )
    {
      sub_2BB620(0);
      result = 0;
      goto LABEL_14;
    }
    return 0;
  }
  return result;
}

