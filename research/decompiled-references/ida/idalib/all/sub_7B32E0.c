__int64 __fastcall sub_7B32E0(__int64 a1, __int64 a2, char *a3, __int64 a4, char a5)
{
  char *v5; // rbp
  __int64 v7; // r12
  unsigned __int16 *v9; // rax
  __int64 v10; // r12
  void *v11; // rsi
  unsigned __int64 v12; // r14
  size_t v13; // rdx
  __int64 v14; // rdi
  char *v15; // rsi
  unsigned __int16 *v16; // r14
  __int64 v17; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned __int64 v22; // rdx
  char v23; // al
  unsigned int v24; // r12d
  char v25; // bl
  __int64 v26; // rax
  size_t v27; // rdx
  bool v28; // r14
  unsigned __int16 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r13
  size_t v32; // rdx
  __int64 v33; // r12
  char v34; // r12
  char v35; // al
  size_t v36; // [rsp+0h] [rbp-298h] BYREF
  _QWORD v37[2]; // [rsp+8h] [rbp-290h] BYREF
  __int64 v38; // [rsp+18h] [rbp-280h] BYREF
  void *ptr; // [rsp+20h] [rbp-278h] BYREF
  __int128 v40; // [rsp+28h] [rbp-270h]
  _BYTE v41[9]; // [rsp+47h] [rbp-251h] BYREF
  _BYTE src[520]; // [rsp+50h] [rbp-248h] BYREF
  unsigned __int64 v43; // [rsp+258h] [rbp-40h]

  v37[0] = a2;
  v36 = a4;
  v43 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v5 = a3;
  if ( !a3 )
    v5 = (char *)&byte_22F0C30;
  v7 = a2;
  if ( a4 <= 0 )
  {
    v36 = strlen(v5);
    if ( v36 <= 0x1FF )
      goto LABEL_6;
  }
  else if ( (unsigned __int64)a4 <= 0x1FF )
  {
    goto LABEL_6;
  }
  v26 = sub_7B0540(*(_QWORD *)a1, (__int64)v41, v5, &v36, 1);
  v7 = v37[0];
  v5 = (char *)v26;
LABEL_6:
  src[0] = 0;
  v38 = -1;
  v9 = sub_7B3000(a1, v7, &v38, 0, 1);
  v10 = v38;
  v11 = v9;
  if ( !v9 )
    goto LABEL_14;
  if ( v38 <= 512 )
  {
    __memcpy_chk(src, v9, v38, 512);
LABEL_14:
    v12 = v36;
    if ( v10 < 0 )
    {
      if ( !v36 )
      {
LABEL_16:
        v19 = v37[0];
        goto LABEL_17;
      }
      goto LABEL_10;
    }
    v27 = v10;
    if ( v10 != v36 )
    {
LABEL_32:
      if ( !v12 )
        goto LABEL_33;
      goto LABEL_10;
    }
LABEL_48:
    v11 = v5;
    if ( !memcmp(src, v5, v27) )
    {
      if ( !a5 )
        return 1;
      v38 = 0;
      if ( !v12 )
        goto LABEL_16;
      v32 = (int)v12;
      v14 = a1 + 1094;
      v15 = v5;
      *(_WORD *)(a1 + 1091) = v12 + 1;
      v16 = (unsigned __int16 *)(a1 + 1091);
      memcpy((void *)(a1 + 1094), v5, v32);
      goto LABEL_52;
    }
    goto LABEL_32;
  }
  v12 = v36;
  v38 = 512;
  qmemcpy(src, v9, 0x200u);
  if ( v36 == 512 )
  {
    v27 = 512;
    v10 = 512;
    goto LABEL_48;
  }
  v10 = 512;
  if ( !v36 )
    goto LABEL_34;
LABEL_10:
  v13 = (int)v12;
  v14 = a1 + 1094;
  v15 = v5;
  *(_WORD *)(a1 + 1091) = v12 + 1;
  v16 = (unsigned __int16 *)(a1 + 1091);
  memcpy((void *)(a1 + 1094), v5, v13);
  if ( !a5 )
  {
    v14 = *(_QWORD *)a1;
    v15 = (char *)(a1 + 1091);
    if ( (unsigned __int64)sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 1091)) >= 2 )
      return 0;
  }
LABEL_52:
  v33 = *(_QWORD *)a1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) && (unsigned __int8)must_journal(v14, v15, v17) )
  {
    v40 = 0;
    ptr = nullptr;
    v35 = sub_73D2C0(v33, v16, 8, v37, (__int64)&ptr);
    v11 = ptr;
    v34 = v35;
    add_undo_record(1, ptr, v40);
    if ( ptr )
    {
      *(_QWORD *)&v40 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v11 = v16;
    v34 = sub_73D2C0(v33, v16, 8, v37, 0);
  }
  if ( !v34 )
    goto LABEL_65;
  v10 = v38;
LABEL_33:
  if ( v10 <= 0 )
    goto LABEL_16;
LABEL_34:
  v28 = v10 == 9 && src[0] == 0;
  if ( v28 )
  {
    sub_7B1DD0(*(_QWORD *)a1, (__int64)src);
    LODWORD(v10) = v38;
  }
  *(_WORD *)(a1 + 1091) = v10 + 1;
  memcpy((void *)(a1 + 1094), src, (int)v10);
  v11 = (void *)(a1 + 1091);
  v29 = (unsigned __int16 *)sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 1091));
  if ( !v29 )
  {
    if ( a5 )
      goto LABEL_16;
    if ( v28 )
      goto LABEL_16;
    if ( v41[v38 + 8] )
      goto LABEL_16;
    --*(_WORD *)(a1 + 1091);
    v11 = (void *)(a1 + 1091);
    v29 = (unsigned __int16 *)sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 1091));
    if ( !v29 )
      goto LABEL_16;
  }
  v30 = *v29;
  v19 = v37[0];
  if ( v37[0] == *(_QWORD *)((char *)v29 + v30 + 4) )
  {
    v31 = *(_QWORD *)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) && (unsigned __int8)must_journal(v37[0], v11, v30) )
    {
      v11 = (void *)(a1 + 1091);
      ptr = nullptr;
      v40 = 0;
      if ( (unsigned __int8)sub_73A6B0(v31, (_WORD *)(a1 + 1091), (__int64)&ptr) )
      {
        v11 = ptr;
        add_undo_record(1, ptr, v40);
      }
      if ( ptr )
      {
        *(_QWORD *)&v40 = 0;
        qfree(ptr);
      }
      goto LABEL_16;
    }
    v11 = (void *)(a1 + 1091);
    sub_73A6B0(v31, (_WORD *)(a1 + 1091), 0);
    v19 = v37[0];
  }
LABEL_17:
  *(_WORD *)(a1 + 53) = 10;
  v20 = swap64(v19);
  v21 = *(_QWORD *)a1;
  v22 = v36;
  *(_BYTE *)(a1 + 64) = 78;
  *(_QWORD *)(a1 + 56) = v20;
  v23 = *(_BYTE *)(v21 + 6020);
  if ( !v22 )
  {
    if ( v23 && (unsigned __int8)must_journal(v19, v11, 0) )
    {
      ptr = nullptr;
      v40 = 0;
      if ( (unsigned __int8)sub_73A6B0(v21, (_WORD *)(a1 + 53), (__int64)&ptr) )
        add_undo_record(1, ptr, v40);
      if ( ptr )
      {
        *(_QWORD *)&v40 = 0;
        qfree(ptr);
      }
    }
    else
    {
      sub_73A6B0(v21, (_WORD *)(a1 + 53), 0);
    }
    return 1;
  }
  v24 = (unsigned __int16)v22;
  if ( v23 && (unsigned __int8)must_journal(v19, v11, v22) )
  {
    v40 = 0;
    ptr = nullptr;
    v25 = sub_73D2C0(v21, (unsigned __int16 *)(a1 + 53), v24, v5, (__int64)&ptr);
    add_undo_record(1, ptr, v40);
    if ( ptr )
    {
      *(_QWORD *)&v40 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v25 = sub_73D2C0(v21, (unsigned __int16 *)(a1 + 53), v24, v5, 0);
  }
  if ( !v25 )
LABEL_65:
    sub_743130();
  return 1;
}
