__int64 __fastcall sub_4E22A0(__int64 *a1, __int64 a2, char a3, __int64 a4)
{
  int v4; // eax
  int v7; // edi
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // r13
  int v11; // r12d
  __int64 v12; // rbp
  unsigned __int8 v13; // al
  __int64 i; // r12
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-88h]
  unsigned __int64 v19; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v20[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v4 = *(_DWORD *)(a4 + 24);
  if ( (v4 & 0x40) != 0 )
  {
LABEL_3:
    v7 = a3 & 0xF;
    if ( v7 != 15 )
    {
LABEL_4:
      result = 0;
      if ( v7 > 8 )
        return result;
      v9 = sub_4E15E0(v7);
      v10 = *a1;
      v11 = v9;
      v12 = sub_4E20A0(v20, 33, a4);
      v19 = sub_3BDD60(*(_QWORD **)(v10 + 1672), a2);
      sub_7BE7C0(&v19, v10, v11, v20, v12, 83);
      return 1;
    }
LABEL_12:
    for ( i = 9; i != 12; ++i )
    {
      v15 = *a1;
      v18 = sub_4E20A0(v20, 33, a4);
      v16 = sub_3BDD60(*(_QWORD **)(v15 + 1672), a2);
      v17 = i;
      v19 = v16;
      sub_7BE7C0(&v19, v15, v17, v20, v18, 83);
    }
    return 1;
  }
  v13 = v4 & 0x4F;
  if ( v13 <= 2u )
  {
    if ( v13 )
      goto LABEL_3;
  }
  else if ( (unsigned __int8)(v13 - 9) <= 1u )
  {
    goto LABEL_3;
  }
  result = 0;
  if ( *(_QWORD *)a4 != -1 )
  {
    v7 = a3 & 0xF;
    if ( v7 != 15 )
      goto LABEL_4;
    goto LABEL_12;
  }
  return result;
}
