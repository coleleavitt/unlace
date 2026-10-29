__int64 __fastcall sub_3A8320(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // edx
  unsigned __int8 v14; // dl
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-50h] BYREF
  __int64 v23; // [rsp+10h] [rbp-48h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h] BYREF
  __int64 v25; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v26[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( !a3 )
  {
    v26[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_399930((unsigned int **)(a1 + 56), v26);
    v26[0] = 0;
    sub_399A70((__int64 *)(a1 + 88), v26);
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v14 = 0;
    goto LABEL_16;
  }
  if ( !v5 )
  {
    if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = *(_QWORD *)(a1 + 8);
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
        v26[0] = a2;
        sub_399930((unsigned int **)(a1 + 56), v26);
        v25 = 0;
        sub_399A70((__int64 *)(a1 + 88), &v25);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 480);
        v24 = v8;
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        sub_399930((unsigned int **)(a1 + 56), &v24);
        v9 = *(_QWORD *)(a1 + 496);
        if ( v9 )
        {
          ++*(_DWORD *)(v9 + 8);
          v23 = v9;
          sub_399A70((__int64 *)(a1 + 88), &v23);
        }
        else
        {
          v21 = sub_15DE370(*(_QWORD *)(a1 + 8));
          v22 = v21;
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          sub_399A70((__int64 *)(a1 + 88), &v22);
        }
        sub_399410(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
        v10 = *(_QWORD *)(a1 + 488);
        v11 = *(_QWORD *)(a1 + 480);
        *(_QWORD *)(a1 + 496) = 0;
        sub_399450(v11, v10);
        v12 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 480) = 0;
        if ( v12 )
        {
          v13 = *(_DWORD *)(v12 - 4);
          if ( v13 )
            *(_BYTE *)(v12 + 16LL * (unsigned int)(v13 - 1) + 8) |= 2u;
        }
      }
      sub_399410(a2, v7);
      return 1;
    }
    goto LABEL_29;
  }
  if ( v5 == 2 )
  {
LABEL_29:
    v16 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v17 = v16;
    if ( v16 )
    {
      ++*(_DWORD *)(v16 + 8);
      v26[0] = v16;
      sub_399930((unsigned int **)(a1 + 56), v26);
      if ( a2 != v17 )
      {
        v18 = *(_QWORD *)(a1 + 40);
        if ( v18 )
        {
          v19 = *(_DWORD *)(v18 - 4);
          if ( v19 )
            *(_BYTE *)(v18 + 16LL * (unsigned int)(v19 - 1) + 8) |= 2u;
        }
      }
      v20 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
      v26[0] = v20;
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      sub_399A70((__int64 *)(a1 + 88), v26);
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v14 = 1;
LABEL_16:
    if ( v5 != 1 )
    {
      if ( v5 != 2 )
      {
        if ( v5 )
          goto LABEL_19;
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_6;
      }
      sub_39B170(a1, a2, v14, 0, a3 - (a3 != 3));
      return 0;
    }
    goto LABEL_28;
  }
  if ( v5 != 1 )
  {
LABEL_19:
    sub_1872CE0("");
    sub_1873130(114, 226);
  }
LABEL_28:
  sub_3A8190(a1, a2);
  return 1;
}

