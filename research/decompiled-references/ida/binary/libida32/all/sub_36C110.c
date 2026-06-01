__int64 __fastcall sub_36C110(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r8
  bool v4; // zf
  const char *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // r12
  void *v12; // rax
  __int64 v13; // [rsp+8h] [rbp-70h] BYREF
  void *src; // [rsp+10h] [rbp-68h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  void *v17; // [rsp+38h] [rbp-40h]
  __int128 v18; // [rsp+40h] [rbp-38h]
  unsigned __int64 v19; // [rsp+58h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 40);
  v19 = __readfsqword(0x28u);
  if ( (v2 & 2) != 0 )
    v3 = v2 & 0xFFFFBFF8 | 0x4005;
  else
    v3 = v2 & 0xFFFFBFFA | 0x4004;
  v4 = *(_QWORD *)(a1 + 16) == 0;
  src = nullptr;
  v5 = haystack;
  v13 = 0;
  *(_OWORD *)n = 0;
  if ( !v4 )
    v5 = *(const char **)(a1 + 8);
  if ( (unsigned __int8)parse_decl(&v13, &src, 0, v5, v3) )
  {
    sub_36ACE0(a2, &v13);
    v10 = n[0];
    if ( n[0] > 1 )
    {
      v16 = 7;
      v17 = nullptr;
      v18 = 0;
      v12 = (void *)qalloc_or_throw(n[0], &v13, v6, v7, v8, v9);
      *((_QWORD *)&v18 + 1) = v10;
      v17 = v12;
      memcpy(v12, src, v10);
      *(_QWORD *)&v18 = v10;
      set_idcv_attr();
      free_idcv(&v16);
    }
  }
  clear_tinfo_t(&v13);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 0;
}

