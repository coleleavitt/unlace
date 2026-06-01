void __fastcall sub_1C55B0(int a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  const char *v5; // rsi
  size_t v6; // rbx
  __int64 v7; // rbx
  void *v8; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  void *v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  unsigned __int64 v16; // [rsp+58h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_QWORD **)(a4 + 8);
      src = nullptr;
      *(_OWORD *)n = 0;
      v5 = (_BYTE *)(&stru_4948 + 13);
      src = (void *)qvector_reserve(&src, 0, 3, 1);
      n[0] = 3;
      strcpy((char *)src, "UI");
      v11 = v4;
      v6 = n[0];
      v12 = nullptr;
      v13 = 0;
      if ( n[0] )
      {
        v8 = (void *)qalloc_or_throw(n[0]);
        v5 = (const char *)src;
        v12 = v8;
        *((_QWORD *)&v13 + 1) = v6;
        memcpy(v8, src, v6);
        *(_QWORD *)&v13 = v6;
      }
      v15 = 259;
      v14 = 0xFFFFFFFEFFFFFFFFLL;
      if ( src )
      {
        n[0] = 0;
        qfree(src, v5);
      }
      v7 = operator new(0x98u);
      sub_300890(v7, &v11);
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12, (const char *)&v11);
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
