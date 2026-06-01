__int64 __fastcall sub_97B440(__int64 a1, char a2, _QWORD *a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // eax
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // rbp
  unsigned __int8 **v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-40h] BYREF
  __int64 v14; // [rsp+8h] [rbp-38h] BYREF
  char v15; // [rsp+10h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v4 = a1 + 384;
  v5 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a3;
  v6 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
  if ( !a2 || (*(_BYTE *)(sub_A2CB40(v4) + 1) & 8) == 0 )
  {
    v13 = sub_A16CE0(*(_QWORD *)(a1 + 584), v5);
    v10 = (unsigned __int8 **)sub_A2E1B0(v4, &v13, 2215, 0);
    v9 = v10;
    if ( v10 )
    {
      sub_8D6BF0(v10, 2);
      v11 = sub_A2CB40(v4);
      sub_8D6E40(v9, (*(_BYTE *)(v11 + 1) & 8) != 0);
      goto LABEL_15;
    }
    sub_A2CB40(v4);
LABEL_18:
    sub_A1A2D0(*(_QWORD *)(a1 + 584), v5);
    return 1;
  }
  v7 = *(_DWORD *)(v6 + 48);
  if ( v7 )
  {
    if ( v7 == 2 )
    {
      if ( *(_QWORD *)(v6 + 24) )
        return 1;
    }
    else if ( v7 == 3 || *(_QWORD *)(v6 + 32) || *(_QWORD *)v6 )
    {
      return 1;
    }
  }
  else if ( *(_QWORD *)(v6 + 24) )
  {
    return 1;
  }
  if ( (*(_BYTE *)(sub_A2CB40(v4) + 2) & 2) == 0 )
  {
    v13 = sub_A16CE0(*(_QWORD *)(a1 + 584), v5);
    v8 = (unsigned __int8 **)sub_A2E1B0(v4, &v13, 2215, 0);
    v9 = v8;
    if ( v8 )
    {
      sub_8D6BF0(v8, 3);
      sub_8356A0(v9, (__int64)"'void *'", 1u);
LABEL_15:
      v12 = sub_A1A2D0(*(_QWORD *)(a1 + 584), v5);
      v15 = 1;
      v14 = v12;
      sub_839C90((__int64 *)v9, &v14);
      return 1;
    }
    goto LABEL_18;
  }
  return 1;
}

