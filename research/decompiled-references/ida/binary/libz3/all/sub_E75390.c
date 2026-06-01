__int64 __fastcall sub_E75390(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  unsigned __int8 v5; // dl
  __int16 v6; // ax
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( a3 )
  {
    if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
    {
      v5 = 0;
    }
    else
    {
      v4 = *(_WORD *)(a2 + 4);
      if ( v4 )
      {
        if ( v4 != 2 )
        {
          if ( v4 != 1 )
            goto LABEL_19;
          goto LABEL_22;
        }
      }
      else if ( !*(_DWORD *)(a2 + 24) )
      {
        if ( (*(_BYTE *)(a2 + 30) & 1) != 0 )
        {
LABEL_7:
          v15[0] = a2;
LABEL_14:
          ++*(_DWORD *)(a2 + 8);
          goto LABEL_15;
        }
        goto LABEL_31;
      }
      v8 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
      v5 = 1;
      v9 = v8;
      if ( v8 )
      {
        ++*(_DWORD *)(v8 + 8);
        v15[0] = v8;
        sub_E67160((unsigned int **)(a1 + 56), v15);
        if ( a2 != v9 )
        {
          v10 = *(_QWORD *)(a1 + 40);
          if ( v10 )
          {
            v11 = *(_DWORD *)(v10 - 4);
            if ( v11 )
              *(_BYTE *)(v10 + 16LL * (unsigned int)(v11 - 1) + 8) |= 2u;
          }
        }
        v12 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
        v15[0] = v12;
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        sub_E66670((_QWORD *)(a1 + 88), v15);
        return 1;
      }
    }
    v6 = *(_WORD *)(a2 + 4);
    if ( !v6 )
    {
      if ( (*(_BYTE *)(a2 + 30) & 1) != 0 )
        goto LABEL_7;
      if ( !*(_DWORD *)(a2 + 24) )
      {
LABEL_31:
        v13 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)(a2 + 8) += 2;
        v15[0] = a2;
        sub_E67160((unsigned int **)(a1 + 56), v15);
        v14 = 0;
        sub_E66670((_QWORD *)(a1 + 88), &v14);
        sub_E65BA0(a2, v13);
        return 1;
      }
LABEL_12:
      sub_39B170(a1, a2, v5, 0, a3 - (a3 != 3));
      return 0;
    }
    if ( v6 != 1 )
    {
      if ( v6 == 2 )
        goto LABEL_12;
LABEL_19:
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
LABEL_22:
    sub_E75200(a1, a2);
    return 1;
  }
  v15[0] = a2;
  if ( a2 )
    goto LABEL_14;
LABEL_15:
  sub_E67160((unsigned int **)(a1 + 56), v15);
  v15[0] = 0;
  sub_E66670((_QWORD *)(a1 + 88), v15);
  return 1;
}

