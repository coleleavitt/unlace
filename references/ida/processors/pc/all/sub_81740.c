__int64 __fastcall sub_81740(__int64 a1, const char *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebp
  __int16 v4; // ax
  char v5; // bp
  char v6; // al
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int16 v13; // ax
  unsigned __int8 v14; // al
  __int64 (__fastcall *v15)(_QWORD *, char); // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(_QWORD *, char); // rax
  __int64 v21; // rbp
  __int64 v22; // r13
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(_QWORD *, char); // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 616) + 4453LL) & 2) == 0 )
  {
    if ( *(_WORD *)(a1 + 248) == 106 )
    {
LABEL_3:
      v2 = *(unsigned int *)(a1 + 252);
      LOBYTE(v3) = 0;
      goto LABEL_4;
    }
    sub_80FD0(a1);
  }
  v13 = *(_WORD *)(a1 + 248);
  if ( v13 <= 0x3Bu )
  {
    if ( v13 <= 0x34u )
      goto LABEL_3;
  }
  else if ( (unsigned __int16)(v13 - 61) > 0x19u )
  {
    goto LABEL_3;
  }
  v14 = sub_80BC0(a1);
  v2 = *(unsigned int *)(a1 + 252);
  if ( v14 > 0xEAu )
  {
    LOBYTE(v3) = 1;
    if ( v14 == 0xEB )
      goto LABEL_4;
    goto LABEL_45;
  }
  LOBYTE(v3) = 0;
  if ( v14 <= 0xE8u && v14 != 15 )
LABEL_45:
    v3 = ((unsigned int)v2 >> 12) & 1;
LABEL_4:
  if ( (v2 & 0x40000) != 0 )
  {
    a2 = "xacquire ";
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "xacquire ", 5);
    v2 = *(unsigned int *)(a1 + 252);
  }
  if ( (v2 & 0x80000) != 0 )
  {
    a2 = "xrelease ";
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "xrelease ", 5);
    v2 = *(unsigned int *)(a1 + 252);
  }
  if ( (v2 & 1) != 0 )
  {
    a2 = "lock ";
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "lock ", 5);
    v2 = *(unsigned int *)(a1 + 252);
  }
  if ( (v2 & 2) != 0 )
  {
    v4 = *(_WORD *)(a1 + 248);
    if ( v4 == 28 || (a2 = "rep ", v4 == 167) )
      a2 = "repe ";
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, 5);
    v2 = *(unsigned int *)(a1 + 252);
  }
  if ( (v2 & 4) != 0 )
  {
    a2 = "repne ";
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "repne ", 5);
    v2 = *(unsigned int *)(a1 + 252);
  }
  BYTE1(v2) &= 0x80u;
  if ( BYTE1(v2) )
  {
    a2 = "bnd ";
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "bnd ", 5);
  }
  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 296LL))(a1, a2, v2);
  if ( (_BYTE)v3 )
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "short ", 32);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( (*(_BYTE *)(a1 + 254) & 1) != 0 )
    sub_81540(a1);
  if ( v5 && (*(_BYTE *)(a1 + 308) & 8) != 0 && *(_BYTE *)(a1 + 305) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v25 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v25 == sub_7D640 )
    {
      v26 = *(_QWORD *)(a1 + 32);
      if ( v26 )
      {
        v27 = v26 + 1;
        v28 = *(_QWORD *)(a1 + 32);
        --v26;
      }
      else
      {
        v28 = 1;
        v27 = 2;
      }
      v29 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v27 )
      {
        v33 = qvector_reserve();
        *(_QWORD *)(a1 + 24) = v33;
        v29 = v33;
      }
      *(_QWORD *)(a1 + 32) = v27;
      *(_BYTE *)(v29 + v26) = 32;
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v28) = 0;
    }
    else
    {
      v25((_QWORD *)a1, 32);
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
  v6 = *(_BYTE *)(a1 + 345);
  if ( (*(_BYTE *)(a1 + 254) & 1) == 0 )
  {
    if ( v6 != 5 )
    {
      if ( !v6 )
        goto LABEL_27;
LABEL_48:
      if ( (*(_BYTE *)(a1 + 348) & 8) == 0 )
      {
LABEL_56:
        if ( (*(_BYTE *)(a1 + 254) & 1) == 0 )
          goto LABEL_27;
        v6 = *(_BYTE *)(a1 + 345);
        goto LABEL_58;
      }
LABEL_49:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v15 == sub_7D640 )
      {
        v16 = *(_QWORD *)(a1 + 32);
        if ( v16 )
        {
          v17 = v16 + 1;
          v18 = *(_QWORD *)(a1 + 32);
          --v16;
        }
        else
        {
          v18 = 1;
          v17 = 2;
        }
        v19 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v17 )
        {
          v30 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v30;
          v19 = v30;
        }
        *(_QWORD *)(a1 + 32) = v17;
        *(_BYTE *)(v19 + v16) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v18) = 0;
      }
      else
      {
        v15((_QWORD *)a1, 32);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
      goto LABEL_56;
    }
    goto LABEL_81;
  }
  if ( !v6 )
  {
    if ( (*(_BYTE *)(a1 + 497) & 8) == 0 )
      goto LABEL_27;
LABEL_82:
    sub_7D6C0((__int64 *)a1, a1 + 304);
    if ( !*(_BYTE *)(a1 + 345) )
      goto LABEL_27;
    goto LABEL_48;
  }
  if ( v6 == 5 )
  {
LABEL_81:
    if ( (*(_BYTE *)(a1 + 497) & 8) == 0 )
      goto LABEL_48;
    goto LABEL_82;
  }
  if ( (*(_BYTE *)(a1 + 348) & 8) != 0 )
    goto LABEL_49;
LABEL_58:
  if ( v6 && v6 != 5 && (*(_BYTE *)(a1 + 497) & 8) != 0 )
    sub_7D6C0((__int64 *)a1, a1 + 344);
LABEL_27:
  if ( *(_BYTE *)(a1 + 385) && (*(_BYTE *)(a1 + 388) & 8) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v7 == sub_7D640 )
    {
      v8 = *(_QWORD *)(a1 + 32);
      if ( v8 )
      {
        v10 = v8 + 1;
        v9 = *(_QWORD *)(a1 + 32);
        --v8;
      }
      else
      {
        v9 = 1;
        v10 = 2;
      }
      v11 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v10 )
      {
        v31 = qvector_reserve();
        *(_QWORD *)(a1 + 24) = v31;
        v11 = v31;
      }
      *(_QWORD *)(a1 + 32) = v10;
      *(_BYTE *)(v11 + v8) = 32;
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9) = 0;
    }
    else
    {
      v7((_QWORD *)a1, 32);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 3);
  }
  if ( *(_BYTE *)(a1 + 425) && (*(_BYTE *)(a1 + 428) & 8) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v20 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v20 == sub_7D640 )
    {
      v21 = *(_QWORD *)(a1 + 32);
      if ( v21 )
      {
        v23 = v21 + 1;
        v22 = *(_QWORD *)(a1 + 32);
        --v21;
      }
      else
      {
        v22 = 1;
        v23 = 2;
      }
      v24 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v23 )
      {
        v32 = qvector_reserve();
        *(_QWORD *)(a1 + 24) = v32;
        v24 = v32;
      }
      *(_QWORD *)(a1 + 32) = v23;
      *(_BYTE *)(v24 + v21) = 32;
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v22) = 0;
    }
    else
    {
      v20((_QWORD *)a1, 32);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 4);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  if ( (unsigned __int16)(*(_WORD *)(a1 + 248) - 17) <= 1u && netnode_altval() != -1 )
  {
    if ( get_func() )
      get_func_chunknum();
    if ( get_ea_name() > 0 )
    {
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, " ; ", 4);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, 0, 0);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}
