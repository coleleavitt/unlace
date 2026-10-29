_QWORD *__fastcall sub_EAA170(_QWORD *a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  __int64 v14; // r15
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // edx
  __int64 v35; // rax
  unsigned __int8 v36; // al
  _QWORD *v37; // rcx
  __int64 v38; // r13
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // [rsp+8h] [rbp-40h]

  v7 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v7 = (_QWORD *)*v7;
  v11 = sub_B6AD60((__int64)v7);
  v12 = *(_BYTE *)(v11 + 8) & 0x7F;
  v13 = (unsigned int)v12 - 18;
  if ( (unsigned int)v13 > 0x3F )
  {
    if ( v12 == 24 )
      return nullptr;
    goto LABEL_16;
  }
  v14 = sub_B68470(v11);
  v12 = *(_BYTE *)(v11 + 8) & 0x7F;
  if ( v12 == 24 )
  {
    v15 = v11 - 48;
    if ( !v14 )
      return nullptr;
    if ( v11 != 48 )
    {
      v16 = *(_QWORD *)(v11 - 8);
      if ( (v16 & 7) == 0 && (v16 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_9;
      return nullptr;
    }
    goto LABEL_24;
  }
  if ( !v14 )
  {
LABEL_16:
    if ( !v12 && a4 )
      return sub_E6D3D0(a1, a2, v13, v8, v9, v10);
    return nullptr;
  }
  if ( (unsigned int)v12 - 59 > 2 )
    goto LABEL_24;
  if ( v11 == 64 )
    goto LABEL_24;
  v20 = (_QWORD *)sub_B734F0(v11 - 64);
  v21 = v20;
  if ( !v20 )
    goto LABEL_24;
  v22 = sub_B9FA80(v20);
  v23 = *(_QWORD *)(v22 + 16) + 8LL * *(unsigned int *)(v22 + 24);
  if ( *(_QWORD *)(sub_B9FA80(v21) + 16) == v23 )
    goto LABEL_24;
  v29 = *(_QWORD *)(**(_QWORD **)(sub_B9FA80(v21) + 16) + 104LL);
  v30 = *(_QWORD *)(v29 + 96);
  if ( (v30 & 1) != 0 )
  {
    v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v37 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v30 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v15 = 0;
      goto LABEL_37;
    }
    v15 = v30 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v30 & 2) == 0 )
      goto LABEL_37;
    v38 = v37[2295];
    v39 = v29 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v38 )
    {
      v40 = v37[294];
      v37[304] += 24LL;
      v41 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v37[295] >= v41 + 24 && v40 )
      {
        v37[294] = v41 + 24;
        v42 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v42 = sub_962430((__int64)(v37 + 294), 24, 24, 3, v27, v28);
        v41 = v42 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v42 = v38;
      v39 = v41 | 4;
      *(_DWORD *)(v42 + 8) = 0;
      *(_QWORD *)(v42 + 16) = v29;
    }
    v31 = v39 & 0xFFFFFFFFFFFFFFFELL;
    v30 = v31 | 1;
    *(_QWORD *)(v29 + 96) = v31 | 1;
  }
  v32 = v30 & 0xFFFFFFFFFFFFFFF8LL;
  v15 = v32;
  if ( v31 )
  {
    if ( (v31 & 4) != 0 )
    {
      v15 = 0;
      if ( v32 )
      {
        v33 = *(_QWORD *)v32;
        v34 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
        if ( *(_DWORD *)(v32 + 8) != v34 )
        {
          *(_DWORD *)(v32 + 8) = v34;
          v43 = v32;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 152LL))(v33, v29);
          v32 = v43;
        }
        v15 = *(_QWORD *)(v32 + 16);
      }
    }
  }
LABEL_37:
  while ( sub_B73710(v15) )
  {
    while ( 1 )
    {
      v35 = *(_QWORD *)(v15 + 96);
      v15 = 0;
      if ( (v35 & 3) != 0 )
        break;
      v15 = v35 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !sub_B73710(v35 & 0xFFFFFFFFFFFFFFFCLL) )
        goto LABEL_40;
    }
  }
LABEL_40:
  v14 = 0;
  v36 = *(_BYTE *)(v15 + 28) & 0x7F;
  if ( (unsigned int)v36 - 18 <= 0x3F )
    v14 = v15;
  if ( v36 != 24 )
  {
LABEL_24:
    if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 58 <= 4 )
    {
      v24 = *(_QWORD *)(v14 + 48);
      if ( (unsigned __int8)(*(_BYTE *)(v24 + 16) - 48) <= 1u )
        v24 = sub_EAA4D0(a1, *(_QWORD *)(v14 + 48), a4);
      v25 = sub_EAAC10(a1, v14, a3, a4);
      return sub_E6DCC0(a1, v25, v24);
    }
    return nullptr;
  }
LABEL_9:
  while ( (*(_BYTE *)(v15 + 57) & 0x20) != 0 )
  {
    v17 = *(_QWORD *)(v15 + 16);
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v17 & 4) != 0 )
      v18 = *(_QWORD *)v18;
    if ( (*(_BYTE *)(v18 + 8) & 0x7F) == 0x18 )
    {
      v15 = v18 - 48;
      if ( v15 )
        continue;
    }
    return nullptr;
  }
  v26 = sub_EAAC10(a1, v15, 1, a4);
  return sub_E6DF00(a1, v26, v15);
}

