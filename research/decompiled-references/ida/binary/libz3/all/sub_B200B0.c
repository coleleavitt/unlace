__int64 __fastcall sub_B200B0(__int64 a1, char a2, __int64 a3)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  __int16 v7; // ax
  _DWORD *v8; // rax
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a3 + 32)) + 24);
  if ( !v4 || *v4 != 5 || v4[1] != 1 )
  {
    if ( a2 )
      return a3;
    if ( !*(_WORD *)(a3 + 4) )
    {
      v5 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( v5 )
        goto LABEL_22;
    }
LABEL_6:
    sub_1872CE0("");
    sub_1873130(114, 135);
  }
  v7 = *(_WORD *)(a3 + 4);
  if ( a2 )
  {
    if ( !v7 )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( v8 )
      {
        if ( *v8 == 5 )
        {
          v9 = v8[1];
          if ( v9 == 4 )
          {
            if ( *(_DWORD *)(a3 + 24) == 2 )
            {
              v11 = *(_QWORD *)(a3 + 32);
              v10 = *(_QWORD *)(a3 + 40);
              goto LABEL_17;
            }
          }
          else if ( v9 == 5 && *(_DWORD *)(a3 + 24) == 2 )
          {
            v10 = *(_QWORD *)(a3 + 32);
            v11 = *(_QWORD *)(a3 + 40);
LABEL_17:
            v21 = v11;
            v22[0] = sub_B1FFF0(a1);
            sub_B1F2C0(a1, &v21, v22);
            v12 = sub_15E1B70(*(_QWORD *)(a1 + 8));
            v22[0] = v10;
            v21 = v12;
LABEL_18:
            sub_B1F2C0(a1, &v21, v22);
            return sub_15E1B70(*(_QWORD *)(a1 + 8));
          }
        }
      }
    }
    return a3;
  }
  if ( v7 )
    goto LABEL_6;
  v5 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v5 )
    goto LABEL_6;
  if ( *v5 == 5 )
  {
    v15 = v5[1];
    if ( v15 == 2 )
    {
      if ( *(_DWORD *)(a3 + 24) != 2 )
        goto LABEL_23;
      v17 = *(_QWORD *)(a3 + 32);
      v16 = *(_QWORD *)(a3 + 40);
    }
    else
    {
      if ( v15 != 3 || *(_DWORD *)(a3 + 24) != 2 )
        goto LABEL_23;
      v16 = *(_QWORD *)(a3 + 32);
      v17 = *(_QWORD *)(a3 + 40);
    }
    v21 = v16;
    v22[0] = sub_B1FFF0(a1);
    sub_B1F2C0(a1, &v21, v22);
    v18 = sub_15E1B70(*(_QWORD *)(a1 + 8));
    v21 = v17;
    v22[0] = v18;
    goto LABEL_18;
  }
LABEL_22:
  if ( *v5 != 5 )
    goto LABEL_6;
LABEL_23:
  v13 = v5[1];
  switch ( v13 )
  {
    case 2:
      if ( *(_DWORD *)(a3 + 24) != 2 )
        goto LABEL_6;
      break;
    case 4:
      if ( *(_DWORD *)(a3 + 24) == 2 )
      {
        v19 = *(_QWORD *)(a3 + 40);
        v21 = *(_QWORD *)(a3 + 32);
        v22[0] = v19;
        goto LABEL_18;
      }
      goto LABEL_6;
    case 3:
      if ( *(_DWORD *)(a3 + 24) != 2 )
        goto LABEL_6;
      break;
    default:
      if ( v13 == 5 && *(_DWORD *)(a3 + 24) == 2 )
      {
        v14 = *(_QWORD *)(a3 + 40);
        v21 = *(_QWORD *)(a3 + 32);
        v22[0] = v14;
        goto LABEL_18;
      }
      goto LABEL_6;
  }
  v20 = *(_QWORD *)(a3 + 40);
  v21 = *(_QWORD *)(a3 + 32);
  v22[0] = v20;
  sub_B1F2C0(a1, &v21, v22);
  return sub_15E1B70(*(_QWORD *)(a1 + 8));
}

