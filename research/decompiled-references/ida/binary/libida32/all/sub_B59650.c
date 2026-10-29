__int64 __fastcall sub_B59650(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r15
  char v5; // r14
  _QWORD *v7; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  int v19; // eax
  _QWORD *v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int8 v25; // [rsp+Fh] [rbp-39h]

  v4 = a1;
  v5 = 0;
  v7 = (_QWORD *)a2;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v4 + 80);
    if ( (*(_BYTE *)(v4 + 82) & 0x40) != 0 && (v9 & 0x2000000) == 0 )
      break;
    if ( (v9 & 0x2000000) != 0
      || (*(_BYTE *)(v4 + 83) & 8) == 0 && ((*(_BYTE *)(v4 + 128) & 1) != 0 || *(_QWORD *)(v4 + 128)) )
    {
      break;
    }
    if ( (*(_BYTE *)(v4 + 83) & 0x40) != 0 )
      break;
    v11 = HIDWORD(v9);
    if ( (v11 & 0x20) != 0 )
      break;
    if ( (v11 & 0x40) != 0 )
      break;
    v25 = sub_B69240(v4, a2, *(_BYTE *)(v4 + 83) & 0x40, a4);
    if ( v25 || a3 && (unsigned __int8)sub_B53C50(v4) )
      break;
    v14 = *(_QWORD *)(v4 + 104);
    if ( (v14 & 1) != 0 )
    {
      if ( v5 )
        return v25;
      v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_24;
    }
    if ( (v14 & 2) != 0 )
    {
      if ( v5 )
        return v25;
      v20 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
      v5 = 1;
      if ( v20 )
      {
        v21 = v20[2295];
        if ( v21 )
        {
          a4 = v20[294];
          v20[304] += 24LL;
          v22 = (a4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          a2 = v22 + 24;
          if ( v20[295] >= v22 + 24 && a4 )
          {
            v20[294] = a2;
            v23 = (a4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            a2 = 24;
            v23 = sub_962430((__int64)(v20 + 294), 24, 24, 3, v12, v13);
            v22 = v23 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v23 = v21;
          v24 = v22 | 4;
          *(_DWORD *)(v23 + 8) = 0;
          *(_QWORD *)(v23 + 16) = v4;
        }
        else
        {
          v24 = v4 & 0xFFFFFFFFFFFFFFFBLL;
        }
        v16 = v24 & 0xFFFFFFFFFFFFFFFELL;
        v14 = v16 | 1;
        *(_QWORD *)(v4 + 104) = v16 | 1;
LABEL_24:
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 1;
        v17 = v15;
        if ( v16 && (v16 & 4) != 0 && v15 )
        {
          v18 = *(_QWORD *)v15;
          v19 = *(_DWORD *)(*(_QWORD *)v15 + 12LL);
          if ( *(_DWORD *)(v17 + 8) != v19 )
          {
            *(_DWORD *)(v17 + 8) = v19;
            a2 = v4;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v4);
          }
          v15 = *(_QWORD *)(v17 + 16);
          v5 = 1;
        }
        goto LABEL_19;
      }
    }
    else
    {
      v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v15 )
        goto LABEL_19;
    }
    v15 = 0;
LABEL_19:
    if ( a1 != v15 )
    {
      v4 = v15;
      if ( v15 )
        continue;
    }
    return v25;
  }
  *v7 = v4;
  return 1;
}

