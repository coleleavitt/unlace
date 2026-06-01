__int64 __fastcall sub_CB3790(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  bool v6; // zf
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v16[4]; // [rsp+10h] [rbp-68h] BYREF
  int v17; // [rsp+30h] [rbp-48h]
  char v18; // [rsp+38h] [rbp-40h]

  v3 = *(unsigned __int8 *)(a1 + 1361);
  if ( (_BYTE)v3 )
  {
    v16[0] = a2 | 4;
    return (unsigned int)sub_CE4840(a1, v16);
  }
  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 1328);
  v16[1] = a1;
  v16[3] = 0;
  v16[2] = v5;
  v17 = 1;
  v6 = *(_BYTE *)(a1 + 1448) == 0;
  v18 = 0;
  *(_QWORD *)(a1 + 1328) = v16;
  v16[0] = &off_2B216F8;
  if ( !v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v4) )
    {
      sub_C90D20(a1);
      v9 = *(unsigned int *)(a1 + 1444);
      v15 = a2 | 4;
      v3 = sub_D27AD0(a1, v9, &v15);
    }
    goto LABEL_6;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 13 || ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    v10 = *(unsigned int *)(a1 + 1384);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1388) )
    {
      sub_22134E0(a1 + 1376, a1 + 1392, v10 + 1, 16);
      v10 = *(unsigned int *)(a1 + 1384);
    }
    v11 = (_QWORD *)(*(_QWORD *)(a1 + 1376) + 16 * v10);
    *v11 = 6;
    v11[1] = 0;
    ++*(_DWORD *)(a1 + 1384);
    v15 = v4 | 4;
    if ( (unsigned __int8)sub_CE43A0(a1, &v15)
      && (unsigned __int8)sub_CB2E50(a1, v4, v12, v13, v14)
      && (v15 = v4 | 4, (unsigned __int8)sub_CE3FA0(a1, &v15)) )
    {
      sub_C90D20(a1);
      v15 = a2 | 4;
      v3 = sub_CDB9D0(a1, &v15);
    }
    else
    {
      v3 = 0;
    }
    --*(_DWORD *)(a1 + 1384);
    goto LABEL_6;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v4) )
  {
    sub_C977B0((__int64)v16);
LABEL_12:
    sub_C90D20(a1);
    v16[0] = a2 | 4;
    return (unsigned int)sub_CDB9D0(a1, v16);
  }
LABEL_6:
  sub_C977B0((__int64)v16);
  return v3;
}

