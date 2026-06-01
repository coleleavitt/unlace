__int16 __fastcall sub_16B6AF0(__int64 *a1, _WORD *a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rbp
  unsigned __int16 v4; // dx
  unsigned __int64 v5; // rbx
  unsigned __int16 v6; // ax
  bool v7; // cc
  __int64 *v8; // rax
  __int16 v9; // ax
  unsigned __int64 *v10; // rdx
  unsigned __int64 *v11; // rbx
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 *v30; // rax
  __int64 *v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  char v38[41]; // [rsp+1h] [rbp-29h] BYREF

  if ( !a2 )
    BUG();
  v2 = (__int64)a2;
  v3 = a2;
  v4 = *a2 & 0x1FF;
  while ( 1 )
  {
    if ( v4 == 79 )
    {
      v5 = sub_BFA3B0((__int64)v3);
      goto LABEL_4;
    }
    if ( ((v4 + 452) & 0x1FFu) > 1 )
      break;
    v5 = v3[2];
    if ( (_QWORD *)v5 == v3 )
      goto LABEL_30;
    v4 = *(_WORD *)v5 & 0x1FF;
    if ( (unsigned int)v4 - 113 <= 1 )
    {
      if ( (*(_QWORD *)v5 & 0x80000) != 0 && v4 != 114 )
      {
        v7 = *(_DWORD *)(v5 + 32) <= 1u;
        if ( *(_DWORD *)(v5 + 32) == 1 )
          goto LABEL_22;
        goto LABEL_8;
      }
LABEL_10:
      v4 = *(_WORD *)v5 & 0x1FF;
    }
    v3 = (_QWORD *)v5;
  }
  if ( v4 == 48 )
  {
    v5 = v3[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3[2] & 4) != 0 )
      v5 = *(_QWORD *)(v5 + 40);
LABEL_4:
    v6 = *(_WORD *)v5 & 0x1FF;
    if ( (unsigned int)v6 - 113 > 1 || (*(_QWORD *)v5 & 0x80000) == 0 || v6 == 114 )
    {
LABEL_9:
      if ( (_QWORD *)v5 == v3 )
        goto LABEL_28;
      goto LABEL_10;
    }
LABEL_7:
    v7 = *(_DWORD *)(v5 + 32) <= 1u;
    if ( *(_DWORD *)(v5 + 32) == 1 )
      goto LABEL_22;
LABEL_8:
    if ( !v7 && sub_BFDFF0(*(_QWORD *)(v5 + 48)) )
    {
      if ( (*(_WORD *)v5 & 0x1FF) == 0x72 )
        v8 = (__int64 *)(v5 + 48);
      else
LABEL_22:
        v8 = (__int64 *)(v5 + 40);
      if ( !sub_BFDFF0(*v8) && (*(_QWORD *)v5 & 0x200000LL) == 0 )
      {
        v9 = *(_WORD *)v5;
        v10 = (unsigned __int64 *)(v5 + 48);
        v11 = (unsigned __int64 *)(v5 + 40);
        if ( (v9 & 0x1FF) == 0x72 )
          v11 = v10;
        v5 = *v11;
        if ( (_QWORD *)v5 == v3 )
          goto LABEL_28;
        goto LABEL_10;
      }
    }
    goto LABEL_9;
  }
  if ( v4 == 116 )
  {
    v5 = v3[3];
    goto LABEL_4;
  }
  if ( (unsigned int)v4 - 113 > 1 )
    goto LABEL_29;
  if ( (*v3 & 0x80000) != 0 && v4 != 114 )
  {
    v5 = (unsigned __int64)v3;
    goto LABEL_7;
  }
LABEL_28:
  v4 = *(_WORD *)v3 & 0x1FF;
LABEL_29:
  LOWORD(v12) = 1;
  if ( v4 == 104 )
    return v12;
LABEL_30:
  v13 = sub_BFB900((unsigned __int64)a2);
  LOWORD(v12) = sub_F6A600(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v14, v15, v16);
  v21 = v12;
  LOWORD(v21) = BYTE1(v12);
  if ( !BYTE1(v12) || (_BYTE)v12 )
  {
    v22 = sub_F63600(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v21, v17, v18, v19, v20);
    if ( !v22 )
      goto LABEL_34;
    v27 = sub_F60F10(v22, v21, v23, v24, v25, v26);
    if ( (*((_BYTE *)v27 + 29) & 1) == 0 )
      goto LABEL_34;
    v30 = sub_B8C3D0((__int64)v27, v21, v28, v29, v25, v26);
    v31 = (__int64 *)*v30;
    v32 = *v30 + 8LL * *((unsigned int *)v30 + 2);
    if ( *v30 >= v32 )
    {
      if ( v31 == (__int64 *)v32 )
        goto LABEL_34;
      if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 380 )
      {
        v33 = (__int64 *)(v32 + 8);
        while ( v31 != v33 )
        {
          v34 = *v33++;
          if ( *(_WORD *)(v34 + 36) == 380 )
            goto LABEL_60;
        }
        goto LABEL_34;
      }
LABEL_60:
      if ( (*(_WORD *)v2 & 0x1FF) == 0x4C )
      {
        v36 = *(_QWORD *)(v2 + 32);
        if ( (*(_WORD *)v36 & 0x1FF) == 0x35 )
          v2 = **(_QWORD **)(v36 + 16);
      }
      goto LABEL_34;
    }
    v35 = *v30;
    while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 380 )
    {
      v35 += 8LL;
      if ( v32 == v35 )
        goto LABEL_34;
    }
    if ( v32 != v35 )
      goto LABEL_60;
LABEL_34:
    if ( (*(_DWORD *)v2 & 0x20000) != 0 || !(unsigned __int8)sub_C3D850(v2, v38, *a1, 0, v25, v26) )
      LOWORD(v12) = 0;
    else
      LOWORD(v12) = (unsigned __int8)v38[0] ^ 1;
  }
  return v12;
}
