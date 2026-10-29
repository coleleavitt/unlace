unsigned __int64 __fastcall sub_3ABC60(__int64 *a1, const void *a2, size_t a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  void *v14; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !strncmp((const char *)a2, "$ debugger plugin ", 0x12u) )
  {
    v5 = *a1;
    ptr = nullptr;
    v16 = 0;
    v6 = *(_QWORD **)(v5 + 1384);
    if ( a3 )
    {
      v14 = nullptr;
      if ( a3 != -1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, a3 + 1, 1);
        v14 = ptr;
      }
      *(_QWORD *)&v16 = a3 + 1;
      memmove(v14, a2, a3);
      *((_BYTE *)ptr + a3) = 0;
    }
    v7 = v6[36];
    v8 = v6[35];
    if ( v6[37] < (unsigned __int64)(v7 + 1) )
    {
      v13 = qvector_reserve(v6 + 35, v8, v7 + 1, 24);
      v6[35] = v13;
      v7 = v6[36];
      v8 = v13;
    }
    v9 = v8 + 24 * v7;
    *(_QWORD *)v9 = 0;
    v10 = ptr;
    *(_OWORD *)(v9 + 8) = 0;
    ++v6[36];
    v11 = *(void **)v9;
    *(_QWORD *)v9 = v10;
    v12 = *(_QWORD *)(v9 + 16);
    ptr = v11;
    *(_OWORD *)(v9 + 8) = v16;
    *((_QWORD *)&v16 + 1) = v12;
    if ( v11 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v11);
    }
  }
  return v17 - __readfsqword(0x28u);
}

