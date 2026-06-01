__int64 __fastcall sub_7B4CA0(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v5; // r13
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  __int64 v11; // rbp
  unsigned int v13; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v5 = a3;
  if ( (a4 & 0x100) != 0 && unk_2CD46C8 )
    v5 = unk_2CD46C8(a3);
  v7 = a2;
  *(_WORD *)(a1 + 53) = 10;
  v8 = swap64(a2);
  *(_BYTE *)(a1 + 64) = a4;
  *(_QWORD *)(a1 + 56) = v8;
  v10 = *(_WORD *)(a1 + 53);
  if ( (a4 & 0x800) == 0 )
  {
    if ( v10 + 8 <= 0xFFFF )
    {
      v7 = v5;
      *(_WORD *)(a1 + 53) = v10 + 8;
      *(_QWORD *)(a1 + 65) = swap64(v5);
      goto LABEL_8;
    }
LABEL_19:
    abort();
  }
  if ( v10 == 0xFFFF )
    goto LABEL_19;
  *(_BYTE *)(a1 + 65) = v5;
  *(_WORD *)(a1 + 53) = v10 + 1;
LABEL_8:
  v11 = *(_QWORD *)a1;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 6020LL) || !(unsigned __int8)must_journal(v7, a2, v9) )
    return sub_73A6B0(v11, (_WORD *)(a1 + 53), 0);
  ptr = nullptr;
  v15 = 0;
  v13 = sub_73A6B0(v11, (_WORD *)(a1 + 53), (__int64)&ptr);
  if ( (_BYTE)v13 )
    add_undo_record(1, ptr, v15);
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  return v13;
}
