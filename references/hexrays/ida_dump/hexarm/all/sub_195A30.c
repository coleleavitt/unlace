__int64 __fastcall sub_195A30(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v3; // dl
  __int64 result; // rax
  int *v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+8h] [rbp-60h]
  int v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v14; // [rsp+18h] [rbp-50h]
  _QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+30h] [rbp-38h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v2 = *(_BYTE *)a2 == 9;
  v17 = __readfsqword(0x28u);
  if ( v2 )
  {
    v5 = *(int **)(a2 + 8);
    v6 = v5[4];
    if ( *(_QWORD *)(*(_QWORD *)v5 + 440LL) < v6 )
      sub_194E20();
    v7 = *(_QWORD *)(*(_QWORD *)v5 + 432LL) + 104 * v6;
    if ( *(_DWORD *)v7 == 1 )
    {
      return *((_QWORD *)v5 + 1) + *(_QWORD *)(v7 + 8);
    }
    else
    {
      result = -1;
      if ( *(_DWORD *)v7 == 2 )
      {
        v13 = 0;
        copy_argloc(&v13, v7);
        if ( (unsigned __int8)sub_1C5020(
                                &v13,
                                a1,
                                *(unsigned int *)(*(_QWORD *)(a2 + 8) + 8LL),
                                *(unsigned int *)(v7 + 88),
                                1) )
        {
          if ( v13 == 2 && v14[1] )
          {
            v10 = *v14;
            LODWORD(v15[0]) = 0;
            copy_argloc(v15, v10);
            v16 = *(_DWORD *)(v10 + 16);
          }
          else
          {
            LODWORD(v15[0]) = 0;
            copy_argloc(v15, &v13);
            v16 = 0xFFFF;
          }
          v8 = -1;
          if ( LODWORD(v15[0]) == 1 )
            v8 = v15[1];
          v11 = v8;
          cleanup_argloc(v15);
          v9 = v11;
        }
        else
        {
          v9 = -1;
        }
        v12 = v9;
        cleanup_argloc(&v13);
        return v12;
      }
    }
  }
  else
  {
    v3 = sub_32F650(a2, v15);
    result = -1;
    if ( v3 )
      return v15[0];
  }
  return result;
}
