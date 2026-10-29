__int64 __fastcall sub_7B9500(__int64 a1, void *a2, __int64 a3, __int16 a4)
{
  char v6; // r15
  int v7; // r12d
  unsigned int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  __int64 v16; // [rsp+8h] [rbp-70h]
  int v17; // [rsp+14h] [rbp-64h]
  _WORD *v18; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v16 = (__int64)a2;
  v21 = __readfsqword(0x28u);
  if ( a2 == (void *)-1LL )
    return 0;
  v6 = a4;
  v7 = a4 & 0x800;
  v8 = 0;
  v17 = a4 & 0x100;
  v18 = (_WORD *)(a1 + 53);
  while ( 1 )
  {
    v10 = a3 + 1;
    if ( v17 && unk_2CD46C8 )
      a3 = unk_2CD46C8(a3);
    v11 = v16;
    *(_WORD *)(a1 + 53) = 10;
    v12 = swap64(v16);
    *(_BYTE *)(a1 + 64) = v6;
    *(_QWORD *)(a1 + 56) = v12;
    v14 = *(_WORD *)(a1 + 53);
    if ( v7 )
    {
      if ( v14 == 0xFFFF )
        goto LABEL_22;
      *(_BYTE *)(a1 + 65) = a3;
      *(_WORD *)(a1 + 53) = v14 + 1;
    }
    else
    {
      if ( v14 + 8 > 0xFFFF )
LABEL_22:
        abort();
      v11 = a3;
      *(_WORD *)(a1 + 53) = v14 + 8;
      *(_QWORD *)(a1 + 65) = swap64(a3);
    }
    v9 = *(_QWORD *)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) )
    {
      if ( (unsigned __int8)must_journal(v11, a2, v13) )
        break;
    }
    a2 = v18;
    if ( !(unsigned __int8)sub_73A6B0(v9, v18, 0) )
      return v8;
LABEL_8:
    ++v8;
    a3 = v10;
  }
  ptr = nullptr;
  v20 = 0;
  if ( (unsigned __int8)sub_73A6B0(v9, v18, (__int64)&ptr) )
  {
    a2 = ptr;
    add_undo_record(1, ptr, v20);
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      qfree(ptr);
    }
    goto LABEL_8;
  }
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  return v8;
}
