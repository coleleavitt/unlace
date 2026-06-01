unsigned __int64 __fastcall sub_7916C0(__int64 *a1, unsigned int *a2)
{
  unsigned int v2; // r12d
  void *v5; // rsi
  __int64 *v6; // rbx
  unsigned __int16 *v7; // rax
  int v8; // edx
  unsigned __int16 *v9; // r13
  int v10; // r14d
  __int64 v11; // rdx
  _WORD *v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  void *v15; // rsi
  __int64 v16; // rdx
  char v17; // al
  char v18; // al
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+18h] [rbp-70h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v24; // [rsp+28h] [rbp-60h]
  int v25; // [rsp+43h] [rbp-45h] BYREF
  char v26; // [rsp+47h] [rbp-41h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v2 = *a2;
  if ( *a2 == -1 )
    return v27 - __readfsqword(0x28u);
  v22 = 0;
  v5 = (void *)v2;
  v6 = a1;
  v7 = sub_790DB0((__int64)a1, v2, &v22, 1);
  v8 = v22;
  v9 = v7;
  if ( v22 > 0 )
  {
    v10 = 0;
    if ( v22 == 5 && !*(_BYTE *)v7 )
    {
      v19 = *a1;
      v10 = 1;
      v25 = *(_DWORD *)v7;
      v9 = (unsigned __int16 *)&v25;
      v26 = *((_BYTE *)v7 + 4);
      sub_7902D0(v19, (__int64)v7);
      v8 = v22;
    }
    *(_WORD *)((char *)v6 + 1083) = v8 + 1;
    memcpy((char *)v6 + 1086, v9, v8);
    a1 = (__int64 *)*v6;
    if ( *(_BYTE *)(*v6 + 5988) && (v21 = *v6, v17 = must_journal(a1, v9, v11), a1 = (__int64 *)v21, v17) )
    {
      v12 = (_WORD *)((char *)v6 + 1083);
      ptr = nullptr;
      v5 = (char *)v6 + 1083;
      v24 = 0;
      v18 = sub_71A170(v21, (__int64 *)((char *)v6 + 1083), (__int64)&ptr);
      a1 = (__int64 *)ptr;
      if ( v18 )
      {
        v5 = ptr;
        add_undo_record(1, ptr, v24);
        a1 = (__int64 *)ptr;
        if ( !ptr )
          goto LABEL_9;
        goto LABEL_31;
      }
      if ( ptr )
      {
        *(_QWORD *)&v24 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v12 = (_WORD *)((char *)v6 + 1083);
      v5 = (char *)v6 + 1083;
      v10 |= sub_71A170((__int64)a1, (__int64 *)((char *)v6 + 1083), 0);
    }
    if ( (_BYTE)v10 || *((_BYTE *)v9 + v22 - 1) )
      goto LABEL_9;
    v20 = *v6;
    --*(_WORD *)((char *)v6 + 1083);
    if ( !*(_BYTE *)(v20 + 5988) || !(unsigned __int8)must_journal(a1, v5, v13) )
    {
      v5 = v12;
      a1 = (__int64 *)v20;
      sub_71A170(v20, v12, 0);
      goto LABEL_9;
    }
    v5 = v12;
    ptr = nullptr;
    v24 = 0;
    if ( (unsigned __int8)sub_71A170(v20, v12, (__int64)&ptr) )
    {
      v5 = ptr;
      add_undo_record(1, ptr, v24);
    }
    a1 = (__int64 *)ptr;
    if ( !ptr )
      goto LABEL_9;
LABEL_31:
    *(_QWORD *)&v24 = 0;
    qfree(a1);
  }
LABEL_9:
  v14 = *v6;
  *(_WORD *)((char *)v6 + 45) = 5;
  *((_DWORD *)v6 + 12) = _byteswap_ulong(v2);
  if ( *(_BYTE *)(v14 + 5988) && (unsigned __int8)must_journal(a1, v5, 5) )
  {
    v15 = (char *)v6 + 45;
    *(_QWORD *)(v14 + 56) = get_undo_param(1);
    ptr = nullptr;
    v24 = 0;
    if ( (unsigned int)sub_71E810(v14, (unsigned __int16 *)((char *)v6 + 45), (__int64)&ptr) )
    {
      v15 = ptr;
      if ( (_QWORD)v24 && *(_BYTE *)ptr == 5 )
        reset_undo(v14, ptr);
      else
        add_undo_record(1, ptr, v24);
    }
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v15 = (char *)v6 + 45;
    sub_71E810(v14, (unsigned __int16 *)((char *)v6 + 45), 0);
  }
  if ( *(_DWORD *)(*v6 + 5880) == v2 )
    sub_78FF60(*v6, (__int64)v15, v16);
  *a2 = -1;
  return v27 - __readfsqword(0x28u);
}

