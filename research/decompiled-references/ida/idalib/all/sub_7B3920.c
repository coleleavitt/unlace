unsigned __int64 __fastcall sub_7B3920(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v5; // rsi
  unsigned __int16 *v7; // rax
  int v8; // edx
  unsigned __int16 *v9; // r13
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rdi
  _WORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  void *v18; // rsi
  __int64 v19; // rdx
  char v20; // al
  char v21; // al
  __int64 v22; // rdi
  __int64 v23; // r13
  void *v24; // rdi
  __int64 v25; // [rsp+8h] [rbp-80h]
  __int64 v26; // [rsp+18h] [rbp-70h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+3Fh] [rbp-49h] BYREF
  char v30; // [rsp+47h] [rbp-41h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v2 = *a2;
  if ( *a2 == -1 )
    return v31 - __readfsqword(0x28u);
  v26 = 0;
  v5 = v2;
  v7 = sub_7B3000((__int64)a1, v2, &v26, 1, 0);
  v8 = v26;
  v9 = v7;
  if ( v26 > 0 )
  {
    v10 = 0;
    if ( v26 == 9 && !*(_BYTE *)v7 )
    {
      v22 = *a1;
      v10 = 1;
      v29 = *(_QWORD *)v7;
      v9 = (unsigned __int16 *)&v29;
      v30 = *((_BYTE *)v7 + 8);
      sub_7B1DD0(v22, (__int64)v7);
      v8 = v26;
    }
    *(_WORD *)((char *)a1 + 1091) = v8 + 1;
    memcpy((char *)a1 + 1094, v9, v8);
    v12 = *a1;
    if ( *(_BYTE *)(*a1 + 6020) && (v25 = *a1, v20 = must_journal(v12, v9, v11), v12 = v25, v20) )
    {
      v13 = (_WORD *)((char *)a1 + 1091);
      ptr = nullptr;
      v5 = (__int64)a1 + 1091;
      v28 = 0;
      v21 = sub_73A6B0(v25, (__int64 *)((char *)a1 + 1091), (__int64)&ptr);
      v12 = (__int64)ptr;
      if ( v21 )
      {
        v5 = (__int64)ptr;
        add_undo_record(1, ptr, v28);
        v24 = ptr;
        if ( !ptr )
          goto LABEL_9;
        goto LABEL_31;
      }
      if ( ptr )
      {
        *(_QWORD *)&v28 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v13 = (_WORD *)((char *)a1 + 1091);
      v5 = (__int64)a1 + 1091;
      v10 |= sub_73A6B0(v12, (__int64 *)((char *)a1 + 1091), 0);
    }
    if ( (_BYTE)v10 || *((_BYTE *)v9 + v26 - 1) )
      goto LABEL_9;
    v23 = *a1;
    --*(_WORD *)((char *)a1 + 1091);
    if ( !*(_BYTE *)(v23 + 6020) || !(unsigned __int8)must_journal(v12, v5, v14) )
    {
      v5 = (__int64)v13;
      sub_73A6B0(v23, v13, 0);
      goto LABEL_9;
    }
    v5 = (__int64)v13;
    ptr = nullptr;
    v28 = 0;
    if ( (unsigned __int8)sub_73A6B0(v23, v13, (__int64)&ptr) )
    {
      v5 = (__int64)ptr;
      add_undo_record(1, ptr, v28);
    }
    v24 = ptr;
    if ( !ptr )
      goto LABEL_9;
LABEL_31:
    *(_QWORD *)&v28 = 0;
    qfree(v24);
  }
LABEL_9:
  *(_WORD *)((char *)a1 + 53) = 9;
  v15 = swap64(v2);
  v17 = *a1;
  a1[7] = v15;
  if ( *(_BYTE *)(v17 + 6020) && (unsigned __int8)must_journal(v2, v5, v16) )
  {
    v18 = (char *)a1 + 53;
    *(_QWORD *)(v17 + 56) = get_undo_param(1u);
    ptr = nullptr;
    v28 = 0;
    if ( (unsigned int)sub_73ED50(v17, (unsigned __int16 *)((char *)a1 + 53), (__int64)&ptr) )
    {
      v18 = ptr;
      if ( (_QWORD)v28 && *(_BYTE *)ptr == 5 )
        reset_undo(v17, ptr);
      else
        add_undo_record(1, ptr, v28);
    }
    if ( ptr )
    {
      *(_QWORD *)&v28 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v18 = (char *)a1 + 53;
    sub_73ED50(v17, (unsigned __int16 *)((char *)a1 + 53), 0);
  }
  if ( v2 == *(_QWORD *)(*a1 + 5904) )
    sub_7B1A40(*a1, (__int64)v18, v19);
  *a2 = -1;
  return v31 - __readfsqword(0x28u);
}
