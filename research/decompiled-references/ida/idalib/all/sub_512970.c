unsigned __int64 __fastcall sub_512970(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  size_t v10; // r13
  __int64 v11; // r14
  unsigned __int64 v12; // r8
  char *v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-70h]
  unsigned __int64 v16; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v18; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v20[8]; // [rsp+38h] [rbp-40h] BYREF

  v20[0] = __readfsqword(0x28u);
  if ( (int)a2 <= 0 )
    return v20[0] - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1760);
  v4 = a2;
  v5 = (int)a2;
  if ( (unsigned __int64)(int)a2 >= *(_QWORD *)(v3 + 152) )
    return v20[0] - __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v18 = 0;
    ptr = nullptr;
    v9 = pack_dd(src, v20, (unsigned int)a2) - (_QWORD)src;
    v10 = v9;
    if ( !v9 )
      goto LABEL_13;
    v11 = v18;
    v12 = v18 + v9;
    if ( __CFADD__((_QWORD)v18, v9) )
    {
      if ( (unsigned __int64)v18 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v18 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v18 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_12;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = (char *)ptr;
    v14 = v18;
    if ( *((_QWORD *)&v18 + 1) < v12 )
    {
      v16 = v12;
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v13 = (char *)ptr;
      v12 = v16;
      v14 = v18;
    }
    v15 = v12;
    memset(&v13[v14], 0, v12 - v14);
    *(_QWORD *)&v18 = v15;
LABEL_12:
    memcpy((char *)ptr + v11, src, v10);
LABEL_13:
    add_undo_record(130, ptr, v18);
    if ( ptr )
    {
      *(_QWORD *)&v18 = 0;
      qfree(ptr);
    }
  }
  v7 = *(_QWORD *)(v3 + 144) + 56 * v5;
  v8 = *(_DWORD *)(v7 + 48);
  if ( v8 <= 0 )
  {
    if ( !under_debugger )
      interr(1249);
    BUG();
  }
  *(_DWORD *)(v7 + 48) = v8 - 1;
  return sub_512070(v3, v4);
}
