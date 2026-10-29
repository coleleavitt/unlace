unsigned __int64 __fastcall sub_18CF0(__int64 a1)
{
  _BYTE *v1; // rsi
  unsigned __int64 v2; // r12
  size_t v3; // rbp
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  size_t v7; // rax
  int v8; // edx
  __int64 v9; // rbp
  __int64 i; // r13
  unsigned __int64 v11; // rbx
  size_t v12; // r14
  __int64 v13; // r12
  size_t v14; // r15
  _BYTE *v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 v17; // r12
  _BYTE *v18; // rsi
  const char *v19; // rsi
  void *v21; // rax
  const void *v22; // rsi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v1 = nullptr;
  v2 = 2;
  v3 = *(_QWORD *)(a1 + 8);
  v25 = __readfsqword(0x28u);
  ptr = nullptr;
  v24 = 0;
  if ( !v3
    || (v2 = v3 + 1,
        v21 = (void *)sub_96030(v3),
        v22 = *(const void **)a1,
        *((_QWORD *)&v24 + 1) = v3,
        ptr = v21,
        memcpy(v21, v22, v3),
        v7 = v3 - 1,
        *(_QWORD *)&v24 = v3,
        v1 = ptr,
        --v3,
        *((_QWORD *)&v24 + 1) < v2) )
  {
    ptr = (void *)sub_96080(&ptr, v1, v2, 1);
    v1 = ptr;
    v7 = v3;
  }
  *(_QWORD *)&v24 = v2;
  v1[v7] = 58;
  v8 = (int)ptr;
  *((_BYTE *)ptr + v7 + 1) = 0;
  v9 = *(_QWORD *)(a1 + 24);
  for ( i = v9 + 24LL * *(_QWORD *)(a1 + 32); i != v9; v9 += 24 )
  {
    v16 = v24;
    v17 = 2;
    if ( (_QWORD)v24 )
    {
      v17 = v24 + 1;
      v16 = v24 - 1;
    }
    v18 = ptr;
    if ( *((_QWORD *)&v24 + 1) < v17 )
    {
      ptr = (void *)sub_96080(&ptr, ptr, v17, 1);
      v18 = ptr;
    }
    *(_QWORD *)&v24 = v17;
    v18[v16] = 32;
    *((_BYTE *)ptr + v16 + 1) = 0;
    v11 = *(_QWORD *)(v9 + 8);
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v11 != 1 )
      {
        v13 = v24;
        v14 = v11 - 1;
        if ( (_QWORD)v24 )
        {
          v13 = v24 - 1;
          v14 = v12 + v24 - 1;
          v11 += v24 - 1;
        }
        v15 = ptr;
        if ( *((_QWORD *)&v24 + 1) < v11 )
        {
          ptr = (void *)sub_96080(&ptr, ptr, v11, 1);
          v15 = ptr;
        }
        *(_QWORD *)&v24 = v11;
        v15[v14] = 0;
        memcpy((char *)ptr + v13, *(const void **)v9, v12);
      }
    }
  }
  v19 = haystack;
  if ( (_QWORD)v24 )
    LODWORD(v19) = (_DWORD)ptr;
  sub_708D0((unsigned int)"%s\n", (_DWORD)v19, v8, v4, v5, v6);
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    j__free(ptr);
  }
  return v25 - __readfsqword(0x28u);
}

