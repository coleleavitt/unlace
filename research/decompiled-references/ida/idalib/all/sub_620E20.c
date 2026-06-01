__int64 __fastcall sub_620E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  void **p_ptr; // rax
  char *v8; // rsi
  char *v9; // rcx
  char *i; // rax
  char v11; // dl
  unsigned int v12; // ebx
  size_t v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  char *v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // r14
  char v21; // dl
  __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  __int64 v24; // r12
  char *v25; // rsi
  __int64 v26; // rax
  size_t v27; // rdx
  void *ptr; // [rsp+0h] [rbp-468h] BYREF
  __int128 v29; // [rsp+8h] [rbp-460h]
  _BYTE v30[8]; // [rsp+18h] [rbp-450h]
  char s[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v32; // [rsp+428h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 80);
  v32 = __readfsqword(0x28u);
  ptr = nullptr;
  v29 = 0;
  if ( v6 )
  {
LABEL_2:
    p_ptr = *(void ***)(v6 + 24);
    goto LABEL_3;
  }
  while ( 1 )
  {
    ++*(_DWORD *)(a1 + 72);
    if ( !qlgets(s, 1024, *(_QWORD *)(a1 + 56)) )
      break;
    v14 = strlen(s);
    v15 = v14;
    if ( v14 )
    {
      v16 = v29;
      v17 = v29 + v14;
      if ( !__CFADD__((_QWORD)v29, v14) )
        goto LABEL_18;
      if ( (unsigned __int64)v29 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v17 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
        v18 = (char *)ptr;
        v19 = v29;
        if ( *((_QWORD *)&v29 + 1) < v17 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
          v18 = (char *)ptr;
          v19 = v29;
        }
        memset(&v18[v19], 0, v17 - v19);
        *(_QWORD *)&v29 = v17;
        goto LABEL_21;
      }
      if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
      v20 = (char *)ptr + v16;
      if ( v15 >= 8 )
      {
        *v20 = *(_QWORD *)s;
        *(_QWORD *)((char *)v20 + v15 - 8) = *(_QWORD *)&v30[v15];
        qmemcpy(
          (void *)((unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)(s - ((char *)v20 - ((unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
          8LL * ((v15 + (_DWORD)v20 - (((_DWORD)v20 + 8) & 0xFFFFFFF8)) >> 3));
      }
      else if ( (v15 & 4) != 0 )
      {
        *(_DWORD *)v20 = *(_DWORD *)s;
        *(_DWORD *)((char *)v20 + v15 - 4) = *(_DWORD *)&v30[v15 + 4];
      }
      else if ( v15 )
      {
        *(_BYTE *)v20 = s[0];
        if ( (v15 & 2) != 0 )
          *(_WORD *)((char *)v20 + v15 - 2) = *(_WORD *)&v30[v15 + 6];
      }
    }
  }
  v22 = v29;
  v23 = v29 + 1;
  v24 = v29 + 1;
  if ( (_QWORD)v29 == -1 )
  {
    v24 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v25 = (char *)ptr;
    v26 = v29;
    v27 = 1;
    if ( *((_QWORD *)&v29 + 1) < v23 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v29 + 1, 1);
      v25 = (char *)ptr;
      v26 = v29;
      v27 = v23 - v29;
    }
    memset(&v25[v26], 0, v27);
  }
  *(_QWORD *)&v29 = v24;
  *((_BYTE *)ptr + v22) = 0;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
    goto LABEL_2;
  p_ptr = &ptr;
LABEL_3:
  v8 = (char *)*p_ptr;
  v9 = (char *)p_ptr[1] + (_QWORD)*p_ptr;
  for ( i = v8; i < v9; ++i )
  {
    while ( 1 )
    {
      v11 = *i;
      if ( *i != 9 )
        break;
      *i = 32;
LABEL_10:
      if ( ++i >= v9 )
        goto LABEL_11;
    }
    if ( v11 == 13 )
    {
      *i = 10;
    }
    else if ( v11 == 92 && i < v9 - 1 )
    {
      v21 = i[1];
      if ( v21 == 10 || v21 == 13 )
      {
        *i = 32;
        if ( v21 == 13 )
        {
          i[1] = 32;
          i += 2;
        }
        else
        {
          ++i;
        }
        *i = 32;
        goto LABEL_10;
      }
    }
  }
LABEL_11:
  v12 = sub_61FB40((_QWORD *)a1, v8, v9, (__int64)v9, a5, a6);
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
  }
  return v12;
}
