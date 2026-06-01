__int64 __fastcall sub_643630(__int64 a1, __int64 a2, const char *a3, _BYTE *a4)
{
  int v4; // r12d
  void *v6; // r14
  size_t v7; // rax
  size_t v8; // r15
  __int64 v9; // r12
  size_t v10; // rax
  size_t v11; // r13
  size_t v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // ebp
  __int64 v16; // r12
  unsigned __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // r12
  void *dest; // [rsp+8h] [rbp-78h] BYREF
  __int128 v23; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v25; // [rsp+30h] [rbp-50h]
  unsigned __int64 v26; // [rsp+40h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 12);
  v26 = __readfsqword(0x28u);
  v23 = 0;
  dest = nullptr;
  if ( a4 && (v4 & 1) != 0 && *a4 )
  {
    ptr = nullptr;
    v25 = 0;
    qstr2user(&ptr, a4, 0xFFFFFFFFLL);
    sub_3573A0((char **)&dest);
    a3 = (const char *)dest;
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      qfree(ptr);
    }
    v4 = *(_DWORD *)(a1 + 12);
  }
  if ( (v4 & 0x18) != 0 )
  {
    v6 = dest;
    if ( a3 != dest )
    {
      if ( a3 && (v7 = strlen(a3), (v8 = v7) != 0) )
      {
        v21 = v7 + 1;
        if ( *((_QWORD *)&v23 + 1) < v7 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, v6, v7 + 1, 1);
          v6 = dest;
        }
        *(_QWORD *)&v23 = v21;
        memmove(v6, a3, v8);
        *((_BYTE *)dest + v8) = 0;
        v4 = *(_DWORD *)(a1 + 12);
      }
      else
      {
        *(_QWORD *)&v23 = 0;
      }
    }
    if ( (v4 & 8) != 0 )
      sub_640BA0((__int64 *)&dest);
    else
      sub_640AE0((__int64 *)&dest);
    a3 = (const char *)dest;
  }
  if ( !strncmp(a3, &byte_22B2824, 5u) )
  {
    v16 = *(_QWORD *)(a1 + 24);
    v17 = 2;
    if ( v16 )
    {
      v17 = v16 + 1;
      v18 = *(_QWORD *)(a1 + 16);
      --v16;
      if ( *(_QWORD *)(a1 + 32) >= v17 )
        goto LABEL_30;
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(a1 + 32) >= 2u )
      {
LABEL_30:
        *(_QWORD *)(a1 + 24) = v17;
        *(_BYTE *)(v18 + v16) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + v16 + 1) = 0;
        goto LABEL_13;
      }
    }
    v20 = qvector_reserve(a1 + 16, v18, v17, 1);
    *(_QWORD *)(a1 + 16) = v20;
    v18 = v20;
    goto LABEL_30;
  }
LABEL_13:
  if ( (*(_BYTE *)(a1 + 12) & 2) == 0 )
  {
    tag_remove();
    a3 = haystack;
    if ( (_QWORD)v23 )
      a3 = (const char *)dest;
  }
  if ( a3 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = strlen(a3);
    v11 = v10;
    v12 = v10;
    if ( v9 )
    {
      --v9;
      v12 = v10 + v9;
    }
    v13 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) < v12 + 1 )
    {
      v19 = qvector_reserve(a1 + 16, v13, v12 + 1, 1);
      *(_QWORD *)(a1 + 16) = v19;
      v13 = v19;
    }
    *(_QWORD *)(a1 + 24) = v12 + 1;
    *(_BYTE *)(v13 + v12) = 0;
    memmove((void *)(v9 + *(_QWORD *)(a1 + 16)), a3, v11);
  }
  v14 = 1;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) == 0) + *(_QWORD *)(a1 + 24) - 1 >= *(_QWORD *)a1 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    v14 = 0;
  }
  if ( dest )
  {
    *(_QWORD *)&v23 = 0;
    qfree(dest);
  }
  return v14;
}

