__int64 __fastcall sub_2148720(__int64 a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  bool v6; // cl
  bool v7; // al
  char v8; // r8
  __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD v12[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v13; // [rsp+20h] [rbp-58h]
  _QWORD v14[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v15; // [rsp+50h] [rbp-28h]

  v3 = sub_2153C00(*(_QWORD *)(a1 + 8));
  if ( *(_DWORD *)v3 != 2 )
  {
    v10 = *(_QWORD *)(v3 + 16);
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        v4 = v10 - 2;
        v6 = v4 != 7;
        v5 = *(_QWORD *)(v3 + 8) + 1LL;
        goto LABEL_3;
      }
      v5 = *(_QWORD *)(v3 + 8) + 1LL;
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 8);
    }
    v4 = 0;
    v6 = 1;
    goto LABEL_17;
  }
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = v4 != 7;
LABEL_3:
  switch ( v4 )
  {
    case 8LL:
      v8 = 1;
      v7 = *(_QWORD *)v5 == 0x796C6E6F5F656E6FLL;
      goto LABEL_7;
    case 7LL:
      if ( *(_DWORD *)v5 != 1668508004 || *(_WORD *)(v5 + 4) != 29281 || (v7 = 1, v8 = 2, *(_BYTE *)(v5 + 6) != 100) )
      {
        v7 = 0;
        v8 = 2;
      }
      goto LABEL_7;
    case 9LL:
      if ( *(_QWORD *)v5 != 0x7A69735F656D6173LL || (v7 = 1, v8 = 3, *(_BYTE *)(v5 + 8) != 101) )
      {
        v7 = 0;
        v8 = 1;
      }
LABEL_8:
      if ( v7 || v6 )
        goto LABEL_9;
LABEL_31:
      if ( *(_DWORD *)v5 == 1735549292 && *(_WORD *)(v5 + 4) == 29541 && *(_BYTE *)(v5 + 6) == 116 )
      {
        v8 = 6;
        goto LABEL_11;
      }
      goto LABEL_10;
    case 13LL:
      if ( *(_QWORD *)v5 != 0x6E6F635F656D6173LL
        || *(_DWORD *)(v5 + 8) != 1953391988
        || (v8 = 4, v7 = 1, *(_BYTE *)(v5 + 12) != 115) )
      {
        v7 = 0;
        v8 = 1;
        if ( !v6 )
          goto LABEL_31;
      }
      goto LABEL_9;
  }
LABEL_17:
  v7 = 0;
  v8 = 1;
LABEL_7:
  if ( v7 || v4 != 11 )
    goto LABEL_8;
  if ( *(_QWORD *)v5 == 0x746169636F737361LL && *(_WORD *)(v5 + 8) == 30313 && *(_BYTE *)(v5 + 10) == 101 )
  {
    v8 = 5;
    goto LABEL_11;
  }
LABEL_9:
  if ( !v7 && v4 == 6 )
  {
    if ( *(_DWORD *)v5 == 1702323566 && *(_WORD *)(v5 + 4) == 29811 )
    {
      *a2 = 7;
      goto LABEL_12;
    }
    goto LABEL_20;
  }
LABEL_10:
  if ( v7 )
  {
LABEL_11:
    *a2 = v8;
LABEL_12:
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
    return 0;
  }
LABEL_20:
  *a2 = 0;
  v13 = 1283;
  v12[0] = "unrecognized COMDAT type '";
  v12[2] = v5;
  v11 = *(_QWORD *)(a1 + 8);
  v12[3] = v4;
  v14[0] = v12;
  v15 = 770;
  v14[2] = "'";
  return sub_21543E0(v11, v14, 0, 0);
}
