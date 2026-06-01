__int64 __fastcall sub_DC7510(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned __int8 **v9; // rax
  __int64 *v10; // rbp
  __int64 v11; // rax
  unsigned __int8 **v12; // rax
  __int64 v13; // rbp
  unsigned __int8 **v14; // rax
  unsigned __int8 **v15; // r12
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  char v17; // [rsp+8h] [rbp-30h]

  v6 = sub_E206C0(*(_QWORD *)(a1 + 400));
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)v7 )
      {
        v13 = sub_E1EF60(*(_QWORD *)(a1 + 400));
        if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) != 0 )
        {
          v14 = (unsigned __int8 **)sub_E33C10(a1, v13, 2377, 0);
          v15 = v14;
          if ( v14 )
          {
            sub_AE9DF0(v14, 0, 2u);
            sub_AE9DF0(v15, *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8LL), 8u);
          }
        }
        else
        {
          sub_E33C10(a1, v13, 108, 0);
        }
        return v7;
      }
    }
    else if ( a3 == 2 )
    {
      v16 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v12 = (unsigned __int8 **)sub_E33D20(a1, &v16, 2417, 0);
      if ( v12 )
        sub_AE9DF0(v12, 1, 2u);
      return 1;
    }
    return 0;
  }
  v9 = (unsigned __int8 **)sub_E33B30(a1, v6, 2417, 0);
  v10 = (__int64 *)v9;
  if ( v9 )
  {
    sub_AE9DF0(v9, 0, 3u);
    v11 = sub_E20720(*(_QWORD *)(a1 + 400), a2);
    v17 = 1;
    v16 = v11;
    sub_AEC610(v10, &v16);
  }
  else
  {
    sub_E20720(*(_QWORD *)(a1 + 400), a2);
  }
  return a4 ^ 1u;
}
