__int64 __fastcall sub_36F8F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  bool v4; // zf
  const char *v5; // rcx
  size_t v6; // r12
  void *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+8h] [rbp-70h] BYREF
  void *src; // [rsp+10h] [rbp-68h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  void *v15; // [rsp+38h] [rbp-40h]
  __int128 v16; // [rsp+40h] [rbp-38h]
  unsigned __int64 v17; // [rsp+58h] [rbp-20h]

  v2 = a1[5];
  v17 = __readfsqword(0x28u);
  if ( (v2 & 2) != 0 )
    v3 = v2 & 0xFFFFBFF8 | 0x4005;
  else
    v3 = v2 & 0xFFFFBFFA | 0x4004;
  v4 = a1[2] == 0;
  src = nullptr;
  v5 = haystack;
  v11 = 0;
  *(_OWORD *)n = 0;
  if ( !v4 )
    v5 = (const char *)a1[1];
  if ( (unsigned __int8)parse_decl(&v11, &src, 0, v5, v3) )
  {
    sub_36E470(a2, &v11);
    v6 = n[0];
    if ( n[0] > 1 )
    {
      v14 = 7;
      v15 = nullptr;
      v16 = 0;
      v8 = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v16 + 1) = v6;
      v15 = v8;
      memcpy(v8, src, v6);
      *(_QWORD *)&v16 = v6;
      set_idcv_attr(a2, "name", &v14, 0, v9, v10);
      free_idcv(&v14);
    }
  }
  clear_tinfo_t(&v11);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 0;
}
