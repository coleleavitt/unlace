void *__fastcall sub_50E3D0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v8; // rax
  size_t v9; // rbx
  __int64 v10; // r15
  unsigned __int64 v11; // r8
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // rbx
  __int64 v16; // r15
  unsigned __int64 v17; // r8
  char *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v22; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v24[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v25[8]; // [rsp+38h] [rbp-40h] BYREF

  v25[0] = __readfsqword(0x28u);
  if ( (int)a3 <= 0 )
    return (void *)(v25[0] - __readfsqword(0x28u));
  v3 = *(_QWORD *)(a1 + 1760);
  v4 = a3;
  v5 = (int)a3;
  if ( (unsigned __int64)(int)a3 >= *(_QWORD *)(v3 + 152) )
    return (void *)(v25[0] - __readfsqword(0x28u));
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v22 = 0;
    ptr = nullptr;
    v8 = pack_dd(src, v24, v4) - (_QWORD)src;
    v9 = v8;
    if ( !v8 )
      goto LABEL_12;
    v10 = v22;
    v11 = v22 + v8;
    if ( __CFADD__((_QWORD)v22, v8) )
    {
      if ( (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_11;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = (char *)ptr;
    v13 = v22;
    if ( *((_QWORD *)&v22 + 1) < v11 )
    {
      v20 = v11;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v12 = (char *)ptr;
      v11 = v20;
      v13 = v22;
    }
    v20 = v11;
    memset(&v12[v13], 0, v11 - v13);
    *(_QWORD *)&v22 = v20;
LABEL_11:
    memcpy((char *)ptr + v10, src, v9);
LABEL_12:
    v14 = pack_dq(src, v25, a2) - (_QWORD)src;
    v15 = v14;
    if ( !v14 )
      goto LABEL_18;
    v16 = v22;
    v17 = v22 + v14;
    if ( __CFADD__((_QWORD)v22, v14) )
    {
      if ( (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_17;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v18 = (char *)ptr;
    v19 = v22;
    if ( *((_QWORD *)&v22 + 1) < v17 )
    {
      v20 = v17;
      ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
      v18 = (char *)ptr;
      v17 = v20;
      v19 = v22;
    }
    v20 = v17;
    memset(&v18[v19], 0, v17 - v19);
    *(_QWORD *)&v22 = v20;
LABEL_17:
    memcpy((char *)ptr + v16, src, v15);
LABEL_18:
    add_undo_record(127, ptr, v22);
    if ( ptr )
    {
      *(_QWORD *)&v22 = 0;
      qfree(ptr);
    }
  }
  return sub_50D070((__int64 *)(*(_QWORD *)(v3 + 144) + 56 * v5 + 24), a2);
}
