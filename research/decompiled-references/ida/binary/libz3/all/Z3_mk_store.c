__int64 __fastcall Z3_mk_store(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  char v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // esi
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  __int64 result; // rax
  int v15; // [rsp+0h] [rbp-90h]
  int v16[2]; // [rsp+8h] [rbp-88h]
  __int64 v17; // [rsp+10h] [rbp-80h]
  int v18; // [rsp+18h] [rbp-78h]
  __int64 v19; // [rsp+18h] [rbp-78h]
  __int64 v20; // [rsp+20h] [rbp-70h] BYREF
  __int64 v21; // [rsp+28h] [rbp-68h]
  __int64 v22; // [rsp+30h] [rbp-60h]
  int v23; // [rsp+38h] [rbp-58h]
  int v24[2]; // [rsp+40h] [rbp-50h] BYREF
  __int64 v25; // [rsp+50h] [rbp-40h]

  v18 = a2;
  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_297120(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      goto LABEL_18;
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
    || (unsigned int)a3[2] - 3 <= 1
    || !a4
    || (unsigned int)*(unsigned __int16 *)(a4 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    if ( !v6 )
      return 0;
LABEL_18:
    result = 0;
    goto LABEL_19;
  }
  *(_QWORD *)v16 = *(_QWORD *)(a1 + 232);
  v7 = sub_15D1F10(a2);
  v17 = sub_15D1F10(a3);
  v8 = sub_15D1F10(a4);
  v9 = *(_QWORD *)(v7 + 24);
  v10 = *(_DWORD *)(a1 + 1440);
  if ( v9 )
  {
    if ( *(_DWORD *)v9 == v10 )
    {
      v9 = *(_QWORD *)(v9 + 8);
      v20 = v7;
      v22 = v8;
      v21 = v17;
      goto LABEL_11;
    }
LABEL_20:
    sub_24EA30(a1, 1u, nullptr);
    if ( v6 )
    {
      sub_2BB620(0);
      goto LABEL_18;
    }
    return 0;
  }
  if ( v10 != -1 )
    goto LABEL_20;
  v20 = v7;
  v22 = v8;
  v21 = v17;
LABEL_11:
  v11 = sub_15D2D10(v16[0], v10, 0, 2, v9, 3, (__int64)&v20, 0);
  v25 = a4;
  v19 = sub_15DC610(v16[0], v11, 3, (int)v24, v12, v13, v15, v16[0], v17, v18, v20, v21, v22, v23, v18, a3);
  sub_251FD0(a1, v19);
  sub_24FE40(a1, v19);
  result = v19;
  if ( v6 )
  {
    sub_2BB620(v19);
    result = v19;
LABEL_19:
    byte_1C7EBA0 = 1;
  }
  return result;
}

