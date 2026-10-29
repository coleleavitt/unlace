__int64 __fastcall sub_CC42A0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  bool v6; // zf
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // [rsp+8h] [rbp-70h] BYREF
  __int64 v16[4]; // [rsp+10h] [rbp-68h] BYREF
  int v17; // [rsp+30h] [rbp-48h]
  char v18; // [rsp+38h] [rbp-40h]

  v3 = *(unsigned __int8 *)(a1 + 585);
  if ( (_BYTE)v3 )
  {
    v16[0] = a2 | 4;
    return (unsigned int)sub_CABF60(a1, v16);
  }
  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 552);
  v16[1] = a1;
  v16[3] = 0;
  v16[2] = v5;
  v17 = 1;
  v6 = *(_BYTE *)(a1 + 672) == 0;
  v18 = 0;
  *(_QWORD *)(a1 + 552) = v16;
  v16[0] = (__int64)&off_2B4B5B8;
  if ( !v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v4) )
    {
      sub_CB1200(a1);
      v9 = *(_DWORD *)(a1 + 668);
      v15 = a2 | 4;
      v3 = sub_CA2A10(a1, v9, (__int64 *)&v15);
    }
    goto LABEL_6;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 13 || ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    v10 = *(unsigned int *)(a1 + 608);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 612) )
    {
      sub_2237220(a1 + 600, a1 + 616, v10 + 1, 16);
      v10 = *(unsigned int *)(a1 + 608);
    }
    v11 = (_QWORD *)(*(_QWORD *)(a1 + 600) + 16 * v10);
    *v11 = 6;
    v11[1] = 0;
    ++*(_DWORD *)(a1 + 608);
    v15 = v4 | 4;
    if ( (unsigned __int8)sub_CA2930(a1, (__int64 *)&v15)
      && (unsigned __int8)sub_CC3960(a1, v4, v12, v13, v14)
      && (v15 = v4 | 4, (unsigned __int8)sub_CA2800(a1, (__int64 *)&v15)) )
    {
      sub_CB1200(a1);
      v15 = a2 | 4;
      v3 = sub_CA2B30(a1, (__int64 *)&v15);
    }
    else
    {
      v3 = 0;
    }
    --*(_DWORD *)(a1 + 608);
    goto LABEL_6;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v4) )
  {
    sub_CBB210((__int64)v16);
LABEL_12:
    sub_CB1200(a1);
    v16[0] = a2 | 4;
    return (unsigned int)sub_CA2B30(a1, v16);
  }
LABEL_6:
  sub_CBB210((__int64)v16);
  return v3;
}
