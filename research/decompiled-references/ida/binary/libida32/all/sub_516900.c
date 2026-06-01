__int64 __fastcall sub_516900(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r13
  _QWORD *v6; // r14
  char *v7; // r13
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r15
  void *v17; // rax
  size_t v18; // rbx
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // [rsp+0h] [rbp-80h]
  char *s; // [rsp+8h] [rbp-78h] BYREF
  __int128 v24; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h]
  unsigned __int64 v27; // [rsp+40h] [rbp-40h]

  v3 = *a1;
  v27 = __readfsqword(0x28u);
  v24 = 0;
  v5 = *(_QWORD **)(v3 + 1616);
  s = nullptr;
  v6 = *(_QWORD **)(*v5 + 1480LL);
  if ( (unsigned __int8)sub_6994A0(v6, &s, a3) )
  {
    if ( !(_QWORD)v24 )
    {
      v7 = s;
      v8 = -1;
      goto LABEL_4;
    }
    v10 = v24 - 1;
  }
  else
  {
    LODWORD(ptr) = sub_3B90A0(v6, a3);
    v10 = sub_79BD30(&ptr, *v5, &s);
  }
  v7 = s;
  if ( v10 > 0 && (v11 = v24) != 0 && (v12 = strchr(s, 46)) != nullptr && v12 - v7 != -1 )
  {
    v13 = v12 - v7 + 1;
    if ( !a2 )
      goto LABEL_22;
    v14 = v11 - 1;
    ptr = nullptr;
    v15 = v14;
    v26 = 0;
    if ( v13 <= v14 )
      v15 = v12 - v7 + 1;
    v16 = 0;
    v17 = nullptr;
    v18 = v14 - v15;
    if ( v18 )
    {
      v21 = nullptr;
      if ( v18 != -1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, v18 + 1, 1);
        v21 = ptr;
      }
      *(_QWORD *)&v26 = v18 + 1;
      memmove(v21, &v7[v15], v18);
      *((_BYTE *)ptr + v18) = 0;
      v17 = ptr;
      v16 = *((_QWORD *)&v26 + 1);
      v18 = v26;
    }
    v19 = *(void **)a2;
    ptr = nullptr;
    v26 = 0;
    if ( v19 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v22 = v17;
      qfree(v19);
      v20 = ptr;
      *(_QWORD *)(a2 + 8) = v18;
      *(_QWORD *)(a2 + 16) = v16;
      *(_QWORD *)a2 = v22;
      if ( v20 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v20);
      }
    }
    else
    {
      *(_QWORD *)a2 = v17;
      *(_QWORD *)(a2 + 8) = v18;
      *(_QWORD *)(a2 + 16) = v16;
    }
    v11 = v24;
    v7 = s;
    if ( (_QWORD)v24 )
LABEL_22:
      --v11;
    v8 = v11 - v13;
  }
  else
  {
    v8 = -1;
  }
LABEL_4:
  if ( v7 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v7);
  }
  return v8;
}

