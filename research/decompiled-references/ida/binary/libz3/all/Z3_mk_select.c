__int64 __fastcall Z3_mk_select(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r13
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // esi
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r15
  __int64 v14; // r14
  int v16; // [rsp+0h] [rbp-60h]
  int v17; // [rsp+8h] [rbp-58h]
  __int64 v18; // [rsp+10h] [rbp-50h] BYREF
  __int64 v19; // [rsp+18h] [rbp-48h]
  int v20[2]; // [rsp+20h] [rbp-40h] BYREF
  int v21; // [rsp+30h] [rbp-30h]
  int v22; // [rsp+38h] [rbp-28h]
  int v23; // [rsp+40h] [rbp-20h]
  void *v24; // [rsp+48h] [rbp-18h]

  v17 = a2;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_297070(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      goto LABEL_16;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return 0;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1
    || !a3
    || (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    if ( !v4 )
      return 0;
LABEL_16:
    v14 = 0;
    goto LABEL_17;
  }
  v5 = *(_QWORD *)(a1 + 232);
  v6 = sub_15D1F10(a2);
  v7 = sub_15D1F10(a3);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(_DWORD *)(a1 + 1440);
  if ( v8 )
  {
    if ( *(_DWORD *)v8 == v9 )
    {
      v18 = v6;
      v8 = *(_QWORD *)(v8 + 8);
      v19 = v7;
      goto LABEL_9;
    }
LABEL_18:
    sub_24EA30(a1, 1u, nullptr);
    if ( v4 )
    {
      sub_2BB620(0);
      goto LABEL_16;
    }
    return 0;
  }
  if ( v9 != -1 )
    goto LABEL_18;
  v18 = v6;
  v19 = v7;
LABEL_9:
  v10 = sub_15D2D10(v5, v9, 1, 2, v8, 2, (__int64)&v18, 0);
  v13 = sub_15DC610(v5, v10, 2, (int)v20, v11, v12, v16, v17, v18, v19, v17, a3, v21, v22, v23, v24);
  v14 = v13;
  sub_251FD0(a1, v13);
  sub_24FE40(a1, v13);
  if ( v4 )
  {
    sub_2BB620(v13);
LABEL_17:
    byte_1C7EBA0 = 1;
  }
  return v14;
}

