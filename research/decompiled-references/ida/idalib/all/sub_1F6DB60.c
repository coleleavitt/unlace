_QWORD *__fastcall sub_1F6DB60(__int64 a1, __int64 a2)
{
  char v2; // cl
  _QWORD *v3; // r9
  unsigned __int8 v4; // dl
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _BOOL8 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  _BOOL8 v14; // rcx
  __int16 v15; // ax
  _QWORD *v16; // rax
  __int64 v17; // r8
  char v18; // di
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9

  v2 = *(_BYTE *)(a2 + 19);
  v3 = (_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v4 = ((unsigned __int8)v2 >> 1) & 0xF;
  *(_DWORD *)a1 = v4;
  if ( v4 == 2 )
  {
    v10 = (a2 + (((char)BYTE3(*(_QWORD *)(a2 + 16)) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a2 + 22) + 48 + 7)
        & 0xFFFFFFFFFFFFFFF8LL;
    v11 = ((*(_QWORD *)(a2 + 16) >> 24) & 0x40) != 0;
    v12 = v10 + 8 * v11;
    if ( ((*(_QWORD *)(a2 + 16) >> 24) & 0x40) != 0 )
    {
      v14 = (*(_BYTE *)(v10 + 1) & 4) != 0;
      v13 = v12 + 8 * v14;
    }
    else
    {
      v13 = v10 + 8 * v11;
      v14 = 0;
    }
    v15 = *(_WORD *)v10;
    v3[1] = v13;
    v3[2] = (__int64)(v12 + 8 * (v14 + (v15 & 0x3FF)) - v13) >> 3;
    return v3;
  }
  else if ( (unsigned int)v4 - 6 <= 2 )
  {
    v6 = *(unsigned __int16 *)(a2 + 22);
    v7 = (a2 + (((char)BYTE3(*(_QWORD *)(a2 + 16)) >> 5) & 4) + 8 * v6 + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( ((*(_QWORD *)(a2 + 16) >> 24) & 0x40) != 0 )
    {
      v9 = ((*(_BYTE *)(v7 + 1) & 4) != 0) + 1LL;
      v8 = (_QWORD *)(v7 + 8 * v9);
    }
    else
    {
      v8 = (_QWORD *)((a2 + (((char)BYTE3(*(_QWORD *)(a2 + 16)) >> 5) & 4) + 8 * v6 + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      v9 = 0;
    }
    if ( v4 == 2 )
      v8 = (_QWORD *)(v7 + 8 * ((*(_WORD *)v7 & 0x3FF) + v9));
    v3[3] = *v8;
    return v3;
  }
  else if ( v4 == 10 )
  {
    v17 = 8LL * *(unsigned __int16 *)(a2 + 22) + 48;
    v18 = BYTE3(*(_QWORD *)(a2 + 16));
    v19 = (v18 & 0x40) != 0;
    v20 = (a2 + v17 + ((v18 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 0x40) != 0 )
      v19 += (*(_BYTE *)(((a2 + v17 + ((v2 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v3[4] = *(_QWORD *)(v20 + 8 * v19);
    v21 = sub_1F6CA20(a2);
    *(_QWORD *)(v22 + 40) = *(_QWORD *)(v21 + 8);
    return (_QWORD *)v22;
  }
  else
  {
    if ( v4 == 9 )
    {
      v16 = (_QWORD *)sub_1F6CA20(a2);
      v3[4] = *v16;
    }
    return v3;
  }
}
