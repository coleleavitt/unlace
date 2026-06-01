unsigned __int64 __fastcall sub_B89530(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 result; // rax

  v6 = sub_B89430(a1, a2, a3, a4, a5, a6);
  if ( !v6 )
    return 0;
  v7 = v6;
LABEL_3:
  v8 = sub_B685F0(v7);
  v9 = sub_A61E10(v8, v7);
  if ( !v9 || (result = sub_B86DC0(v9, a2, 0, v10, v11, v12)) == 0 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v7 + 128);
      if ( !v7 )
        return 0;
      while ( *(char *)(v7 + 28) >= 0 )
      {
        if ( (*(_BYTE *)(v7 + 8) & 6) == 0 )
          goto LABEL_3;
        v7 = *(_QWORD *)(v7 + 128);
        if ( !v7 )
          return 0;
      }
    }
  }
  return result;
}

