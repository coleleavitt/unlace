void __fastcall Z3_goal_assert(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r13
  char v5; // r12
  _Unwind_Exception *v7; // [rsp+0h] [rbp-38h]
  int v8; // [rsp+8h] [rbp-30h]
  int v9; // [rsp+10h] [rbp-28h]
  __int64 v10; // [rsp+18h] [rbp-20h]
  __int64 v11; // [rsp+20h] [rbp-18h]

  v3 = (_DWORD *)a2;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_29C510();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || !*(_DWORD *)(a3 + 8) )
    {
      sub_24EA30(a1, 3u, nullptr);
LABEL_18:
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
  {
    if ( a2 )
    {
      v3 = *(_DWORD **)(a2 + 24);
      if ( v3 )
        ++v3[8];
    }
    sub_EDBA20((int)v3, a3, 0, v7, v8, v9, v10, v11);
    if ( v3[8]-- == 1 )
    {
      sub_ED44E0(v3);
      sub_186B220(v3);
    }
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
  }
  if ( v5 )
    goto LABEL_18;
}

