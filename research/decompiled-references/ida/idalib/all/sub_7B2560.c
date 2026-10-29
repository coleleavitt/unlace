__int64 __fastcall sub_7B2560(
        __int64 a1,
        __int8 *a2,
        unsigned __int64 *a3,
        const char *a4,
        size_t a5,
        int a6,
        void (__fastcall *a7)(__int8 *, __int64))
{
  unsigned __int64 v10; // rdx
  char *v11; // rbx
  unsigned __int16 *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  bool v17; // zf
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int16 *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  char v24; // bp
  unsigned int v25; // ebp
  char v26; // bl
  char v27; // al
  size_t v28; // [rsp+8h] [rbp-490h] BYREF
  void *ptr; // [rsp+10h] [rbp-488h] BYREF
  __int128 v30; // [rsp+18h] [rbp-480h]
  _BYTE v31[10]; // [rsp+37h] [rbp-461h] BYREF
  unsigned __int16 v32; // [rsp+41h] [rbp-457h] BYREF
  char v33; // [rsp+43h] [rbp-455h]
  char v34[524]; // [rsp+44h] [rbp-454h] BYREF
  int v35; // [rsp+250h] [rbp-248h] BYREF
  __int64 v36; // [rsp+254h] [rbp-244h]
  char v37; // [rsp+25Ch] [rbp-23Ch]
  unsigned __int64 v38; // [rsp+458h] [rbp-40h]

  v28 = a5;
  v38 = __readfsqword(0x28u);
  if ( a4 )
  {
    v10 = v28;
    v11 = (char *)a4;
    if ( v28 )
    {
      if ( !*a4 )
        return 0;
      if ( v28 <= 0x1FF )
        goto LABEL_9;
    }
    else
    {
      v28 = strlen(a4);
      v10 = v28;
      if ( v28 <= 0x1FF )
        goto LABEL_4;
    }
    v11 = (char *)sub_7B0540(a1, (__int64)v31, v11, &v28, a6);
    if ( !v11 )
      return 0;
    v10 = v28;
LABEL_4:
    if ( !v10 )
    {
LABEL_5:
      if ( !(_BYTE)a6 )
        return 0;
      goto LABEL_17;
    }
LABEL_9:
    v31[9] = 0;
    v33 = 78;
    v32 = v10 + 1;
    __memcpy_chk(v34, v11, v10, 515);
    v13 = (unsigned __int16 *)sub_7443D0(a1, &v32);
    if ( v13 )
    {
      v14 = (__int64)v13 + *v13 + 2;
      if ( (*(_BYTE *)(a1 + 6016) & 2) != 0 )
        v15 = *(unsigned int *)(v14 + 2);
      else
        v15 = *(_QWORD *)(v14 + 2);
      *a3 = v15;
      return a6 ^ 1u;
    }
    goto LABEL_5;
  }
  if ( !(_BYTE)a6 )
    return 0;
  v11 = (char *)&byte_22F0C30;
  if ( v28 )
    return 0;
LABEL_17:
  v16 = sub_7B2430(a1, a2, a7);
  v17 = v28 == 0;
  *a3 = v16;
  if ( !v17 )
  {
    v35 = 771754496;
    v18 = v16;
    v19 = swap64(v16);
    v37 = 78;
    v17 = *(_BYTE *)(a1 + 6020) == 0;
    v36 = v19;
    if ( !v17 && (unsigned __int8)must_journal(v18, a2, v20) )
    {
      v30 = 0;
      ptr = nullptr;
      v27 = sub_73D2C0(a1, &v32, 8, a3, (__int64)&ptr);
      v21 = (unsigned __int16 *)ptr;
      v24 = v27;
      add_undo_record(1, ptr, v30);
      v22 = (__int64)ptr;
      if ( ptr )
      {
        *(_QWORD *)&v30 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v21 = &v32;
      v22 = a1;
      v24 = sub_73D2C0(a1, &v32, 8, a3, 0);
    }
    if ( !v24 )
      goto LABEL_28;
    v25 = (unsigned __int16)v28;
    if ( *(_BYTE *)(a1 + 6020) && (unsigned __int8)must_journal(v22, v21, v23) )
    {
      v30 = 0;
      ptr = nullptr;
      v26 = sub_73D2C0(a1, (unsigned __int16 *)((char *)&v35 + 1), v25, v11, (__int64)&ptr);
      add_undo_record(1, ptr, v30);
      if ( ptr )
      {
        *(_QWORD *)&v30 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v26 = sub_73D2C0(a1, (unsigned __int16 *)((char *)&v35 + 1), v25, v11, 0);
    }
    if ( !v26 )
LABEL_28:
      sub_743130();
  }
  return 1;
}
