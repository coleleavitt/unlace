__int64 __fastcall sub_13D8C50(__int64 a1, __int64 a2, unsigned __int8 *a3, __int16 a4, double a5, double a6)
{
  unsigned __int8 v9; // cl
  unsigned __int8 *v10; // r13
  __int64 v11; // r15
  unsigned __int8 *v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rbp
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int8 *v22; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v23; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v24[17]; // [rsp+10h] [rbp-88h] BYREF

  if ( *(_BYTE *)(a1 + 26) || (unsigned __int16)(a4 - 17) > 2u )
  {
    v9 = *a3;
    if ( *a3 == 63 )
      goto LABEL_38;
  }
  else
  {
    sub_13D1530(
      (__int64)v24,
      a1,
      *(_QWORD *)(a1 + 152),
      (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) == 0 ? 1322 : 1347);
    sub_AEA040((__int64)v24);
    v9 = *a3;
    if ( *a3 == 63 )
      goto LABEL_38;
  }
  if ( v9 != 92 )
  {
    v10 = a3 + 1;
    goto LABEL_6;
  }
LABEL_38:
  v20 = sub_13D1690(a1, a3, a2);
  v9 = v20;
  v10 = &a3[HIDWORD(v20)];
LABEL_6:
  if ( v9 == 34 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) != 0 )
      v10 = sub_13D7F50(a1, a2, v10, 1);
LABEL_24:
    v14 = *(_QWORD *)(a1 + 152);
    *(_DWORD *)(a2 + 4) = (_DWORD)v10 - v14;
    v15 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v10 - (int)v14);
    *(_WORD *)(a2 + 16) = a4;
    *(_DWORD *)a2 = v15;
    *(_QWORD *)(a1 + 152) = v10;
    *(_QWORD *)(a2 + 8) = v14;
    return 1;
  }
  v11 = 0;
  while ( 2 )
  {
    if ( v9 == 92 )
    {
      while ( 1 )
      {
        v9 = *v10;
        if ( *v10 == 63 || v9 == 92 )
        {
          v19 = sub_13D1690(a1, v10, a2);
          v9 = v19;
          v10 += HIDWORD(v19);
          goto LABEL_9;
        }
        ++v10;
        if ( v9 == 10 )
          goto LABEL_30;
LABEL_10:
        if ( v9 == 13 )
          goto LABEL_30;
        if ( !v9 )
        {
          v12 = *(unsigned __int8 **)(a1 + 120);
          v11 = (__int64)(v10 - 1);
          if ( v10 - 1 == v12 )
            goto LABEL_31;
          v13 = *(_QWORD *)(a1 + 8);
          if ( v13 )
          {
            if ( *(_QWORD *)(v13 + 760)
              && *(_DWORD *)(a1 + 128) + (_DWORD)v11 - *(_DWORD *)(a1 + 112) == *(_DWORD *)(v13 + 772) )
            {
              if ( *(_BYTE *)(a1 + 25) )
                sub_13D40B0(a1, (const char *)a3, (unsigned __int64)(v10 - 1), 0);
              else
                sub_145C700(a5, a6);
              v21 = v11 - *(_QWORD *)(a1 + 152);
              *(_DWORD *)(a2 + 4) = v21;
              *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), v21);
              *(_WORD *)(a2 + 16) = 0;
              *(_QWORD *)(a1 + 152) = *(_QWORD *)(a1 + 120);
              return 1;
            }
          }
        }
        v9 = *v10;
        if ( *v10 != 63 && v9 != 92 )
          break;
        v16 = sub_13D1690(a1, v10, a2);
        v9 = v16;
        v10 += HIDWORD(v16);
        if ( (_BYTE)v16 == 34 )
          goto LABEL_19;
        if ( (_BYTE)v16 != 92 )
          goto LABEL_9;
      }
      ++v10;
      if ( v9 != 34 )
        continue;
LABEL_19:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) != 0 )
        v10 = sub_13D7F50(a1, a2, v10, 1);
      if ( v11 && !*(_BYTE *)(a1 + 26) )
      {
        sub_13D1530((__int64)v24, a1, v11, 1280);
        sub_AE9DF0(v24, 1, 2u);
        sub_AEA040((__int64)v24);
      }
      goto LABEL_24;
    }
    break;
  }
LABEL_9:
  if ( v9 != 10 )
    goto LABEL_10;
LABEL_30:
  v12 = v10 - 1;
LABEL_31:
  v17 = *(_QWORD *)(a1 + 152);
  if ( !*(_BYTE *)(a1 + 26) && (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) & 2) == 0 )
  {
    v23 = v12;
    sub_13D1530((__int64)v24, a1, v17, 1259);
    sub_AE9DF0(v24, 1, 2u);
    sub_AEA040((__int64)v24);
    v17 = *(_QWORD *)(a1 + 152);
    v12 = v23;
  }
  v22 = v12;
  *(_DWORD *)(a2 + 4) = (_DWORD)v12 - v17;
  *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v12 - (int)v17);
  *(_WORD *)(a2 + 16) = 0;
  *(_QWORD *)(a1 + 152) = v22;
  return 1;
}
