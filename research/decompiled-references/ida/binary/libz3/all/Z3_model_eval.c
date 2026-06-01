__int64 __fastcall Z3_model_eval(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, __int64 *a5)
{
  unsigned __int8 v5; // r9
  char v8; // r12
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r13
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // [rsp+8h] [rbp-70h]
  unsigned __int8 v17; // [rsp+10h] [rbp-68h]
  unsigned __int8 v18; // [rsp+14h] [rbp-64h]
  __int64 v19; // [rsp+18h] [rbp-60h]
  __int64 v20; // [rsp+28h] [rbp-50h] BYREF
  __int64 v21[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a4;
  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v9 = nullptr;
  if ( v8 )
  {
    sub_29B460(a1, a2, a3, a4);
    v5 = a4;
    v9 = a5;
  }
  if ( a5 )
    *a5 = 0;
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 )
  {
    sub_24EA30(a1, 3u, "ast is null");
    goto LABEL_16;
  }
  if ( !a3 || (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
LABEL_16:
    result = 0;
    goto LABEL_17;
  }
  v10 = *(_QWORD *)(a1 + 232);
  v11 = *(_QWORD *)(a2 + 24);
  v18 = v5;
  v20 = 0;
  v19 = v10;
  v15 = v11 + 128;
  v17 = sub_13608A0(v11 + 128);
  sub_1360B80(v11 + 128, v18);
  sub_1374250(v21, v11, a3);
  v12 = v21[0];
  sub_251FD0(a1, v21[0]);
  *a5 = v12;
  if ( v8 )
  {
    if ( v9 )
      v9 = (__int64 *)*v9;
    sub_2BB6A0(v9, 4);
    sub_1360B80(v15, v17);
    if ( !v12 || (v13 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), !v13) )
    {
      sub_18572D0(&v20);
      result = 1;
LABEL_14:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    sub_1360B80(v15, v17);
    if ( !v12 || (v13 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), !v13) )
    {
      sub_18572D0(&v20);
      return 1;
    }
  }
  sub_15D7BC0(v19, v12);
  sub_18572D0(&v20);
  result = 1;
LABEL_17:
  if ( v8 )
    goto LABEL_14;
  return result;
}

