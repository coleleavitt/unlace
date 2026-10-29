__int64 __fastcall sub_211EA40(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD v11[4]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v12; // [rsp+20h] [rbp-88h]
  _DWORD *v13; // [rsp+30h] [rbp-78h] BYREF
  _DWORD *v14[4]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v15; // [rsp+80h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 8);
  LODWORD(v13) = a2;
  v4 = *(_QWORD *)(v3 + 1728);
  v5 = v3 + 1720;
  if ( v4 )
  {
    do
    {
      while ( a2 <= *(_DWORD *)(v4 + 32) )
      {
        v5 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v4 )
          goto LABEL_6;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v4 );
LABEL_6:
    if ( v3 + 1720 != v5 && a2 >= *(_DWORD *)(v5 + 32) )
    {
      result = *(_QWORD *)(v5 + 40);
      if ( result )
        return result;
LABEL_11:
      v7 = *(_QWORD *)(a1 + 8);
      v12 = 773;
      v8 = *(_QWORD *)(v7 + 152);
      v9 = *(_QWORD *)(v8 + 88);
      v10 = *(_QWORD *)(v8 + 96);
      LODWORD(v13) = a2;
      v15 = 2306;
      v11[1] = v10;
      v11[2] = "line_table_start";
      v14[0] = v11;
      v11[0] = v9;
      v14[2] = v13;
      result = sub_2108A30(v7, (const void ***)v14);
      *(_QWORD *)(v5 + 40) = result;
      return result;
    }
  }
  v14[0] = &v13;
  v5 = sub_211E240((_QWORD *)(v3 + 1712), v5, v14);
  result = *(_QWORD *)(v5 + 40);
  if ( !result )
    goto LABEL_11;
  return result;
}
