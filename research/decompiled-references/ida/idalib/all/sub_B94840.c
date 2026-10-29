char __fastcall sub_B94840(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  unsigned __int8 v7; // bl
  __int64 v8; // rax
  char v9; // cl
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // al
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int8 v30; // dl
  __int64 v31; // rdi
  __int64 v32; // rax
  char v33; // al
  _QWORD *v34; // rax
  __int64 v35; // rax

  while ( 1 )
  {
    v4 = a3;
    v5 = a1;
    v6 = a2;
    v7 = a4;
    LOBYTE(v8) = *(_BYTE *)(a1 + 8);
    v9 = v8 & 0x7F;
    if ( ((unsigned __int8)v8 & 0x7Fu) > 0x12 )
      break;
    LOBYTE(v8) = v8 & 0x7D;
    if ( ((1LL << v9) & 0x40182) != 0 )
    {
      if ( (_BYTE)v8 != 4 )
        return v8;
    }
    else if ( (_BYTE)v8 != 4 )
    {
      goto LABEL_8;
    }
    v10 = sub_B72690(a1);
    v15 = sub_B91570(v10, a2, v11, v12, v13, v14);
    a4 = v7;
    a3 = v4;
    a1 = v15;
  }
  if ( ((v9 + 94) & 0x7Fu) <= 5 )
    return v8;
LABEL_8:
  LOBYTE(v8) = sub_B87DC0(a2);
  if ( !(_BYTE)v8 )
  {
    if ( !*(_QWORD *)a1 && (*(_BYTE *)(a1 + 9) & 1) == 0 )
    {
      if ( v7 )
      {
        v32 = *(_QWORD *)(a2 + 16);
        if ( (v32 & 4) == 0 || (v34 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL), a2 = v34[1], *v34 == a2) )
        {
          v33 = *(_BYTE *)(a1 + 8);
          *(_BYTE *)(a1 + 9) |= 4u;
          v23 = v33 & 0x7F;
LABEL_11:
          if ( v23 == 62 )
          {
            if ( *(char *)(a1 + 12) < 0 )
              goto LABEL_15;
          }
          else if ( (v23 & 0x7D) != 4 && v23 != 25 && (v23 != 24 || (*(_BYTE *)(a1 + 9) & 0x20) == 0) )
          {
LABEL_15:
            v8 = sub_B8C1B0(a1);
            v30 = *(_BYTE *)(v8 + 28) & 0x7F;
            if ( (unsigned int)v30 - 58 > 4 || (*(_BYTE *)(v8 + 74) & 2) == 0 )
            {
              if ( v30 )
                v8 = sub_B8C2C0(v8);
              v8 = *(_QWORD *)(v8 + 88);
              v31 = *(_QWORD *)(v8 + 18368);
              if ( v31 )
              {
                v8 = *(_QWORD *)(*(_QWORD *)v31 + 24LL);
                if ( (void (*)())v8 != nullsub_431 )
                  LOBYTE(v8) = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))v8)(v31, v5, v6);
              }
            }
            return v8;
          }
          v24 = sub_B72690(a1);
          v29 = sub_B91570(v24, a2, v25, v26, v27, v28);
          sub_B94840(v29, v6, v4, v7);
          goto LABEL_15;
        }
      }
      v35 = sub_B8C1B0(a1);
      if ( (*(_BYTE *)(v35 + 28) & 0x7F) != 0 )
        v35 = sub_B8C2C0(v35);
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v35 + 88) + 2320LL) + 1LL) & 8) == 0 && (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
      {
        *(_BYTE *)(a1 + 9) |= 4u;
        goto LABEL_15;
      }
    }
    sub_B941C0(a1, a2, v16, v17, v18, v19);
    a2 = v6;
    sub_B93950(a1, v6, v4, v20, v21, v22);
    v23 = *(_BYTE *)(a1 + 8) & 0x7F;
    goto LABEL_11;
  }
  return v8;
}
