unsigned __int64 __fastcall sub_231B10(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  bool v6; // cc
  __int64 v7; // rsi
  const char *v8; // rsi
  __int64 v9; // rbp
  char v10; // al
  void *v11; // rdi
  const char *v13; // r12
  size_t v14; // rax
  size_t v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rdi
  size_t v19; // r13
  __int64 v20; // [rsp+0h] [rbp-58h] BYREF
  void *dest; // [rsp+8h] [rbp-50h] BYREF
  __int128 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+20h] [rbp-38h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  *(_QWORD *)a2 = 0;
  v3 = getinf(27);
  *(_QWORD *)(a2 + 8) = v3;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  *(_QWORD *)(a2 + 64) = 0;
  if ( v5 < v3 )
    v3 = v5 - 1;
  v6 = *(_QWORD *)(a2 + 32) <= 6u;
  *(_QWORD *)(a2 + 8) = v3;
  if ( v6 )
  {
    v17 = qvector_reserve(a2 + 16, v4, 7, 1);
    *(_QWORD *)(a2 + 16) = v17;
    v4 = v17;
  }
  *(_QWORD *)(a2 + 24) = 7;
  *(_DWORD *)v4 = 1330464077;
  *(_WORD *)(v4 + 4) = 22866;
  *(_BYTE *)(*(_QWORD *)(a2 + 16) + 6LL) = 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(a2 + 56) <= 3u )
  {
    v16 = qvector_reserve(a2 + 40, v7, 4, 1);
    *(_QWORD *)(a2 + 40) = v16;
    v7 = v16;
  }
  *(_QWORD *)(a2 + 48) = 4;
  *(_WORD *)v7 = 20053;
  *(_BYTE *)(v7 + 2) = 75;
  v8 = &byte_6;
  *(_BYTE *)(*(_QWORD *)(a2 + 40) + 3LL) = 0;
  *(_BYTE *)(a2 + 73) = 5;
  v20 = 0x800000028LL;
  dest = nullptr;
  v9 = dbg;
  v22 = 0;
  v23 = -1;
  if ( (unsigned int)sub_20CEA0(dbg, 6, &v20) )
  {
    v10 = 0;
    if ( HIDWORD(v20) == 2 )
      goto LABEL_11;
    if ( HIDWORD(v20) == 4 )
    {
      v10 = 1;
      goto LABEL_11;
    }
  }
  else
  {
    v13 = *(const char **)(v9 + 8);
    if ( v13 )
    {
      v14 = strlen(*(const char **)(v9 + 8));
      v15 = v14;
      if ( v14 )
      {
        v18 = dest;
        v19 = v14 + 1;
        if ( *((_QWORD *)&v22 + 1) < v14 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v19, 1);
          v18 = dest;
        }
        v8 = v13;
        *(_QWORD *)&v22 = v19;
        memmove(v18, v13, v15);
        *((_BYTE *)dest + v15) = 0;
      }
    }
    HIDWORD(v20) = -1;
  }
  v10 = 2;
LABEL_11:
  v11 = dest;
  *(_BYTE *)(a2 + 72) = v10;
  if ( v11 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v11, v8);
  }
  return v24 - __readfsqword(0x28u);
}
