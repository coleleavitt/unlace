int __fastcall sub_17B93F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  size_t v19; // r12
  __int64 v20; // rdx
  size_t v21; // r14
  __int16 v22; // r12
  __int16 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int16 v26; // dx
  __int64 v27; // rax
  __int64 v29; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v30[184]; // [rsp+10h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)(a2 + 48);
  v29 = a2;
  v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 25 > 1 )
    v8 = sub_F63050(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v9 = *(_QWORD *)(v8 + 24);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_BYTE *)(v10 + 16);
  switch ( v11 )
  {
    case 13:
      if ( (((*(_WORD *)(v10 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      {
LABEL_5:
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v12 + 16) & 0xF7) != 0x22
          && (*(_BYTE *)(v12 + 16) != 13 || ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) != 0x1E8) )
        {
          goto LABEL_11;
        }
      }
      break;
    case 47:
      v18 = sub_F60F10(v10, a2, v9, a4, a5, a6);
      if ( (*((_BYTE *)v18 + 74) & 1) == 0 && (v18[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v9 = *(_QWORD *)(v8 + 24);
        goto LABEL_5;
      }
      break;
    case 10:
      break;
    default:
      goto LABEL_5;
  }
  v13 = *(_QWORD *)(v29 + 40);
  if ( (v13 & 7) != 0
    || (v14 = v13 & 0xFFFFFFFFFFFFFFF8LL) == 0
    || (v15 = *(_QWORD *)(v14 + 16), *(_DWORD *)v15 != 7)
    || *(_DWORD *)(v15 + 16) != 1298951236
    || *(_WORD *)(v15 + 20) != 26977
    || *(_BYTE *)(v15 + 22) != 110 )
  {
    *(_BYTE *)(v29 + 83) |= 0x20u;
  }
LABEL_11:
  LODWORD(v16) = sub_1E5F370(a1, v7);
  if ( !(_BYTE)v16 )
  {
    v19 = j__strlen("main");
    v16 = sub_995750(v29);
    if ( v19 != v20 || v19 && (LODWORD(v16) = memcmp(v16, "main", v19), (_DWORD)v16) )
    {
      v21 = j__strlen("wmain");
      v16 = sub_995750(v29);
      v22 = *(_WORD *)(v8 + 20) >> 2;
      v23 = v22 & 0x3F;
      if ( v21 != v24 || v21 && (LODWORD(v16) = memcmp(v16, "wmain", v21), (_DWORD)v16) )
      {
        v25 = *(_QWORD *)(a1 + 248);
        v16 = *(_DWORD **)(v25 + 17448);
        if ( v16[65] == 15 && v16[66] != 1 && v16[62] == 37 )
        {
          if ( v23 == 1 )
            goto LABEL_12;
          v26 = v22 & 0x3FC0 | 1;
          goto LABEL_31;
        }
      }
    }
    else
    {
      v22 = *(_WORD *)(v8 + 20) >> 2;
      v23 = v22 & 0x3F;
    }
    if ( !v23 )
      goto LABEL_12;
    v25 = *(_QWORD *)(a1 + 248);
    v26 = v22 & 0x3FC0;
LABEL_31:
    v27 = sub_A74120(v25, v8, v26);
    v17 = v29;
    v16 = (_DWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
    *(_QWORD *)(v29 + 48) = v16;
    goto LABEL_13;
  }
LABEL_12:
  v17 = v29;
LABEL_13:
  if ( *(char *)(v17 + 28) >= 0 )
  {
    v16 = (_DWORD *)sub_B77A30(v17);
    if ( v16 )
    {
      sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), *(_DWORD *)(v29 + 24), 0x1021u, 0);
      sub_1795A40((__int64)v30, &v29);
      sub_15F7200(v30);
      LODWORD(v16) = sub_B88650(v29, 1);
    }
  }
  return (int)v16;
}
