void __fastcall Z3_optimize_assert(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  void *v9; // [rsp+0h] [rbp-28h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_2A0460(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || !*(_DWORD *)(a3 + 8) )
    {
      sub_24EA30(a1, 3u, nullptr);
LABEL_14:
      byte_1C7EBA0 = 1;
      return;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || !*(_DWORD *)(a3 + 8) )
    {
      sub_24EA30(a1, 3u, nullptr);
      return;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 > 1 && (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 232), a3) )
    sub_2F2620(*(_QWORD *)(a2 + 24), a3, v5, v6, v7, v8, v9);
  else
    sub_24EA30(a1, 3u, nullptr);
  if ( v4 )
    goto LABEL_14;
}

