__int64 __fastcall sub_7964B0(__int64 a1, void *a2, int a3, __int16 a4)
{
  int v5; // r15d
  char v6; // bp
  unsigned __int32 v7; // r12d
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned int v14; // [rsp+Ch] [rbp-6Ch]
  _WORD *v15; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (_DWORD)a2 == -1 )
    return 0;
  v5 = a4 & 0x800;
  v6 = a4;
  v7 = _byteswap_ulong((unsigned int)a2);
  v8 = 0;
  v14 = a4 & 0x100;
  v15 = (_WORD *)(a1 + 45);
  while ( 1 )
  {
    v10 = v14;
    v11 = v8 + a3;
    if ( v14 && unk_2CAA7A8 )
      LODWORD(v11) = unk_2CAA7A8(v11);
    *(_DWORD *)(a1 + 48) = v7;
    *(_BYTE *)(a1 + 52) = v6;
    if ( v5 )
      *(_BYTE *)(a1 + 53) = v11;
    else
      *(_DWORD *)(a1 + 53) = _byteswap_ulong(v11);
    v9 = *(_QWORD *)a1;
    *(_WORD *)(a1 + 45) = v5 == 0 ? 10 : 7;
    if ( *(_BYTE *)(v9 + 5988) )
    {
      if ( (unsigned __int8)must_journal(v9, a2, v10) )
        break;
    }
    a2 = v15;
    if ( !(unsigned __int8)sub_71A170(v9, v15, 0) )
      return v8;
LABEL_7:
    ++v8;
  }
  ptr = nullptr;
  v17 = 0;
  if ( (unsigned __int8)sub_71A170(v9, v15, (__int64)&ptr) )
  {
    a2 = ptr;
    add_undo_record(1, ptr, v17);
    if ( ptr )
    {
      *(_QWORD *)&v17 = 0;
      qfree(ptr);
    }
    goto LABEL_7;
  }
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  return v8;
}

