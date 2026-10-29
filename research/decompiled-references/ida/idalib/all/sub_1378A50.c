void __fastcall sub_1378A50(int a1, __int64 a2, __int64 *a3)
{
  int v5; // ebx
  int v6; // r12d
  bool v7; // al
  const char *v8; // rsi
  __int64 v9; // [rsp+0h] [rbp-E8h]
  _QWORD v10[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int16 v11; // [rsp+50h] [rbp-98h]
  __int64 v12; // [rsp+68h] [rbp-80h]
  _QWORD v13[4]; // [rsp+90h] [rbp-58h] BYREF
  __int16 v14; // [rsp+B0h] [rbp-38h]

  v5 = a1;
  v6 = sub_102DB30((unsigned __int8 *)a2, a1);
  v7 = sub_102DCD0(a1);
  if ( v6 == 64 )
  {
    v5 = *(_DWORD *)(a2 + 168);
    v8 = "__INT";
    if ( !v7 )
    {
      switch ( *(_DWORD *)(a2 + 168) )
      {
        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
        case 9:
          v5 = 10;
          v8 = "__UINT";
          break;
        case 1:
          v5 = 2;
          v8 = "__UINT";
          break;
        case 3:
          v5 = 4;
          v8 = "__UINT";
          break;
        case 5:
          v5 = 6;
          v8 = "__UINT";
          break;
        case 7:
          v5 = 8;
          v8 = "__UINT";
          break;
      }
    }
  }
  else
  {
    v8 = "__INT";
    if ( !v7 )
      v8 = "__UINT";
  }
  LODWORD(v9) = v6;
  v10[0] = v8;
  v10[2] = v9;
  v11 = 2563;
  v13[0] = v10;
  v13[2] = "_MAX__";
  v14 = 770;
  v13[1] = 0;
  v13[3] = v12;
  sub_1378820((__int64)v13, v5, (unsigned __int8 *)a2, a3);
}
