__int64 __fastcall sub_8F0A60(__int64 a1, int a2, _QWORD *a3)
{
  int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rbx
  _BYTE v10[64]; // [rsp-40h] [rbp-118h] BYREF
  _BYTE v11[56]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-A0h]
  int v13; // [rsp+40h] [rbp-98h]
  _QWORD v14[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v15; // [rsp+68h] [rbp-70h]
  __int64 v16; // [rsp+70h] [rbp-68h]
  int v17; // [rsp+80h] [rbp-58h]
  __int64 v18; // [rsp+88h] [rbp-50h]
  int v19; // [rsp+90h] [rbp-48h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a3;
  v6 = sub_A1A5A0(v5, 72);
  sub_A1C070(v14, v6);
  v18 = *(_QWORD *)(v6 + 56);
  v19 = *(_DWORD *)(v6 + 64);
  sub_A1A5E0(v5, 72);
  v7 = *(_QWORD *)(a1 + 568);
  if ( v17 )
  {
    if ( v17 == 2 )
    {
      if ( !v15 )
        goto LABEL_6;
    }
    else if ( v17 != 3 && !(v14[0] | v16) )
    {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( v15 )
LABEL_5:
    v4 = v19 + a2;
LABEL_6:
  v8 = v18;
  sub_A1BFE0(v10, v14);
  sub_A1BFE0(v11, v10);
  v12 = v8;
  v13 = v4;
  sub_A1C0C0(v10);
  v9 = sub_A1A4E0(v7, 72);
  sub_A1C070(v9, v11);
  *(_QWORD *)(v9 + 56) = v12;
  *(_DWORD *)(v9 + 64) = v13;
  sub_A1C0C0(v11);
  sub_A1C0C0(v14);
  return 1;
}

