unsigned __int64 __fastcall sub_9B4A0(void **a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // rbx
  const char *i; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  void *v10; // rsi
  size_t v11; // rax
  __int64 v12; // r13
  size_t v13; // r8
  size_t v14; // r9
  void *v15; // rsi
  unsigned __int64 v16; // rdx
  const char *v17; // rbp
  void *v18; // rdx
  void *v19; // rsi
  void *v20; // rax
  void *v21; // rax
  void *v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-80h]
  unsigned __int64 v24; // [rsp+0h] [rbp-80h]
  size_t v25; // [rsp+8h] [rbp-78h]
  size_t v26; // [rsp+10h] [rbp-70h]
  const char *v27; // [rsp+20h] [rbp-60h] BYREF
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v29; // [rsp+30h] [rbp-50h]
  unsigned __int64 v30; // [rsp+40h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v29 = 0;
  ptr = nullptr;
  v2 = strlen(a2);
  v3 = v2 + 1;
  v4 = v2;
  ptr = sub_96080((__int64)&ptr, nullptr, v2 + 1, 1u);
  *(_QWORD *)&v29 = v3;
  memmove(ptr, a2, v4);
  *((_BYTE *)ptr + v4) = 0;
  if ( (unsigned __int64)v29 > 1 )
  {
    for ( i = sub_97600((char *)ptr, "\\", &v27); ; i = sub_97600(nullptr, "\\", &v27) )
    {
      v17 = i;
      if ( !i )
        break;
      v18 = a1[1];
      v19 = *a1;
      if ( a1[2] < (char *)v18 + 1 )
      {
        v20 = sub_96080((__int64)a1, v19, (unsigned __int64)v18 + 1, 0x18u);
        *a1 = v20;
        v18 = a1[1];
        v19 = v20;
      }
      v7 = (__int64)v19 + 24 * (_QWORD)v18;
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      a1[1] = (char *)a1[1] + 1;
      if ( *v17 != 1 )
      {
        v8 = *(_QWORD *)(v7 + 8);
        v9 = 2;
        if ( v8 )
          v9 = v8-- + 1;
        v10 = *(void **)v7;
        if ( *(_QWORD *)(v7 + 16) < v9 )
        {
          v24 = v9;
          v22 = sub_96080(v7, v10, v9, 1u);
          *(_QWORD *)v7 = v22;
          v9 = v24;
          v10 = v22;
        }
        *(_QWORD *)(v7 + 8) = v9;
        *((_BYTE *)v10 + v8) = 1;
        *(_BYTE *)(*(_QWORD *)v7 + v8 + 1) = 0;
      }
      v11 = strlen(v17);
      v12 = *(_QWORD *)(v7 + 8);
      v13 = v11;
      v14 = v11;
      if ( v12 )
      {
        --v12;
        v14 = v11 + v12;
      }
      v15 = *(void **)v7;
      v16 = v14 + 1;
      if ( *(_QWORD *)(v7 + 16) < v14 + 1 )
      {
        v26 = v11;
        v25 = v14;
        v23 = v14 + 1;
        v21 = sub_96080(v7, v15, v16, 1u);
        v13 = v26;
        v14 = v25;
        *(_QWORD *)v7 = v21;
        v15 = v21;
        v16 = v23;
      }
      *(_QWORD *)(v7 + 8) = v16;
      *((_BYTE *)v15 + v14) = 0;
      memmove((void *)(v12 + *(_QWORD *)v7), v17, v13);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    j__free(ptr);
  }
  return v30 - __readfsqword(0x28u);
}

