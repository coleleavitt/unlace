bool __fastcall sub_1A69F70(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // r14
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64); // rax
  __int64 v33; // rax

  v3 = sub_183AA90(a2);
  v6 = *(unsigned int *)(a2 + 24);
  if ( !v3 )
  {
    if ( (_DWORD)v6 )
      return **(_QWORD **)(a2 + 16) == 0;
    return 0;
  }
  v7 = *(__int64 **)(a2 + 16);
  if ( !(_DWORD)v6 || !*v7 )
    return 0;
  v8 = &v7[v6];
  while ( 1 )
  {
    v9 = *v7;
    v10 = *(_BYTE *)(*v7 + 28) & 0x7F;
    if ( ((v10 + 52) & 0x7Fu) <= 1 || (unsigned int)v10 - 53 <= 1 )
    {
      v9 = sub_B72ED0(*v7);
      v10 = *(_BYTE *)(v9 + 28) & 0x7F;
    }
    v11 = *(unsigned __int8 *)(a1 + 36);
    if ( v10 == 71 )
    {
      v12 = *(_QWORD *)(v9 + 48);
      if ( (_BYTE)v11 != 1 && !v12 )
      {
        LODWORD(v4) = 71;
        goto LABEL_64;
      }
      if ( v12 )
        goto LABEL_12;
      goto LABEL_34;
    }
    v4 = v10;
    if ( (_BYTE)v11 )
      goto LABEL_32;
    if ( (unsigned int)v10 - 34 <= 5 )
    {
      v12 = v9;
LABEL_12:
      if ( (unsigned int)sub_B76070(v12, a2, v11, v4) < *(_DWORD *)(a1 + 32)
        || (unsigned int)sub_B770E0(v12, a2) > *(_DWORD *)(a1 + 32) )
      {
        goto LABEL_34;
      }
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 35 > 3 )
        return 1;
      v13 = *(_QWORD *)(a1 + 48);
      if ( v13 )
        goto LABEL_16;
      if ( sub_B979F0((_QWORD *)v12) )
        return 1;
      v13 = *(_QWORD *)(a1 + 48);
      if ( v13 )
      {
LABEL_16:
        v14 = *(_QWORD *)(v13 + 24);
        if ( !v14 || (*(_BYTE *)(v14 + 28) & 0x7Fu) - 35 > 3 )
          goto LABEL_49;
      }
      else
      {
        v28 = *(_QWORD *)(a1 + 40);
        if ( !v28 || (*(_BYTE *)(v28 + 8) & 0x7Fu) - 35 > 3 || (v14 = v28 - 72) == 0 )
        {
LABEL_49:
          v19 = 0;
          goto LABEL_50;
        }
      }
      v15 = *(_QWORD *)(sub_B8C1B0(v14 + 72) + 16);
      if ( (v15 & 4) != 0 )
        v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v16 )
        BUG();
      v17 = v16 - 64;
      v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 - 64) + 32LL);
      if ( v18 == sub_A01140 )
        v19 = sub_B70A60(v17);
      else
        v19 = v18(v17);
LABEL_50:
      v29 = *(_QWORD *)(sub_B8C1B0(v12 + 72) + 16);
      if ( (v29 & 4) != 0 )
        v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v30 )
        BUG();
      v31 = v30 - 64;
      v32 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v30 - 64) + 32LL);
      if ( v32 == sub_A01140 )
        v33 = sub_B70A60(v31);
      else
        v33 = v32(v31);
      if ( v19 )
      {
        if ( v19 == v33 )
          return 1;
        a2 = v33;
        if ( (unsigned __int8)sub_B70650(v19, v33) )
          return 1;
      }
      goto LABEL_34;
    }
    if ( (unsigned int)v10 - 26 > 0x1A )
      goto LABEL_64;
    v21 = *(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v21 )
      break;
LABEL_34:
    if ( v8 == ++v7 )
      return 0;
  }
  v22 = *(_QWORD *)v21;
  v23 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v24 = (unsigned int)(v23 - 42);
  if ( (unsigned __int8)(v23 - 42) <= 2u || (_BYTE)v23 == 34 )
    v22 = *(_QWORD *)(sub_F68450(v22, a2, v24, v4, v5) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v22 + 16) == 26
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
     && (v22 = sub_F63050(v22, a2, v24, v4)) != 0)
    && *(_DWORD *)(a1 + 32) == *(unsigned __int16 *)(v22 + 22) )
  {
    return 1;
  }
  v10 = *(_BYTE *)(v9 + 28) & 0x7F;
  LODWORD(v4) = v10;
  if ( *(_BYTE *)(a1 + 36) )
  {
LABEL_32:
    v4 = (unsigned int)(v4 - 68);
    if ( (unsigned int)v4 > 6 )
      goto LABEL_34;
    v25 = (v10 + 67) & 0x7F;
    if ( (unsigned __int8)v25 > 0xBu )
      goto LABEL_34;
    v26 = 2689;
    if ( !_bittest64(&v26, v25) )
      goto LABEL_34;
    goto LABEL_40;
  }
LABEL_64:
  v4 = (unsigned int)(v4 - 58);
  if ( (unsigned int)v4 > 9 )
    goto LABEL_34;
LABEL_40:
  v27 = sub_B8C1B0(*(_QWORD *)(a1 + 40));
  if ( (*(_BYTE *)(*(_QWORD *)(sub_B8C330(v27) + 2320) + 1LL) & 8) == 0 )
    goto LABEL_34;
  if ( *(_DWORD *)(a1 + 32) > 1u && !*(_BYTE *)(a1 + 36) )
    return (*(_BYTE *)(v9 + 28) & 0x7Fu) - 59 <= 2;
  return 1;
}
