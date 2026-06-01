__int64 __fastcall sub_7B4100(__int64 a1, __int64 a2, __int64 a3, const char *a4, size_t a5, __int16 a6)
{
  __int64 *v6; // r13
  size_t v9; // rbp
  __int16 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  __int64 v15; // r12
  unsigned int v16; // ebx
  __int64 v18; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v6 = (__int64 *)a4;
  if ( !a4 )
    return 0;
  v9 = a5;
  v10 = a6;
  if ( (a6 & 0x200) != 0 )
  {
    v10 = a6 & 0xFDFF;
    if ( !unk_2CD46C8 )
      goto LABEL_9;
    v6 = &v18;
    v18 = unk_2CD46C8(*(_QWORD *)a4) + 1;
  }
  else
  {
    if ( !a5 )
      v9 = strlen(a4) + 1;
    if ( v9 > 0x400 )
      LOWORD(v9) = 1024;
  }
  if ( (v10 & 0x100) != 0 && unk_2CD46C8 )
    a3 = unk_2CD46C8(a3);
LABEL_9:
  v11 = a2;
  *(_WORD *)(a1 + 53) = 10;
  v12 = swap64(a2);
  *(_BYTE *)(a1 + 64) = v10;
  *(_QWORD *)(a1 + 56) = v12;
  v14 = *(_WORD *)(a1 + 53);
  if ( (v10 & 0x800) != 0 )
  {
    if ( v14 != 0xFFFF )
    {
      *(_BYTE *)(a1 + 65) = a3;
      *(_WORD *)(a1 + 53) = v14 + 1;
      goto LABEL_12;
    }
LABEL_28:
    abort();
  }
  if ( v14 + 8 > 0xFFFF )
    goto LABEL_28;
  v11 = a3;
  *(_WORD *)(a1 + 53) = v14 + 8;
  *(_QWORD *)(a1 + 65) = swap64(a3);
LABEL_12:
  v15 = *(_QWORD *)a1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) && (unsigned __int8)must_journal(v11, a2, v13) )
  {
    v20 = 0;
    ptr = nullptr;
    v16 = sub_73D2C0(v15, (unsigned __int16 *)(a1 + 53), (unsigned __int16)v9, v6, (__int64)&ptr);
    add_undo_record(1, ptr, v20);
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v16 = sub_73D2C0(v15, (unsigned __int16 *)(a1 + 53), (unsigned __int16)v9, v6, 0);
  }
  if ( !(_BYTE)v16 )
    sub_743130();
  return v16;
}
