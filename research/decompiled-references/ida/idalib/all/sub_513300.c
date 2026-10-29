__int64 __fastcall sub_513300(__int64 a1, unsigned __int64 a2, const char *a3)
{
  const char *v5; // rdi
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v13; // rax
  size_t v14; // r15
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  size_t v20; // r15
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  char *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v28; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v30[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v31[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = *(const char **)(a1 + 1760);
  v31[0] = __readfsqword(0x28u);
  v7 = sub_512CF0(v5, a3);
  v9 = v7;
  if ( v7 > 0 )
  {
    v10 = *(_QWORD *)(a1 + 1760);
    v11 = (unsigned int)v7;
    if ( (unsigned __int64)(unsigned int)v7 < *(_QWORD *)(v10 + 152) )
    {
      if ( !(unsigned __int8)must_journal(v5, a3, v8) )
      {
LABEL_5:
        sub_50D070((__int64 *)(*(_QWORD *)(v10 + 144) + 56 * v11 + 24), a2);
        return v9;
      }
      v28 = 0;
      ptr = nullptr;
      v13 = pack_dd(src, v30, v9) - (_QWORD)src;
      v14 = v13;
      if ( !v13 )
      {
LABEL_12:
        v19 = pack_dq(src, v31, a2) - (_QWORD)src;
        v20 = v19;
        if ( !v19 )
          goto LABEL_18;
        v21 = v28;
        v22 = v28 + v19;
        if ( __CFADD__((_QWORD)v28, v19) )
        {
          if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_17;
          }
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v23 = (char *)ptr;
        v24 = v28;
        if ( *((_QWORD *)&v28 + 1) < v22 )
        {
          v25 = v22;
          v26 = v28;
          ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
          v23 = (char *)ptr;
          v21 = v26;
          v24 = v28;
          v22 = v25;
        }
        v26 = v21;
        v25 = v22;
        memset(&v23[v24], 0, v22 - v24);
        v21 = v26;
        *(_QWORD *)&v28 = v25;
LABEL_17:
        memcpy((char *)ptr + v21, src, v20);
LABEL_18:
        add_undo_record(127, ptr, v28);
        if ( ptr )
        {
          *(_QWORD *)&v28 = 0;
          qfree(ptr);
        }
        goto LABEL_5;
      }
      v15 = v28;
      v16 = v28 + v13;
      if ( __CFADD__((_QWORD)v28, v13) )
      {
        if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_11;
        }
        v16 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v17 = (char *)ptr;
      v18 = v28;
      if ( *((_QWORD *)&v28 + 1) < v16 )
      {
        v25 = v16;
        v26 = v28;
        ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
        v17 = (char *)ptr;
        v15 = v26;
        v18 = v28;
        v16 = v25;
      }
      v26 = v15;
      v25 = v16;
      memset(&v17[v18], 0, v16 - v18);
      v15 = v26;
      *(_QWORD *)&v28 = v25;
LABEL_11:
      memcpy((char *)ptr + v15, src, v14);
      goto LABEL_12;
    }
  }
  return v9;
}
