unsigned __int64 __fastcall sub_6B7DC0(
        __int64 *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char **v14; // rdx
  bool v15; // zf
  const char *v16; // rax
  int v17; // eax
  char *v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rbx
  char *v21; // rax
  void *v22; // rdi
  __int64 *v24; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+8h] [rbp-50h]
  __int128 v26; // [rsp+10h] [rbp-48h]
  const char *v27; // [rsp+20h] [rbp-38h]
  __int16 v28; // [rsp+28h] [rbp-30h]
  unsigned __int64 v29; // [rsp+38h] [rbp-20h]

  v14 = (const char **)*a1;
  v29 = __readfsqword(0x28u);
  v26 = 0;
  ptr = nullptr;
  v15 = v14[1] == nullptr;
  v28 = 257;
  v16 = haystack;
  v24 = a1;
  if ( !v15 )
    v16 = *v14;
  v27 = v16;
  v17 = *(_DWORD *)(a2 + 144);
  if ( (v17 & 1) != 0 )
  {
    sub_6B40D0(&v24, a2, (__int64)v14, a12, a13, a14);
    v17 = *(_DWORD *)(a2 + 144);
  }
  if ( (v17 & 4) != 0 )
  {
    sub_6B77A0(&v24);
    v17 = *(_DWORD *)(a2 + 144);
  }
  if ( (v17 & 9) != 0 )
  {
    sub_6B54B0((__int64 *)&v24, 0.0, a4, a5, a6, a7, a8, a9, a10);
    v17 = *(_DWORD *)(a2 + 144);
  }
  if ( (v17 & 0x10) != 0 )
  {
    sub_6B61E0(&v24);
    v17 = *(_DWORD *)(a2 + 144);
  }
  if ( (v17 & 0x20) != 0 )
    sub_6B6250(&v24);
  v18 = (char *)ptr;
  if ( ptr )
  {
    v19 = v26;
    if ( (_QWORD)v26 )
    {
      v20 = 0;
      do
      {
        v21 = &v18[24 * v20];
        v22 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v22);
          v18 = (char *)ptr;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v18);
  }
  return v29 - __readfsqword(0x28u);
}
