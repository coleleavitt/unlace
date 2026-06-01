__int64 __fastcall sub_64590(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  const char *v4; // r13
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r12
  size_t v8; // r12
  unsigned __int64 v9; // rbp
  size_t v11; // r13
  __int64 v12; // r12
  size_t v13; // r14
  __int64 v14; // rsi
  void *v15; // rax
  __int64 v16; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( *a3 != 47 || a3[1] != 47 )
  {
    if ( !byte_1671A1 )
      sub_96F80(2249);
    BUG();
  }
  v3 = *(_QWORD *)(a2 + 8);
  v4 = a3 + 1;
  if ( v3 >= 2 && *(_BYTE *)(*(_QWORD *)a2 + v3 - 2) == 47 )
    v4 = a3 + 2;
  ptr = nullptr;
  v18 = 0;
  v5 = strlen(v4);
  v6 = v5 + 1;
  v7 = v5;
  ptr = (void *)sub_96080(&ptr, 0, v5 + 1, 1);
  *(_QWORD *)&v18 = v6;
  memmove(ptr, v4, v7);
  *((_BYTE *)ptr + v7) = 0;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    v15 = (void *)sub_96030(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v15;
    *(_QWORD *)(a1 + 16) = v8;
    memcpy(v15, *(const void **)a2, v8);
    v9 = v18;
    *(_QWORD *)(a1 + 8) = v8;
    if ( !v9 )
      goto LABEL_8;
  }
  else
  {
    v9 = v18;
    if ( !(_QWORD)v18 )
      goto LABEL_8;
  }
  v11 = v9 - 1;
  if ( v9 != 1 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = v9 - 1;
    if ( v12 )
    {
      --v12;
      v13 = v11 + v12;
      v9 += v12;
    }
    v14 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < v9 )
    {
      v16 = sub_96080(a1, v14, v9, 1);
      *(_QWORD *)a1 = v16;
      v14 = v16;
    }
    *(_QWORD *)(a1 + 8) = v9;
    *(_BYTE *)(v14 + v13) = 0;
    memcpy((void *)(v12 + *(_QWORD *)a1), ptr, v11);
  }
LABEL_8:
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    j__free(ptr);
  }
  return a1;
}

