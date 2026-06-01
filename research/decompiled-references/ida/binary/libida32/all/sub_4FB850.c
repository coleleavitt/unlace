__int64 __fastcall sub_4FB850(__int64 a1, unsigned int a2, const char *a3)
{
  const char *v5; // rdi
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v13; // rax
  size_t v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // r10
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  size_t v20; // r15
  size_t v21; // r8
  unsigned __int64 v22; // r9
  char *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v27; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v29; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v31[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = *(const char **)(a1 + 1568);
  v31[0] = __readfsqword(0x28u);
  v7 = sub_4FB240(v5, a3);
  v9 = v7;
  if ( v7 > 0 )
  {
    v10 = *(_QWORD *)(a1 + 1568);
    v11 = (unsigned int)v7;
    if ( (unsigned __int64)(unsigned int)v7 < *(_QWORD *)(v10 + 144) )
    {
      if ( !(unsigned __int8)must_journal(v5, a3, v8) )
      {
LABEL_5:
        sub_4F5950((__int64 *)(*(_QWORD *)(v10 + 136) + 56 * v11 + 24), a2);
        return v9;
      }
      v29 = 0;
      ptr = nullptr;
      v13 = pack_dd(src, v31, v9) - (_QWORD)src;
      v14 = v13;
      if ( !v13 )
      {
LABEL_12:
        v19 = pack_dd(src, v31, a2) - (_QWORD)src;
        v20 = v19;
        if ( !v19 )
          goto LABEL_18;
        v21 = v29;
        v22 = v29 + v19;
        if ( __CFADD__((_QWORD)v29, v19) )
        {
          if ( (unsigned __int64)v29 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_17;
          }
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v23 = (char *)ptr;
        v24 = v29;
        if ( *((_QWORD *)&v29 + 1) < v22 )
        {
          n = v29;
          v25 = v22;
          ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
          v23 = (char *)ptr;
          v21 = n;
          v24 = v29;
          v22 = v25;
        }
        n = v21;
        v25 = v22;
        memset(&v23[v24], 0, v22 - v24);
        v21 = n;
        *(_QWORD *)&v29 = v25;
LABEL_17:
        memcpy((char *)ptr + v21, src, v20);
LABEL_18:
        add_undo_record(127, ptr, v29);
        if ( ptr )
        {
          *(_QWORD *)&v29 = 0;
          qfree(ptr);
        }
        goto LABEL_5;
      }
      v15 = v29;
      v16 = v29 + v13;
      if ( __CFADD__((_QWORD)v29, v13) )
      {
        if ( (unsigned __int64)v29 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_11;
        }
        v16 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v17 = (char *)ptr;
      v18 = v29;
      if ( *((_QWORD *)&v29 + 1) < v16 )
      {
        v27 = v29;
        n = v14;
        v25 = v16;
        ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
        v17 = (char *)ptr;
        v15 = v27;
        v18 = v29;
        v14 = n;
        v16 = v25;
      }
      v27 = v15;
      n = v14;
      v25 = v16;
      memset(&v17[v18], 0, v16 - v18);
      v14 = n;
      v15 = v27;
      *(_QWORD *)&v29 = v25;
LABEL_11:
      memcpy((char *)ptr + v15, src, v14);
      goto LABEL_12;
    }
  }
  return v9;
}

