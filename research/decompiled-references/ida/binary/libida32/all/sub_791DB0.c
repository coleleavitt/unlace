__int64 __fastcall sub_791DB0(const char *a1, __int64 a2, __int64 a3, const char *a4, size_t a5, __int16 a6)
{
  char *v6; // r14
  const char *v7; // rbx
  unsigned int v8; // r15d
  size_t v9; // rbp
  __int16 v10; // r12
  __int16 v11; // ax
  __int64 v12; // r12
  unsigned int v13; // ebx
  int v15; // [rsp+Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (_DWORD)a2 == -1 )
    return 0;
  v6 = (char *)a4;
  if ( !a4 )
    return 0;
  v7 = a1;
  v8 = a3;
  v9 = a5;
  v10 = a6;
  if ( (a6 & 0x200) == 0 )
  {
    if ( !a5 )
    {
      a1 = a4;
      v9 = strlen(a4) + 1;
    }
    if ( v9 > 0x400 )
      LOWORD(v9) = 1024;
    goto LABEL_6;
  }
  v10 = a6 & 0xFDFF;
  if ( unk_2CAA7A8 )
  {
    a1 = (const char *)*(unsigned int *)a4;
    v6 = (char *)&v15;
    v15 = unk_2CAA7A8(a1) + 1;
LABEL_6:
    if ( (v10 & 0x100) != 0 && unk_2CAA7A8 )
    {
      a1 = (const char *)v8;
      v8 = unk_2CAA7A8(v8);
    }
  }
  *((_BYTE *)v7 + 52) = v10;
  *((_DWORD *)v7 + 12) = _byteswap_ulong(a2);
  if ( (v10 & 0x800) != 0 )
  {
    *((_BYTE *)v7 + 53) = v8;
    v11 = 7;
  }
  else
  {
    *(_DWORD *)(v7 + 53) = _byteswap_ulong(v8);
    v11 = 10;
  }
  v12 = *(_QWORD *)v7;
  *(_WORD *)(v7 + 45) = v11;
  if ( *(_BYTE *)(v12 + 5988) && (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v17 = 0;
    ptr = nullptr;
    v13 = sub_71CD80(v12, (unsigned __int16 *)(v7 + 45), (unsigned __int16)v9, v6, (__int64)&ptr);
    add_undo_record(1, ptr, v17);
    if ( ptr )
    {
      *(_QWORD *)&v17 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v13 = sub_71CD80(v12, (unsigned __int16 *)(v7 + 45), (unsigned __int16)v9, v6, 0);
  }
  if ( !(_BYTE)v13 )
    sub_722BF0();
  return v13;
}

