__int64 __fastcall sub_4B19C0(const char *src, unsigned __int8 a2)
{
  unsigned int v2; // r13d
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // r14
  int *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 **v16; // r12
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  _BYTE *v19; // [rsp+0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v19 = nullptr;
  v20 = 0;
  if ( src )
  {
    v4 = strlen(src);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (_BYTE *)qvector_reserve(&v19, 0, v4 + 1, 1);
    *(_QWORD *)&v20 = v5;
    v19 = v7;
    memmove(v7, src, v6);
    v19[v6] = 0;
    v8 = v19;
    v9 = (int *)sub_4B1590((__int64)&unk_8D1CA0, (__int64)&v19);
    if ( v8 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v8, (const char *)&v19);
    }
  }
  else
  {
    v9 = (int *)sub_4B1590((__int64)&unk_8D1CA0, (__int64)&v19);
  }
  LOBYTE(v2) = v9 != &dword_8D1CA8;
  if ( v9 != &dword_8D1CA8 )
  {
    sub_4B03E0((__int64 **)v9 + 7, (const char *)a2);
    v10 = *((_QWORD *)v9 + 9);
    if ( !v10 || !*(_QWORD *)(v10 + 8) )
    {
      v11 = *((_QWORD *)v9 + 8);
      if ( !v11 || !*(_QWORD *)(v11 + 8) )
      {
        v14 = *((_QWORD *)v9 + 7);
        if ( !v14 || !*(_QWORD *)(v14 + 8) )
        {
          v15 = std::_Rb_tree_rebalance_for_erase(v9, &dword_8D1CA8);
          v16 = (__int64 **)(v15 + 56);
          v17 = (_QWORD *)v15;
          sub_4B03E0((__int64 **)(v15 + 56), (_BYTE *)&dword_0 + 1);
          sub_4B03E0(v16, nullptr);
          v18 = v17[4];
          if ( v18 )
          {
            v17[5] = 0;
            qfree(v18, nullptr);
          }
          operator delete(v17, 0x50u);
          --qword_8D1CC8;
        }
      }
    }
    v12 = sub_534430(src);
    if ( v12 )
      sub_5378C0(v12);
  }
  return v2;
}
