void __fastcall sub_185C730(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  char v21; // al
  char v22; // dl
  char v23; // al
  unsigned int v24; // ecx
  __int64 v25; // rax
  bool v26; // dl
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  bool v30; // [rsp+7h] [rbp-C1h] BYREF
  __int64 v31; // [rsp+8h] [rbp-C0h] BYREF
  _DWORD v32[46]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v6 & 4) != 0 )
    v9 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
  {
    v31 = 0;
    BUG();
  }
  v10 = *(__int64 **)(v9 + 40);
  v31 = v9 - 64;
  sub_7052B0(v10 + 12, (__int64)v10, v4, v5, v7, v8);
  if ( (**(_BYTE **)(v9 + 64) & 0x40) != 0 )
  {
    v17 = sub_B97300(v31);
    if ( v17 )
    {
LABEL_18:
      v21 = sub_B967A0(v17, (__int64)v10, v18, v19);
      v22 = *(_BYTE *)(v17 + 28) & 0x7F;
      v30 = (*(_BYTE *)(a2 + 28) & 0x7F) != 38;
      v23 = v21 ^ 1;
      if ( v22 == 36 )
      {
        v24 = 6829;
        if ( !v23 )
          goto LABEL_20;
      }
      v26 = v22 == 36;
      if ( v23 )
      {
        v24 = 6827;
        if ( v26 )
          goto LABEL_20;
      }
      else
      {
        v24 = 6828;
        if ( !v26 )
        {
LABEL_20:
          sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), *(_DWORD *)(v17 + 24), v24, 0);
          v25 = sub_185AB80((__int64)v32, &v31);
          sub_15890D0(v25, (unsigned __int8 *)&v30);
          sub_15F7200(v32);
          return;
        }
      }
      v24 = 6826;
      goto LABEL_20;
    }
  }
  else
  {
    v15 = v31;
    v10 = *(__int64 **)(v31 + 104);
    v16 = v10 + 12;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x26 )
    {
      sub_7052B0(v16, (__int64)v10, v11, v12, v13, v14);
      if ( (**(_BYTE **)(v31 + 128) & 4) != 0 )
      {
        v27 = sub_B8E970(v31 + 64);
        v17 = v27;
        if ( v27 )
        {
          if ( (*(_BYTE *)(v27 + 28) & 0x7F) == 0x26 )
          {
LABEL_28:
            v10 = (__int64 *)v32;
            v32[0] = 0;
            if ( sub_B98FE0(v17, v32, v18, v19) )
              goto LABEL_18;
            while ( 1 )
            {
              v29 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v17 = v29;
              if ( !v29 )
                break;
              if ( (*(_BYTE *)(v29 + 28) & 0x7F) == 0x26 )
                goto LABEL_28;
            }
          }
          else
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v17 = v28;
              if ( !v28 )
                break;
              if ( (*(_BYTE *)(v28 + 28) & 0x7F) == 0x26 )
                goto LABEL_28;
            }
          }
        }
        return;
      }
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x26 )
        return;
      v15 = v31;
      v10 = *(__int64 **)(v31 + 104);
      v16 = v10 + 12;
    }
    sub_7052B0(v16, (__int64)v10, v11, v12, v13, v14);
    if ( (**(_BYTE **)(v15 + 128) & 0x10) != 0 )
    {
      v17 = sub_183A900(v31);
      if ( v17 )
      {
LABEL_8:
        if ( sub_B98230((_QWORD *)v17, (__int64)v10) )
          goto LABEL_18;
        while ( 1 )
        {
          v20 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v17 = v20;
          if ( !v20 )
            break;
          if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 35 <= 3 )
            goto LABEL_8;
        }
      }
    }
  }
}
