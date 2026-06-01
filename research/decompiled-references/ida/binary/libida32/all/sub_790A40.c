__int64 __fastcall sub_790A40(
        _BYTE *a1,
        __int8 *a2,
        _QWORD *a3,
        const char *a4,
        size_t a5,
        int a6,
        void (__fastcall *a7)(__int8 *, _QWORD))
{
  __int64 v8; // r12
  unsigned __int64 v10; // rdx
  char *v11; // rbx
  unsigned __int16 *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  bool v16; // zf
  unsigned __int16 *v17; // rsi
  __int64 v18; // rdx
  char v19; // bp
  unsigned int v20; // ebp
  char v21; // bl
  char v22; // al
  size_t v23; // [rsp+8h] [rbp-480h] BYREF
  void *ptr; // [rsp+10h] [rbp-478h] BYREF
  __int128 v25; // [rsp+18h] [rbp-470h]
  _BYTE v26[6]; // [rsp+2Bh] [rbp-45Dh] BYREF
  unsigned __int16 v27; // [rsp+31h] [rbp-457h] BYREF
  char v28; // [rsp+33h] [rbp-455h]
  _DWORD v29[2]; // [rsp+240h] [rbp-248h] BYREF
  char v30; // [rsp+248h] [rbp-240h]
  unsigned __int64 v31; // [rsp+448h] [rbp-40h]

  v8 = (__int64)a1;
  v23 = a5;
  v31 = __readfsqword(0x28u);
  if ( a4 )
  {
    LOWORD(v10) = v23;
    v11 = (char *)a4;
    if ( v23 )
    {
      if ( !*a4 )
        return 0;
      if ( v23 <= 0x1FF )
        goto LABEL_9;
    }
    else
    {
      v23 = strlen(a4);
      v10 = v23;
      if ( v23 <= 0x1FF )
        goto LABEL_4;
    }
    v11 = (char *)sub_78F800((__int64)a1, (__int64)v26, v11, &v23, a6);
    if ( !v11 )
      return 0;
    v10 = v23;
LABEL_4:
    if ( !v10 )
    {
LABEL_5:
      if ( !(_BYTE)a6 )
        return 0;
      goto LABEL_15;
    }
LABEL_9:
    v26[5] = 0;
    v28 = 78;
    v27 = v10 + 1;
    __memcpy_chk();
    v13 = (unsigned __int16 *)sub_723E90((__int64)a1, &v27);
    if ( v13 )
    {
      *(_DWORD *)a3 = *(_DWORD *)((char *)v13 + *v13 + 4);
      return a6 ^ 1u;
    }
    goto LABEL_5;
  }
  if ( !(_BYTE)a6 )
    return 0;
  v11 = (char *)&byte_22CD811;
  if ( v23 )
    return 0;
LABEL_15:
  v14 = sub_790930((__int64)a1, a2, a7);
  v16 = v23 == 0;
  *(_DWORD *)a3 = v14;
  if ( !v16 )
  {
    v16 = a1[5988] == 0;
    v29[0] = 771753472;
    v29[1] = _byteswap_ulong(v14);
    v30 = 78;
    if ( !v16 && (unsigned __int8)must_journal(a1, a2, v15) )
    {
      v25 = 0;
      ptr = nullptr;
      v22 = sub_71CD80((__int64)a1, &v27, 4, a3, (__int64)&ptr);
      v17 = (unsigned __int16 *)ptr;
      v19 = v22;
      add_undo_record(1, ptr, v25);
      a1 = ptr;
      if ( ptr )
      {
        *(_QWORD *)&v25 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v17 = &v27;
      v19 = sub_71CD80((__int64)a1, &v27, 4, a3, 0);
    }
    if ( !v19 )
      goto LABEL_25;
    v20 = (unsigned __int16)v23;
    if ( *(_BYTE *)(v8 + 5988) && (unsigned __int8)must_journal(a1, v17, v18) )
    {
      v25 = 0;
      ptr = nullptr;
      v21 = sub_71CD80(v8, (unsigned __int16 *)((char *)v29 + 1), v20, v11, (__int64)&ptr);
      add_undo_record(1, ptr, v25);
      if ( ptr )
      {
        *(_QWORD *)&v25 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v21 = sub_71CD80(v8, (unsigned __int16 *)((char *)v29 + 1), v20, v11, 0);
    }
    if ( !v21 )
LABEL_25:
      sub_722BF0();
  }
  return 1;
}

