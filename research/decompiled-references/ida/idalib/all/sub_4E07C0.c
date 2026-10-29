unsigned __int64 __fastcall sub_4E07C0(__int64 a1)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 flags; // rax
  char *v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  _QWORD *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 672) )
  {
    *(_BYTE *)(a1 + 640) = 0;
    sub_43CDF0(a1 + 360);
    v3 = *(_QWORD **)(a1 + 664);
    ptr = nullptr;
    v14 = 0;
    if ( v3 )
    {
      do
      {
        v4 = v3[1];
        *(_QWORD *)&v14 = 0;
        v12 = ea2node(v4);
        sub_7BF130(&v12, qword_2CCB598, &ptr);
        flags = get_flags_ex(v4, 4);
        v6 = (char *)haystack;
        v7 = (flags >> 28) & 1;
        if ( (~BYTE1(flags) & 6) != 0 )
          LODWORD(v7) = 0;
        v8 = v14;
        if ( (_QWORD)v14 )
        {
          v6 = (char *)ptr;
          v8 = v14 - 1;
        }
        sub_4E03E0(a1, v4, v8, v6, v7);
        v3 = (_QWORD *)*v3;
      }
      while ( v3 );
      v9 = *(_QWORD **)(a1 + 664);
      while ( v9 )
      {
        v10 = v9;
        v9 = (_QWORD *)*v9;
        operator delete(v10, 0x10u);
      }
    }
    memset(*(void **)(a1 + 648), 0, 8LL * *(_QWORD *)(a1 + 656));
    v11 = ptr;
    *(_QWORD *)(a1 + 672) = 0;
    *(_QWORD *)(a1 + 664) = 0;
    if ( v11 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v11);
    }
  }
  return v15 - __readfsqword(0x28u);
}
