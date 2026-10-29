bool __fastcall sub_7C53A0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 (*v8)(void); // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

  v3 = a3 + 8;
  v6 = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)v6 != -2 )
  {
    v7 = (unsigned int)v6 >> 1;
    if ( (_DWORD)v7 == a2 >> 1 )
    {
      sub_7AFDF0(a1, v3);
      return 1;
    }
    v8 = *(__int64 (**)(void))(*a1 + 536LL);
    if ( (char *)v8 == (char *)sub_7C55E0 )
    {
      v9 = a1[20];
      if ( v9 )
      {
        v10 = *(_DWORD *)(*(_QWORD *)(v9 + 880) + 4 * v7);
        if ( v10 >= *(_DWORD *)(v9 + 888) && (((unsigned __int8)v10 ^ (unsigned __int8)v6) & 1) == 0 )
        {
          v13 = *(_DWORD *)(a3 + 16);
          v14 = a2 ^ 1;
          if ( !v13 )
            goto LABEL_14;
          goto LABEL_10;
        }
        return 1;
      }
      v12 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * v6);
    }
    else
    {
      v12 = v8();
    }
    if ( v12 != 1 )
      return 1;
  }
  v13 = *(_DWORD *)(a3 + 16);
  v14 = a2 ^ 1;
  if ( !v13 )
  {
LABEL_14:
    v15 = sub_828140(v3);
    return (unsigned int)sub_7B1C80(a1, v15, v14, v16) != 0;
  }
LABEL_10:
  if ( v13 != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 1429);
  }
  v17 = sub_81AF20(v3);
  return (unsigned int)sub_7C47C0((__int64)a1, v17, v14) != 0;
}

