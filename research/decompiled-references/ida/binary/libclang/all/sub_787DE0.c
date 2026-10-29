unsigned __int64 __fastcall sub_787DE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r14
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  _DWORD *v23; // rdi
  int v24; // eax

  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 112);
    *(_QWORD *)(a1 + 112) = v4;
    v5 = (unsigned __int64)sub_787D60((__int64 *)(v4 + 104), v4);
    v6 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 104) = v5 & 0xFFFFFFFFFFFFFFFCLL;
    *(_WORD *)(a1 + 30) |= *(_WORD *)(v5 + 30) & 0x26;
  }
  else
  {
    *(_QWORD *)(a1 + 112) = a1;
    v6 = a1;
  }
  v7 = *(_QWORD *)(v6 + 104);
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) == 0 )
  {
    if ( v8 > 3 )
    {
      *(_QWORD *)(v6 + 104) = sub_6D4E90((_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL), a1) | 1;
      result = *(_QWORD *)(a1 + 152);
      if ( !result )
        goto LABEL_6;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  if ( !v8 || (v7 & 4) == 0 || (v10 = v7 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_13:
    v8 = a1 & 0xFFFFFFFFFFFFFFFBLL;
    goto LABEL_14;
  }
  *(_QWORD *)(v10 + 16) = a1;
LABEL_14:
  *(_QWORD *)(v6 + 104) = v8 | 1;
  result = *(_QWORD *)(a1 + 152);
  if ( !result )
    goto LABEL_6;
LABEL_15:
  if ( (result & 6) != 0 )
    goto LABEL_6;
  result &= 0xFFFFFFFFFFFFFFF8LL;
  v11 = result;
  if ( !result )
    goto LABEL_6;
  result = *(_BYTE *)(result + 28) & 0x7F;
  if ( (_BYTE)result != 69 )
    goto LABEL_6;
  if ( !a2
    || (v12 = *(_QWORD *)(a2 + 152)) == 0
    || (v12 & 6) != 0
    || (v13 = v12 & 0xFFFFFFFFFFFFFFF8LL) == 0
    || (*(_BYTE *)(v13 + 28) & 0x7F) != 0x45 )
  {
    *(_QWORD *)(v11 + 72) = v11;
    v14 = v11;
    goto LABEL_36;
  }
  v14 = *(_QWORD *)(v13 + 72);
  *(_QWORD *)(v11 + 72) = v14;
  v15 = *(_QWORD *)(v14 + 64);
  v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v15 & 1) != 0 )
    goto LABEL_27;
  if ( v16 <= 3 )
    goto LABEL_30;
  v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v16 & 2) != 0 )
  {
    v18 = sub_6D4E90((_QWORD *)v17, v14);
    v16 = v18 & 0xFFFFFFFFFFFFFFFELL;
    v15 = v18 | 1;
    *(_QWORD *)(v14 + 64) = v15;
LABEL_27:
    v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    v19 = v17;
    if ( !v16 || (v16 & 4) == 0 )
      goto LABEL_31;
    if ( v17 )
    {
      v23 = *(_DWORD **)v17;
      v24 = v23[3];
      if ( *(_DWORD *)(v19 + 8) != v24 )
      {
        *(_DWORD *)(v19 + 8) = v24;
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v23 + 144LL))(v23, v14);
      }
      v17 = *(_QWORD *)(v19 + 16);
      v14 = *(_QWORD *)(v11 + 72);
      goto LABEL_32;
    }
LABEL_30:
    v17 = 0;
LABEL_31:
    v14 = *(_QWORD *)(v11 + 72);
  }
LABEL_32:
  *(_QWORD *)(v11 + 64) = v17 & 0xFFFFFFFFFFFFFFFCLL;
  *(_WORD *)(v11 + 30) |= *(_WORD *)(v17 + 30) & 0x26;
LABEL_36:
  v20 = *(_QWORD *)(v14 + 64);
  v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v20 & 1) != 0 )
  {
    if ( v21 )
    {
      if ( (v20 & 4) != 0 )
      {
        v22 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v22 )
        {
          *(_QWORD *)(v22 + 16) = v11;
          v11 = v21;
        }
      }
    }
  }
  else if ( v21 > 3 )
  {
    result = sub_6D4E90((_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL), v11) | 1;
    *(_QWORD *)(v14 + 64) = result;
    goto LABEL_6;
  }
  result = v11 | 1;
  *(_QWORD *)(v14 + 64) = v11 | 1;
LABEL_6:
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 82) & 1) != 0 )
      *(_BYTE *)(a1 + 82) |= 1u;
  }
  return result;
}

