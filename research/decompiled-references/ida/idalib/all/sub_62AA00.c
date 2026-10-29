unsigned __int64 __fastcall sub_62AA00(const char *src)
{
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbx
  _BYTE *v4; // rax
  unsigned __int64 v5; // rbp
  size_t v6; // r14
  const char *v7; // rsi
  __int64 v9; // r13
  size_t v10; // r15
  _BYTE *v11; // rsi
  _BYTE v12[8]; // [rsp+8h] [rbp-80h] BYREF
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int128 v14; // [rsp+18h] [rbp-70h]
  void *srca; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-50h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  netnode_check(v12, src, 0, 0);
  netnode_kill((int)v12);
  ptr = nullptr;
  v14 = 0;
  v1 = strlen(src);
  v2 = v1 + 1;
  v3 = v1;
  ptr = (void *)qvector_reserve(&ptr, 0, v1 + 1, 1);
  *(_QWORD *)&v14 = v2;
  memmove(ptr, src, v3);
  *((_BYTE *)ptr + v3) = 0;
  v16 = 0;
  srca = nullptr;
  v4 = (_BYTE *)qvector_reserve(&srca, 0, 6, 1);
  srca = v4;
  *(_QWORD *)&v16 = 6;
  *(_DWORD *)v4 = 2019913262;
  v4[4] = 116;
  *((_BYTE *)srca + 5) = 0;
  v5 = v16;
  if ( (_QWORD)v16 )
  {
    v6 = v16 - 1;
    if ( (_QWORD)v16 != 1 )
    {
      v9 = v14;
      v10 = v16 - 1;
      if ( (_QWORD)v14 )
      {
        v9 = v14 - 1;
        v10 = v6 + v14 - 1;
        v5 = v16 + v14 - 1;
      }
      v11 = ptr;
      if ( *((_QWORD *)&v14 + 1) < v5 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v5, 1);
        v11 = ptr;
      }
      *(_QWORD *)&v14 = v5;
      v11[v10] = 0;
      memcpy((char *)ptr + v9, srca, v6);
    }
  }
  if ( srca )
  {
    *(_QWORD *)&v16 = 0;
    qfree(srca);
  }
  v7 = haystack;
  if ( (_QWORD)v14 )
    v7 = (const char *)ptr;
  netnode_check(&srca, v7, 0, 0);
  netnode_kill((int)&srca);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  return v17 - __readfsqword(0x28u);
}
