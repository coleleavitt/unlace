__int64 __fastcall sub_13D8530(__int64 a1, __int64 a2, unsigned __int8 *a3, __int16 a4, double a5, double a6)
{
  unsigned __int8 v9; // cl
  unsigned __int8 *v10; // rbx
  __int64 v11; // r14
  unsigned __int8 *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r14
  int v15; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  int v20; // ecx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int8 *v24[17]; // [rsp+0h] [rbp-88h] BYREF

  if ( !*(_BYTE *)(a1 + 26) )
  {
    if ( (unsigned __int16)(a4 - 12) <= 1u )
    {
      v20 = (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) == 0 ? 1322 : 1347;
    }
    else
    {
      if ( a4 != 11 )
        goto LABEL_4;
      v20 = (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) == 0 ? 1313 : 1331;
    }
    sub_13D1530((__int64)v24, a1, *(_QWORD *)(a1 + 152), v20);
    sub_AEA040((__int64)v24);
    v9 = *a3;
    if ( *a3 == 63 )
      goto LABEL_38;
    goto LABEL_5;
  }
LABEL_4:
  v9 = *a3;
  if ( *a3 == 63 )
    goto LABEL_38;
LABEL_5:
  if ( v9 != 92 )
  {
    v10 = a3 + 1;
    v11 = 0;
    if ( v9 != 39 )
      goto LABEL_7;
    goto LABEL_39;
  }
LABEL_38:
  v11 = 0;
  v21 = sub_13D1690(a1, a3, a2);
  v9 = v21;
  v10 = &a3[HIDWORD(v21)];
  if ( (_BYTE)v21 == 39 )
  {
LABEL_39:
    v22 = *(_QWORD *)(a1 + 152);
    if ( !*(_BYTE *)(a1 + 26) && (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) & 2) == 0 )
    {
      sub_13D1530((__int64)v24, a1, v22, 1220);
      sub_AEA040((__int64)v24);
      v22 = *(_QWORD *)(a1 + 152);
    }
    *(_DWORD *)(a2 + 4) = (_DWORD)v10 - v22;
    *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v10 - (int)v22);
    *(_WORD *)(a2 + 16) = 0;
    *(_QWORD *)(a1 + 152) = v10;
    return 1;
  }
LABEL_7:
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
          goto LABEL_8;
        }
        ++v10;
        if ( v9 == 10 )
          goto LABEL_30;
LABEL_9:
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
              sub_145C700(a5, a6);
              v23 = v11 - *(_QWORD *)(a1 + 152);
              *(_DWORD *)(a2 + 4) = v23;
              *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), v23);
              *(_WORD *)(a2 + 16) = 0;
              *(_QWORD *)(a1 + 152) = *(_QWORD *)(a1 + 120);
              return 1;
            }
          }
        }
        v9 = *v10;
        if ( *v10 != 63 && v9 != 92 )
          break;
        v17 = sub_13D1690(a1, v10, a2);
        v9 = v17;
        v10 += HIDWORD(v17);
        if ( (_BYTE)v17 == 39 )
          goto LABEL_18;
        if ( (_BYTE)v17 != 92 )
          goto LABEL_8;
      }
      ++v10;
      if ( v9 != 39 )
        continue;
LABEL_18:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) != 0 )
        v10 = sub_13D7F50(a1, a2, v10, 0);
      if ( v11 && !*(_BYTE *)(a1 + 26) )
      {
        sub_13D1530((__int64)v24, a1, v11, 1280);
        sub_AE9DF0(v24, 0, 2u);
        sub_AEA040((__int64)v24);
      }
      v14 = *(_QWORD *)(a1 + 152);
      *(_DWORD *)(a2 + 4) = (_DWORD)v10 - v14;
      v15 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v10 - (int)v14);
      *(_WORD *)(a2 + 16) = a4;
      *(_DWORD *)a2 = v15;
      *(_QWORD *)(a1 + 152) = v10;
      *(_QWORD *)(a2 + 8) = v14;
    }
    else
    {
LABEL_8:
      if ( v9 != 10 )
        goto LABEL_9;
LABEL_30:
      v12 = v10 - 1;
LABEL_31:
      v18 = *(_QWORD *)(a1 + 152);
      if ( !*(_BYTE *)(a1 + 26) && (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) & 2) == 0 )
      {
        sub_13D1530((__int64)v24, a1, v18, 1259);
        sub_AE9DF0(v24, 0, 2u);
        sub_AEA040((__int64)v24);
        v18 = *(_QWORD *)(a1 + 152);
      }
      *(_DWORD *)(a2 + 4) = (_DWORD)v12 - v18;
      *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v12 - (int)v18);
      *(_WORD *)(a2 + 16) = 0;
      *(_QWORD *)(a1 + 152) = v12;
    }
    return 1;
  }
}
