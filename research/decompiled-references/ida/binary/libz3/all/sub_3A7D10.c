__int64 __fastcall sub_3A7D10(__int64 a1, __int64 a2, int a3)
{
  __int16 v3; // ax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx
  unsigned __int8 v9; // dl
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v16[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !a3 )
  {
    v16[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_399930((unsigned int **)(a1 + 56), v16);
    return 1;
  }
  v3 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v9 = 0;
    goto LABEL_14;
  }
  if ( !v3 )
  {
    if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v5 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a2 + 8);
      if ( (unsigned int)sub_3996B0(
                           **(_QWORD **)(a1 + 144),
                           *(unsigned int *)(*(_QWORD *)(a1 + 144) + 8LL),
                           *(_QWORD *)(a2 + 16),
                           0,
                           0,
                           a1 + 480) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v16[0] = a2;
        sub_399930((unsigned int **)(a1 + 56), v16);
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 480);
        v15 = v6;
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        sub_399930((unsigned int **)(a1 + 56), &v15);
        sub_399450(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        v7 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 480) = 0;
        if ( v7 )
        {
          v8 = *(_DWORD *)(v7 - 4);
          if ( v8 )
            *(_BYTE *)(v7 + 16LL * (unsigned int)(v8 - 1) + 8) |= 2u;
        }
      }
      sub_399410(a2, v5);
      return 1;
    }
    goto LABEL_27;
  }
  if ( v3 == 2 )
  {
LABEL_27:
    v11 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v12 = v11;
    if ( v11 )
    {
      ++*(_DWORD *)(v11 + 8);
      v16[0] = v11;
      sub_399930((unsigned int **)(a1 + 56), v16);
      if ( a2 != v12 )
      {
        v13 = *(_QWORD *)(a1 + 40);
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 - 4);
          if ( v14 )
            *(_BYTE *)(v13 + 16LL * (unsigned int)(v14 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v3 = *(_WORD *)(a2 + 4);
    v9 = 1;
LABEL_14:
    if ( v3 != 1 )
    {
      if ( v3 != 2 )
      {
        if ( v3 )
          goto LABEL_17;
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_6;
      }
      sub_39B170(a1, a2, v9, 0, a3 - (a3 != 3));
      return 0;
    }
    goto LABEL_26;
  }
  if ( v3 != 1 )
  {
LABEL_17:
    sub_1872CE0("");
    sub_1873130(114, 226);
  }
LABEL_26:
  sub_3A7BA0(a1, a2);
  return 1;
}

