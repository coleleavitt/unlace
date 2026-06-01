__int64 __fastcall sub_9406E0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  char v6; // bp
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // ebp
  char v10; // [rsp+Fh] [rbp-69h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  int v14; // [rsp+40h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = *(_QWORD *)(a1 + 792);
  v5 = a1 + 384;
  *(_QWORD *)(a1 + 800) = *a2;
  v6 = *(_BYTE *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v7 = *(_QWORD *)(a1 + 568);
  v10 = v6;
  v8 = sub_A1A5A0(v7, 56);
  sub_A1C070(v11, v8);
  sub_A1A5E0(v7, 56);
  if ( v14 )
  {
    if ( v14 == 2 )
    {
      if ( !v12 )
        goto LABEL_5;
    }
    else if ( v14 != 3 && !(v11[0] | v13) )
    {
      goto LABEL_5;
    }
  }
  else if ( !v12 )
  {
    goto LABEL_5;
  }
  if ( v6 && !(unsigned __int8)sub_9D4C70(v5, v4, v11) )
    goto LABEL_13;
LABEL_5:
  v9 = sub_93FF70(v5, v4, &v10, (__int64)v11, 0);
  if ( !(_BYTE)v9 )
  {
LABEL_13:
    v9 = 0;
    goto LABEL_7;
  }
  sub_8E94C0(v5);
LABEL_7:
  sub_A1C0C0(v11);
  return v9;
}

