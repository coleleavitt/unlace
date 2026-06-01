unsigned __int64 __fastcall sub_425CA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  size_t v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  char *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-70h]
  unsigned __int64 v12; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v14; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  unsigned __int64 v16[8]; // [rsp+38h] [rbp-40h] BYREF

  v16[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 160) == -1 || !(unsigned __int8)must_journal(a1, a2, a3) )
    return v16[0] - __readfsqword(0x28u);
  v14 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v14) = 12;
  *(_QWORD *)&v14 = v14 + 1;
  v5 = pack_dq(src, v16, a2) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v14;
    v8 = v14 + v5;
    if ( __CFADD__((_QWORD)v14, v5) )
    {
      if ( (unsigned __int64)v14 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v14 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v14 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_11;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v9 = (char *)ptr;
    v10 = v14;
    if ( *((_QWORD *)&v14 + 1) < v8 )
    {
      v12 = v8;
      ptr = (void *)qvector_reserve(&ptr, ptr, v8, 1);
      v9 = (char *)ptr;
      v8 = v12;
      v10 = v14;
    }
    v11 = v8;
    memset(&v9[v10], 0, v8 - v10);
    *(_QWORD *)&v14 = v11;
LABEL_11:
    memcpy((char *)ptr + v7, src, v6);
  }
  sub_775220(&ptr, *(_QWORD *)(a1 + 48) + 176 * a2);
  add_undo_record(*(unsigned int *)(a1 + 160), ptr, v14);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  return v16[0] - __readfsqword(0x28u);
}
