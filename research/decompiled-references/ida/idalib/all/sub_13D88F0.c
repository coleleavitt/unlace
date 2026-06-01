__int64 __fastcall sub_13D88F0(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  size_t v5; // r14
  unsigned __int8 **v6; // r8
  __int64 v7; // rdx
  int v8; // ecx
  _BYTE *v9; // rbp
  char v10; // al
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // rdx
  __int64 i; // rbp
  __int64 v16; // rbx
  unsigned __int8 *v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v22; // [rsp+8h] [rbp-90h]
  unsigned __int8 **v23; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v24[17]; // [rsp+10h] [rbp-88h] BYREF

  if ( !*(_BYTE *)(a1 + 26) )
  {
    sub_13D1530((__int64)v24, a1, *(_QWORD *)(a1 + 152), 1346);
    sub_AEA040((__int64)v24);
  }
  v5 = 0;
  v6 = v24;
  while ( 1 )
  {
    v7 = *(unsigned __int8 *)(a3 + v5);
    v8 = v5;
    v9 = (_BYTE *)(a3 + v5);
    v10 = *(_BYTE *)(a3 + v5);
    if ( (*(_WORD *)&byte_2411740[2 * v7] & 0x3E8) == 0 || (unsigned __int8)(v7 - 40) <= 1u || v10 == 92 )
      break;
    if ( !*(_BYTE *)(a1 + 26) && ((v10 & 0xDF) == 0x40 || v10 == 36) )
    {
      v23 = v6;
      sub_13D1530((__int64)v6, a1, a3 + v5, (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 2LL) & 2) == 0 ? 1215 : 1340);
      sub_AEC220(v23, (_BYTE *)(a3 + v5), 1);
      sub_AEA040((__int64)v23);
      v6 = v23;
    }
    if ( ++v5 == 16 )
    {
      v10 = *(_BYTE *)(a3 + 16);
      v9 = (_BYTE *)(a3 + 16);
      v8 = 16;
      break;
    }
  }
  if ( v10 == 40 )
  {
    v22 = (unsigned int)(v8 + 1);
    for ( i = a3 + v22; ; ++i )
    {
      v16 = i + 1;
      if ( *(_BYTE *)i == 41 )
      {
        if ( !strncmp((const char *)(i + 1), (const char *)a3, v5) && *(_BYTE *)(v16 + v5) == 34 )
        {
          v17 = (unsigned __int8 *)(v22 + v16);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) != 0 )
            v17 = sub_13D7F50(a1, a2, v17, 1);
          v18 = *(_QWORD *)(a1 + 152);
          *(_DWORD *)(a2 + 4) = (_DWORD)v17 - v18;
          *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v17 - (int)v18);
          *(_WORD *)(a2 + 16) = a4;
          *(_QWORD *)(a1 + 152) = v17;
          *(_QWORD *)(a2 + 8) = v18;
          return 1;
        }
      }
      else if ( !*(_BYTE *)i && *(_QWORD *)(a1 + 120) == i )
      {
        v19 = *(_QWORD *)(a1 + 152);
        if ( !*(_BYTE *)(a1 + 26) )
        {
          sub_13D1530((__int64)v24, a1, v19, 1201);
          sub_AEC220(v24, (_BYTE *)a3, v5);
          sub_AEA040((__int64)v24);
          v19 = *(_QWORD *)(a1 + 152);
        }
        *(_DWORD *)(a2 + 4) = i - v19;
        *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)i - (int)v19);
        *(_WORD *)(a2 + 16) = 0;
        *(_QWORD *)(a1 + 152) = i;
        return 1;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 26) )
    goto LABEL_18;
  if ( v8 == 16 )
  {
    v20 = 1184;
LABEL_38:
    sub_13D1530((__int64)v24, a1, (__int64)v9, v20);
    sub_AEA040((__int64)v24);
    goto LABEL_18;
  }
  if ( v10 == 10 )
  {
    v20 = 1050;
    goto LABEL_38;
  }
  sub_13D1530((__int64)v24, a1, (__int64)v9, 1047);
  sub_AEC220(v24, v9, 1);
  v11 = a3 + 1;
  sub_AEA040((__int64)v24);
  v12 = *(_BYTE *)a3;
  if ( *(_BYTE *)a3 != 34 )
  {
    while ( v12 || *(_QWORD *)(a1 + 120) != a3 )
    {
      a3 = v11;
LABEL_18:
      v11 = a3 + 1;
      v12 = *(_BYTE *)a3;
      if ( *(_BYTE *)a3 == 34 )
        goto LABEL_19;
    }
    v11 = a3;
  }
LABEL_19:
  v13 = v11 - *(_QWORD *)(a1 + 152);
  *(_DWORD *)(a2 + 4) = v13;
  *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), v13);
  *(_WORD *)(a2 + 16) = 0;
  *(_QWORD *)(a1 + 152) = v11;
  return 1;
}
