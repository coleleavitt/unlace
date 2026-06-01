__int64 __fastcall sub_DC2D80(_QWORD *a1, _DWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v6; // r12
  __int64 v7; // rax
  void (***v8)(void); // rdi
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // [rsp+18h] [rbp-40h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]

  if ( !*(_WORD *)(*(_QWORD *)a2 + 4LL) && (*(_BYTE *)(*(_QWORD *)a2 + 30LL) & 1) != 0 || a2[2] == *((_DWORD *)a1 + 378) )
  {
    v3 = sub_DC2710(a1);
    v4 = *(_QWORD *)a2;
    v14 = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    return sub_DBF5A0(v3 + 1, &v14);
  }
  else
  {
    v6 = *a1;
    sub_DFBCB0(*a1);
    v7 = *(_QWORD *)(v6 + 296);
    v8 = (void (***)(void))a1[214];
    v14 = 0;
    v15 = v7;
    if ( !v8 )
    {
      v10 = sub_186B270(0xA0u);
      v11 = *a1;
      v12 = v10;
      sub_DFBCB0(*a1);
      sub_1584DD0(v12, *(_QWORD *)(v11 + 296), 0);
      v8 = (void (***)(void))a1[214];
      *(_QWORD *)(v12 + 144) = 0;
      *(_DWORD *)(v12 + 152) = 0;
      *(_QWORD *)v12 = &off_1C61DB8;
      if ( (void (***)(void))v12 != v8 )
      {
        if ( v8 )
        {
          (**v8)();
          sub_186B220(v8);
        }
        a1[214] = v12;
        v8 = (void (***)(void))v12;
      }
    }
    sub_1585D20(v8, *(_QWORD *)a2, 0, (unsigned int)(*((_DWORD *)a1 + 378) - a2[2]), 0, &v14);
    v9 = sub_DC2710(a1);
    v13 = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    sub_DBF5A0(v9 + 1, &v13);
    return sub_DBF390(v14, v15);
  }
}

