__int64 __fastcall sub_3F7C20(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        char **a7)
{
  __int64 v7; // rax
  __int64 v9; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // [rsp+0h] [rbp-88h]
  __int64 v18; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v20[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 24);
  v21 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 1672) + 2456LL) != a2 )
    return 0;
  v9 = a4;
  if ( a3 != 73 )
  {
    if ( a3 > 0x49u )
    {
      if ( a3 != 83 )
        goto LABEL_6;
LABEL_16:
      netnode_supset(a2, a4, a5, a6, a3, a6);
      return 1;
    }
    if ( a3 != 65 )
    {
      if ( a3 != 70 )
      {
LABEL_6:
        sub_35A790(a7);
        return 0;
      }
      goto LABEL_16;
    }
    if ( a4 != 0xFFFFFFFFLL )
    {
      qsnprintf((unsigned int)v20, 32, (unsigned int)"%a", a4, (_DWORD)a5, (unsigned int)v20);
      if ( a6 == 4 )
      {
        v15 = *a5;
        v16 = *(_QWORD *)(a1 + 24);
        v19 = a2;
        v18 = v15;
        sub_7BE7C0(&v19, v16, v9, &v18, 8, 65);
        return 1;
      }
LABEL_17:
      sub_35A790(a7);
      return 0;
    }
    v9 = -1;
  }
  v17 = a3;
  qsnprintf((unsigned int)v20, 32, (unsigned int)"%a", v9, (_DWORD)a5, (unsigned int)v20);
  if ( a6 != 4 )
    goto LABEL_17;
  v13 = *a5;
  v14 = *(_QWORD *)(a1 + 24);
  v19 = a2;
  v18 = v13;
  sub_7BE7C0(&v19, v14, v9, &v18, 8, v17);
  return 1;
}
